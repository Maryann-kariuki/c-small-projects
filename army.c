#include <stdio.h>
int main (){
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age>=18){
        printf(" Qualified to join the army");
    }
    else{
        printf("Disqualified");
    }
    return 0;
}