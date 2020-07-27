#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    int num=1;
    while(t--)
    {
        int n,b;
        cin>>n>>b;

        int a[n],count1=0,i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(b>=a[i])
            {
                b-=a[i];
                count1++;
            }
            else
            {
                break;
            }
        }
        cout<<"Case #"<<num++<<": "<<count1<<endl;
    }

    return 0;
}
