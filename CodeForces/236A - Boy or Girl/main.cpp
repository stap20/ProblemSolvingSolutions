/*
Time Complexity O(length(string)), Space Complexity O(1)

Description: Main idea is to make visited array to check if this character is visited or not intead of map. Then count not visited.
Example: a="wjmzbmr"
So after count counter is even so it's "CHAT WITH HER!"
*/

#include <iostream>
using namespace std;

int main()
{
    string a;
    int visit[26]={0};
    int dist=0;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(visit[a[i]-'a']==0){
          dist++;
          visit[a[i]-'a']=1;
        }
    }
  
  if(dist%2==0)
    cout<<"CHAT WITH HER!";
  else
    cout<<"IGNORE HIM!";
    
    return 0;
}