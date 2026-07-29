class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i,count=0;
        int product = 1;
        for(i=0;i<nums.size();i++)
        {  
            if(nums[i]!=0)
            product*=nums[i];
            if(nums[i]==0)
            count++;
        }
        for(i=0;i<nums.size();i++)
        { 
            if(count>1) 
//I DID FIRST EQUAL TO NUMS.SIZE() but it was wrong because as soon as there are 2 or more zeros, every product will include at least one zero.
            {
                nums[i]=0;
            }
            else if(count==0)
            {
             nums[i]=product/nums[i];
            }
            else 
            {
            if(nums[i]==0)
            nums[i]=product;
            else
            nums[i]=0;
           }
        }
        return nums;
    }
};



/* TIME LIMIT EXCEEDED SOLUTION
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i,j;
        vector<int> answer;
        int product;
        for(i=0;i<nums.size();i++)
        {
            product=1;
            for(j=0;j<nums.size();j++)
            {
                if(j!= i)
                {
                   product *= nums[j];
                }  
            }
            answer.push_back(product);
        }
    return answer;
    }
};
*/