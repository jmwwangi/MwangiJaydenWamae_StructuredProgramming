#include <stdio.h>
#include <string.h>

int main(){
    char name[50];
    int length;

    printf("Enter your name: ");
    scanf(" %s", &name);

    length = strlen(name);
    printf("Your name is %s and has %i letters", name,length);

    return 0;
}
