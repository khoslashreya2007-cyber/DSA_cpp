class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        for (char ch : word) {
            if (std::islower(ch))
                count++;
        }
        if (count == word.size())
            return true;
        count = 0;
        for (char ch : word) {
            if (ch >= 65 && ch <= 90)
                count++;
        }
        if (count == 1 && (word[0] >= 65 && word[0] <= 90))
            return true;
        else if (count == word.size())
            return true;
        else
            return false;
    }
};

/* OPTIMISED SOLN
class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0;
        for (char ch : word) 
        {
            if (isupper(ch))
                upper++;
        }
        if (upper == word.size()) // ALL CAPS
            return true;
        if (upper == 0) // all lowercase
            return true;
        if (upper == 1 && isupper(word[0])) // First letter capital only
            return true;
        return false;
    }
};
*/