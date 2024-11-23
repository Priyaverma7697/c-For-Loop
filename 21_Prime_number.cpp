//prime number
#include<iostream>
using namespace std;
int main()
{
int a;
int counter=0;
cout<<"enter value of a = ";
cin>>a;
for (int i=1; i<=a; ++i){
    if(a%i==0){
        ++counter;
    }
}
if (counter==2){
    cout<<"Prime number";
}
else{
    cout<<"not a prime number";
}

    return 0;
}