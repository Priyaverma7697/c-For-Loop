//perfect number 
#include <iostream>
using namespace std;
int main() {
   int a;
   int sum=0;
   cout<<"enter value of a = ";
   cin>>a;
   for(int i=1; i<a; ++i)
   {
       if(a%i==0){
           sum=sum+i;
       }
    //   1,2,3 = 6
   }
   if(a==sum){
       cout<<"perfect number";
   }
   else{
       cout<<"not a perfect number";
   }
    return 0;
}
