class Solution{	
public:		
void reverse(vector<char>& s,int start ,int end ){
    if(start>=end){
        return;
    }
    swap(s[start],s[end]);
    reverse(s,start+1 , end-1);
}
	vector<char> reverseString(vector<char>& s){
        int start=0;
        int end=s.size()-1;
		reverse(s,start,end); // since it is void fuction call and then 
        return s;// return modified string;
	}
};
