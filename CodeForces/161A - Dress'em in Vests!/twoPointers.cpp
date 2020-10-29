#include <iostream>
using namespace std;
int main()
{
  int n,m,x,y;
  cin>>n>>m>>x>>y;
  
  int size[n],vest[m];
  for(int i=0;i<n;i++){
    cin>>size[i];  
  }
  for(int i=0;i<m;i++){
    cin>>vest[i];  
  }
  
  int j=0,cnt=0,i=0;
  while(i<n&&j<m){
    if(size[i]-x<= vest[j] && (size[i]+y)>=vest[j]){
        cnt++;
        j++;
        i++;
    }
    else if(vest[j]<size[i]-x){
      j++;
    }
    else if(vest[j]>(size[i]+y)){
      i++;
    }
  }
  cout<<cnt<<endl;
  
  j=0;
  i=0;
  while(i<n&&j<m){
    if(size[i]-x<= vest[j] && (size[i]+y)>=vest[j]){
        cout<<i+1<<" "<<j+1<<endl;
        j++;
        i++;
    }
    else if(vest[j]<size[i]-x){
      j++;
    }
    else if(vest[j]>(size[i]+y)){
      i++;
    }
  }
  return 0;
}