#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int loginSuccess = 0, pass;
     while(!loginSuccess){
         scanf("%d", &pass);
         if(pass != 2002){
             printf("Senha Invalida\n");
         } else {
             printf("Acesso Permitido\n");
             loginSuccess= 1;
         }
     }
 
    return 0;
}