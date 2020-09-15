#include<stdio.h>
void student3(){
    int number;
    printf("Student3\n");
    printf("Enter two integer: ");
    scanf("%d %d", &number1,number2);
    //check if two integer are equl
    if(number1==number2){
        printf("Result: %d=%d",number1,number2);
    }
    else if (number1>number2){
        printf("Result: %d>%d",number1,number2);
    }
    else{
        printf("Result: %d<%d",number1,number2);
    }
}
