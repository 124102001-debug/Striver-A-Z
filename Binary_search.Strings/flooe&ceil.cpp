 // if arrays sorted then use binary search always not sorted linear serach 


 //o(n) using linear search

class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        vector<int>result(2,-1);
        bool ceal=false;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]<=x){
                result[0]=nums[i];
            }
           if(nums[i]>=x && !ceal){
                result[1]=nums[i];
                ceal=true;
            }
        }
        return result;
    }
};


//using binary search  o(logn)
class Solution {
   public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        vector<int> result(2, -1);
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (nums[mid] == x) {   
                result[0] = nums[mid];
                result[1] = nums[mid];
                break;
            }
            if (nums[mid] >= x) {
                result[1] = nums[mid];
                r = mid-1;
            } else if (nums[mid] <= x) {
                result[0] = nums[mid];
                l = mid + 1;
            }
        }
        return result;
    }
};


//when l<r , l=mid+1 , r=mid;  l<=r r=mid-1  l=mid+1
