#include <stdio.h>
#include <conio.h>
#include <windows.h>


/*
    @author : OfficiallyEra
    Date : 27th of August 2024
    update : 0 time(s)
    FileId : 02
*/


int main()
{
    /*
    There are different types of datatypes some of them includes : 
    1.int       | This holds whole numbers like (1, 2, 3, 4, 5, 6,....)
    2.float     | This holds decimal numbers like (1.1, 2.2, 3.3, 4.4, 5.5, 6.6,....)
    3.double    | This holds decimal but in long form like (value of PI = 3.14159)
    4.char      | This holds single character like (a, b, c, d, e, f,....)
    5.bool      | This is like a switch, it only holds two stage 0[false] & 1[true]
    
    These datatypes holds different memory spaces in computer's physical memory

    This program will help you to understand the basics of size & Type of datatypes
    */

    int i_a = 5;
    float f_a = 2.87f;
    double d_a = 3.14159;
    char c_a = 'A';
    BOOL b_a = FALSE;
    BOOL b_b = TRUE;

    printf("\nint = %d\nfloat = %f\ndouble = %lf\nchar = %c\nbool = %d [State -> FALSE]\nbool = %d [State -> TRUE]\n\nSize of int = %d\nSize of float = %d\nSize of double = %d\nSize of char = %d\nSize of bool = %d", i_a, f_a, d_a, c_a, b_a, b_b, sizeof(i_a), sizeof(f_a), sizeof(d_a), sizeof(c_a), sizeof(b_a));

    return 0;
}