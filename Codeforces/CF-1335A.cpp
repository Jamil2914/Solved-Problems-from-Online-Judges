#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=0;
    cin>>t;
    int a[t];
    for(int i = 0;i<t;i++)
    {
        cin>>a[i];
    }
    for(int i = 0;i<t;i++)
    {
        int alice = a[i];
        int betty = 0;
        if(a[i]<=2)
        {
            count=0;
            cout<<count<<endl;
        }
        else if(a[i]%2==0)
        {
            count = (a[i]/2)-1;
            cout<<count<<endl;
        }
        else
        {
            count = (a[i]/2);
            cout<<count<<endl;
        }
    }
    return 0;
}
