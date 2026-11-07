//Brute force O(n3) works for some cases only 



class Solution {
public:
    string longestPalindrome(string s) {
        string sub;
        string final="";
        int m=0;
        for(int i=0 ; i<s.size() ; i++){
            for(int j=1;i+j<=s.size();j++){
                sub=s.substr(i,j);
                int l=0;
                int r=sub.size()-1;
                 bool ispalindrome=true;
                while(l<r){
                    if(sub[l]!=sub[r]){
                        ispalindrome=false;
                        break;
                    }
                    l++;
                    r--;
                }
                if(ispalindrome){
                   if(sub.size()>m){
                    m=sub.size();
                    final=sub;
                   }
                }
            }
        }
        return final;
    }
};




//optimsied solution with traversing from center;

//o(n2)
class Solution {
public:
    string longestPalindrome(string s) {
        int m = 0;
        string final;

        for (int i = 0; i < s.size(); i++) {

            // Odd-length palindrome
            int l = i;
            int r = i;

            while (l >= 0 && r < s.size() && s[l] == s[r]) {
                l--;
                r++;
            }

            int currentStart = l + 1;
            int currentLen = r - l - 1;

            if (currentLen > m) {
                m = currentLen;
                final = s.substr(currentStart, currentLen);
            }

            // Even-length palindrome
            l = i;
            r = i + 1;

            while (l >= 0 && r < s.size() && s[l] == s[r]) {
                l--;
                r++;
            }

            currentStart = l + 1;
            currentLen = r - l - 1;

            if (currentLen > m) {
                m = currentLen;
                final = s.substr(currentStart, currentLen);
            }
        }

        return final;
    }
};
