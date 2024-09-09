#include<stdio.h>

// prototype of sum_array function
int sum_array(int x, int arr[]);

// main function
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int sum = sum_array(n, arr);

    printf("Sum in main: %d\n",sum);
}

// function to get sum of values in an array
int sum_array(int x, int arr[]){
    int sum = 0;
    for (int i=0;i<x;i++){
        sum += arr[i];
    }
    printf("Sum in function: %d\n",sum);

    return sum;
}