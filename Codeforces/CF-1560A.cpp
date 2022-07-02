#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int a[t],b[1000];
    for (int i = 0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    int k = 1;
    int count = 0;
    while(count<1000)
    {
        if(k%3 == 0 || k%10==3)
        {
            k++;
            continue;
        }
        else
        {
            count++;
            b[count] = k;
            k++;

        }
    }
    for(int index = 0;index<t;index++)
    {
        int x = a[index];
        printf("%d\n",b[x]);

    }

    return 0;
}

