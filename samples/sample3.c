#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(void){
char x = 0xff;
printf("%i\n", x+x);
printf("%i\n", (char)0xff+(char)0xff);
}
