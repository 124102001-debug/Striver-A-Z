class Solution{	
	public:
    bool check(vector <int> & nums , int i){
        if(i==nums.size()-1){
            return true;
        }
        if(nums[i]>nums[i+1]){
            return false;
        }
        return check(nums , i+1);
    }
		bool isSorted(vector<int>& nums){
			int i=0;
            if(nums.empty()){ //empty array checking
                return true;
            }
            return check(nums,i);
		}
};
