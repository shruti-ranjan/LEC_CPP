#include<stdio.h>
int main(){
    int*pc,c;
     c = 22;
     printf("Address of c: %p\n", &c);
     printf("Value of c: %d\n\n,c");   //22

     pc = &c;
    printf("Address of pointer pc: %p\n",pc);
    printf("Content of pointer pc:%n\n\n",*pc) ;

}