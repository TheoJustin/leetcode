class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> arr;
        
        for(int i = 0; i<nums.size(); i++){
            if(arr.find(nums.at(i)) == arr.end()){ 
                arr.insert(nums[i]);
            }else{
                return true;
            }
        }
        return false;
    }
};