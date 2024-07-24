#include <iostream>

using namespace std;

int main()
{
    float x;
    cin>>x;
    int n=x;
    if(n==x){
        cout<<"int "<<n;
    }else{
        cout<<"float "<<n<<" "<<x-n;
    }
    return 0;
}
