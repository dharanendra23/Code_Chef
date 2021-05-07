#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int odd=1,eve=2,a[n+1][n+1];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i%2!=0)
                {
                    if(j%2!=0)
                    {
                        a[i][j]=odd;
                        odd+=2;
                    }
                    else
                    {
                        a[i][j]=eve;
                        eve+=2;
                    }
                }
                else
                {
                    if(j%2!=0)
                    {
                        a[i][j]=eve;
                        eve+=2;
                    }
                    else
                    {
                        a[i][j]=odd;
                        odd+=2;
                    }
                }
            }
        }

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
