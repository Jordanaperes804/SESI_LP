#include <stdio.h>

   int main(){
       
   float celsius, fahrenheit;
   
   printf("qual a medição de graus celsius:");
   scanf("%f", &celsius);
   
   fahrenheit = (celsius * 1.8) + 32;
   
   printf ("%.2f graus celcuis equivalem a %.2f graus fahrenheit.\n", celsius, fahrenheit);
   
    return 0;
}