#include<stdio.h>

int main(void){
   //array create for to store the marks of students
   //marks[5] mean  their are five rows in this arrar
   //marks[10] their are 10 col in this array
    int marks[5][10]={
                        {80,85,90,91,93,99,60,20,70,75},//row zero
                         {10,5,9,9,9,9,6,2,7,7},//row one
                          {0,5,0,1,3,9,0,20,0,5},//row two
                           {00,50,9,-9,98,96,61,23,71,74},//row 3
                            {82,81,96,96,92,91,65,21,74,73},//rwo 4
    }

    printf("Marks of the Students:\n");

    printf("Sifat Malik obtain Marks in PF  =%d \n", marks[0][3]);//printf in row zero ,col thre content

    printf("Sifat Malik obtain Marks in C-Skills  =%d\n ", marks[3][4]);//print row three ,col 4 content

    printf("Sifat Malik obtain Marks in DLD  =%d \n", marks[4][6]);//print in row 3 col 6 content

    printf("Sifat Malik obtain Marks in P-S  =%d \n", marks[3][9]);//print in row 3 col 9 content

    printf("Sifat Malik obtain Marks in Managment  =%d \n", marks[4][4]); //printf in row 4 col 4 content

    printf("\n");//new line

    return 0;//if everything is good the program return is zero 
}