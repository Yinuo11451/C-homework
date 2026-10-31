//202610115202
//刘子轩

#include <stdio.h>
int main()
{
float a,b;
char op;
scanf("%f %c %f",&a,&op,&b);
if(op=='+')
printf("%f\n",a+b);
if(op=='-')
printf("%f\n",a-b);
if(op=='*')
printf("%f\n",a*b);
if(op=='/'&b!=0)
printf("%f\n",a/b);
else if(op=='/',b==0)
printf("错误");
    return 0;
}
