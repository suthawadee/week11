#include<stdio.h>
int student1(){
    int number;
    printf("Student1\n");
    printf("Enter an integer: ");
    scanf("%d",&number);
    if(number<0){
        printf("You entered %d\n",number);
    }
    printf("The if statement is easy");
    return 0;
}
