#include <iostream> 
using namespace std;

int main()
{
  int n,t;
    cin>>t;
    while(t>0){
    string s;
    cin>>n;
    cin>>s;
    int stack=0;
    int cnt=0;
    for(int i=0;i<n;i++){
      if(s[i]=='('){
        stack++;
      }
      else if(s[i]==')'&&stack>0){
        stack--;
      }
      else{
        cnt++;
      }
    }

    cout<<cnt<<endl;
    t--;
  }
  return 0;
}