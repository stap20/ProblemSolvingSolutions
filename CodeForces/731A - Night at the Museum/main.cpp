/*
Time Complexity O(length(s)), Space Complexity O(1)

Description: Main idea is to count minimum total number of steps that we can with it print string using machine. So to do that
we will select minimum between right distance and left distance. we can get right distance using substract curr char from distanation,
and left distance using 26 - right distance that get opposite distance which mean left distance.

Example: n= "zeus" ptr="a"
In this example to go to z character we have two ways right and left distance. right distance her will be abs(z-a) = 26. For left distance
will be 26 - abs(z-a) = 1, so 1 less than 25 so we will select 1 and so on.
*/
#include <iostream>
using namespace std;

int main()
{
    int sum=0;
    string s;
    char ptr='a';
    cin>>s;
    for(int i=0;i<s.length();i++){
        sum+=min(abs(s[i]-ptr),26-abs(s[i]-ptr));
        ptr=s[i];
    }
      cout<<sum;  
    return 0;
}