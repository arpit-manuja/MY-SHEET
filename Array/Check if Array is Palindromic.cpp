// Link - https://www.geeksforgeeks.org/problems/reverse-an-array/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
// Time complexity = O(n)
// Space complexity = O(1)

//Approach
// one pointer at and second pointer at end and comparison , if not equal then false

class Solution {
  public:
    bool isPerfect(vector<int> &arr) {
        // code here
        int i = 0;
        int j = arr.size()-1;
        while(i<j)
        {
            if(arr[i]!=arr[j])
            return false;
            i++;
            j--;
        }
        return true;
    }
};