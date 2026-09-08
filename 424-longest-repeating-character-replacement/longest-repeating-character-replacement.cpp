class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> hash;
        int left=0,maxf=0,ans=0;

        for(int right = 0; right < s.size(); right++)
        {
            hash[s[right]]++;

            maxf = max(maxf, hash[s[right]]);

            while(right - left + 1 - maxf > k)
            {
                hash[s[left]]--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};