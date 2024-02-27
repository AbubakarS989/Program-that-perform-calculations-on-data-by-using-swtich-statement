#include<stdio.h>
int main(){
 
 int num1,num2;
 char operator;
 printf("Enter operator :\n");
 scanf("%c",&operator);
 printf("Enter operand 1:\n");
 scanf("%d",&num1);
 printf("Enter operand 2:\n");
 scanf("%d",&num2);
 

 switch(operator){
    case '+':
        printf("Result is : %d\n",num1+num2);
        break;
    case '-':
        printf("Result is : %d\n",num1-num2);
        break;
    case '/':
        printf("Result is : %d\n",num1/num2);
        break;
    case '*':
        printf("Result is : %d\n",num1*num2);
        break;
    case '%':
        printf("Result is : %d\n",num1&num2);
        break;
    default:
        printf("please enter correct operator");
 }
}