#include<stdio.h>
#include<stdlib.h>
#include"dir2/urllib.h"
#include"dir4/curlwrapper.h"

int main(void){
  char* url = constructUrl("https", "example.com", "/");
  char* data = body(url);
  printf("%s\n", data);
  free(url);
  free(data);
  return 0;
}
