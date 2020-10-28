/*
Time Complexity O(n), Space Complexity O(1)

Description: Main idea is to find the number of problems they can solve. We decide it's can be solved if two of them sure about it.
Because we have input 0 for not sure and 1 if sure, so i can sum them and check if it's greater than 2 or not, if it's greater than 2
so it can be solved and we will increament problem_solve_counter.
Example: n=3  a b c
              1 1 0
              1 1 1
              1 0 0
In this example for first problem we have two of them sure about it. So we will increament problem counter
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,b,c,count=0;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a+b+c>=2){
            count++;
        }
    }
    
    cout<<count;

    return 0;
}