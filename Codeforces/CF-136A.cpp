#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int giftsrecievedfrom[n];
    int giftsgivento[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&giftsrecievedfrom[i]);
        int x = giftsrecievedfrom[i];
        giftsgivento[x-1]=i;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",giftsgivento[i]+1);
        printf(" ");
    }
    return 0;
}


