#include <stdio.h>
 
int main(){
    int n;
    scanf("%d", &n);
    float S = 0;

    for(int i = 1; i <= n ; i++){
        S += 1.0 / (2*i);
    }
    printf("%.2f", S);

    return 0;
}