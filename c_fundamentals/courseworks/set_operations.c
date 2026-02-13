#include <stdio.h>
#include <locale.h>
#define M 8 
#define N 10

void opcoes () {
    
    printf ("\nEscolha uma das opções:\n");
    
    printf ("\nMenu:\n");
    printf ("1 - Criar um novo conjunto vazio:\n");
    printf ("2 - Inserir dados em um conjunto:\n");
    printf ("3 - Remover um conjunto:\n");
    printf ("4 - Fazer a união entre dois conjuntos:\n");
    printf ("5 - Fazer a intersecção entre dois conjunto:\n");
    printf ("6 - Mostrar um conjunto:\n");
    printf ("7 - Mostrar todos os conjuntos:\n");
    printf ("8 - Buscar por um valor:\n");
    printf ("9 - Sair do programa:\n");
    
    return;
    
}

void zerar_matriz (int m[M][N]) {
    
    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
           m[i][j]=0;
           //printf ("%d\t", m[i][j]);
        }   
       //printf ("\n");
    }
    
}

/*void mostrar_matriz (int m[M][N]) {
    
    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
           printf ("%d\t", m[i][j]);
        }   
        printf ("\n");
    }
   
}*/

void inserir_dados (int lim, int m[M][N]) {
    
    int x, num, verificacao;
    
    printf ("\nDigite em qual índice você deseja inserir dados (índices existentes 0 a %d):\n", lim-1);
    printf ("Obs: Quando estiver inserindo os dados, caso queira parar antes do fim do conjunto digite '0':\n");
    scanf ("%d", &x);
    
    if (x<lim) {
        for (int i=x; i<x+1; i++) {
            for (int j=0; j<N; j++) {
                if (m[i][j] != 0) {
                    continue;
                } else {
                    
                    do {
                        printf ("\nDigite o número que você deseja no índice %d, na posição %d:\n", i, j);
                        scanf ("%d", &num);
                        
                        if (num==0) {
                            
                            return;
                            
                        } else {
                        
                            verificacao=1;
                            
                            for (int k=0; k<N; k++) {
                                if (num==m[i][k]) {
                                    verificacao=0;
                                    break;
                                }
                            }
                                
                            if (verificacao==1) {
                                m[i][j]=num;
                            } else {
                                printf ("\nOps: O valor inserido já existe no conjunto, por favor, coloque um número diferente em cada posição.\n");
                            }
                            
                        }
                        
                    } while (verificacao==0);
                    
                }
                
            }   
        }
        
    } else {
        printf ("\nErro: Índice digitado não existe dentro dos conjuntos criados:\n");
    }
    
}

int remover_conjunto (int sub, int m[M][N]) {
    
    int x, i, j, y=0;
    
    do {
        
        if (y!=0) {
            
            printf ("\nErro: Você digitou um índice que não consta dentre os conjuntos existentes... Por favor digite um índice que exista dentre os conjuntos:\n");
            scanf ("%d", &x);
            
        } else {
            
            printf ("\nDigite o índice do conjunto que você deseja remover:\n");
            scanf ("%d", &x);
            y++;
            
        }
        
    } while (x>=sub || x<0);
    
    for (i=x; i<M-1; i++) {
        for (j=0; j<N; j++) {
            
            m[i][j]=m[i+1][j];
            
        }
    }
    
    sub--;
    
    printf ("\nRemoção executada com sucesso!\n");

    return sub;
    
}

int uniao_conjunto (int quant, int m[M][N]) {
    
    int x, y, veri=0, i, j, k, soma=0, n[N]={0}, verificacao;
    
    do {
        
        if (veri==0) {
            printf ("\nDigite os índices que você deseja unir:\n");
            scanf ("%d%d", &x, &y);
            veri++;
        } else {
            printf ("\nErro: O dígitos inseridos não existem dentro dos conjuntos, por favor digite os índices que já existem dentro dos conjuntos:\n");
            scanf ("%d%d", &x, &y); 
        }
        
    } while (x>=quant || y>=quant || x<0 || y<0);
    
    if (x>y) {
        int aux=x;
        x=y;
        y=aux;
    }
    
    for (j=0; j<N; j++) {
        if (m[x][j]!=0) {
            n[soma] = m[x][j];
            soma++;
        }
    }

    
    for (j=0; j<N; j++) {
        if (m[y][j]!=0) {
            verificacao=1;
            for (k=0; k<soma; k++) {
                if (m[y][j]==n[k]){
                    verificacao=0;
                    break;
                }
            }
            
            if(verificacao==1) {
                n[soma]=m[y][j];
                soma++;
            }
        }
    }
    
    if (soma>N)
        return 0;
    
    for (i=quant-1; i>y; i--) {
        for (j=0; j<N; j++) {
            m[i+1][j]=m[i][j];
        }
    }

    for (j=0; j<soma; j++) {
        m[y+1][j]=n[j];
    }
    
    return 1;
    
}

int interseccao_conjunto (int quant, int m[M][N]) {
    
    int x, y, veri=0, i, j, k, soma=0, n[N]={0}, verificacao;
    
    do {
        
        if (veri==0) {
            printf ("\nDigite os índices que você deseja fazer a intersecção:\n");
            scanf ("%d%d", &x, &y);
            veri++;
        } else {
            printf ("\nErro: O dígitos inseridos não existem dentro dos conjuntos, por favor digite os índices existentes dentro dos conjuntos:\n");
            scanf ("%d%d", &x, &y); 
        }
        
    } while (x>=quant || y>=quant || x<0 || y<0);
    
    if (x>y) {
        int aux=x;
        x=y;
        y=aux;
    }
    
    for (i=0; i<M; i++) {
        if (m[x][i]!=0) {
            verificacao=0;
            for (j=0; j<N; j++) {
                if (m[x][i]==m[y][j]) {
                    verificacao=1;
                    break;
                }
            }
            
            if (verificacao==1) {
                n[soma]=m[x][i];
                soma++;
            }
            
        }
    }
    
    for (i=quant-1; i>y; i--) {
        for (j=0; j<N; j++) {
            m[i+1][j]=m[i][j];
        }
    }

    for (j=0; j<soma; j++) {
        m[y+1][j]=n[j];
        
    }
    
    return 1;
    
}

void mostra_conjunto (int quant, int m[M][N]) {
    
    int x, verificacao=0, cont=0, j;
    
    do {
        
        if (verificacao==0) {
            printf ("\nDigite o índice do conjunto que você deseja ver:\n");
            scanf ("%d", &x);
        } else {
            printf ("\nErro: O número digitado não consta entre os conjuntos existentes, por favor, escolha índices entre 0-%d\n", quant-1);
            scanf ("%d", &x);
        }
        verificacao++;
        
    } while (x<0 || x>=M);
    
    for (j=0; j<N; j++) {
        if (m[x][j]!=0) {
            continue;
        } else {
            cont++;
        }
    }
    
    if (cont==N) {
        printf ("\nConjunto %d: vazio\n", x);
    } else {
        printf ("\nConjunto %d:\t", x);
        for (j=0; j<N; j++) {
            if (m[x][j]==0) {
                continue;
            } else {
                printf ("%d\t", m[x][j]);
            }
        }
        printf ("\n");
    }
    
}

void mostrar_todos_conjuntos (int quant, int m[M][N]) {
    
    int i, j, cont;
    
    printf ("\n");
    for (i=0; i<quant; i++) {
        printf ("Conjunto %d:\t", i);
        cont=0;
        for (j=0; j<N; j++) {
            if (m[i][j]!=0) {
                printf ("%d\t", m[i][j]);
                cont=1;
            }
            
        }
        
        if (cont==0) {
            printf ("vazio");
        }
        
        printf ("\n");
    }
    
}

void buscar_valor (int quant, int m[M][N]) {
    
    int chave, i, j, verificacao=0, veri=0;
    
    do {
        
        if (verificacao==0) {
            printf ("\nDigite um valor para ser buscado nos conjuntos existentes:\n");
            scanf ("%d", &chave);
        } else {
            printf ("\nOps: Não é possível buscar pelo número '0' nos conjuntos, porque que ele é tido como vazio, busque apenas por números diferentes de '0':\n");
            scanf ("%d", &chave);
        }
        
        verificacao++;
    
    } while (chave==0);
    
    for (i=0; i<quant; i++) {
        for (j=0; j<N; j++) {
            if (m[i][j]==chave) {
                veri++;
            }
        }
    }
    
    if (veri!=0) {
        
        printf ("\nConjunto(s) que contém o valor %d:\n", chave);
        
        for (i=0; i<quant; i++) {
            for (j=0; j<N; j++) {
                if (m[i][j]==chave) {
                    printf ("\nConjunto %d\n", i);
                }
            }
        }
    } else {
        printf ("\nO valor buscado não foi achado em nenhum dos conjuntos existentes...\n");
    }
    
}

int main () {
    
    setlocale(LC_ALL, "Portuguese");
    
    int v[M][N], cont=0, n=0, t;
    
    zerar_matriz (v);
    
    do {
        
        opcoes ();
        
        scanf ("%d", &n);
        
        switch (n) {
            
            case 1:
                
                if (cont<M) {
                    cont++;
                    printf ("\n%d conjunto(s) foram criados!\n", cont);
                } else {
                    printf ("\nOps: O limite da matriz já foi alcançado...\n");
                }
                
                break;
                
            case 2:
                
                if (cont==0) {
                    printf ("\nOps: Nenhm conjunto foi criado, não é possível inserir números, por favor, crie um para inserir números.\n");
                } else {
                    inserir_dados (cont, v);
                    //mostrar_matriz (v);
                }
                break;
                
            case 3:
            
                if (cont==0) {
                    printf ("\nOps: Não há conjuntos para serem removidos...\n");
                    
                } else {
                    int checar = remover_conjunto (cont, v);
                    //mostrar_matriz (v);
                    
                    cont=checar;
                }
                break;
                
            case 4:
                
                if (cont==0 || cont==1) {
                    
                    printf ("\nOps: Ou não existe conjuntos, ou não há conjuntos suficientes para unir, que seriam 2...\n");
                    
                } else if (cont+1>=M) {
                    printf ("\nOps: Se a união for feita o número de linhas da matriz será ultrapassado, por isso não será possível executar a união dos conjuntos...\n");
                } else {
                    t = uniao_conjunto (cont, v);
                    
                    if (t==1) {
                        printf ("\nUnião executada com sucesso!\n");
                        cont++;
                    } else {
                        printf ("\nOps: A união não será possível, o números de elementos é maior que o números de colunas disponíveis...\n");
                    }
                    //mostrar_matriz (v);
                }
                
                break;
                
            case 5:
                
                if (cont==0 || cont==1) {
                    
                    printf ("\nOps: Ou não existe conjuntos, ou não há conjuntos suficientes para fazer intersecção, que seriam 2...\n");
                    
                } else if (cont+1>=M) {
                    printf ("\nOps: Se a intersecção for feita o número de linhas da matriz será ultrapassado, por isso não será possível a realizar...\n");
                } else {
                    
                    t = interseccao_conjunto (cont, v);
                    
                    if (t==1) {
                        printf ("\nIntersecção executada com sucesso!\n");
                        cont++;
                    }
                    //mostrar_matriz (v);
                    
                }
                
                break;
                
            case 6:
                
                if (cont==0) {
                    printf ("\nOps: Não existem conjuntos para serem mostrados, por favor crie conjuntos para que possam ser mostrados.\n");
                } else {
                    mostra_conjunto (cont, v);
                }
                break;
                
            case 7:
                
                if (cont==0) {
                    printf ("\nOps: Não existem conjuntos para serem mostrados, por favor, crie conjuntos para que possam ser mostrados.\n");
                } else {
                    mostrar_todos_conjuntos (cont, v);
                }
                break;
                
            case 8:
                
                if (cont==0) {
                    printf ("\nOps: Não existem conjuntos para realizar busca de valor, por favor, crie conjuntos para realizar busca neles :)\n");
                } else {
                    buscar_valor (cont, v);
                }
                break;
                
            case 9:
                printf ("\nFechando programa...\n");
                break;
            
            default:
                printf ("\nOps: O número digitado não está dentro do intervalo, por favor digite um número entre 1 - 9.\n");
                break;
            
        }
        
    } while (n != 9);
    
    return 0;
    
}
