class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int right = arr.size()-1;
        int left = 0;
        vector<int>ans(2);
        while(left < right){
            if(arr[left] + arr[right] > target ){
                right--;
                left = 0;
            }
            if(arr[left] + arr[right] == target ){
                ans[0] = left+1;
                ans[1] = right+1;
                break;
            }
            else if(arr[left] + arr[right] < target ){
                left++;
            }
        }
        return ans;
    }
};
