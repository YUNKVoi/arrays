#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {

char *morse[27]={
/*a*/  ".- ",
/*b*/  "-... ",
/*c*/  "-.-.",
/*d*/  "-.. ",
/*e*/  ". ",
/*f*/  "..-. ",
/*g*/  "--. ",
/*h*/  ".... ",
/*i*/  ".. ",
/*j*/  ".--- ",
/*k*/  "-.-",
/*l*/  ".-.. ",
/*m*/  "-- ",
/*n*/  "-.",
/*o*/  "--- ",
/*p*/  ".--. ",
/*q*/  "--.- ",
/*r*/  ".-. ",
/*s*/  "... ",
/*t*/  "-",
/*u*/  "..- ",
/*v*/  "...- ",
/*w*/  ".-- ",
/*x*/  "-..- ",
/*y*/  "-.-- ",
/*z*/  "--.. "};

int i;
printf("%c\n", argc);
for (int j = 1; j < argc; j++) {
  i = 0;
  while (argv[j][i]!=0) {
    printf("%s",  morse[argv[j][i]-97] );
    i++;
  }
  printf("| " );
}
printf("\n" );

  return 0;
}
