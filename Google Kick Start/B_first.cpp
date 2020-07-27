#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    int num=1;
    while(t--)
    {
        int n;
        cin>>n;

        int h[n],i,count1=0;
        for(i=0;i<n;i++)
        {
            cin>>h[i];
        }

        for(i=1;i<n-1;i++)
        {
            if(h[i]>h[i-1] && h[i]>h[i+1])
            {
                count1++;
            }
        }

        cout<<"Case #"<<num++<<": "<<count1<<endl;
    }

    return 0;
}
