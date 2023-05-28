#include<bits/stdc++.h>
using namespace std;

void max_number(int a,int b,int c)
{
    if(a>b && a>c)
    {
        cout<<a;
    }
    else if(b>a && b>c)
    {
        cout<<b;
    }
    else
    {
        cout<<c;
    }
}


int main()
{
    int a,b,c;
    cout<<"Enter the three Number: ";
    cin>>a>>b>>c;
    max_number(a,b,c);
    return 0;
}
