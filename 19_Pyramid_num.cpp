//number printing in pyramid
#include<iostream>
using namespace std;
int main()
{
int n=0; 
for(int r=1; r<=5; ++r){
n=r;
    for(int c=1; c<=9; ++c){
        if(c>=6-r && c<=4+r){
            cout<<n++;
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}



    return 0;
}