class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left=0,maxf=0;
        unordered_map<int,int> fruitsmap;
        for(int right=0;right<fruits.size();right++)
        {
            fruitsmap[fruits[right]]++;   
            while(fruitsmap.size() > 2)    
            {
                fruitsmap[fruits[left]]--;

                if(fruitsmap[fruits[left]] == 0)
                    fruitsmap.erase(fruits[left]);

                left++;
            }

            maxf = max(maxf, right-left+1);
        }
        return maxf;
    }
};