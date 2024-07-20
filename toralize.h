#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PROXY "127.0.0.1"
#define PROXYPORT 9050

typedef unsigned char int8;
typedef unsigned short int16;
typedef unsigned int int32;

struct proxyRequest {
  int8 versionNumber = 4;
  int8 commandCode;

};
