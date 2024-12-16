### 20. Valid Parentheses

--- 

### Question
Given a string ```s``` containing just the characters ```'('```, ```')'```, ```'{'```, ```'}'```, ```'['``` and ```']'```, determine if the input string is valid.

An input string is valid if:

1. Open brackets must be closed by the same type of brackets.<br/>
2. Open brackets must be closed in the correct order.<br/>
3. Every close bracket has a corresponding open bracket of the same type.<br/>
 

### Example 1:

```Input: s = "()"```<br/>
```Output: true```<br/>

### Example 2:

```Input: s = "()[]{}"```<br/>
```Output: true```<br/>

### Example 3:

```Input: s = "(]"```<br/>
```Output: false```<br/>

### Example 4:

```Input: s = "([])"```<br/>
```Output: true```<br/>

---

### Constraints:

+ ```1 <= s.length <= 104```<br/>
+ ```s``` consists of parentheses only ```'()[]{}'```.<br/>