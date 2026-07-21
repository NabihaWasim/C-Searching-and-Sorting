/*
Program: Duplication of array
Language: C
Author: Nabiha Wasim
Description: This program finds the duplicate element in the array
and prints its index as well.
*/
#include<stdio.h>
int main(){
    int arr[7];
    printf("Enter the number of elements of the array-\n");
    for(int i=0;i<7;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){ //nested loop starting from i+1
            if(arr[i]==arr[j]){ //if element found
                printf("Duplicate element found at position  %d and %d which is %d\n",i,j,arr[i]);
            }   // i and j are positions of duplicate elements and arr[i] is element
            
        }
        
    }
    
    return 0;
}


