#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if (array[i]==1)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("EASY\n");
    }
    else
    {
        printf("HARD\n");
    }
    return 0;
}

