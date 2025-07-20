class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int rox = 0;
        for(int i=0;i<nums.size();i++){
            rox = rox ^ nums[i];
        }
        return rox;
    }
};
