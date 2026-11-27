/* Day 58 - Q108 */
#include <stdio.h>

int main(void)
{
  int n;
  int nums[100];
  int answer[100];
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", &nums[i]);

  int prefix = 1;
  for (int i = 0; i < n; i++)
  {
    answer[i] = prefix;
    prefix *= nums[i];
  }

  int suffix = 1;
  for (int i = n - 1; i >= 0; i--)
  {
    answer[i] *= suffix;
    suffix *= nums[i];
  }

  printf("[");
  for (int i = 0; i < n; i++)
  {
    if (i)
      printf(",");
    printf("%d", answer[i]);
  }

  printf("]\n");
  return 0;
}


