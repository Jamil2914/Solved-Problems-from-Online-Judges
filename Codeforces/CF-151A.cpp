#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,minimum;
    cin>>n;
    cin>>k;
    cin>>l;
    cin>>c;
    cin>>d;
    cin>>p;
    cin>>nl;
    cin>>np;
    int a[3];
    a[0] = int((k*l)/nl);
    a[1] = c*d;
    a[2] = int(p/np);
    sort(a,a+3);
    minimum = a[0];
    cout<<minimum/n<<endl;
    return 0;
}
