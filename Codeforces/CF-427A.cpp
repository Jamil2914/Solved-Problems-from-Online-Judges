#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int CU=0,PA=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j = 0; j<n; j++)
    {
        if(PA + a[j]<0)
        {
            CU++;
        }
        else
        {
            PA=PA+a[j];
        }
    }
    printf("%d",CU);
    return 0;
}
