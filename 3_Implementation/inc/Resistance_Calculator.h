/**
 * @file Resistance_Calculator.h
 * @author VISHNU VARDHAN S
 * @brief Header file for Resistance Calculator
 *
 */



#include <stdio.h>
#include <stdlib.h>

/**
* @brief Series Resistance calculation using the formula Rs= R1+R2+...+Rn
* @param[in] operand1 
* @param[in] operand2 
*/
float series_resistance(int operand1[], int operand2);

/**
* @brief  parallel resistance based on the formula Rp= (1)/((1/R1)+(1/R2)+(1/R3)+...+(1/Rn))
* @param[in] operand1 
* @param[in] operand2 
*/
static  float parallel_resistance(int operand1[],int operand2)

