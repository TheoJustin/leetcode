class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> arr;
        for(int i = 0; i<nums.size(); i++){
            arr.insert(nums.at(i));
        }

        if(arr.size() != nums.size()){
            return true;
        }
        return false;
    }
};