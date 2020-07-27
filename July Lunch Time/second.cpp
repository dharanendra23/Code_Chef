#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n,m,x,y;
        cin>>n>>m>>x>>y;

        if(n==1 && m==1)
        {
            cout<<x<<endl;
            continue;
        }
        if((n*m)%2==0)
        {
            if(y>x)
            {
                if(y-x<x)
                    cout<<((((n*m)/2)*x)+(((n*m)/2)*(y-x)))<<endl;
                else
                    cout<<(n*m)*x<<endl;
            }
            else
              cout<<((((n*m)/2)*(y))+(((n*m)/2)*(0)))<<endl;
        }
        else
        {
            if(y>x)
            {
                if(y-x<x)
                    cout<<(((((n*m)/2)+1)*x)+(((n*m)/2)*(y-x)))<<endl;
                else
                    cout<<(n*m)*x<<endl;

            }
            else
              cout<<(((((n*m)/2)+1)*(y))+(((n*m)/2)*(0)))<<endl;
        }
    }
}
