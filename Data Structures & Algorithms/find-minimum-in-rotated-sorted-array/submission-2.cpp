class Solution {
public:
    int findMin(vector<int> &nums) {
        int left = 0;
        int right = nums.size()-1;
        int ans = nums[left];

        while(left < right){
            int mid = left + (right - left)/2;
            if(nums[left] < nums[right]){
                if(nums[left] > ans) break;
                ans = nums[left];
                break;
            }
            else if(nums[left] > nums[mid]){
                ans = nums[mid];
                right = mid - 1;
            }
            else if(nums[mid] > nums[right]){
                ans = nums[right];
                left = mid + 1;
            }
        }
        return ans;
    }
};
