#include <stdio.h>

main()
{
char *str;
size_t len = 0;
  
  while (str != EOF)
    {
      printf("> ");
      getline(&str, &len, stdin);
      printf("%s", str);
    }
}
