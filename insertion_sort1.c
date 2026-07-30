/*
Program: Insertion sort of array
Language: C
Author: Nabiha Wasim
Description: This program sort(ascending order) the array by using insertion
sort method and temp variable to swap elements .  
*/
#include<stdio.h>
int main(){
    int arr[6]={7,3,8,2,4,10};
    int n;
    printf("Unsorted array is- ");
    for(int i=0;i<6;i++){
       printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Sorted array is- ");
    for(int i=1;i<6;i++){    //Sorting by insertion method
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){     //while loop when number of iteraratons are uncertain
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;     //decrementing the index of j
        }
    }
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}
