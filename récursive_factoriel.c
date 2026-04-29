#include<stdio.h>

long long factorielle(int n){
    if ( n ==0 ) // condition terminale
        return 1;
    else
        return n * factorielle(n - 1);
}

int main(){
    int n = 10;
    printf("%d! = %lld\n", n, factorielle(n)); // Affiche 10! = 3628800
    return 0;
}