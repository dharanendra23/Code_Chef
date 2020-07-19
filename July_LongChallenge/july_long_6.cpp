#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n,x;
        cin>>n>>x;

        long long a[n],i,count1=0;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);

        long long j,maxima[n];

        for(i=0;i<n;i++)
        {
            maxima[i]=a[i];
        }

        if(x>=a[n-1])
        {
            cout<<n<<endl;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(x>a[i])
                {
                    if((a[i]*2)>=x)
                    {
                        count1++;
                        x=a[i];
                        a[i]=0;
                        x*=2;
                    }
                    else
                    {
                        count1++;
                        continue;
                    }
                }
                else
                {
                    break;
                }
            }

            for(j=i;j<n;j++)
            {
                if(j==n-1)
                {
                    while(x<a[j])
                    {
                        count1++;
                        a[j]-=x;
                        if(a[j]*2>=maxima[j])
                        {
                            a[j]=maxima[j];
                        }
                        else
                        {
                            a[j]*=2;
                        }
                        x*=2;
                    }
                    if(x>=a[j])
                      count1++;
                }
                else
                {
                    if(x==a[j])
                    {
                        count1++;
                        a[j]=0;
                        x*=2;
                    }
                    else if(x<a[j])
                    {
                        while(x<maxima[j])
                        {
                            if((a[j]-x)>=(maxima[j]/2))
                            {
                                count1++;
                                a[j]-=x;
                                a[j]=maxima[j];
                                x*=2;
                            }
                            else
                            {
                                count1++;
                                a[n-1]-=x;
                                if((a[n-1]*2)>=maxima[n-1])
                                {
                                    a[n-1]=maxima[n-1];
                                }
                                else
                                {
                                    a[n-1]*=2;
                                }
                                x*=2;
                            }
                        }
                        if(x>=a[j])
                        {
                            count1++;
                            x=a[j];
                            a[j]-=x;
                            x*=2;
                        }
                    }
                    else
                    {
                        if((a[j]*2)>=x)
                        {
                            count1++;
                            x=a[j];
                            a[j]-=x;
                            x*=2;
                        }
                        else
                        {
                            count1++;
                            continue;
                        }
                    }
                }
            }
            cout<<count1<<endl;
        }

    }

    return 0;
}
