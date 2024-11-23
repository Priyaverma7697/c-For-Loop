//ASCII Value

#include<iostream>
using namespace std;
int main()
{
    for(int number; number='a'; number)
{
    cout<<number;
     break;	
}
// -------------------------------------------------
for(char letter; letter=112; letter)
{
    cout<<letter;
    break;	
}
// ----------------------------------------------------------
for(char ch='a'; ch<='z'; ++ch ){
    cout<<"ASCII Value is:"<<ch<<"="<<int(ch)<<endl;
}
// ----------------------------------------------------

    return 0;
}
// -----------------------------------------------------
