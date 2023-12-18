#include<stdio.h>

int main(void){

    //compile time array
   //as a humanbeng we show row and col as a example of two D array
   //in this array [2] mean in this array have two rows
   // and [3] this mean in this array have three col
    int array[2][3]= {
                       {23,25,22},
                       {55,22,77}
    };

    //now i try to print sum elements of the array

    printf("in row zero and col zero in first index element is=%d ", array[0][0]);
    //the out put is 23 in row 0 and col zero and in index 0 is 23
}