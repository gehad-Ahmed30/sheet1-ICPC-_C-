#include <iostream>

using namespace std;

int main()
{
    int x,y;
    char s;
    cin>>x>>s>>y;
    if(x<y && s=='<'){
        cout<<"Right";
    }else if(x>y && s=='>'){
        cout<<"Right";
    }else if (x==y && s=='='){
        cout<<"Right";
    }else{
        cout<<"Wrong";
    }
    return 0;
}
