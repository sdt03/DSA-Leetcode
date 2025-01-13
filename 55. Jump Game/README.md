### <a href='https://leetcode.com/problems/jump-game/description/'>55. Jump Game </a>

<img src='https://img.shields.io/badge/Difficulty-Medium-yellow' alt='Difficulty: Medium' />

## Question

You are given an integer array `nums`. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

Return `true` if you can reach the last index, or `false` otherwise.

 

### Example 1:

Input: `nums = [2,3,1,1,4]`<br />
Output: `true` <br />
Explanation: `Jump 1 step from index 0 to 1, then 3 steps to the last index.`  <br />

### Example 2:

Input: `nums = [3,2,1,0,4]`<br />
Output: `false` <br />
Explanation: `You will always arrive at index 3 no matter what. Its maximum  jump length is 0, which makes it impossible to reach the last index.` <br />

 

### Constraints:

- `1 <= nums.length <= 104`
- `0 <= nums[i] <= 105`