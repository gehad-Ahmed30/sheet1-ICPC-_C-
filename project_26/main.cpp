#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c,d;
    double n1,n2;
    cin>>a>>b>>c>>d;
    n1=b*log10(a);
    n2=d*log10(c);

    if(n1>n2){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
