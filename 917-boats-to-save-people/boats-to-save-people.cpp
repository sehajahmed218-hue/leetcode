class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int left = 0, ans = 0,right=people.size()-1;
        sort(people.begin(),people.end());
        while(left<=right)
        {
            if(people[left]+people[right]<=limit)
            {
                right--;
                left++;
            }
            else
                right--;
            ans++;
        }
        return ans++;
    }
};