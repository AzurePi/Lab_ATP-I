#include <stdio.h>

// Cria��o da struct
struct aluno {
  char nome[101];
  int matricula;
  float cr;
};

int main() {
  struct aluno aluno1;

  // Preenchendo a vari�vel aluno1
  printf("Digite um nome: ");
  gets(aluno1.nome);
  printf("Digite um n�mero de matr�cula: ");
  scanf("%d", &aluno1.matricula);
  printf("Digite o coeficiente de rendimento: ");
  scanf("%f", &aluno1.cr);

  // Impress�o da vari�vel aluno
  printf("Nome: %s\n", aluno1.nome);
  printf("Matr�cula: %d\n", aluno1.matricula);
  printf("Coeficiente de rendimento: %f\n", aluno1.cr);
    
  return 0;
}
  
