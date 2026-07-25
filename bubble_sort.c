/*
Program: Bubble sort of array
Language: C
Author: Nabiha Wasim
Description: This program sort(ascending order) the array by using bubble
sort method and temp variable to swap elements.
*/
#include<stdio.h>
int main(){
    int n,temp;
    printf("Enter no of elemnts in array-");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array(unsorted)-");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //if n elements then n-1 passes are present
    //beginning of bubble sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    printf("Sorted array is- ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}