#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    long long S = 0;

    for(int i = 3; i <= n; i++){
        if(i % 3 == 0) S += i;
    }
    printf("%lld", S);

    return 0;
}