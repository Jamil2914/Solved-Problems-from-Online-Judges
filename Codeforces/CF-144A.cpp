#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i ,max_pos,min_pos;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maximum = *max_element(a,a+n);
    int minimum = *min_element(a,a+n);
    for(i=0;i<n;i++)
    {
        if(a[i]==maximum)
        {
            max_pos = i;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==minimum)
        {
            min_pos = i;
            break;
        }
    }
    if(max_pos>min_pos)
    {
        cout<<max_pos+n-1-min_pos-1<<endl;
    }
    if(max_pos<min_pos)
    {
        cout<<max_pos+n-1-min_pos<<endl;
    }
    return 0;
}
