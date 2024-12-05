#include <stdio.h>
int main() {
 int n, i;
 printf("Enter array size: ");
 scanf("%d", &n);

 int arr[n];

printf("Enter array elements: ");
 for (i = 0; i < n; i++) {
 scanf("%d", &arr[i]);
}
printf("Even numbers are: ");
 for (i = 0; i < n; i++) {
 if (arr[i] % 2 == 0) {
 printf("%d ", arr[i]);
 }
 }
 }
