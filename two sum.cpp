class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> num_map;
        for (int i=0;i<nums.size();i++){
            int complement= target - nums[i];
            if(num_map.find(complement)!= num_map.end()){
                return {num_map[complement],i};
            }
            num_map[nums[i]]=i;
        }
        return {};
    }
    int main(){
        vector<int> nums={2,7,11,15};
        int target=9;
        vector<int> result=twoSum(nums,target);
        cout<<"["<<result[0]<<","<<result[1]<<"]"<<endl;
        return 0;
    }
};
//https://leetcode.com/problems/two-sum/submissions/1599270014/
