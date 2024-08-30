#include <stdio.h>

/*
    @author : OfficiallyEra
    Date : 30th of August 2024
    update : 0 time(s)
    FileId : 03
*/

int main()
{
    /*
    EXPLANATION :
    increment & decrement is a process in which we can increase or decrease a int, float, double numbers they can be achieved by using these operators ( " ++, -- " )
    But Keep in mind how you are using these operators ! ++a = first increase the value then use it and a++ means use the value first then increase it same applies to --
    for example :
    */

    int a = 5, b = 9, c=12, d=18;
    printf("\nOriginal Value : \na = %d\nb = %d\nc = %d\nd = %d\n\n",a,b,c,d);
    printf("\nusing ++a : %d -> as you can see this increases the value by 1", ++a);
    printf("\nusing --b : %d -> similarly this decreases the value by 1\n\n", --b);
    printf("\n\nusing c++ : %d -> You will see no change in this line", c++);
    printf("\nusing d-- : %d -> similarly this line will not change too\n", d--);
    printf("\nYou will notice the [c++ & d-- below]\nC Value = %d\nD value = %d",c,d);
    system("pause>nul");

    return 0;
}