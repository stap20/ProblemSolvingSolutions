/*
Two Pointers
Time omplexity O(n), Space Complexity O(1)

Description: Main idea is to find the number that sum to the current number to get target. Because array is sorted,
so we don't need to use any space. This because we can use two pointers to get the two numbers when we sum them we will get 
target. The idea based we will have idx1 on first of array and idx2 on last of the array, and we will sum them if it's grater
so we need to decrease idx2 to get smaller sum, and this because we have sorted array and if sum < target so increase idx1 untill we 
fin target. we push idx1+1 and idx2+1 because solution index not based zero. 
Example: 2,7,11,15 target = 9
We have in idx1 2 and numbers[idx2] is 15 som sum > target so decrease idx2. Next we have 2+11 also grater so decrease idx2.
Here we finally found 2+7 == target so this is solution
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> sol;
        int i=0;
        int j=numbers.size()-1;
        
        while(i<j){
            if(numbers[i]+numbers[j]==target){
                sol.push_back(i+1);
                sol.push_back(j+1);
                break;
            }
            
            else if(numbers[i]+numbers[j]>target){
                j--;
            }
            else{
                i++;
            }
        }
        
        return sol;
    }
};