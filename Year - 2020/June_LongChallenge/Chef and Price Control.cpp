#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int p[1000],sum=0;

        for(int i=0;i<n;i++)
        {
            cin>>p[i];
            sum += p[i];
        }

        int sum1=0;

        for(int i=0;i<n;i++)
        {
            if(p[i]>k)
                sum1 += k;
            else
                sum1 += p[i];
        }
        cout<<sum-sum1<<endl;
    }

    return 0;
}
