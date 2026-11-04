class Solution{	
public:		
    string largeOddNum(string& s){
        string r;
        for(int i=s.size()-1;i>=0 ; i--){
            int num=s[i]-'0';
            if(num%2!=0){
                r=s.substr(0 , i+1);
                  int j=0;
            while( j<r.size()&& r[j]=='0' ){
                j++;
            }
            r=r.substr(j);
            break;
        }

            }
        return r;
    }
};



string to int cinversion stio(string)
char to int conversion char-'0'
  substring printimg s.sub(initial , final+1)//final +1 excluded so prints till final
  strigs are mutable in cppp 
