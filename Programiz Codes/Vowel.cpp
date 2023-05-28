#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a;
    cout<<"Enter the Alphabte: ";
    cin>>a;
    if(a=='A'||a=='a'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U') 
    {
        cout<<a<<" is Vowel";
    }
    else
    {
        cout<<a<<" is Consonant";
    }
    return 0;
}
