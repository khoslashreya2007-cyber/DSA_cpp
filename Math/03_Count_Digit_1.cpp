/* TLE
class Solution {
public:
    int countDigitOne(int n) {
        int count = 0;
        for (int i = 0; i <= n; i++)
        {
            string s = to_string(i);
            for (char ch : s) 
            {
                if (ch == '1')
                    count++;
            }
        }
        return count;
    }
};
*/

/* TLE #2
class Solution {
public:
    int countDigitOne(int n) {
        int x,count = 0;
        for (int i = 0; i <= n; i++) {
            x = i;
            while (x > 0) {
                if (x % 10 == 1)
                    count++;
                x /= 10;
            }
        }
        return count;
    }
};
*/

