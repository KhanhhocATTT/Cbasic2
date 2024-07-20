#include <stdio.h>
#include <math.h>

int main(){
    long long n;
    scanf("%lld", &n);
    int S1 = 0;
    int S2 = 0;

    while(n){
        int r;
        r = n % 10;
        if(r % 2 == 0){
            S1 += r;
        }        
        else{
            S2 += r;
        }
        n /= 10;
    }
    printf("%d %d", S1, S2);

    return 0;
}