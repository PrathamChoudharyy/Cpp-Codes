#include <iostream>
using namespace std;

int main() {
    int t,x,y,a;
    cin>>t;
    while(t!=0)
    {
        cin>>x>>y>>a;
        if(a>=x && a<y)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        t--;
    }
	return 0;
}
