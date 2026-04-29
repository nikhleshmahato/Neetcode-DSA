class Solution {
private:
    bool check (vector<int>& arr, int t){
        int l = 0;
        int r = arr.size()-1;
        while(l <= r){
            int mid = l + (r - l)/2;
            if(arr[mid] == t) return true;
            else if(arr[mid] > t) r--;
            else if(arr[mid] < t) l++;
        }
        return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        bool found = false;
        int left = 0;
        int right = nums.size()-1;

        vector<int>temp;

        while(left <= right){

            int mid = left + (right - left)/2;

            
            if(nums[mid][0] == target){
                found = true;
                break;
            }
            else if(nums[mid][0] < target){
                temp = nums[mid];
                left = mid+1;
            }
            else if(nums[mid][0] > target){
                right = mid-1 ;
            }
        }
        if(found) return true;
        found = check(temp,target);
        if(found) return true;
        else return false;
        
    }
};
