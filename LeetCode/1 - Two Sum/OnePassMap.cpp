/*
Time omplexity O(n), Space Complexity O(n)

Description: Main idea is to find the number that sum to the current number to get target and we will use
unordered map to store the previous number with it's indx <value (number),key (idx)> and after we have number let it's nums[i] and target - nums[i] 
in map so idx of this number and index of the number in map is solution 
Example: 2,7,11,15 target = 9
In this example we prev number is 2 in map with index 0 and when we go to 7 we check if target-num in map we will found it
and we will say solution is index of 7 and 2
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> solution;
        unordered_map<int,int> umap;
        
        for(int i=0;i<nums.size();i++){          
            if(umap.find(target-nums[i])!=umap.end() && umap[target-nums[i]]!=i){
                solution.push_back(i);
                solution.push_back(umap[target-nums[i]]);
            }
            umap[nums[i]] = i;
        }
        
        return solution;
    }
};