#include <stdio.h>

int pascal(int linhas){
    int pascal[30][30], i, j;
    
    for(i = 0; i < linhas; i++){
        for(j = 0; j <= i; j++){
            if(j == 0 || j == i){
                pascal[i][j] = 1;
            }
            else{
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
            }
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int arranjo(int n, int p){
    int i, resul = 1;
    for(i = n; i > n - p; i--){
        resul = resul * i;
    }
    printf("O resultado do arranjo eh: %d\n", resul);
    return 0;
}
int permutacao(int num){
    int i, fat = 1;
    for(i = num; i >= 1; i--){
        fat = fat * i;
    }
    printf("resultado da permutacao eh: %d", fat);
    return 0;
}

int fatorial(int n) {

    int resultado = 1;

    for(int i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

int combinacao(int n, int p) {

    return fatorial(n) / (fatorial(p) * fatorial(n - p));
}
int main()
{
    int esc, linhas, n, p, num, resulcomb;
    printf("==========Trabalho de implementação========== \n");
    printf(" 1 - Triangulo de pascal \n 2 - Arranjo\n 3 - Pemutação Simples\n 4 - Combinação\n");
    scanf("%d", &esc);
    
    switch(esc){
        case 1: printf("Triangulo Pascal\n");
        printf("Digite a quantidade de linhas: \n");
        scanf("%d", &linhas);
        
        pascal(linhas);
        break;
        
        case 2: printf("Arranjo\n");
        printf("Digite o valor total \n");
        scanf("%d", &n);
        
        printf("Digite a quantidade de posicoes\n");
        scanf("%d", &p);
        
        arranjo(n,p);
        break;
        
        case 3:printf("Permutacao simples\n");
        printf("Digite a quantidade que deseja permutar: \n");
        scanf("%d", &num);
        permutacao(num);
        
        break;
        
        case 4: printf("Combinação");
        printf("Digite o valor total \n");
        scanf("%d", &n);
        
        printf("Digite a quantidade de posicoes\n");
        scanf("%d", &p);
        
        resulcomb = combinacao(n, p);

        printf("Resultado da combinacao: %d\n", resulcomb);
        break;

        default:

            printf("Opcao invalida!\n");

            break;

      
        
    }
    return 0;
}
