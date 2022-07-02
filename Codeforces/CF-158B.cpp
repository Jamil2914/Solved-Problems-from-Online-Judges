#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n ;i++ )
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int count = 1,sum = 0;
    for (int i=0;i<n ;i++ )
    {
        if(sum+a[i]<4)
        {
            sum = sum + a[i];
        }
        else
        {
            sum = a[i];
            cout<<"i = "<<i<<endl;
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}
