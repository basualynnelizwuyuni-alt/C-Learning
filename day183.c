#include<stdio.h>
int main(){
    int numbers[10];
    int i;
    int find=0;
    int max;
    int min;
    int sum=0;
    double average;
    int even=0;
    int odd=0;
    for(int i=0;i<10;i++){
    printf("enter a number",i+1);
    scanf("%d",&numbers[i]);
    }
    for(int i=0;i<10;i++){
        printf("%d",numbers[i]);
    }
max =numbers[0];
for(int i=0;i<10;i++){
    if(numbers[i]>max){
        max=numbers[i];
    }
}
printf("The largest number is %d",max);
min =numbers[0];
for(int i=0;i<10;i++){
    if(numbers[i]<min){
        min=numbers[i];
    }
}
    printf("The smallest number is %d",min);
sum=0;

for(int i=0;i<10;i++){
    sum=sum+numbers[i];
}
printf("The sum of the numbers is %d",sum);
average= sum/10.0;
printf("The average of the numbers is %.2lf",average);
for(int i=0;i<10;i++){
    if(numbers[i]%2==0){
        even++;
    }
        else{
            odd++;
        }
    }
printf("The number of even numbers is %d",even);
printf("The number of odd numbers is %d",odd);
printf("enter a number to find: ");
scanf("%d",&find);

for(int i=0;i<10;i++){
    if(numbers[i]==find){
        printf("The number %d is found at index %d",find,i);
        find=1;
        break;
    }
}
    if(find==0){
        printf("The number %d is not found",find);
    }

}

