/*
 * protocol.c
 *
 *  Created on: Nov 2, 2023
 *      Author: Wael
 */

#include "protocol.h"

/*
 * Function Description:
 * 1- Initialize a boolean variable by assuming the strings are identical
 * 2- iterate through the 2 strings simultaneously
 * 3- if any character does not match ==> Break out of the loop
 * 4- return the value of the boolean variable
 */
uint8 compare_strings(uint8 str1[], uint8 str2[]){
	Boolean result = IDENTICAL;
	for(uint8 i=0; i<PASS_SIZE; i++){
		if(str1[i] != str2[i]){
			result = NOT_IDENTICAL;
			break;
		}
	}
	return result;
}
