////o(n) complexity



class Solution {
   public:
    int search(vector<int> &nums, int k) {
        int pivot;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                pivot = i + 1;
                break;
            }
        }
        int l = pivot;
        int r = nums.size() - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (nums[mid] == k) {
                return mid;
            } else if (nums[mid] > k) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        int L = 0;
        int R = pivot - 1;
        while (L <= r) {
            int mid = (l + r) / 2;
            if (nums[mid] == k) {
                return mid;
            } else if (nums[mid] > k) {
                R = mid - 1;
            } else {
                L = mid + 1;
            }
        }
        return -1;
    }
};





//o(logn)


class Solution {
public:
    int search(vector<int> &nums, int k) {
        int l=0;
        int r=nums.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==k){
                return mid;
            }
            if(nums[l]<=nums[mid]){
                if(nums[l]<=k && nums[mid]>k){
                    r=mid-1;
                }else{
                    l=mid+1;
                }
            }else{
                if(nums[r]>=k && nums[mid]<k){
                    l=mid+1;
                }else{
                    r=mid-1;
                }
            }
        }
        return -1;
    }
};
