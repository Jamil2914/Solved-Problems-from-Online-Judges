#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count = 0,max=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
        {
            count++;
            if(count>max)
            {
                max = count;
            }

        }
        else
        {
            count = 0;
        }
    }
    printf("%d",max+1);
}
