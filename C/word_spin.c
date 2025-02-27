/*https: // www.codewars.com/kata/5264d2b162488dc400000001*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  do not allocate memory for return string
//  assign the value to the pointer "result"

/*void spin_words(const char *sentence, char *result)*/
/*{*/
/*  int count = 0;*/
/*  int i;*/
/*  int j;*/
/*  for (i = 0; sentence[i] != '\0'; i++)*/
/*  {*/
/*    count++;*/
/*    if (sentence[i + 1] == ' ' || sentence[i + 1] == '\0')*/
/*    {*/
/**/
/*      if (count >= 5)*/
/*      {*/
/*        for (j = 0; j < count; j++)*/
/*          result[i + 1 - count + j] = sentence[i - j];*/
/*      }*/
/*      else*/
/*      {*/
/*        for (j = 0; j < count; j++)*/
/*          result[i - j] = sentence[i - j];*/
/*      }*/
/*      count = -1;*/
/*      result[i + 1] = sentence[i + 1]; // Add space in*/
/*    }*/
/*  }*/
/*  printf("%s\n", result);*/
/*}*/

void spin_words(const char *sentence, char *result)
{
  int len = strlen(sentence);
  for (int i = 0; i < len; i++)
  {
    result[i] = 0;
  }

  char buffer[len];

  strcpy(buffer, sentence);
  char *token = strtok(buffer, " ");

  int out_index = 0;
  while (token)
  {
    int tk_len = strlen(token);
    if (tk_len >= 5)
    {
      // reverse
      for (int x = tk_len - 1; x > -1; x--)
      {
        result[out_index++] = token[x];
      }
    }
    else
    {
      // normal
      for (int x = 0; x < tk_len; x++)
      {
        result[out_index++] = token[x];
      }
    }
    if (out_index < len)
      result[out_index++] = ' ';
    token = strtok(NULL, " ");
  }

  result[len] = '\0';
  printf("%s\n", result);
  return;
}

int main(void)
{
  char *result = malloc(19);

  spin_words("Hey fellow warriors", result);

  result = malloc(4);

  spin_words("spam", result);

  result = malloc(85);
  spin_words("lorem excepteur aliquip qui duis aliquip magna fugiat lorem "
             "occaecat officia ad velit",
             result);

  return 0;
}
