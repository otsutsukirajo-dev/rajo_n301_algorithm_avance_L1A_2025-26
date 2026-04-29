#include<stdio.h>

long long factorielle_iterative(int n){
    long long res = 1;
    int i = 2;
    while ( i <= n ){
        res *= i;
        i++;
    }
    return res;
}
int main(){
    int n = 10;
    printf("%d! = %lld\n", n , factorielle_iterative(n)); // Affiche 10! = 3628800
    return 0;
} 