#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverseWords(const char *text)
{
  const int len = strlen(text);
  char *buffer = malloc(len);
  char word_buffer[1000];
  int start = 0, end = 0, word_len = 0;

  for (int x = 0; x < len; x++)
    buffer[x] = text[x];

  for (; end < len + 1; end++)
  {
    if (start == end && buffer[end] == 32)
    {
      start++;
      continue;
    }

    if (buffer[end] != 32)
    {
      word_buffer[word_len++] = buffer[end];
    }

    if (buffer[end] == 32 && start != end)
    {
      char rev[word_len - 1];
      for (int x = word_len - 1, y = 0; x > -1; x--, y++)
      {
        rev[y] = word_buffer[x];
      }
      for (int x = 0; start < end; x++, start++)
      {
        buffer[start] = rev[x];
      }
      word_len = 0;
      end--;
    }

    if (end == len)
    {
      for (int x = word_len - 2; start < len; x--, start++)
      {
        buffer[start] = word_buffer[x];
      }
    }
  }

  return buffer;
}

int main(void)
{
  char *sentence = "The red fox jumps over the lazy dog";
  char *buffer = reverseWords(sentence);

  printf("%s\n", buffer);
  return 0;
}
