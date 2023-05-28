#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,root1,root2,i;
    cout<<"Enter x^2 cofficient: ";
    cin>>a;
    cout<<"Enter x coefficient: ";
    cin>>b;
    cout<<"Enter c coefficient: ";
    cin>>c;
    d = (b*b)-(4*a*c);
    cout<<"D is "<<d<<endl;
    if(d>0)
    {
        root1= (-b + sqrt(d))/2*a;
        root2= (-b - sqrt(d))/2*a;
        cout<<"Roots are: "<<root1<<" "<<root2;
    }
    else if(d==0)
    {
        root1= -b/2*a;
        cout<<"Root is: "<<root1;
    }
    else
    {
        root1= (-b/2*a);
        i = sqrt(-d)/2*a;
        cout<<"Roots are: "<<root1<<" + "<<i<<"i";
        cout<<"Roots are: "<<root1<<" - "<<i<<"i";
    }
    return 0;
}
