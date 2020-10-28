/*
Time Complexity O(n), Space Complexity O(100) 100-> because we have 100 color

Description: Main idea is to count number of collision between teams. To do that we will use array of pairs which will contain each color
visited n times as host and m times as guest. After that we will take each team and check if host color visited as guest so make sum+= m,
and if guest color visited as host sum+=n and so on.

Example: n= 4
        100 42
        42 100
        5 42
        100 5
In this example result will be 5 if we follow our algorithm described before.
*/

#include <iostream>
using namespace std;

int main()
{
    int n,a,b,sum=0;
    cin>>n;
    pair<int,int> visited[100];
    for(int i=0;i<n;i++){
        cin>>a>>b;
        visited[a-1].first++; //host
        visited[b-1].second++; //guest
        
        if(visited[a-1].second!=0){
          sum+=visited[a-1].second;
        }
        if(visited[b-1].first!=0){
          sum+=visited[b-1].first;
        }
    }
      cout<<sum;  
    return 0;
}