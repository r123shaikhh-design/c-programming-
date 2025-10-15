#include<stdio.h>

int main(){
    /**
     * NAME=REHAN AKHTAR ALI SHAIKH 
     * UIN=251P038
     * CLASS=COMPUTER C2 BATCH
     */
    // print sum of all odd number 
    int num1, num2,sum =0;
    printf("Enter the two number :");
    scanf("%d %d",&num1,&num2);
    int i=num1;
    for(i;i<=num2;i++) {
        if(i%2!=0){ 
            sum=sum+i;
        }
    }
        printf("sum of all odd number =%d",sum);
        return 0;
} 