#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n,k;
        cin>>n>>k;

        long long a[n];

        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(long long i=0;i<n;i++)
        {
            if(a[i]%k==0)
                cout<<1;
            else
                cout<<0;
        }
        cout<<endl;
    }

    return 0;
}
