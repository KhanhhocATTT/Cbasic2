#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    long long S = 0;

    for(int i = 1; i <+ n; i++){
        S += 2*n;
    }
    printf("%lld", S);

    return 0;
}