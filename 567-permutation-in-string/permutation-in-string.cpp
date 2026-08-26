class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if(s1.size() > s2.size())
            return false;

        unordered_map<char,int> h1, h2;

        for(char c : s1)
            h1[c]++;

        int left = 0;

        for(int right = 0; right < s2.size(); right++)
        {
            h2[s2[right]]++;

            if(right - left + 1 == s1.size())
            {
                if(h1 == h2)
                    return true;

                if(h2[s2[left]]-1==0) h2.erase(s2[left]);
                else h2[s2[left]]--;
                left++;
            }
        }

        return false;
    }
};