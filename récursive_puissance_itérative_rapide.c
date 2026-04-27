#include<stdio.h>
long long puissance_rapide(long long a, int n){
    long long result = 1;
    while (n != 0){
        if ( n % 2 ==0){  // 10 % 2 = 0    | 5 % 2 !=0  | 4 % 2 = 0      | 2 % 2 = 0         | 1 % 2 != 0
            a = a * a;   // a = 2 * 2 = 4  |            | a = 4 * 4 = 16 | a = 16 * 16 = 256 |
            n = n / 2;  // n = 10 / 2 = 5  |            | n = 4 / 2 = 2  | n = 2 /2 = 1      |
        }else{
            result = result * a;  // result = 1 * 4 = 4 | result = 4 * 256 = 1024 
            n = n - 1;           //  n = 5 - 1 = 4      |n = 1 - 1 = 0  on a n = 0 , fin du boucle while
        }
    }
    return result;  // result = 1024
}
int main(){
    printf("%lld\n", puissance_rapide(2,10)); // 1024
    return 0;
}