#include <stdio.h>
#include <stdlib.h>

int main(){
int num1, num2;
char op;

printf("Enter a number: \n");
scanf("%d", &num1);
printf("Enter an operator(+, -, /, *): \n");
scanf(" %c", &op);
printf("Enter a  second number: \n");
scanf("%d", &num2);
if(op == '+'){
    printf("Answer: %d \n", num1+num2);
}else if( op == '-'){
    printf("Answer: %d\n", num1-num2);
}else if( op == '*'){
    printf("Answer: %d \n", num1*num2);
}else if( op == '/'){
    if(num2 != 0){
        printf("Answer: %d", num1/num2);
    }
    else{
        printf("Math error");
    }
}else{
    printf("Error!");
}
 return 0;
}