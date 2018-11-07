#include <iostream>
#include <vector>
#include <hash_map>

using namespace std;

class Solution {
public:
    // 给定一个数组 nums ，和一个目标值target
    // 返回 数组中 和 为 target 的两个索引
	vector<int> twoSum(vector<int>& nums, int target) {
		hash_map<int, int> m; // unordered_map  无序map  差值元素 o(1)
		for (int i = 0; i < nums.size(); ++i){
			if (m.count(target - nums[i]))// 差值 目标差值是否存在
			{
				return{m[target - nums[i]], i};//找到返回 两个元素的 索引 
			}
			m[nums[i]] = i;// 插入map记录 值，index
		}
		return{};
	}
};

int main(int argc, char *argv[]){
	Solution s;
	auto v = s.twoSum(vector<int>{2, 7, 11, 15}, 9);
	if (v.size() == 2){
		cout << v[0] << ", " << v[1] << endl;
	}
	system("pause");
	return 0;
}
