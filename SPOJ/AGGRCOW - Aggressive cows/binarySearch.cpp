#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool is_valid(int mid,vector<int> &stall,int c){
  int cows=c-1,last_pos=0; 
  
  for(int i=1;i<stall.size()&&cows>0;i++){
      if((stall[i]-stall[last_pos])>=mid){
        cows--;
        last_pos=i;
      }
  }
  if(cows==0){
      return true;
  }
  
  return false;
}
int main()
{
    int n,c,a,t;
    cin>>t;
  while(t>0){
      cin>>n>>c;
      vector<int> stall;
      for(int i=0;i<n;i++){
        cin>>a;
        stall.push_back(a);
      }
 
      sort(stall.begin(),stall.end());
      int low=0,high=stall[stall.size()-1];
      int mid,last_valid;
 
      while(low<=high){
          mid = (low+high)/2;
          if(is_valid(mid,stall,c)){
            last_valid=mid;
            low=mid+1;
          }
          else{         
            high=mid-1;
          }
      }
 
      cout<<last_valid<<endl;
    t--;
  }
  return 0;
} 