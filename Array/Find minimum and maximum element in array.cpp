// Link - https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
// Time complexity = O(n)
// Space complexity = O(1)


class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        // n || 1
        long long int minn = INT_MAX;
        long long int maxx = INT_MIN;
        
        for(auto it :arr)
        {
            minn = min(minn , it);
            maxx = max(maxx , it);
        }
        return {minn , maxx};
    }
};