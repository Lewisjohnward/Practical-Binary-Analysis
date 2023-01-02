#include <stdio.h>


void printhello(void);
void printworld(void);

int main (void){
    printhello();
    printf(" ");
    printworld();
    printf("\n");
    return 0;
}


void printhello(void){
    char str[] = "hello";
    printf("%s", str);
}

void printworld(void){
    char str[] = "world";
    printf("%s", str);
}
