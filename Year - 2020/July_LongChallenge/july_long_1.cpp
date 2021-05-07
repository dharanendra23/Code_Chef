#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;

        long long s[n],i,sum=0;

        for(i=0;i<n;i++)
        {
            cin>>s[i];
        }

        for(i=0;i<n-1;i++)
        {
            sum+=abs((s[i+1]-s[i]))-1;
        }

        cout<<sum<<endl;
    }


    return 0;
}
