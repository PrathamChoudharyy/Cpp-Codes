#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,fact=1;
    cout<<"Enter the Number: ";
    cin>>n;
    for(int i=1 ; i<=n ; i++)
    {
        fact *= i;
    }
    cout<<"Factorial: "<<fact<<endl;
    return 0;
}
