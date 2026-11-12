// o(n2) Tc and space 
// with extra vector
class Solution{	
	public:
		int arraySum(vector<int>& nums){
			int sum=0;
            int size=nums.size();
            if(size==0){
                return 0;
            }
            vector<int> num=nums(nums.begin() , nums.begin()+size-1);
            sum=nums[size-1]+arraySum(num);
            return sum;
		}
};



//optimised o(n) tc an dspace with helper function 
 // consider another function  for recust=ion with i and array wehre i strats fro 0 then sum= arr[i] + arr[i+1] when i== size vasecase
// and call it in main arraysum function


class Solution {
public:
    int solve(vector<int>& nums, int i) {
        if (i == nums.size())
            return 0;

        return nums[i] + solve(nums, i + 1);
    }

    int arraySum(vector<int>& nums) {
        return solve(nums, 0);
    }
};
