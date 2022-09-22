/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file : stats.c
 * @brief : An application that performs statistical analytics on a dataset
 *
 * This application analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean, and median of the data set
 *
 * @author <Aliyu Nura Salisu>
 * @date 19th september,2022
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)


unsigned char test[] = { 34, 201, 190, 154,   8, 194,   2,   6,
                            114, 88,   45,  76, 123,  87,  25,  23,
                            200, 122, 150, 90,   92,  87, 177, 244,
                            201,   6,  12,  60,   8,   2,   5,  67,
                              7,  87, 250, 230,  99,   3, 100,  90};
int i;


void print_array(unsigned char arr[]) {
  int i;
  for(i=0;i<SIZE;i++){
    printf("%d,",arr[i] );
  }
}

void max(unsigned char arr[]){
    int i,maxnum=0;
    for(i=1;i<40;i++){
      if(maxnum<arr[i]){
        maxnum=arr[i];
      }
    }
    printf("%d\n", maxnum);;
  }

void find_mean(unsigned char arr[i]){
  float sum=0;
  int i;
  for(i=0;i<SIZE;i++){
    sum += arr[i];
  }
  printf("%f\n", sum/SIZE);
}

float find_median(unsigned char arr[]){
    float median;
    median = printf("%f\n",(arr[SIZE/2]+arr[(SIZE/2)+1])/2.0);
    return median;
  }

void sort_array(unsigned char arr[]){
  int result;
  int temp = 0;
  int i;

    for (int i = 0; i < SIZE; i++) {
        for (int j = i+1; j < SIZE; j++) {
           if(arr[i] < arr[j]) {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
        }
    }
    for (int i = 0; i < SIZE; i++) {
        result = printf("%d,", arr[i]);
      }
  }



void min(unsigned char arr[]){
    int i;
      for(i=1;i<SIZE;i++){
        if(arr[0]>arr[i]){
          arr[0]=arr[i];
        }
      }
      printf("%d\n", arr[0]);;
    }
 void print_statistics() {
   printf("mean:");
   find_mean(test);
   printf("median:");
   find_median(test);
   printf("minimun number:");
   min(test);
   printf("maximum number:");
   max(test);

 }
int main()
    {
printf("Array:" );
print_array(test);
printf("\nSorted array:");
sort_array(test);
printf("\n");
print_statistics();
    return 0;
}


/* Add other Implementation File Code Here */
