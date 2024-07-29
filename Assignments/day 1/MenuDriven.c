#include <stdio.h>
#define N 50
int fun1(int arr[], int n)
{
  int p, pos, val, i;
  printf("Enter the position to insert the element: ");
  scanf("%d", &p);
  pos = p - 1;
  for (i = n - 1; i >= pos; i--)
  {
    arr[i + 1] = arr[i];
  }
  printf("Enter the number to insert: ");
  scanf("%d", &val);
  arr[pos] = val;
  n++;
  return n;
}
int fun2(int arr[], int n)
{
  int p, pos, i;
  printf("Enter the position  to delete an element: ");
  scanf("%d", &p);
  pos = p - 1;
  for (i = pos; i <= n - 2; i++)
  {
    arr[i] = arr[i + 1];
  }
  n--;
  return n;
}
int main()
{
  int arr[N], i, n, label;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  printf("Enter the elements of the array: ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter 1 to insert an element \nEnter 2  to delete an element \nEnter 0  to exit");
  scanf("%d", &label);
  switch (label)
  {
  case 1:
    n = fun1(arr, n);
    break;
  case 2:
    n = fun2(arr, n);
    break;
  case 0:
    break;
    
  }
  printf("Your Array  : ");
  for (i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
}
