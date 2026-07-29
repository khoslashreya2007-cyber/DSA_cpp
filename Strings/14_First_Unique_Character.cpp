/* TIME LIMIT EXCEEDED
class Solution {
public:
    int firstUniqChar(string s) {
        int count,n=s.size();
        for(int i = 0; i<n ; i++)
        {
            count = 0;
            for(int j = 0; j<n; j++)
            {
                if(s[i]!=s[j]){
                count++;
                }
            }
            if(count == n-1)
            return i;
        }
        return -1;
    }
};
*/

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        for (int i = 0; i < s.size(); i++) 
        {
            if (freq[s[i]] == 1) 
            {
                return i;
            }
        }
        return -1;      
    }
};