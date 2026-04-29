#include<stdio.h>

long long puissance_rapide_iterative(long long a, int n){
    long long resultat = 1;
    while ( n > 0 ) {
        if (n % 2 == 1) { // Si n est impair
            resultat *= a;
        }
        a *= a; // a devient a^2
        n /= 2; // n devient n/2
    }
    return resultat;
}
int main(){
    long long a ;
    int n;
    printf("Entrez le nombre a : " );
    scanf("%lld", &a);
    printf("Entrez l'exposant n : " );
    scanf("%d", &n);
    printf("Le resultat est : %lld\n", puissance_rapide_iterative(a, n));
    return 0;
}