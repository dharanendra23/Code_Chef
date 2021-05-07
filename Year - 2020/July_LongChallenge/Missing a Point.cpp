#include<bits/stdc++.h>
using namespace std;

long long counting(long long arr[], long long n)
{
    long long i,count1=1;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count1++;
        }
        else
        {
            if(count1%2!=0)
            {
                return arr[i];
            }
            else
            {
                if((i+1)==(n-1))
                  return arr[i+1];
                else
                    count1=1;
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;

        long long siz=(4*n)-1;
        long long x[siz],y[siz],i;

        for(i=0;i<siz;i++)
        {
            cin>>x[i]>>y[i];
        }

        sort(x,x+siz);
        sort(y,y+siz);

        cout<<counting(x,siz)<<" "<<counting(y,siz)<<endl;

    }

    return 0;
}
