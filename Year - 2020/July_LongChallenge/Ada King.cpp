#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int k;
        cin>>k;

        if(k%8==0)
        {
            for(int i=1;i<=8;i++)
            {
                for(int j=1;j<=8;j++)
                {
                    if(i==1 && j==1)
                        cout<<"O";
                    else if(i==(k/8)+1)
                    {
                        cout<<"X";
                    }
                    else
                        cout<<".";

                }
                cout<<endl;
            }
        }
        else
        {
            int row=(k/8)+1;
            if(row%2!=0)
            {
                for(int i=1;i<=8;i++)
                {
                    for(int j=1;j<=8;j++)
                    {
                        if(j==1 && i==1)
                            cout<<"O";
                        else if(i==row)
                        {
                            if(row==1)
                            {
                               if(j-1==(k%8))
                                  cout<<"X";
                               else
                                  cout<<".";
                            }
                            else
                            {
                                if(j>(k%8))
                                    cout<<"X";
                                else
                                    cout<<".";
                            }
                        }
                        else if(i==(row+1))
                        {
                            if(j<=((k%8)+1))
                                cout<<"X";
                            else
                                cout<<".";
                        }
                        else
                            cout<<".";
                    }
                    cout<<endl;
               }
            }
            else
            {
                for(int i=1;i<=8;i++)
                {
                    for(int j=1;j<=8;j++)
                    {
                        if(i==1 && j==1)
                            cout<<"O";
                        else if(i==row)
                        {
                            if(j<((1)+((i*8)-k)))
                                cout<<"X";
                            else
                                cout<<".";
                        }
                        else if(i==(row+1))
                        {
                            if(j>=(((1)+(((i-1)*8)-k))-1))
                                cout<<"X";
                            else
                                cout<<".";
                        }
                        else
                            cout<<".";
                    }
                    cout<<endl;
                }
            }
        }
    }

    return 0;
}
