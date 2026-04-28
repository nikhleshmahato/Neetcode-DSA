class Solution {
public:
    int maxArea(vector<int>& arr) {

        int left = 0;
        int right = arr.size()-1;
        int max = 0;

        while(left < right){

            if(arr[left] <= arr[right] ) {
                if(arr[left] * (right - left ) > max) max = arr[left] * (right - left );
                left++;
            }
            else {
                if(arr[right] * (right - left) > max) max = arr[right] * (right - left);
                right--;
            }
        }
        return max;
    }
};
