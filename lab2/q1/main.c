#include <stdlib.h>
#include <stdio.h>
#define MAXDIGITS 10
#include "hexToInt.h"
int main() {

    long decnum; // The converted decimal number
    char hex[MAXDIGITS]; // The hexadecimal number, CHAR ARRAY OF SIZE 10

    // The first number $A7
    hex[0] = 'A';
    hex[1] = '7';
    hex[2] = 0;
    decnum = hexToInt(hex, 3);
   
    printf("\n The decimal value of hexadecimal %s is %ld\n", hex, decnum);
    
    // A second number $C2F
    hex[0] = 'C';
    hex[1] = '2';
    hex[2] = 'F';
    hex[3] = 0;
    decnum = hexToInt(hex, 3);
    printf("\n The decimal value of hexadecimal %s is %ld\n", hex, decnum);

    // Provide 3 more test cases
    hex[0] = 'B';
    hex[1] = '7';
    hex[2] = 0;
    decnum = hexToInt(hex, 2);
    printf("\n The decimal value of hexadecimal %s is %ld\n", hex, decnum);


    hex[0] = 'C';
    hex[1] = '4';
    hex[2] = '3';
    hex[3] = '7';
    hex[4] = 0;
    decnum = hexToInt(hex, 4);
    printf("\n The decimal value of hexadecimal %s is %ld\n", hex, decnum);

    hex[0] = 'F';
    hex[1] = '4';
    hex[2] = '1';
    hex[3] = 0;

    hex[0] = 'F';
    hex[1] = '1';
    hex[2] = '1';
    hex[3] = '1';
    hex[4] = 0;
    decnum = hexToInt(hex, 4);
    printf("\n The decimal value of hexadecimal %s is %ld\n", hex, decnum);


    return 0;





}
