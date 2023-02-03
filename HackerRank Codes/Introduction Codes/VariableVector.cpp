#include <bits/stdc++.h>
using namespace std;


int main() {
    long long n, q;
    cin>>n>>q;
    vector<vector<long long>> A;
    for(long long i=0 ; i<n ; i++)
    {
        long long k ;
        cin>>k;
        vector<long long> temp;
        for(long long j=0;j<k;j++)
        {
            long long t=0;
            cin>>t;
            temp.push_back(t);
        }
        A.push_back(temp);
    }
    
    for(long long i=0 ; i<q ; i++)
    {
        long long a,b;
        cin>>a>>b;
        cout<<A[a][b]<<endl;
    }
    return 0;
}
