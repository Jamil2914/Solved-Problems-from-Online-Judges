#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    int i;
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
    sort(a,a+4);
    int c = a[3] - a[0];
    int a1 = a[1] - c;
    int b = a[2] - c;
    cout<<a1<<" "<<b<<" "<<c<<endl;
    return 0;
}
