#include <iostream> 
#include <vector> 
#include<algorithm>
using namespace std;

struct compare { 
    bool operator()(
        pair<int, int> const& a, 
        pair<int, int> const& b) 
    { 
        if(a.first>b.first){
          return true;
        }
        else if(a.first==b.first&&a.second<b.second){
          return true;
        }
        return false; 
    } 
}; 

int main()
{
  int n,k,a,b;
  
  cin>>n>>k;
  vector<pair<int,int>> teams;
  for(int i=0;i<n;i++){
    cin>>a>>b;
    teams.push_back(make_pair(a,b));
  }
  sort(teams.begin(),teams.end(),compare());
  int cnt=0;
  for(int i=0;i<n;i++){
    if(teams[i] == teams[k-1]){
      cnt++;
    }
  }
  
  cout<<cnt<<endl;
  return 0;
}