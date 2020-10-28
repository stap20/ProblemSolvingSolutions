/*
Time Complexity O(n), Space Complexity O(1)

Description: Main idea is to count number of free police officer and number of crimes apeared. Then if we have crime substract one officer
from counter. If no one free so Increase untreated crime counter.
Example: n= 8 a[1 -1 1 -1 -1 1 1 1]
In this example after first step we have 1 police offices. After that we have crime but we have free police officer so subtract so on.
Untill we will have no officer free but have crime so Increase untreated crime counter.
*/

#include <iostream>
using namespace std;

int main()
{
    int n,crime=0,free=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>0){
          free+=a[i];
        }
        if(a[i]==-1){
          if(free==0){
            crime++;
          }
          else{
            free--;
          }
        }
    }
      cout<<crime;  
    return 0;
}