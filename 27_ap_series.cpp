#include <iostream>
using namespace std;
int main(){
// Arithmetic Progration Series 
// 1 , 3 , 5 , 7 , 9
int first=1;
int diff=2;
int num=5;
int term=0;
for (int i=0; i<num; ++i){
term=first+i*diff;
cout<<term;
}

}
