#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
ll max_books=0;
bool is_valid(ll mid,vector<int> &seq_books,int k,ll sum_paper){
  if(mid<max_books){
    return false;
  }
  ll scriber=k-1,sum_scriber=0,sum_taken=0; 
  
  for(int i=seq_books.size()-1; i>=0; i--){
      if(sum_scriber+seq_books[i] <= mid && scriber<=i){
        sum_scriber+=seq_books[i];
        sum_taken+=seq_books[i];
      }
      else{
        sum_scriber=seq_books[i];
        sum_taken+=seq_books[i];
        scriber--;
      }
  }
  if(scriber==0){
      return true;
  }
  
  return false;
}
 
void printa(ll last_valid,int k,int m,vector<int> &seq_books){
      vector<int> res;
      ll scriber=k-1,sum_scriber=0;
      for(int i=m-1;i>=0;i--){
          if(sum_scriber + seq_books[i] <= last_valid && scriber<=i){
            sum_scriber+=seq_books[i];
            res.push_back(seq_books[i]);
          }
          else{
              res.push_back(-1); // mean /
              res.push_back(seq_books[i]);
              sum_scriber=seq_books[i];
              scriber--;
          }
      }
  
      for(int i=res.size()-1 ;i>=0;i--){
          if(res[i]==-1){
            printf("/ ");
          }
          else{
            printf("%d",res[i]);
            if(i-1>=0){
              printf(" ");
            }
          }     
      }
  
  printf("\n");
}
int main()
{
    int m,k,t;
    ll sum_papers=0,a;
    scanf("%d",&t);
  while(t>0){
      scanf("%d %d",&m,&k);
      max_books=-1;
      vector<int> seq_books;
    
      for(int i=0;i<m;i++){
        scanf("%lld",&a);
        seq_books.push_back(a);
        sum_papers+=a;
        max_books=max(max_books,a);
      }
 
      ll low=0,high=sum_papers,mid,last_valid;
 
      while(low<=high){
          mid = (low+high)/2;
          if(is_valid(mid,seq_books,k,sum_papers)){
            last_valid=mid;
            high=mid-1;       
          }
          else{         
            low=mid+1;
          }
      }
      
      printa(last_valid,k,m,seq_books);
      
    t--;
  }
  return 0;
} 