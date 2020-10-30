#include <iostream> 
#include <vector>
using namespace std;

vector<int> all_prime;

void generate_all_prime(){
  bool prime=true;
  for(int i=2;i<=200000;i++){
      prime=true;
      for(int j=0;j<all_prime.size();j++){
          if(i%all_prime[j]==0){
            prime=false;
            break;
          }
      }
      if(prime){
        all_prime.push_back(i);
      }
  }
}

int get_distance(int x){
  int low =0;
  int high = all_prime.size()-1;
  int mid,before,after,current;
  
  while(low<=high){
    mid = (low+high)/2;
    current=abs(all_prime[mid]-x);
    if(mid-1>=0)
      before=abs(all_prime[mid-1]-x);
    else
      before=1000000000;
    if(mid+1<all_prime.size())
      after=abs(all_prime[mid+1]-x);
    else
      after-1;
    if(current<=before&&current<=after){
      if(all_prime[mid]<x)
        return after;
      return current;
    }
    
    else if(before>current&&after<current){
      low=mid+1;
    }
    else if(before<current&&after>current){
      high=mid-1;
    }
  }
}
int main()
{
  int n,m,a;
  generate_all_prime();
  cin>>n>>m;
  
  int dists[n+m]={0};
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a;
        a=get_distance(a);
        dists[i]+=a;
        dists[j+n]+=a;
    }
  }
  int res=1000000000;
  for(int i=0;i<n+m;i++){
    res=min(res,dists[i]);
  }
  cout<<res<<endl;
  return 0;
}