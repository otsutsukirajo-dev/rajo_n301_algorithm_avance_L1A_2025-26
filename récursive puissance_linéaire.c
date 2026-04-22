#include<stdio.h>
#include<stdlib.h>
unsigned int count = 0;
unsigned long long puissance_lineaire(unsigned long long x, unsigned long long n){
    printf("Appel %llu^%llu\n",x,n);
    if(n==0){
        printf("return 1\n");
        count++;
        return 1;
    }else{
        count++;
        printf("%llu^%llu = %llu x %llu^%llu\n",x,n,x,x,(n-1));
        return x*puissance_lineaire(x,n-1);
    }
}
int main(){
   unsigned long long x,n,s;
    printf(" \n");
    printf("Entrez la base :");
    scanf("%llu",&x);
    printf("Entrez l'exposant :");
    scanf("%llu",&n);
    s = puissance_lineaire(x,n);
    printf("%llu^%llu=%llu\nNombre d'appels récursifs:%u\n",x,n,s,count);
    if(s ==0 && x !=0){
        printf("Attention : le résultat est trop grand pour être stocké dans une variable de type unsigned long long.\nLe résultat est probablement un overflow");
    }
    printf(" ");
    return 0;
}