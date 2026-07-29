class Solution {       // seen soln but side side by learned
public:
    bool canConstruct(string ransomNote, string magazine) {
         unordered_map<char, int> mp;
         for (char c : magazine) {
            mp[c]++;
        }
        for (char c : ransomNote) {
            if (mp[c] == 0) {          // safe to use <= tho  
                return false;
            }
            mp[c]--;
        }
        return true;
    }
};


/* my first approach and wrong soln
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count=0 ,n = ransomNote.size();
        int nn = magazine.size();
        if (n>nn)
        return false;
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        for(int i = 0; i<n ;i++)
        {
            for(int j=0 ; j< nn ; j++)
            {
                if(ransomNote[i] == magazine[j])
                count++;
            }
        }
        if(count>n)
        return true;
        else 
        return false;
    }
};
*/