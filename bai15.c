#include <stdio.h>
#include <math.h>

int main(){
    long long n;
    scanf("%lld", &n);
    int odd = 0;
    int even = 0;

    while(n){
        int r;
        r = n % 10;
        if(r % 2 == 0){
            ++even;
        }
        else{
            ++odd;
        }
        n /= 10;
    }
    printf("%d %d", even, odd);

    return 0;
}