#include <stdio.h>
#include <math.h>

int Prime(int n){
    if(n > 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
    long long n;
    scanf("%lld", &n);
    int count = 0;

    while(n){
        int r;
        r = n % 10;
        if(Prime(r) == 1){
            ++count;
        }
    }
    printf("%d", count);

    return 0;
}