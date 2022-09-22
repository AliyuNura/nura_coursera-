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
 * @file stats.h
 * @brief Header file for stats.c
 *
 * This is a header file that include declarations and documentation for the functions from the stats.c file
 *
 * @author Aliyu Nura Salisu
 * @date 19th september,2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */
void print_array(unsigned char arr[]);

/**
 * @brief <This is a funtion that prints an array>
 *
 * @param <arr[]> <array of unsigned char>
 * @param <i> <an integer>
 * @return <an Array>
 */

 /* Add Your Declarations and Function Comments here */
 void find_mean(unsigned char arr[]);

 /**
  * @brief <This is a funtion that takes a funtion and return itd mean>
  *
  * @param <arr[]> <array of unsigned char>
  * @param <sum> <sum of the content of the array>
  * @param <i> <an integer>
  * @return <mean>
  */


  /* Add Your Declarations and Function Comments here */
  float find_median(unsigned char arr[]);

  /**
   * @brief <This is a funtion that return a median of an array>
   *
   * @param <arr[]> <array of unsigned char>
   * @param <median> <float number for median value>
   * @return <median of an Array>
   */


   /* Add Your Declarations and Function Comments here */
   void sort_array(unsigned char arr[]);

   /**
    * @brief <This is a funtion that sort an array in decending order>
    *
    * @param <arr[]> <array of unsigned char>
    * @param <i> <aan integer>
    * @param <result> <sorted array>
    * @param <temp> <initiallisation>
    *
    * @return <sorted array>
    */



    /* Add Your Declarations and Function Comments here */
    void max(unsigned char arr[]);

    /**
     * @brief <This is a funtion that returns the max number in an array>
     *
     * @param <arr[]> <array of unsigned char>
     * @param <i> <integer>
     * @return <max nuber in an array>
     */

     /* Add Your Declarations and Function Comments here */
     void min(unsigned char arr[]);

     /**
      * @brief <This is a funtion that returns the max number in an array>
      *
      * @param <arr[]> <array of unsigned char>
      * @param <i> <integer>
      * @return <min number in an array>
      */


      /* Add Your Declarations and Function Comments here */
      void print_statistics();

      /**
       * @brief <A function that prints the mean,medin,max and min of an array>
       *
       * @param <arr[]> <array of unsigned char>
       * @param <i> <integer>
       * @return <max,min,mean and median>
       */







#endif /* __STATS_H__ */
