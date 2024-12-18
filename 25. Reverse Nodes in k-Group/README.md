### <a href='https://leetcode.com/problems/reverse-nodes-in-k-group/'>25. Reverse Nodes in k-Group</a> <br /> 
<img src ='https://img.shields.io/badge/Difficulty-Hard-red' alt='Difficulty: Hard' />

---

### Question
Given the ```head``` of a linked list, reverse the nodes of the list ```k``` at a time, and return *the modified list.*

```k``` is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of ```k``` then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.

### Example 1:
<img src="https://assets.leetcode.com/uploads/2020/10/03/reverse_ex1.jpg"> <br />
Input: ```head = [1,2,3,4,5], k = 2``` <br />
Output: ```[2,1,4,3,5]``` <br />

### Example 2:
<img src = "https://assets.leetcode.com/uploads/2020/10/03/reverse_ex2.jpg"> <br />
Input: ```head = [1,2,3,4,5], k = 3``` <br />
Output: ```[3,2,1,4,5]``` <br />

---

### Constraints:
+ The number of nodes in the list is ```n```. <br />
+ ```1 <= k <= n <= 5000``` <br />
+ ```0 <= Node.val <= 1000``` <br />
 

**Follow-up:** Can you solve the problem in ```O(1)``` extra memory space?
