#include <stdio.h>

#define n 2

// Cria��o da struct
struct aluno {
  char nome[101];
  int matricula;
  float cr;
};

int main() {
  struct aluno aluno_aux, alunos[n];
  int i;

  // Preenchendo a vari�vel aluno1
  for(i=0; i<n; i++){
    printf("Digite o nome do aluno %d: ", i+1);
    scanf(" %s", aluno_aux.nome);
    printf("Digite o n�mero de matr�cula: ");
    scanf("%d", &aluno_aux.matricula);
    printf("Digite o coeficiente de rendimento: ");
    scanf("%f", &aluno_aux.cr);
    printf("\n");

    alunos[i] = aluno_aux;
  }

  printf("\n");
  printf("\t\tAlunos\n");

  // Impress�o da vari�vel aluno
  for(i=0; i<n; i++){
    printf("Nome: %s\n", alunos[i].nome);
    printf("Matr�cula: %d\n", alunos[i].matricula);
    printf("Coeficiente de rendimento: %.2f\n", alunos[i].cr);
    printf("\n");
  }
  
  return 0;
}
  
