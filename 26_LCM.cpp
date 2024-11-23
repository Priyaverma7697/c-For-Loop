//	LCM  (Lowest Common Factor) 
#include<iostream>
using namespace std;
int main()
{
    int larger=24;
int smaller=16;
int hcf,lcm;
for(int i=larger; ; i=i+larger){
    if(i%larger==0 && i%smaller==0){
        lcm=i;
        break;
    }
}
cout<<lcm;
    return 0;
}
