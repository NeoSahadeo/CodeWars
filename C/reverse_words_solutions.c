#include <string.h>

void reverse(char *word, unsigned len)
{
  char tmp;
  for (int i = 0; i < len / 2; ++i)
  {
    tmp = word[i];
    word[i] = word[len - i - 1];
    word[len - i - 1] = tmp;
  }
}

char *reverseWords(const char *t)
{
  char *text = strdup(t);
  char *source = text;
  char *word = text;

  while (*source)
  {
    if (*source == ' ')
    {
      reverse(word, source - word);
      word = source + 1;
    }
    ++source;
  }
  reverse(word, source - word);
  return text;
}
