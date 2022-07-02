#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        if (n%10 == 0)
        {
            n = n/10;
        }

        else{
            n = n-1;
        }
    }
    printf("%d\n",n);
    return 0;
}
