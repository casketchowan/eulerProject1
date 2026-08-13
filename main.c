#include <stdio.h>
#include <stdlib.h>

/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.*/

int main()
{

    int sum = 0;

    int multiplesThree = 0;

    for (int i = 1; i < 1000; i++) {
        for (int j = 1; j < 1000; j++) {
        if (j / 3 == i) {multiplesThree = j; sum += multiplesThree; i++;}
        }
    }

    int multiplesFive = 0;

    for (int i = 1; i < 1000; i++) {
        for (int j = 1; j < 1000; j++) {
        if (j / 5 == i) {multiplesFive = j; sum += multiplesFive; i++;}
        }
    }

    printf("%d", sum);


    return 0;
}
