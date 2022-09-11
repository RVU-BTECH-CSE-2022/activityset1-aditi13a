#include<stdio.h>
int main()
{
float sub1, sub2, sub3, sub4, sub5, sum;
printf("enter the marks of 5 subjects");
scanf("%f,%f,%f,%f and %f", &sub1,&sub2,&sub3,&sub4,&sub5);
sum=(sub1+sub2+sub3+sub4+sub5)/5
scanf("the sum is %f", &sum);
if(sum>60)
{
printf("first division");
}
else if(sum<=60 && sum>=40)
{
printf("second division");
}
else if(sum<40)
{
printf("fail");
}
return 0;
}