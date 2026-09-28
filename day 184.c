#include<stdio.h>
void welcome(){
    printf("Welcome to the calculator program!\n");
}
int multiply(int a, int b){
    return a*b;
}
int add(int a, int b){
    return a+b;
}
int subtract(int a,int b){
    return a-b;

}
int square(int n);
void displayNumbers(int numbers[], int size);
    
int main() {
    welcome();
    int num1,num2;
    int num3;
    int numbers[5];
    int num;
    printf("Enter two numbers: ");
    scanf("%d,%d",&num1,&num2);
    int result=multiply(num1,num2);
    int sum=add(num1,num2);
    int difference=subtract(num1,num2); 
    printf("Enter a number to find its square: ");
    scanf("%d",&num3);
    int Square =square(num3);
    for(int i=0;i<5;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&num);
        numbers[i]=num;
    }
    displayNumbers(numbers, 5);
    printf("The multiplication of %d and %d  is: %d",num1,num2,result);
    printf("\nThe addition of %d and %d is:%d", num1,num2,sum);
    printf("\nThe subtraction of %d and %d is:%d", num1,num2,difference);
    printf("\nThe square of %d is:%d", num3,Square);

    return 0;
}
int square(int n){
    return n*n;

}
void displayNumbers(int numbers[], int size){
    printf("The numbers are: ");
    for(int i=0;i<size;i++){
        printf("%d ",numbers[i]);
    }
    printf("\n");
}