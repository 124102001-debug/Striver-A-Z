class Solution{	
	public:
    bool check(int num , int i){
        if(i*i>num){
            return true;
        }else if(num%i==0){
            return false;
        }
        return check(num,i+1);
    }
		bool checkPrime(int num){
			int i=2;
            if(num<=1){
                return false; // negative numbers are not primes 
            }
            return check(num , i);
		}
};
