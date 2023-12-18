#include<stdio.h>

int main(void){

    //compile time array
   //as a humanbeing we show row and col as a example of two D array
   //in this array [4] mean in this array have two rows
   // and [4] this mean in this array have three col
    int array[4][4]= {
                       {23,25,22,44},
                       {55,22,77,55},
                       {88,99,77,66},
                       {100,200,300,400}
    };

    //now i try to print sum elements of the array

    printf("in row zero and col zero in first index element is=%d ", array[3][3]);
    //the out put is 400 in row 3 and col 3
}