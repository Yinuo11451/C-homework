//202610115202
//刘子轩

#include <stdio.h>
int main()
{
float A,B,C;
scanf("%f,%f,%f",&A,&B,&C);
if (A+B>C&&A+C>B&&B+C>A)
printf("能构成三角形");
else
printf("不能构成三角形");
     return 0;
}
