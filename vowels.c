#include <stdio.h>
#include <ctype.h>
int main(){
    char word[100];
    int i=0,count=0;
    printf("Enter Word:");
    scanf("%s",word);
    
    while (word[i] !='\0'){
        char ch=tolower(word[i]);
        if (ch =='a'|| ch =='e'|| ch=='i'|| ch=='o'|| ch=='u'){
            count++;
        }
        i++;

    }
    printf("Number of vowels: %d\n",count);
    return 0;
}