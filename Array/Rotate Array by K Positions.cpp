// Link - https://leetcode.com/problems/rotate-array/description/
// Time complexity = O(n)
// Space complexity = O(1)

//Approach 1
//run while loop k times and in one loop rotate the array one by one element
//n*k | 1

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

       
        while(k--)
        {
            int last = nums[nums.size()-1];

            for(int i=nums.size()-1;i>=1;i--)
            {
                nums[i] = nums[i-1];
            }

            nums[0] = last;

        }

    }
};


//Approach 2
//rotate the first part , and then second part , and then rotate the whole array
// ex 1 2 3 4 5 6 7 k = 3
// first part = 1 2 3 4  nums.size()-k
//second part = 5 6 7 k elements from last
//n | 1

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        n | 1
       int i= 0;
       k = k%nums.size();
       int j = nums.size()-k-1;
       while(i<j)
       {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
       }
       i = nums.size()-k;
       j = nums.size()-1;

        while(i<j)
       {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
       }

        i = 0;
        j = nums.size()-1;
          while(i<j)
       {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
       }



    }
};