#include <stdio.h>
int fibo(int n) {  
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibo(n - 1) + fibo(n - 2);
    }
}
int main() {
   int n;
   scanf("%d",&n);
   if (n < 0) {
       printf("n/a");
   }
   else {
   printf("%d",fibo(n));
   }
}
