#include<stdio.h>
int main()
{
    int i,n;
    long long  a[1000];
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%lld", &a[i]);
    }
    for(i=n; i!=0; i--){
        printf("%lld ", a[i]);
    }
    return 0;
}