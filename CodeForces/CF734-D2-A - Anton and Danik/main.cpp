/*
Time Complexity O(n), Space Complexity O(1)

Description: Main idea is to find who win the series of games Anton or Danik given string that describe who won the ith game.
So to make this we will count numbers of 'A''s and number of 'D''s sepratly andf compare them.

Example: n=6 "ADAAAA"
In this example we have 4 A's and 1 D so anton counter > Danik so anton win
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int anton_games=0;
    int danik_games=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            anton_games++;
        }
        else{
            danik_games++;
        }
    }
    
    if(anton_games>danik_games){
        cout<<"Anton";
    }
    else if(danik_games>anton_games){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }

    return 0;
}
