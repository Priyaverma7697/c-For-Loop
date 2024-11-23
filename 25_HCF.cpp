//27.	HCF (Highest Common Factor) 
#include <iostream>
using namespace std;
int main() {
int lcm;
int larger=8;
int smaller=4;
int hcf;
for(int i=1; i<=smaller; ++i){
    if(larger%i==0 && smaller%i==0){
        hcf=i;
    }
}
cout<<hcf;
lcm=(larger*smaller)/hcf;
cout<<lcm;
}