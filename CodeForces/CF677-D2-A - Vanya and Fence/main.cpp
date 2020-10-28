/*
Time Complexity O(n), Space Complexity O(1)

Description: Main idea is to find the minimum possible valid width of the road so we variable sum that accumulate width so far.
We will check if ai is < h so sum+=1 else sum+=2
Example: n=3 h=7 a=[4 5 14]
In this example for first person 4<7 so sum+=1, Second one is 5 also < 7 sum+=1, and last one 14 > 7 so sum+=2
and final result is 4
*/

#include <iostream>

using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int sum=0;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>h){
            sum+=2;
        }
        else{
            sum+=1;
        }
    }
    
    cout<<sum;

    return 0;
}
