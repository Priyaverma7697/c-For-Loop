//right angle triangle (RAT)
#include<iostream>
using namespace std;
int main()
{
    for(int r=1; r<=5; ++r )
{
    for(int c=1; c<=5; ++c)
    {
        if(c<=r){
        cout<<"*";
        }
        
    }
   cout<<"\n"; 
}
    return 0;
}