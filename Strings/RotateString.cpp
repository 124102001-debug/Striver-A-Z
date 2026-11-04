// 0(n2) solution with dividing left and right
class Solution{	
	public:
		bool rotateString(string& s,string& goal){
            string left;
            string right;
            if(s.size()!=goal.size()){
                return false;
            }else{
                if(s==goal){
                    return true;
                }
                for(int i=0 ; i<s.size() ; i++){
                if(goal[i]==s[0]){
                    if(i==0){
                    left=goal.substr(0,1);
                    right=goal.substr(i+1);
                    }else{
                    left=goal.substr(0,i);
                    right=goal.substr(i);
                    }
                    if(right+left==s){
                        return true;
                    }
                }
            }
            }
            return false;
		}
};









//optimised with o(n)


class Solution{	
	public:
		bool rotateString(string& s,string& goal){
            if(s.size()!=goal.size()){
                return false;
            }else{
                    return (s+s).find(goal)!=string::npos; // return true if goal is substring of concatinted string
            }
		}
};


//== , !==  and other comaprision operators returns  true or fasle 
