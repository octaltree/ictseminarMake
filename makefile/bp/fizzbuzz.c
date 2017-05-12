#include<stdio.h>

char* dangerousSprintf(char* buf, int x){
  sprintf(buf, "%d", x);
  return buf;
}

int main(void){
  char buf[5];
#define toStr(x) dangerousSprintf(buf, x)
  for(int i = 0; i < 100; ++i)
    printf("%s\n",
        !(i % 15)? "fizzbuzz":
        !(i % 5)? "buzz":
        !(i % 3)? "fizz":
        toStr(i));
#undef toStr
  return 0;
}
