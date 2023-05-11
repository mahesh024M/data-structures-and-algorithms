Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

Example 1:
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].

Example 2:
Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums is sorted in non-decreasing order.

solution.............................................................................................

Basically a two pointer solution;
one pointer at beginning of array and other at the end. As the given array is sorted we will compare nums[i] and nums[j] and insert it in the result array from the back which is larger.

vector sortedSquares(vector& nums) {

   int n=nums.size();
   int i=0,j=n-1;
  vector<int>res(n);
   for(int k=n-1;k>=0;k--){
       if(abs(nums[i])>abs(nums[j])){
           res[k]=nums[i]*nums[i];
           i++;
       }
       else{
           res[k]=nums[j]*nums[j];
           j--;
       }
   }
return res;

}
Time complexity -O(n)
space Complexity -O(1)
