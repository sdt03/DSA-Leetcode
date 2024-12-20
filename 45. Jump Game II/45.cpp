class Solution {
public:
    int jump(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int current = 0;
        int farthest = 0;
        int jumps = 0;
        for(int i=0;i<nums.size()-1;++i){
            farthest = max(farthest, i+nums[i]);
            if(i==current){
                jumps++;
                current = farthest;
                if(current>=nums.size()+1) break;
            }
        }
       return jumps;
    }
};