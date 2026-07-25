/*
Program: To find the elements from sorted array whose sum is desired number
Language: C
Author: Nabiha Wasim
Description: This program finds the elements from array using two pointers
and keeping big O notation 0(n).
*/
#include<stdio.h>
int main(){
    int target_no,n,found=0;
    printf("Enter no of elements of array-");
    scanf("%d",&n);
    int arr[n];
    printf("Enter target number whose sum u want-");
    scanf("%d",&target_no);
    printf("Enter elemnts of array in sorted way-");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0, j=n-1;i<j;){
        //if sum of element at i and j give target number then print it direcly
        if(arr[i]+arr[j]==target_no){
            printf("Elemets found : %d and %d \nAt Position %d and %d",arr[i],arr[j],i,j);
            found=1;
            break;
        }
        //if sum is greater then target then j moves towards i and
        //i remain at same previous  position
        if(arr[i]+arr[j]>target_no){
            j--;  //decrementing j
        }
        //if sum is greater then target then j moves towards i and
        //i remain at same previous  position
        if(arr[i]+arr[j]<target_no){
            i++;  //incremwnting i
        }
    }
    //if no two any elemts found
    if(found==0){
        printf("NO elements found as numbers in array are very small");
    }
    
    return 0;
}