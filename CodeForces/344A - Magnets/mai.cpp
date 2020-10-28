/*
Time Complexity O(length(string)), Space Complexity O(1)

Description: Main idea is to count number of flips in magnets or we can say trigger in sequence and make it + 1.
Example: n=6
        10
        10
        10
        01
        10
        10
In this example we have 2 triggers so solution is 3
*/

#include <iostream>
using namespace std;

int main()
{
    string mag;
    int n,count=1;
    char last_r_pole;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>mag;
      if(mag[0]==last_r_pole){
        count++;
      }
      last_r_pole=mag[1];
    }
      cout<<count;  
    return 0;
}