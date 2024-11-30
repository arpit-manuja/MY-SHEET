// Link - https://www.geeksforgeeks.org/problems/reverse-an-array/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
// Time complexity = O(n)
// Space complexity = O(1)

//Approach
//One Pointer at start and one pointer at end
//swap the elements of i and j ,increase the initial pointer and decrease the second pointer
//using while loop iteration


class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        
        //n | 1
        int n = arr.size();
        
        int i=0;
        int j=n-1;
        
        while(i<j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            
            i++;
            j--;
            
        }
    }
};