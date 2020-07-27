#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long num=1;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++)
            cin>>a[i];
        if(n==1)
        {
            cout<<"Case #"<<num++<<": "<<1<<endl;
            continue;
        }
        long long count1=0,max=a[0];
        for(long long i=0;i<n;i++)
        {
            if(i==0)
            {
                if(a[i]>a[i+1])
                    count1++;
            }
            else if(i==n-1)
            {
                if(a[i]>max)
                    count1++;
            }
            else if(max<a[i])
            {
                max=a[i];
                if(a[i]>a[i+1])
                    count1++;
            }
        }
        cout<<"Case #"<<num++<<": "<<count1<<endl;
    }
    return 0;
}
