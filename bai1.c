#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int S = 0;

    for(int i = 1; i <= n; i++){
          S += i;
    }
    printf("%d", S);

    return 0;
}