#include <stdio.h>
#include <math.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    long long S;

    S = pow(a, b);
    printf("%lld", S);

    return 0;
}