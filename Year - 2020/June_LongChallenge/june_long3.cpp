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

        int a[n],five=0,ten=0,fifteen=0,count1=0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n;i++)
        {
            if(i==0 && a[i] != 5)
            {
                count1++;
                cout<<"NO"<<endl;
                break;
            }
            if(a[i]==5)
                five++;

            else if(a[i]==10)
                ten++;

            else
                fifteen++;

            if(a[i]==10)
            {
                if(five>=1)
                  five--;
                else
                {
                    count1++;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            else if(a[i]==15)
            {
                if(ten>=1)
                    ten--;
                else if(five>=2)
                    five -= 2;
                else
                {
                    count1++;
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }
        if(count1==0)
            cout<<"YES"<<endl;
    }

    return 0;
}
