/*
Time Complexity O(length(string)), Space Complexity O(1)

Description: Main idea is to convert each leeter from string a and b to lower case. Then compare each character.
if < so "-1", if > "1" and if equally "0".
Example: a="abcdefg" b="AbCdEfF"
So after comparing it's "1"
*/

#include <iostream>
using namespace std;

char tolowercase(char a){
    if(a<97){
        a+='a'-'A';
    }
    
    return a;
}
int main()
{
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++){
        if(tolowercase(a[i])<tolowercase(b[i])){
            cout<<"-1";
            return 0;
        }
        else if(tolowercase(a[i])>tolowercase(b[i])){
            cout<<"1";
            return 0;            
        }
    }
    cout<<"0";
    
    return 0;
}