//SINGLE MAP APPROACH WHICH IS NOT UNVERSALLY EFFICIENT FOR ALL CASES
class Solution {
public:
    bool isomorphicString(string s, string t) {
        unordered_map<char, char> m;

        if (s.size() != t.size()) {
            return false;
        }

        for (int i = 0; i < s.size(); i++) {

            if (m.find(s[i]) != m.end()) {
                if (m[s[i]] != t[i]) {
                    return false;
                }
            }
            else {
                if (m.find(t[i]) == m.end()) {
                    m[s[i]] = t[i];
                    m[t[i]] = s[i];
                }
                else if (m[t[i]] != s[i]) {
                    return false;
                }
            }
        }

        return true;
    }
};




//DOUBLE MAP APPROACH OPTIMISED SOLUTION 

class Solution {
public:
    bool isomorphicString(string s, string t) {
        unordered_map<char , char>s1;
        unordered_map<char , char>t1;
        if(s.size()!=t.size()){
            return false;
        }else{
            for(int i=0 ; i<s.size() ; i++){
                if(s1.find(s[i])==s1.end() && t1.find(t[i])==t1.end() ){
                    s1[s[i]]=t[i];
                    t1[t[i]]=s[i];
                }else{
                    if(s1[s[i]]!=t[i] || t1[t[i]]!=s[i]){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
