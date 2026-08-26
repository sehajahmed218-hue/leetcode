class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if(s1.size() > s2.size())
            return false;

        int freq[26] = {};

        for(char c : s1)
            freq[c-'a']++;

        int left = 0;

        for(int right = 0; right < s2.size(); right++)
        {
            freq[s2[right] - 'a']--;

            if(right - left + 1 == s1.size())
            {   
                int i=0,flag=0;
                while(i<26)
                {
                    if(freq[i]!=0)
                    {
                        flag++;
                    }
                    i++;
                }
                if(!flag) return true;
                freq[s2[left] - 'a']++;
                left++;
            }
        }

        return false;
    }
};