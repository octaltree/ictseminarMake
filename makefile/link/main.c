#include<stdio.h>
#include "hoge.h"

int main(void){
  char buf[5];
  printf("%s\n", hoge(buf));
  return 0;
}
