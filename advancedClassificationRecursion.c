#include "NumClass.h"
 
int armCheckRec(int, int);
int getNumLength(int);
int power(int, int);
int palCheckRec(int, int, int);


int palCheckRec(int num, int temp, int sum){
    if(temp != 0){
        sum = sum *10 + temp%10;
        palCheckRec(num,temp/10,sum);
    }
    else if(sum == num)
        return 1;
    else
        return 0;
}
int isPalindrome(int num){
    return palCheckRec(num, num, 0);
}

int power(int num, int power){
    int sum = 1;
    for(int i=1;i<=power;i++)
        sum*=num;
    return sum;
}

int getNumLength(int num){
    int counter = 0;
    while (num != 0){
        num /= 10;
        counter++;
    }
    return counter;
}

int armCheckRec (int num, int num_len){
    if(num==0)
        return 0;
    return power(num%10, num_len) + armCheckRec(num/10, num_len);
}

int isArmstrong(int num){
    if (armCheckRec(num, getNumLength(num)) == num)
        return 1;
    else
        return 0;
}
