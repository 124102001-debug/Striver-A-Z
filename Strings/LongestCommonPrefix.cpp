class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
            string s=str[0];
			for(int i=0 ; i<str.size(); i++){
                if(str[i].size()<s.size()){
                    s=str[i];

                }
            }
            string result="";
            for(int i=0 ; i<s.size() ; i++){
                int j=0;
                while(j<str.size()){
                    if(s[i]!=str[j][i]){
                        return result;
                    }
                    j++;
                }
                result.push_back(s[i]);
            }
            return result;
		}
};
