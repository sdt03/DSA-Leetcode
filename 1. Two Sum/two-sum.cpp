class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            int num2 = target - num;
            if(mpp.find(num2) != mpp.end()){
                return {i, mpp[num2]};
            }
            mpp[num] = i;
        }
        return {};
    }
};
