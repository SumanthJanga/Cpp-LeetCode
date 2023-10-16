class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int size = nums.size();
        for(int i=0;i<size;i++)
        {
            int a=target-nums[i];
            for(int j=i+1;j<size;j++)
            {
                if(nums[j]==a){
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        return res;
    }
};