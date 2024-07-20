#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int count = 0;

    while(n){
        n /= 10; // tách số hạng hàng đơn vị
        ++count;
    }
    printf("%d", count);

    return 0;
}