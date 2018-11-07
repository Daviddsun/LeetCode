class Solution {
public:
    // 给定一个数组 nums ，和一个目标值target
    // 返回 数组中 和 为 target 的两个索引
    vector<int> twoSum(vector<int>& nums, int target) {
        const int n = nums.size();// 元素总数
        unordered_map<int, int> hash;// 差，index 无序map 
        for(int i = 0; i < n; ++i){
            if(hash.end() != hash.find(target-nums[i]))// 找 目标差值
            {
                return {hash[target-nums[i]], i};//找到返回 两个元素的 索引 
            }
            hash.insert({nums[i], i});// 没找到，插入map记录 差值，index
        }
        return {0, 1};// 默认返回 0,1 索引
    }
};
