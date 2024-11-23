// number row and column increasing LAT
#include <iostream>
using namespace std;		
int main() {
    int n=0;
    for(int r=1; r<=5; ++r)
{
    for(int c=1; c<=r; ++c)			
    {
        ++n;
        cout<<" "<<n;
    }
    cout<<"\n";
} 
}
