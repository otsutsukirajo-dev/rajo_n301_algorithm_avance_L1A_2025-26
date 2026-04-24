#include<stdio.h>
int count = 0;
unsigned int puissance_rapide(unsigned int x, unsigned int n){
    if(n == 0){
        printf("return 1\n");
        count ++;
        return 1;
    }
    else if(n % 2 == 0){
        count ++;
        int temp = puissance_rapide(x, n/2);
        printf("%u ^ %u = (%u ^ %u)*(%u ^ %u)",x,n,x,n/2,x,n/2);
        printf("Avec %u ^ %u = %u\n",x,n/2,temp);
        return temp * temp;
    }
    else if(n % 2 == 1){
        count ++;
        int temp = puissance_rapide(x, (n-1)/2);
        printf("%u ^ %u = %u x (%u ^ %u) * (%u ^ %u)\n",x,n,x,x,(n-1)/2,x,(n-1)/2);
        printf("Avec %u ^ %u = %u\n",x,(n-1)/2,temp);
        return x * temp * temp;;
    }else{
        //code d'erreur
        return -1;
    }
}
int main(){
    unsigned int x, n;
    printf("Entrez la base x : ");
    scanf("%u", &x);
    printf("Entrez l'exposant n : ");
    scanf("%u", &n);
    unsigned int resultat = puissance_rapide(x, n);
    printf("Donc, %u ^ %u = %u\n", x , n , resultat);
    printf("Nombre d'appels recursifs : %d\n", count);
    if(resultat ==0 && x !=0){
        printf("Attention : le résultat est trop grand pour être stocké dans une variable de type unsigned long long.\nLe résultat est probablement un overflow");
    }
    return 0;
}