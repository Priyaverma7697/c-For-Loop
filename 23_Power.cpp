//power
#include <iostream>
using namespace std;
int main() {
int a;
int b;
int power=1;
cout<<"enter value and its power = ";
cin>>a>>b;
for (int i=1; i<=b; ++i){
   power=power*a;
}
cout<<power;
}
