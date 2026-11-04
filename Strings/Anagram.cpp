class Solution{	
	public:
		bool anagramStrings(string &s,string &t){
            unordered_map<char , int>m;
            if(s.size()!=t.size()){
                return false;
            }else{
                for(int i=0; i<s.size() ; i++){
                m[s[i]]++;
            }
            for(int i=0 ; i<t.size() ; i++){
                m[t[i]]--;
            }
            for(auto x: m){
                if(x.second!=0){
                    return false;
                }
            }
            }
            return true;
		}
};
