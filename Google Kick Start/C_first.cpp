#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    long long num=1;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;

        long long a[n],i,j,count1=0,count2=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(i=0;i<n-1;i++)
        {
            if(a[i]==k && n-i>=k)
            {
                for(j=i;j<i+k-1;j++)
                {
                    if((a[j]-1)!=a[j+1])
                    {
                        count1++;
                        break;
                    }
                }
                if(count1==0)
                {
                    count2++;
                    i=j;
                }
                else
                {
                    count1=0;
                }
            }
        }

        cout<<"Case #"<<num++<<": "<<count2<<endl;
    }
}
