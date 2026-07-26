/*
Program: Selection sort of array
Language: C
Author: Nabiha Wasim
Description: This program sort(ascending order) the array by using slection
sort method and temp variable to swap elements .  
*/
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[10]={6,2,9,10,13,7,1,2,5,8};
    printf("Unsorted array is -\n");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++){
        int min=INT_MAX;
        int minindex=-1;
        for(int j=i;j<10;j++){
            if(min>arr[j]){
                min=arr[j];
                minindex=j;
             }  
         }
         int temp=arr[minindex];
            arr[minindex]=arr[i];
            arr[i]=temp;
    }
    printf("Sorted array is -\n");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}