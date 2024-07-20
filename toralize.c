#include "toralize.h"

int main(int argc, char *argv[]){
  // To get command line arguments in C, specify first parameter in main 'argc' as int, 
  // and second parameter as a char array pointer 'argv'
  char *host;
  int port;

  if (argc < 3) {
    fprintf(stderr, "Usage: %s <host> <port>\n", argv[0]);
    return -1;
  }

  host = argv[1];
  port = atoi(argv[2]); // returns 0 if an incorrect type is passed
  if (port == 0){
    fprintf(stderr, "The third argument, '%s' needs to be a number\n", argv[2]);
  }

  return 0;
}
