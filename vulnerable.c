#include <stdio.h>

int main(int argc, char *argv[])
  {
    char buffer[7];
    FILE *input = open("badfile", "r");
    fread(buffer, sizeof(char), 32, input);
    printf("Read from file: %s\n", buffer);

    return 0;
  }
