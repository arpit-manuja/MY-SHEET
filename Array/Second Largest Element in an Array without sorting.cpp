// Link - https://www.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest
// Time complexity = O(n)
// Space complexity = O(1)

//Approach 
//first element assign with nums[0] and another with -1
//if you get number greater than first element then make it bigger and seocodn = first
// if you get number equalt to first then continue
// if you get number only greater than second then make second assign to it
// n | 1


class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &nums) {
        // Code Here
        
        int first = nums[0];
        int second = -1;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>first)
            {
                second = first;
                first = nums[i];
            }
            else if(nums[i]==first)
            {
                continue;
            }
            else if(nums[i]>=second)
            {
                second = nums[i];
            }
        }
        
        return second;
        
    
    }
};