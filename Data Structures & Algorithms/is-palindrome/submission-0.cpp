class Solution {
public:
    bool isPalindrome(string s) {
        bool check = true;
        int left = 0;
        int right = s.size()-1;
        while(left<right){
            if(!isalnum(s[left])) left++;
            else if(!isalnum(s[right])) right--;
            else{
                if(tolower(s[left]) != tolower(s[right])){
                    check = false;
                    break;
                }
                left++;
                right--;
            }
        }
        if(check) return true;
        else return false;
    }
};
