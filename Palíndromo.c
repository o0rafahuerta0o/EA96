//
// Created by usuario on 09/01/2025.
//
#include <stdio.h>
#include <string.h>

int isPalindrome(char* word);
void getInput(char* word);

    int main() {

      char cadena1[100];
      getInput(cadena1);
      printf("Ingresa una cadena: ");
      scanf("%s", cadena1);


      if (isPalindrome(cadena1)) {
          printf("Es un palíndromo");
      } else {
          printf("No es un palindromo");
      }

      return 0;

    }