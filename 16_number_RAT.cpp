//number laft angle triangle
#include<iostream>
using namespace std;
int main()
{
    for(int r=1; r<=5; ++r)
{		
    for(int c=1; c<=5; ++c)
    {
        if(c<=r)
        {
            cout<<c;    //or cout<<r;
        }
        else{
            cout<<" ";
        }
    }
    cout<<"\n";
}  

    return 0;
}