#include<stdio.h>
/* NAME  REHAN AKHTAR ALI SHAIKH 
UIN 251P038
ROLL NO 35 
CLASS COMPUTER C2*/

void counter() {
//static int count =0;
static int count =0;
count++;
printf("number of time function is called %d\n",count);
}
int main (){
    counter();
    counter();
    counter();
     counter();
     return 0;
}


