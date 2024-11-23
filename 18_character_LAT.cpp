//character printing in LAT
#include<iostream>
using namespace std;
int main()
{
char ch='a';
for(int r=1; r<=5; ++r){
    for(int c=1; c<=5; ++c){
        if(c>=6-r){		
            cout<<ch;
        }
        else{
            cout<<" ";
        }
    }
    ch++;
    cout<<endl;
}
    return 0;
}
