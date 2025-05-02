#include<stdio.h>
int main(){
int num1,num2,compute;
char op;
printf("Enter the first number: ");
scanf("%d",&num1);
printf("Enter the second number: ");
scanf("%d",&num2);
printf("Enter the op(+,-,*,/): ");
scanf(" %c",&op);
if(op=='+'){
compute=num1+num2;
printf("The sum of %d and %d is %d",num1,num2,compute);
}
else if(op=='-'){
compute=num1-num2;
printf("The sub of %d and %d is %d",num1,num2,compute);
}
else if(op=='*'){
compute=num1*num2;
printf("The multiplication of %d and %d is %d",num1,num2,compute);
}
else if(op=='/')
if (num2==0){
printf("ERROR:The division by zero is not allowed.\n");
}else

{
compute=num1/num2;
printf("The division of %d and %d is %d",num1,num2,compute);
}
else {
printf("Error in the input");
}
return 0;
}

