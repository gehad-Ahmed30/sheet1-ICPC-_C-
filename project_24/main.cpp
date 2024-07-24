#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int l1,l2,r1,r2,l,r;
    cin>>l1>>r1>>l2>>r2;
    l=max({l1,l2});
    r=min({r1,r2});

    if(l>r){
        cout<<"-1";
    }else{
        cout<<l<<" "<<r;
    }

    return 0;
}
