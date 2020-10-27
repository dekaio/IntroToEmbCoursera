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
 * @file <stats.h> 
 * @brief <Add <contains a set of functions for statistical calculations on an array on unsigned int values >
 *
 * @author <Devika Ajith>
 * @date <27.10.2020>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_statistics(unsigned char[]);
void print_array(unsigned char [], int size);
unsigned char find_median(unsigned char[], int size);
unsigned char find_mean(unsigned char[], int size);
unsigned char find_maximum(unsigned char [], int size);
unsigned char find_minimum(unsigned char [], int size);
void sort_array(unsigned char [], int size);
#endif /* __STATS_H__ */
