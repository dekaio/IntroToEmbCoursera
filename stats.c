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
 * @file <Stats.c> 
 * @brief <Given an array performs a set of statistical calculations and displays the result >
 *
 * @author <Devika>
 * @date <27.10.2020 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  sort_array(test, SIZE);
 // print_array(test, SIZE);
}
void print_statistics(unsigned char arr[]){
	printf("Minimum is %u\n",find_minimum(arr, SIZE));
	printf("Maximum is %u\n",find_maximum(arr, SIZE));
	printf("Mean is %u\n",find_mean(arr, SIZE));
	printf("Median is %u\n",find_median(arr, SIZE));
}
void print_array(unsigned char arr[], int size){
	for (int i=0;i<size;i++){
		if (arr[i])
			printf("%u,",arr[i]);
	}
}
unsigned char find_median(unsigned char arr[], int size){
	unsigned char median = -1;
	if (size%2!=0){
		median = arr[size%2];
	}
	else{
		median = (arr[size%2] + arr[size%2+1])/2; 
	}
	return median;
}
unsigned char find_mean(unsigned char arr[], int size){
	unsigned char sum = 0;
	for (int i=0;i<size;i++){
		sum +=arr[i];
	}
	return sum/size;
}
unsigned char find_maximum(unsigned char arr[], int size){
	unsigned char max = -1;
	for (int i=0;i<size;i++){
		if (arr[i]>max) max = arr[i];
	}
	return max;
}
unsigned char find_minimum(unsigned char arr[], int size){
	unsigned char max = -1;
	for (int i=0;i<size;i++){
		if (arr[i]<max) max = arr[i];
	}
	return max;
}
void sort_array(unsigned char arr[], int size){
	unsigned char temp;
	for (int i=0;i<size;i++){
		for (int j=0;j<size-i;j++){
			if (arr[j]<arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;	
			}
		}
	}
	print_array(arr, SIZE);
}
