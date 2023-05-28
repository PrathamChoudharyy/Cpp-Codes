#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cout<<"Enter the Year: ";
    cin>>y;
    if(y%4==0)
    {
        cout<<y<<" is a Leap Year";
    }
    else if(y%100==0)
    {
        cout<<y<<" is a Leap Year";
    }
    else if(y%400==0)
    {
        cout<<y<<" is a Leap Year";
    }
    else
    {
        cout<<y<<" is not a Leap Year";
    }
    return 0;
}
