// optimised solution
/* class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i,j;
        for(i=1 ; i<nums.size() ; i++)
        {
            nums[i] += nums[i-1];    
        }
        return nums;
    }
}; */

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> answer;
        int i,j;
        int sum = 0;
        for(i=0 ; i<nums.size() ; i++)
        {
            sum += nums[i];
            answer.push_back(sum);
        }
        return answer;
    }
};