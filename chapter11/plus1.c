/*plus-the different of array and pointer */
#include<stdio.h>
int main(void)
{
  char heart[] = "I love Tillie!";
  const char * head = "I love Millie!";
  int i;

  for (i = 0;i < 6;i++)
    putchar(heart[i]);
  putchar('\n');
  for (i = 0;i < 6;i++)
    putchar(head[i]);
  putchar('\n');

  for (i = 0;i < 6;i++)
    putchar(*(heart+i));
  putchar('\n');
  for (i = 0;i < 6;i++)
    putchar(*(head+i));
  putchar('\n');

  while (*(head) != '\0')
    putchar(*(head++));
  putchar('\n');


  return 0;
}
