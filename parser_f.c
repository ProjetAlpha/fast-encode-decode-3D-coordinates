#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

// NB : header avec le nombre max de vertex (16 bits)
void encode_coord(double val){
  unsigned char arr[sizeof val];
  memcpy (arr, &val, sizeof val);
  // write_fd(fd, arr)
}

// read 64 bits and decode coord [x, y, z]
double decode_coord(char *str){
   double coord = *((double*) str);
   return coord;
}

int main(void) {
  return 0;
}
