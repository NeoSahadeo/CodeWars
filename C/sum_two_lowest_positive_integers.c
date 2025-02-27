/*https://www.codewars.com/kata/558fc85d8fd1938afb000014/train/c*/

#include <stddef.h>
#include <stdio.h>

long sum_two_smallest_numbers(size_t arr_size, const int n[arr_size])
{
  long numbers[arr_size];
  for (size_t x = 0; x < arr_size; x++)
    numbers[x] = n[x];

  for (size_t x = 0; x < arr_size; x++)
  {
    for (size_t y = 0; y < arr_size - x - 1; y++)
    {
      if (numbers[y + 1] < numbers[y])
      {
        long temp = numbers[y];
        numbers[y] = numbers[y + 1];
        numbers[y + 1] = temp;
      }
    }
  }
  return numbers[0] + numbers[1];
}

int main(void)
{
  int sum[] = {2000000000, 2000000000, 2000000000, 2000000000, 2000000000};
  printf("(%ld -- answer)", sum_two_smallest_numbers(5, sum));
  return 0;
}
