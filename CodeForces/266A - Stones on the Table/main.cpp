/*
Time Complexity O(length(string)), Space Complexity O(1)

Description: Main idea is to count number of repeated character. To do that we will keep track last character and if character is triggred,
like in RRRG at G so update last character with G. With that we will count repeation at only same neighbours stones.
Example: n= 3 s = "RRGR"
In this example after first step last character will be R so when goes to next R we will count it. Then after we triggred we will
update last character to be G and so on.
*/
#include <iostream>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    string s;
    cin>>s;
    char last_stone='a';
    for(int i=0;i<n;i++){
        if(last_stone!=s[i]){
          last_stone=s[i];
        }
        else{
          count++;
        }
    }
      cout<<count;  
    return 0;
}