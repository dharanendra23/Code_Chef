#include<bits/stdc++.h>
using namespace std;

long long solve(long long x,long long y)
{
    long long num1[64],num2[64],e=0,d=0;
    while(x>0)
    {
        num1[e++]=x%2;
        x/=2;
    }
    while(y>0)
    {
        num2[d++]=y%2;
        y/=2;
    }

    long long m=e,f;
    for(f=0;f<d;f++)
    {
        num1[m++]=num2[f];
    }
    long long max1=m;
    m=d;
    for(f=0;f<e;f++)
    {
        num2[m++]=num1[f];
    }
    long long max2=m;
    long long base=1,dec1=0,dec2=0;
    for(f=0;f<max1;f++)
    {
        dec1+=(num1[f]*base);
        base*=2;
    }

    long long base2=1;
    for(f=0;f<max2;f++)
    {
        dec2+=(num2[f]*base2);
        base2*=2;
    }
    return abs(dec2-dec1);
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;

        long long a[n],i,j;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);
        long long sum1=0,sum2;
        for(i=0;i<n-1;i++)
        {
            sum2=solve(a[i],a[n-1]);
            if(sum1<sum2)
            {
                sum1=sum2;
            }
        }

        for(i=0;i<n-2;i++)
        {
            sum2=solve(a[i],a[n-2]);
            if(sum1<sum2)
            {
                sum1=sum2;
            }
        }
        cout<<sum1<<endl;
    }
    return 0;
}
