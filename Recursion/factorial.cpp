class Solution{	
	public:
		long long int factorial(int n){
            long long  fact;
			if(n==1 || n==0){
                return 1;
            }
            fact=n*factorial(n-1);
            return fact;
		}
};
