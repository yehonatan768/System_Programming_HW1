#include "NumClass.h"

int factorial(int num);

int isPrime(int num){
    if (num == 1 || num == 2) {
        return 1;
    }

    for(int i =2; i < num; i++){
        if ((num % i) == 0){
            return 0;
        }
    }
    return 1;
}

int factorial(int num){
    int factorial = 1;
    for(int i=1; i<=num; i++){
        factorial *= i;
    }
    return factorial;
}

int isStrong(int num){
    int n = num, sum = 0;
    if (num == 1) {
        return 1;
    }
    while (n > 0){
        sum += factorial((n%10));
        n = n/10;
    }
    if (sum == num){
        return 1;
    }
    return 0;
}