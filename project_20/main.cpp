#include <iostream>


using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x<=y && x<=z){
        cout<<x<<endl;
        if(y<=z){
            cout<<y<<"\n"<<z<<endl;
        }else{
            cout<<z<<"\n"<<y<<endl;
        }
    }else if(y<=x && y<=z){
        cout<<y<<endl;
        if(x<=z){
            cout<<x<<"\n"<<z<<endl;

        }else{
            cout<<z<<"\n"<<x<<endl;
        }
    }else if(z<=x && z<=y){
        cout<<z<<endl;
        if(x<=y){
            cout<<x<<"\n"<<y<<endl;
        }else{
            cout<<y<<"\n"<<x<<endl;
        }
    }
    cout<<endl;
    cout<<x<<"\n"<<y<<"\n"<<z<<endl;

    return 0;
}
