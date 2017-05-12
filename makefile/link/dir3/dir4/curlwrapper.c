#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<curl/curl.h>

typedef struct buffer {
  char *data;
  int data_size;
} Buffer;

size_t buffer_writer(char* ptr, size_t size, size_t nmemb, void* stream){
  Buffer* buf = (Buffer*)stream;
  int block = size * nmemb;
  if( ! buf ) return block;
  buf->data = buf->data?
    (char*)realloc(buf->data, buf->data_size + block):
    (char*)malloc(block);
  if( ! buf->data ) return block;
  memcpy(buf->data + buf->data_size, ptr, block);
  buf->data_size += block;
  return block;
}

char* body(const char* url){
  //const char url[] = "https://example.com/";

  Buffer* buf = (Buffer*)malloc(sizeof(Buffer));
  buf->data = NULL;
  buf->data_size = 0;

  CURL* curl = curl_easy_init();
  curl_easy_setopt(curl, CURLOPT_URL, url);
  curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0);
  curl_easy_setopt(curl, CURLOPT_WRITEDATA, buf);
  curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, buffer_writer);

  curl_easy_perform(curl);
  curl_easy_cleanup(curl);

  //printf("%s\n", buf->data);
  //free(buf->data);
  //free(buf);
  //return EXIT_SUCCESS;
  return buf->data;
}
