#include<string.h>
#include<stdlib.h>

char* constructUrl(const char* scheme, const char* host, const char* path){
  const int len = strlen(scheme) + 3 + strlen(host) + strlen(path) + 1;
  char* buf = (char*)malloc(sizeof(char) * len);
  // strcpy "\0"までコピーされる
  strcpy(buf, scheme);
  strcpy(buf + strlen(scheme), "://");
  strcpy(buf + strlen(scheme) + 3, host);
  strcpy(buf + strlen(scheme) + 3 + strlen(host), path);
  return buf;
}
