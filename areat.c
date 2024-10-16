#include <stdio.h>
int main(){
    int a,b,h,area;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter h:");
    scanf("%d",&h);
    area=0.5*(a+b)*h;
    printf("The area:%d\n",area);
    return 0;

}