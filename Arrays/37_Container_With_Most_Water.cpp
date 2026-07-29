class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int i,k,n = height.size();
        k=n-1;
        i=0;
        int min , maxx = 0;
        while(i<k) // not to use for loop 
        { 
           min = std::min(height[i],height[k]);
           maxx = max(maxx,(k-i)*min);
            if(height[i] < height[k])
            {
                i++;
            }
            else
            {
               k--;
            }
        }
        return maxx;
    }
};

/* TIME LIMIT EXCEEDED
class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int i,j,n = height.size();
        int min , maxx = 0;
        for(i=0;i<n;i++)
        {
            for(j=n-1;j>=i;j--)
            {
                min = (height[i],height[j]);
                maxx = max(maxx,(j-1)*min);
            }
        }
        return maxx;
    }
};
*/