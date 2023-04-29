#include <stdio.h>
#include "funcoes/void.h"

int menu()
{
  int options[] = {0, 1, 2};
  int option = -1;

  printf("Selecione a opção desejada \n");
  printf("1 - Adicionar paciente \n");
  printf("3 - Listar paciente \n");
  printf("0 - Sair \n");
  scanf("%d", &option);

  if (!includes(options, option))
  {
    menu();
  }

  return option;
}

void main()
{
    criarArquivo();

    int option = menu();

  switch (option)
  {
  case 1:
    criarPaciente();
    break;
  case 2:
    listarPacientes();
    break;
  default:
    break;
  }

  if (option == 0)
    return;

}