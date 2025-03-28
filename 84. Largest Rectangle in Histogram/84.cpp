class Solution {
    public:
        int largestRectangleArea(vector<int>& heights) {
           int n = heights.size();
        stack<int> s; // Stack to store indices
        int maxArea = 0;
    
        for (int i = 0; i <= n; i++) {
            while (!s.empty() && (i == n || heights[i] < heights[s.top()])) {
                int height = heights[s.top()];
                s.pop();
                int width = s.empty() ? i : i - s.top() - 1;
                maxArea = max(maxArea, height * width);
            }
            s.push(i);
        }
    
        return maxArea; 
        }
    };