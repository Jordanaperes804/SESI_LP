#include <stdio.h>

void main (){    
float nota01 = 0;
float nota02 = 0;
float nota03 = 0;
float media  = 0;    

 printf("digite a primeira nota");  
 scanf("%f" , &nota01);
 
 printf ("digite a segunda nota");
 scanf ("%f" , &nota02);
 
 printf ("digite a terceira nota");
 scanf ("%f" , &nota03);
 
 media = (nota01 + nota02 + nota03) / 3;
 
 printf("sua media é: %1f" , media);
    
     //Quando o aluno atingir uma nota menor ou igual a 5
     //Exiba a mensagem: "O aluno está reprovado!"
 
     //Quando  o aluno atingir uma nota menor ou igual a 6.9
     //Exiba a seguinte mensagem: "O aluno esta em recuperação!"
 
     // Quando a nota do aluno for igual ou maior a 7 
     // Exiba a seguinte mensagem: "O aluno está aprovado!"
 
     // if (VERDADEIRO){
     //EXECUTAR ESSE BLOCO DE CÓDIGO
     //}
     
     
     // = COMPARA IGUALDADE
     // < menor
     // > maior
     // <= menor ou igual
     // => maior ou igual
    // ! negação
    if (media <= 5){
    printf ("O aluno esta reprovado");
    }else if (media <= 7){
    printf (" O aluno está de recuperação!");
    }
}
 