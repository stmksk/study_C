/*
* first program
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  if (argc == 1) {
    puts("hello world!");
  } else {
    int sum = 0;
//ignore index 0

    for (int i = 1; i < argc; i++) {
      sum += atoi(argv[i]);
    }
    printf("sum = %d\n", sum);
  }
return 0;
}
