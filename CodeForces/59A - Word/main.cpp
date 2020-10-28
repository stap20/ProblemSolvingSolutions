/*
Time Complexity O(length(string)), Space Complexity O(1)

Description: Main idea is to count number of lowercase character and uppercase character sperately. Then compare them and use 
tolower or toupper function.
Example: a="HoUse"
In this example we after counting lowerase and upper case we will see lowercase > uppercase. So use to lowecase 
*/

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    int lower=0,upper=0;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a'){
          lower++;
        }
      else{
        upper++;
      }
    }
  
  if(upper>lower){
    transform(s.begin(), s.end(),s.begin(), ::toupper);
    cout<<s;
  }
  else{
    transform(s.begin(), s.end(),s.begin(), ::tolower);
    cout<<s;
  }    
    return 0;
}