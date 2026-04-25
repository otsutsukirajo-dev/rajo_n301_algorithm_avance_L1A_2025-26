#include <stdio.h>
#include <limits.h>

long long puissance_lineaire_iterative(long long a, unsigned int n){
    long long resultat = 1;
    unsigned int i = 0;
    while (i < n){
        if (a != 0){   //On vérifie que la base n'est pas zéro, car diviser par zéro plus bas provoquerait un crash.
            long long abs_a = (a < 0) ? -a : a;     //On calcule la valeur absolue de a. Si a est négatif on le rend positif, sinon on le garde tel quel.Ex : a = -2 → abs_a = 2
            long long abs_r = (resultat < 0) ? -resultat : resultat;
            if (abs_r > LLONG_MAX / abs_a){
                printf("Overflow detecte a l'iteration %u !\n", i);
                return LLONG_MAX;
            }
        }
        resultat *= a;
        i++;
    }
    return resultat;
}

int main(){
    long long a;
    unsigned int n;
    printf("Entrez la base a : ");
    if (scanf("%lld", &a) != 1){
        printf("Entree invalide.\n");
        return 1;
    }
    printf("Entrez l'exposant n : ");
    if (scanf("%u", &n) != 1){
        printf("Entree invalide.\n");
        return 1;
    }
    if (a == 0 && n == 0) //On vérifie que la base et l'exposant ne sont pas tous les deux zéro, car cela est mathématiquement indéfini.
        printf("Attention : 0^0 est mathematiquement indefini (retourne 1 par convention).\n");
    long long resultat = puissance_lineaire_iterative(a, n);
    printf("Nombre d'iterations : %u\n", n);
    printf("Resultat : %lld\n", resultat);
    return 0;
}