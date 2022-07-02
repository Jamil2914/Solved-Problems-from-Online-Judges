#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    scanf("%d",&t);
    int a[t],b[t],c[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
    }
    for(j=0;j<t;j++)
    {
        if(a[j]%b[j]==0)
        {
            c[j] = 0;
            printf("%d\n",c[j]);
        }
        else{
            c[j] = b[j] - (a[j] % b[j]);
            printf("%d\n",c[j]);
        }

    }



    return 0;
}


