/*
 * some_text.c
 *
 * Contains a method that prints some text.
 *
 *  Created on: May 13, 2022
 *      Author: Johannes Schmechel
 */

#include <stdio.h>

#include "some_text.h"

/**
 * Prints some text.
 * @return int: 0
 */
int some_text(void) {

	printf("\nThis is a first C-program.\n");
	printf("\nAs you can see is 'printf' ");
	printf("not just able to print texts,\n");
	printf("but also able to compute things.\n\n");
	printf("13 * 7 = %i\n", 13 * 7);

	return 0;

}
