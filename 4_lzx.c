//202610115202
//刘子轩

#include <stdio.h>

int main()
{
    float H;
    scanf("%f",&H);
    if(H<0||H>100)
    printf("无效输入");
    else if(H>=90)
    printf("A");
    else if(H>=80)
    printf("B");
    else if(H>=70)
    printf("C");
    else if(H>=60)
    printf("D");
    else
    printf("E");
    return 0;
}
