class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> j(jewels.begin(),jewels.end());
        int i=0;
        for(char c:stones)
        {
            if(j.count(c)) i++;
        }
        return i;
    }
};