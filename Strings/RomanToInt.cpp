class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m;
        m={
            {'I', 1},
            {'V', 5},
            {'X' ,10},
            {'L' , 50},
            {'C' ,100},
            {'D' ,500},
            {'M' , 1000}
        };
         int value=m[s[0]];
        for(int i=1; i<s.size() ;i++){
          int c=m[s[i]];
          int p=m[s[i-1]];
          if(p<c){
            value=value+c-2*p;
          }else{
             value=value+c;
          }
        }
        return value;
    }
};

