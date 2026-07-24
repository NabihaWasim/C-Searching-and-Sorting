/*
Program: Duplicate number in array
Language: C
Author: Nabiha Wasim
Description: This program finds the duplicate element in the array
by using sum operation and prints its index as well.
*/
#include<stdio.h>
int main(){
    int duplicate_no;
    int n=3, arr[4]={1,2,3,3};
    int sum1=0,sum2=0;
    //printf("enter array:");
    for(int i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<4;i++){
        sum1=sum1+arr[i];
        
    }
    //formula to find the sum of n integers
    sum2=n*(n+1)/2;
    //difference between sum1 and sum2 will give the duplicate number
    if(sum1==sum2){
        printf("no duplicate number");
    }
    duplicate_no=sum1-sum2;
    printf("Duplicate number is: %d",duplicate_no);
    return 0;
}    