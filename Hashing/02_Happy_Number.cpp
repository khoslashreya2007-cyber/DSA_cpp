// hashinggggg
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> visited;
        while(n != 1)
        {
            if(visited.find(n) != visited.end())
                return false;
            visited.insert(n);
            int sq = 0;
            while(n > 0)
            {
                int last = n % 10;
                sq += last * last;
                n /= 10;
            }
            n = sq;
        }
        return true;
    }
};

/* BRUTE FORCE
class Solution {
public:
    bool isHappy(int n) {
        int last, sq = 0;
        vector<int> visited;
        while (n != 1) {
            while (n > 0) {
                last = n % 10;
                sq += (last * last);
                n = n / 10;
            }
            if (sq == 1)
                return true;
            for (int x : visited)
            {
                if (x == sq)
                    return false;
            }
            visited.push_back(sq);
            n = sq;
            sq = 0;
        }
        return true;
    }
};
*/