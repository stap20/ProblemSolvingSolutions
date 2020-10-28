#include <iostream>
using namespace std;

int main()
{
    int sum=0;
    int a[4];
    string s;
    for(int i=0;i<4;i++)
      cin>>a[i];
    
    cin>>s;
    for(int i=0;i<s.length();i++){
        sum+=a[(s[i]-'0')-1];
    }
      cout<<sum;  
    return 0;
}