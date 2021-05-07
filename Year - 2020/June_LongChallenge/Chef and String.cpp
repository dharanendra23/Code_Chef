#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        int i=0,count1=0;
        while(s[i+1] != '\0')
        {
            if((s[i]=='x' && s[i+1]=='y') || (s[i]=='y' && s[i+1]=='x'))
            {
                count1++;
                s[i]=0;
                s[i+1]=0;
            }
            i++;
        }

        cout<<count1<<endl;
    }

    return 0;
}
