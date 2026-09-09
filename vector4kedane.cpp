// LeetCode question number 53

// class Solution {

// public:

//     int maxSubArray(vector<int>& nums) {
//         int currSum = 0, maxSum = INT_MIN;

//         for (int val : nums) {
//             currSum += val;
//             maxSum = max(currSum, maxSum);

//             if (currSum < 0) {
//                 currSum = 0; // for edge case , example if all the element in the array is neg 
//             }
//         }

//         return maxSum;
//     }
// };