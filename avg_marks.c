#include<stdio.h>
int main() {

/*
NAME=Rehan Akhtar
class=computer C02
division=c
UIN=251P038
*/

int physics_marks,chemistry_marks,Maths_marks;
printf("Enter the marks of physics :");
scanf("%d",&physics_marks);
printf("Enter the marks of chemistry :");
scanf("%d",&chemistry_marks);
printf("Enter the marks of maths :");
scanf("%d",&Maths_marks);
int sum=physics_marks+chemistry_marks+Maths_marks;
printf("sum =%d\n",sum);
float average=sum/3;
printf("average =%f\n",average);
(average>=50)? printf(" student eligible for admission"):printf(" student not eligible for admission");
return 0;
}

