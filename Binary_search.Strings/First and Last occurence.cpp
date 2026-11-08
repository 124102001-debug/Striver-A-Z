// two binary seach startegies

class Solution{
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        vector <int> result(2,-1);
        int l=0;
        int r=nums.size()-1;
        int mid;
        while(l<=r){
          mid=(l+r)/2;
            if(nums[mid]==target){
                result[0]=mid;
                r=mid-1;
            }else  if (nums[mid]>target){
                r=mid-1;
            }else if(nums[mid]<target){
                l=mid+1;
            }
        }
        int l1=0;
        int r1=nums.size()-1;
        int mid1;
         while(l1<=r1){
            mid1=(l1+r1)/2;
            if(nums[mid1]==target){
                result[1]=mid1;
                l1=mid1+1;
            }else  if (nums[mid1]>target){
                r1=mid1-1;
            }else if(nums[mid1]<target){
                l1=mid1+1;
            }
        }
        return result;
    }
};
