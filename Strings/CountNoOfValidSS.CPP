a substring is valid if it has atmost 1 odd frequency character
// using map and counting odd count


class Solution {
public:
    long long countSubstrings(string s) {
        long long valid=0;
        for(int i=0 ; i<s.size() ; i++){
            unordered_map<char,int> m;
            for(int j=1; i+j<=s.size() ; j++){
                int odd=0;
                string sub=s.substr(i,j);
                m[s[i+j-1]]++;
                for(auto x:m){
                    if(x.second%2!=0){
                        odd++;
                    }
                }
                if(odd==0 || odd==1){
                    valid++;
                }
            }
        }
        return valid;
    }
};
