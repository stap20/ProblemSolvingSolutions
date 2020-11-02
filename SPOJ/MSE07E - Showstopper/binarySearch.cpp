#include <iostream> 
#include <sstream>
#include <vector>
#include<tuple>
#define ll long long
#define INT_MAX 2147483640
using namespace std;
vector<tuple<ll,ll,ll>> data_object;
 
ll check(ll mid){
  ll n = data_object.size();
  ll sum = 0;
  ll x,y,z;
  for(int i=0;i<n;i++){
      x=get<0>(data_object[i]);
      y=get<1>(data_object[i]);
      z=get<2>(data_object[i]);
      
      if(x<=mid){
        sum+=((min(mid,y)-x)/z)+1;
      }
  }
  if(sum%2==0){
    return 0;
  }
  return 1;
}
 
void solve(ll start,ll end){
    ll low=0,high=(ll)1<<35,mid;
    ll ans=-1;
 
    while(low<=high){
        //cout<<low<<" "<<high<<endl
      mid=(low+high)/2;
      if(check(mid)){
        ans=mid;
        high=mid-1;
      }
      else{
        low=mid+1;
      }
    }
  ll x,y,z,c=0;
  for(int i =0;i<data_object.size();i++){
      x=get<0>(data_object[i]);
      y=get<1>(data_object[i]);
      z=get<2>(data_object[i]);
    
      if(x<=ans&&ans<=y&&(ans-x)%z==0){
        c++;
      }
  }
  if(ans==-1 && c ==0){
      cout<<"no corruption"<<endl;
  }
  else{
      cout<<ans<<" "<<c<<endl;
  }  
 
}
 
int main()
{
  string input;
  ll start= INT_MAX,end=-1,x,y,z;
  while(getline(cin,input)){
      
      istringstream iss(input);
      
      if(iss >> x >> y >> z){       
          data_object.push_back(make_tuple(x,y,z));
          start = min(start,x);
          end = max(end,y);
      }else{
        
          if(start==INT_MAX && end==-1) continue;
 
          solve(start,end);
          start= INT_MAX;
          end=-1;
          data_object.clear();
      }
  }
  solve(start,end);
  return 0;
} 