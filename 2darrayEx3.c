#include<stdio.h>

int main(void){

    int marks[5][10]={
                        {80,85,90,91,93,99,60,20,70,75},
                         {10,5,9,9,9,9,6,2,7,7},
                          {0,5,0,1,3,9,0,20,0,5},
                           {00,50,9,-9,98,96,61,23,71,74},
                            {82,81,96,96,92,91,65,21,74,73},
    }

    printf("Marks of the Students:\n");

    printf("Sifat Malik obtain Marks in PF  =%d \n", marks[0][3]);
    printf("Sifat Malik obtain Marks in C-Skills  =%d\n ", marks[3][4]);
    printf("Sifat Malik obtain Marks in DLD  =%d \n", marks[4][6]);
    printf("Sifat Malik obtain Marks in P-S  =%d \n", marks[3][9]);
    printf("Sifat Malik obtain Marks in Managment  =%d \n", marks[4][4]);
    printf("\n");
    return 0;
}