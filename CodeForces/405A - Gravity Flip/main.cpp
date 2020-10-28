/*
Time Complexity O(nlog(n)), Space Complexity O(1) -> my space complexity

Description: Main idea is to sort the cubes.
Example: n=4 cubes[3 2 1 2]
So after sorting it will be 1 2 2 3
*/
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> nums;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        nums.push_back(a);
    }
    sort(nums.begin(),nums.end());
    
    for(int i=0;i<n;i++){
        if(i+1==n){
            cout <<nums[i];
        }
        else{
            cout<<nums[i]<<" ";
            
        }
    }

    return 0;
}