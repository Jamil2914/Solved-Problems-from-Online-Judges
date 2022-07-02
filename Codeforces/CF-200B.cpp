#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float sum=0;
    scanf("%d",&n);
    int percentage[n];
    float relativepercentageperjuice;
    for (int i = 0;i < n;i++)
    {
        scanf("%d",&percentage[i]);
        int x=percentage[i];
        relativepercentageperjuice = x;
        sum = sum + relativepercentageperjuice;
    }
    float totalpercentageincocktail = sum/(n);
    printf("%f",totalpercentageincocktail);

    return 0;
}



