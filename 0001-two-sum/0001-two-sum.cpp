class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> myMap;
        vector<int> res;

        for(int i = 0; i < nums.size(); i++){
            myMap[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); i++){
            if(
                myMap.find(target-nums[i]) != myMap.end()
                &&
                myMap[target-nums[i]] != i
            ){
                res.push_back(i);
                res.push_back(myMap[target-nums[i]]);
                return res;
            }
        }

        return res;
    }
};