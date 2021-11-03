#ifndef FUNCTIONS_HEADER
#define FUNCTIONS_HEADER

/*INCLUDE LIBRARIES*/
#include <stdio.h>

/*PROTOTYPES FUNCTIONS*/
void print_name(char *name, void (*f)(char *));
void print_name_as_is(char *name);
void print_name_uppercase(char *name);


#endif /*FUNCTIONS_HEADER*/
