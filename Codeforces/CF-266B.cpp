#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    scanf("%d",&n);
    scanf("%d",&t);
    char str[n];
    for(int q=0;q<n;q++)
        {
            scanf("%s",&str[q]);
        }
    for(int i=0;i<t;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(str[j]=='B' && str[j+1]=='G')
                {
                    swap(str[j],str[j+1]);
                    j++;
                }
            }
        }
    for(int q=0;q<n;q++)
        {
            printf("%c",str[q]);
        }

    return 0;
}
