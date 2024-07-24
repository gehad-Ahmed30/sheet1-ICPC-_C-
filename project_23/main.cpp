#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    char a,b;
    cin>>x>>a>>y>>b>>z;
    int n1=x+y;
    int n2=x-y;
    int n3=x*y;
    if(a=='+'){
            if(n1==z){
                cout<<"Yes";
            }else{
                cout<<x+y;
            }


    }else if(a=='-'){
        if(n2==z){
           cout<<"Yes";
        }
        else{
            cout<<x-y;
        }
    }else if(a=='*'){
        if(n3==z){
            cout<<"Yes";
        }
        else{
            cout<<x*y;
        }
    }
    return 0;
}
