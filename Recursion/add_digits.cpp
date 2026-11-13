// add agiven number didgits until sum gives singl edigit
class Solution {
public:
    int sumDigits(int num) {
        if (num == 0) {
            return 0;// helper function gives complete sum of digits
        }

        int digit = num % 10;
        return digit + sumDigits(num / 10);
    }

    int addDigits(int num) {
        int result = sumDigits(num); ..// check reuslt is single digit or not

        if (result <= 9) {
            return result;
        }

        return addDigits(result); // if not calling recusrive function agan
    }
};
