#include <stdio.h>

int main()
{
  char* pairs [2][2] = {{"peach","hpeac"},{"paelp","apple"}};
  int i;
  
  for (i=0; i<2; i++)
  {
    if (permutation(pairs[i][0], pairs[i][1]))
      printf("%s and %s Permutation\n", pairs[i][0], pairs[i][1]);
    else
      printf("%s and %s NO Permutation\n", pairs[i][0], pairs[i][1]);
  }
  return 0;
}

