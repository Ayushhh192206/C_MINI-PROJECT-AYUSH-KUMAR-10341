#include <stdio.h>
//Ayush kumar_10341
int main(){
    int num,temp,digit;
    int count = 0;
    int sum = 0;
    int power,i;

    printf("Enter a number: ");
    scanf("%d",&num);

   
    temp=num;
    while(temp!= 0) {
        count++;
        temp =temp /10;
    }

   
    temp=num;
    while(temp!= 0) {
        digit =temp %10;

        power =1;
        for(i =1;i <=count;i++) {
            power =power*digit;
        }

        sum = sum+power;
        temp = temp/10;
    }

    if (sum ==num)
        printf("%d is an Armstrong number\n",num);
    else
        printf("%d is not an Armstrong number\n",num);

    return 0;
}
