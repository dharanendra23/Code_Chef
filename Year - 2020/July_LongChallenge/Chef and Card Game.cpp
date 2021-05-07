#include<iostream>
using namespace std;

inline long long digits(long long d)
{
    long long sum=0;
    while(d>0)
    {
        sum += d%10;
        d/=10;
    }

    return sum;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        long long a,b,dig1,dig2,count1=0,count2=0;

        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            dig1=digits(a);
            dig2=digits(b);
            if(dig1>dig2)
            {
                count1++;
            }
            else if(dig1<dig2)
            {
                count2++;
            }
            else if(dig1==dig2)
            {
                count1++;
                count2++;
            }
        }

        if(count1==count2)
        {
            cout<<2<<" "<<count1<<" ";
        }
        else if(count1>count2)
        {
            cout<<0<<" "<<count1<<" ";
        }
        else
        {
            cout<<1<<" "<<count2<<" ";
        }
        cout<<endl;

    }

    return 0;
}
