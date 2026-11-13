class Solution{	
	public:
    void reverse(vector<int> &arr , int start , int end){
        if(start>=end){
            return ;
        }
        swap(arr[start] , arr[end]);
        reverse(arr,start+1,end-1);
    }
		vector<int> reverseArray(vector<int>& nums){			
	  		int start=0;
            int end=nums.size()-1;
            reverse(nums,start,end);
            return nums;
		}
};

o(n) tc and space
