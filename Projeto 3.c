#include <stdio.h>

#include <stdio.h>

int main() {
    float nota;
    int i = 0;

    while (1) { // Loop infinito até o usuário digitar o número de encerramento
        printf("Qual a %dª nota? Digite -1 para encerrar: ", i + 1);
        scanf("%f", &nota);

        // Condição de encerramento com o número especial (-1)
        if (nota == -1) {
            break; // Encerra o loop se o usuário digitar -1
        }

        // Verifica se a nota está entre 0 e 10
        if (nota < 0 || nota > 10) {
            printf("Nota inválida! A nota deve estar entre 0 e 10.\n");
            continue; // Pede a nota novamente
        }

        // Se passou pela validação, a nota é válida
        printf("A %dª nota é válida: %.2f\n", i + 1, nota);
        i++; // Incrementa o contador de notas
    }

  
    return 0;
}
