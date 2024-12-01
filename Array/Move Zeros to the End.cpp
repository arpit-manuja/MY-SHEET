// Link - https://leetcode.com/problems/move-zeroes/description/
// Time complexity = O(n)
// Space complexity = O(1)

//Approach 1
//count the number of zeroes
//traverse the array and put the non zero elements first in array and then put zeroes in array



class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int zero = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            zero++;
        }
        int m = nums.size()-zero;
        
        int j = 0;
        int k = 0;
        while(j<nums.size())
        {
            if(nums[j]!=0)
            {
                nums[k] = nums[j];
                k++;

            }
            if(nums.size()-k==zero)
            break;
            j++;
        }
        for(int p = k;p<nums.size();p++ )
        {
            nums[p] = 0;
        }


    }
};


//Approach 2
//make two variables left and right . left will be on 0 . and right will be on 0.
// right will run on loop . if nums[right]!=0 then replace left with right , and make left++



class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        

        int left = 0;
        for(int right = 0;right<nums.size();right++)
        {
            if(nums[right]!=0)
            {
                swap(nums[right] , nums[left]);
                left++;
            }
            
        }

    }
};
