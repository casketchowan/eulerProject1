#include <stdio.h>
#include <stdlib.h>

void divThreeFunction(float divNum, int multThree);
void divFiveFunction(float divNum, int multFive);

int main() {
    int multThree = 0; //sum of the multiples of 3
    int multFive = 0; //sum of the multiples of 5

    for (int i=1; i<10; i++) {
    float divNum = i; //make each loop iteration into a dividend for evaluation
    divThreeFunction(divNum, multThree);
    divFiveFunction(divNum, multFive);
    }

    int sum = 0;
    sum = multThree + multFive;

    printf("Your sum is: %d", &sum);
    return 0;
}

void divThreeFunction(float divNum, int multThree) {
    float divThree = 0; //will divide by 3 until equal to or less than 1
    int flag = 0; //flag for while loop below
    while (flag == 0) {
    divThree = divNum / 3;
    if (divThree == 1) {multThree += divNum; flag++;} //evaluates number as a multiple and adds it to multThree
    else if (divThree < 1) {flag++;}
    else {divNum = divThree;} //ensures while loop repeats division
    }
}

void divFiveFunction(float divNum, int multFive) {
    float divFive = 0; //will divide by 5 until equal to or less than 1
    int flag = 0; //flag for while loop below
    while (flag == 0) {
    divFive = divNum / 5;
    if (divFive == 1) {multFive += divNum; flag++;} //evaluates number as a multiple and adds it to multFive
    else if (divFive < 1) {flag++;}
    else {divNum = divFive;} //ensures while loop repeats division
    }
}
