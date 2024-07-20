#include <stdio.h>
#include <math.h>

int main(){
    long long n;
    scanf("%lld", &n);
    int S = 0;

    while(n){
        S += n % 10;  // cộng từ số hàng đơn vị vào S
        n /= 10;   // tách số hàng đơn vị
    }
    printf("%d", S);

    return 0;
}