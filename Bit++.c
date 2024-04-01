#include <stdio.h>
void pre();
void post();
int main()
{
  int n,i;
  char ch = 'x';
    int myInt = (int)0;
  scanf("%d", &n);
  // char ch = 'x';
    // int myInt = (int)0;
  for ( i = 0; i < n; i++)
  {
  if(scanf("%c %c %d", &ch, &ch, &myInt))
  {
    pre();
    // printf("%d", &x);
  }
  if(scanf("%d %c %c", &myInt, &ch, &ch))
  {
    post();
    // printf("%d", &x);

  }
  }
// char ch = 'x';
    // int myInt = (int)0;

  return 0;
}
void pre()
{
  int myInt;
  char ch;
  if (ch='+')
  {
    int im=++(myInt);
    printf("%d", &im);

  }
  else
  {
    int dm=--(myInt);
    printf("%d", &dm);
    
  }
}
void post()
{
  int myInt;
  char ch;
  if(ch='+')
  {
    (myInt)++;
  }
  else
  {
    (myInt)--;
  }
}