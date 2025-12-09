class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;

        while(left < right){
            int check = numbers[left] + numbers[right];
            if(check == target){
                return {left + 1, right + 1};
            }
            else if(check < target){
                left++;
            }
            else right--;
        }

        return {-1,-1};

// Time Complexity : O(n) as we are doing only 1 iteration
// Space Complexity : O(n) as we have fixed set of variables.
