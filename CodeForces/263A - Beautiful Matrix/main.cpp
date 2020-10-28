/*
Time Complexity O(n*m), Space Complexity O(1)

Description: Main idea is to get distance from current row tow row number 3 + distance from current column to column 3.
Example: 
        0 0 0 0 0
        0 0 0 0 1
        0 0 0 0 0
        0 0 0 0 0
        0 0 0 0 0
In this example current row is 2 and current column 5. So distance column is 5-3 = 2 + distance row absolute(2-3) = 1, so solution = 3.
*/
#include <iostream>

using namespace std;

int main()
{
    int col,row,a;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a;
            if(a==1){
                col=j+1;
                row=i+1;
            }   
        }
    }
    cout<<abs(col-3)+abs(row-3);

    return 0;
}