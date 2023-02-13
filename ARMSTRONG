#include <stdio.h>
#include <math.h>
int isArmstrong(int num) {
  int originalNum, remainder, n = 0, result = 0;
  originalNum = num;
  while (originalNum != 0) {
    originalNum /= 10;
    ++n;
  }
  originalNum = num;
  while (originalNum != 0) 
  {
    remainder = originalNum % 10;
    result += pow(remainder, n);
    originalNum /= 10;
  }
  if (result == num)
    return 1;
  else
    return 0;
}
int isPerfect(int num) 
{
  int i, sum = 0;
  for (i = 1; i <= num / 2; ++i) 
  {
    if (num % i == 0) 
    {
      sum += i;
    }
  }
  if (sum == num)
    return 1;
  else
    return 0;
}
int main() 
{
  int num;
  printf("Enter a number:\n");
  scanf("%d", &num);
  if (isArmstrong(num) == 1 && isPerfect(num) == 1)
    printf("%d is both an Armstrong number and a perfect number", num);
  else if (isArmstrong(num) == 1)
    printf("%d is an Armstrong number", num);
  else if (isPerfect(num) == 1)
    printf("%d is a perfect number", num);
  else
    printf("%d is neither an Armstrong number nor a perfect number", num);
  return 0;
}
