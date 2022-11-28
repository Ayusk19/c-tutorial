#include <stdio.h>
#include <string.h>
int main()
{
  char first[100], second[100], t[100];

  printf("Enter name: \n");
  gets(first);

  printf("Enter Roll no: \n");
  gets(second);
  -
  strcpy(t, first);
  strcpy(first, second);
  strcpy(second, t);

  printf("After Swapping\n");
  printf("Roll no : %s\n", first);
  printf("Name : %s\n", second);

  return 0;
}