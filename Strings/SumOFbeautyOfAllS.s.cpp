class Solution {
public:
    int beautySum(string s) {
        int beauty;
        int sum=0;
       for(int i=0 ; i<s.size() ; i++){
        unordered_map<char , int> m;
        for(int j=1 ; i+j<=s.size(); j++){
             int max=0;
             int min=999;
            string sub=s.substr(i,j);
            m[sub[j-1]]++;
             for(auto x: m){
            if(x.second>max){
                max=x.second;
            }
            if(x.second<min){
                min=x.second;
            }
        }
        beauty=max-min;
        sum=sum+beauty;
       }

        }
       
       return sum;
    }
};


// o(n2) complexity optimistaion as where map only tarvese till 26 distinct characters whihc giver (on2*26) = o(n2) generally by brute force o(n3)
