#include<stdio.h>
#include<conio.h>

#include<stdio.h>
void main() {
  char i, j;
  for (i = 'E'; i >= 'A'; i--) {
    if (i=='C'){
        i--;
    }
    for (j = 'E'; j >= 'A'; j--) {
        printf("%c",i);
    }
    printf("\n");
  }
}