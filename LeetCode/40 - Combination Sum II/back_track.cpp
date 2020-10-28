/*
Back Tracking
Time omplexity O(2^max_target), Space Complexity O(n)

Description: Main idea is to find the number that sum to the current number to get target and we will use
unordered map to store the previous number with it's indx <value (number),key (idx)> and after we have number let it's nums[i] and target - nums[i] 
in map so idx of this number and index of the number in map is solution 
Example: 2,7,11,15 target = 9
In this example we prev number is 2 in map with index 0 and when we go to 7 we check if target-num in map we will found it
and we will say solution is index of 7 and 2
*/
class Solution {
public:
    vector<vector<int>> sol;
    void back_track(int idx,vector<int>& candidates,vector<int>& min_sol, int sum,int target){
        if(sum==target){
            sol.push_back(vector<int>(min_sol));
        }
        for(int i=idx;i<candidates.size();i++){
            if(sum+candidates[i]>target)
                break;
            if(i>idx && candidates[i]==candidates[i-1])
                continue;
            min_sol.push_back(candidates[i]);
            back_track(i+1, candidates,min_sol,sum+candidates[i],target); //take me
            min_sol.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> temp;
        back_track(0,candidates,temp,0,target);
        
        return sol;
    }
};