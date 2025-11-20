#include<stdio.h> 
// NAME REHAN AKHTAR ALI SHAIKH
// UIN 251P038 
// CLASS/ROLL NO  COMPUTER/35

int factorial_iterative(  int num1){
    int fact=1;
    for (int i=1;i<=num1;i++){
        fact*=i;
    }
    return fact ;
}

int main (){
    int a;
    printf("enter the number whose factorial you want :");
    scanf("%d",&a);
    printf("the factorial %d is %d :", a,factorial_iterative(a));
    return 0;
    

}