#include "NumClass.h"

int power(int, int);

int isPalindrome(int num){
    int reverse = 0, temp = num;
    while(temp != 0){
        reverse = temp%10 + reverse * 10;
        temp /= 10;
    }
    if(reverse == num){
        return 1;
    }
    else{
        return 0;
    }
}
int power(int num, int power){
    int sum = 1;
    for(int i=1;i<=power;i++)
        sum*=num;
    return sum;
}
int isArmstrong(int num){
    int n = num, sum = 0, count=0;
    while(n>0){
        count++;
        n = n/10;
    }

    n = num;

    while (n>0){
        sum += power((n % 10), count);
        n = n/10;
    }

    if(num==sum){
        return 1;
    }
    return 0;
}