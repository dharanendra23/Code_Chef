#include<iostream>
typedef unsigned long long int ull;
using namespace std;

int main()
{
    ull t;
    cin>>t;

    while(t--)
    {
        ull ts,j,i,count1=0,eve,count2=0;
        cin>>ts;

        if(ts%2!=0)
        {
            cout<<ts/2<<endl;
        }
        else
        {
            j = ts;

            while(j>1)
            {
                j /= 2;
                if((j%2)!=0)
                {
                    count2++;
                    cout<<j/2<<endl;
                    break;
                }
            }

            if(count2==0)
            {
                while(j>1)
                {
                    if(j == 2)
                    {
                       cout<<count1<<endl;
                       break;
                    }
                    j /= 2;
                }
            }

        }

    }

    return 0;
}


