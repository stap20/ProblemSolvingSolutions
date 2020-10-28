/*
Two Pointers
Time Complexity O(n), Space Complexity O(1)

Description: 
Example: 
*/

#include <iostream>
using namespace std;

int main()
{
    int n,seraj=0,dima=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int who = 0;
    int i=0,j=n-1;
    while(i<=j){
      int m=0;
      if(a[j]>a[i]){
        m=a[j];
        j--;
      }
      else{
        m=a[i];
        i++;
      }
      if(who==0){
        seraj+=m;
        who=1;
      }
      else{
        dima+=m;
        who=0;
      }
    }
      cout<<seraj<<" "<<dima;  
    return 0;
}