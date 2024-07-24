#include <iostream>

using namespace std;

int main()
{
    int n,year,reminderday,month,day;
    cin>>n;

    cout<<n/365<<" years"<<endl;
     n=n%365;
    cout<<n/30<<" months"<<endl;
    cout<<n%30<<" days"<<endl;


    return 0;
}
