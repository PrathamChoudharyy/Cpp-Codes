#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	while(t)
	{
	    cin>>x;
	    if(x-24>0)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	    t--;
	}
	return 0;
}
