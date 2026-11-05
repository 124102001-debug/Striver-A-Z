#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string input) {
        char sign = '+';
        string result;
        int i = 0;
        bool started = false;
        bool seen = false;

        // Skip leading spaces
        while (i < input.size() && isspace(input[i])) {
            i++;
        }

        // Process the optional sign
        if (i < input.size() && (input[i] == '+' || input[i] == '-')) {
            sign = input[i];
            seen = true;
            i++;
        }

        // Read consecutive digits
        while (i < input.size() && isdigit(input[i])) {
            result.push_back(input[i]);
            started = true;
            i++;
        }

        if (result.empty()) {
            return 0;
        }

        // Convert and handle overflow
        long long num = 0;

        for (char c : result) {
            num = num * 10 + (c - '0');

            if (sign == '+' && num > INT_MAX) {
                return INT_MAX;
            }

            if (sign == '-' && num > 2147483648LL) {
                return INT_MIN;
            }
        }

        if (sign == '-') {
            return static_cast<int>(-num);
        }

        return static_cast<int>(num);
    }
};
