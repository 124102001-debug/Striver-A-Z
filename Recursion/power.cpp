//o(n) iterative approach

class Solution {
public:
    double myPow(double x, int n) {
      double num=1;
      int n_or=n;
      if(n<0){
        n=n*-1;
      }
      for(int i=0 ; i<n ; i++){
        num=num*x;
      }
      if(n_or<0){
        num=1/num;
      }
      return num;
    }
}; 


//0(logn) recursive approach


class Solution {
public:
    double myPow(double x, int n) {
        int n_or=n;
       if(n==0){
        return 1;
       }
       double half=myPow(x,n/2);
        if(n%2==0){
             return half*half;
        }else{
            return half*half*x;
        }
    }
};

