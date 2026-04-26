class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        int ans = high;
        while(low <= high){
            int mid = low + (high - low)/2;
            int count = 0;
            for(auto i : piles){
                //ciel function
                count += (i + mid -1) / mid;
                //main optimization happen here
                if(count > h) break;
            } 
            if(count <= h){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};
