#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int maximum = a[n-1];
    int toadd,sum=0;
    for(int j=0;j<n-1;j++)
    {
        toadd = maximum - a[j];
        sum = sum + toadd;
    }
    cout<<sum<<endl;
    return 0;
}
