class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans, freq(26, 0);
        for(char c : p)
        freq[c - 'a']++;

        int left = 0, count = p.size();

        for(int right = 0; right < s.size(); right++) {

            if(freq[s[right] - 'a']-- > 0)
                count--;

            if(right - left + 1 > p.size()) {
                if(++freq[s[left] - 'a'] > 0)
                    count++;
                left++;
            }

            if(count == 0)
                ans.push_back(left);
        }

        return ans;
    }
};