#include <iostream>

using namespace std;

int main()
{
    char s;
    short b;
    int a;
    int x;
    cin>>a>>s>>b;
    if(s=='*'){
        x=a*b;
        cout<<x;
    }else if(s=='/'){
        x=a/b;
        cout<<x;
    }else if(s=='+'){
        x=a+b;
        cout<<x;
    }else {
        x=a-b;
        cout<<x;
    }


    return 0;
}
