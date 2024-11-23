//table of 2 to 10;
#include<iostream>
using namespace std;
int main()
{
    for (int n=2; n<=10; ++n){
        for(int i=1; i<=10; ++i){
            cout<<i*n;
        }
        cout<<endl;
    }
    return 0;
}