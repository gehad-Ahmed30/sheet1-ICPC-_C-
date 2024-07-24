#include <iostream>

using namespace std;

int main()
{
    int x,y,z,w,q;
    cin>>x>>y>>z>>w;
    x%=100;
    y%=100;
    z%=100;
    w%=100;
    q=x*y*z*w;
    q=q%100;
    if(q<10){
        cout<<"0"<<q;
    }else{
        cout<<q;
    }

    return 0;
}
