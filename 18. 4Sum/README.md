### 18. 4Sum

---

### Question

Given an array ```nums``` of ```n``` integers, return an *array* of all the **unique** quadruplets ```[nums[a], nums[b], nums[c], nums[d]]``` such that:<br />

+ ```0 <= a, b, c, d < n```<br />
+ ```a```, ```b```, ```c```, and ```d``` are **distinct**.<br />
+ ```nums[a] + nums[b] + nums[c] + nums[d] == target```<br />
You may return the answer in any order.<br />


### Example 1:

Input: ```nums = [1,0,-1,0,-2,2], target = 0``` <br />
Output: ```[[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]```<br />

### Example 2:

Input: ```nums = [2,2,2,2,2], target = 8```<br />
Output: ```[[2,2,2,2]]```<br />
 

### Constraints:

+ ```1 <= nums.length <= 200```<br />
+ ```-109 <= nums[i] <= 109```<br />
+ ```-109 <= target <= 109```<br />