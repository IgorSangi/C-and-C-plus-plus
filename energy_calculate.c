#include <stdio.h>

typedef struct
{
    char nome[301];
    double gasto;
} Aparelho_;

void afirmI(Aparelho_* aparelhos, double* tarifas);
void afirmII(Aparelho_* aparelhos, double* tarifas);
void afirmIII(Aparelho_* aparelhos, double* tarifas);

int main()
{
    double tarifas[3];
    int i;
    Aparelho_ aparelhos[8];
    int op;

    printf("Insira a tarifa em bandeira verde por kWh: ");
    scanf(" %lf%*c", &tarifas[0]);
    printf("Insira a tarifa em bandeira amarela por kWh: ");
    scanf(" %lf%*c", &tarifas[1]);
    printf("Insira a tarifa em bandeira vermelha por kWh: ");
    scanf(" %lf%*c", &tarifas[2]);

    for(i = 0; i < 8; i++)
    {
        printf("Insira a descricao do aparelho %d:\n", i+1);
        scanf(" %300[^\n]%*c", aparelhos[i].nome);
        printf("Insira o gasto do aparelho %d em kWh:\n", i+1);
        scanf(" %lf%*c", &aparelhos[i].gasto);
    }

    do
    {
        printf("\n1. Verificar afirmacao 1\n"
               "2. Verificar afirmacao 2\n"
               "3. Verificar afirmacao 3\n"
               "4. Finalizar\n"
               "Escolha: ");
        scanf(" %d%*c", &op);

        switch(op)
        {
            case 1:
                {
                    afirmI(aparelhos, tarifas);
                }
            break;
            case 2:
                {
                    afirmII(aparelhos, tarifas);
                }
            break;
            case 3:
                {
                    afirmIII(aparelhos, tarifas);
                }
            break;
            case 4:
                {
                    printf("\nFim de execucao\n");
                }
            break;
            default:
                {
                    printf("\nOpcao invalida!\n");
                }
        }
    } while(op != 4);

    return 0;
}

void afirmI(Aparelho_* aparelhos, double* tarifas)
{
    int i;
    int ind[2];
    int conf = 0;

    for(i = 0; i < 8; i++)
    {
        if(aparelhos[i].gasto == 1.75)
        {
            ind[0] = i;
            conf++;
        }
        else if(aparelhos[i].gasto == 2.25)
        {
            ind[1] = i;
            conf++;
        }
    }
    if(conf < 2)
    {
        printf("\nOs valores de gasto para os aparelhos nao foram encontrados!\n");
        return;
    }

    if((aparelhos[ind[0]].gasto*tarifas[1]*30) == 1.05
       && (aparelhos[ind[1]].gasto*tarifas[1]*30) == 1.65)
    {
        printf("\nAfirmacao verdadeira!\n");
    }
    else
    {
        printf("\nAfirmacao falsa! Segue a afirmacao correta:\n");
        printf("\nEm bandeira amarela, o valor mensal da tarifa de energia eletrica"
               " para um chuveiro de 3.500 W seria de R$%.2lf, e de R$%.2lf, para"
               " um chuveiro de 5.500 W\n",
               aparelhos[ind[0]].gasto*tarifas[1]*30,
               aparelhos[ind[1]].gasto*tarifas[1]*30);
    }
}

void afirmII(Aparelho_* aparelhos, double* tarifas)
{
    int i;
    int ind[2];
    int conf = 0;

    for(i = 0; i < 8; i++)
    {
        if(aparelhos[i].gasto == 0.24)
        {
            ind[0] = i;
            conf++;
        }
        else if(aparelhos[i].gasto == 0.12)
        {
            ind[1] = i;
            conf++;
        }
    }
    if(conf < 2)
    {
        printf("\nOs valores de gasto para os aparelhos nao foram encontrados!\n");
        return;
    }

    if(((aparelhos[ind[0]].gasto+aparelhos[ind[1]].gasto)*tarifas[0]*30) == 5.4
       && ((aparelhos[ind[0]].gasto+aparelhos[ind[1]].gasto)*tarifas[1]*30) == 5.78)
    {
        printf("\nAfirmacao verdadeira!\n");
    }
    else
    {
        printf("\nAfirmacao falsa! Segue a afirmacao correta:\n");
        printf("\nDeixar um carregador de celular e um modem de internet em sand-by"
               " conectados na rede de energia eletrica durante 24 horas representa"
               " um gasto mensal de R$%.2lf na tarifa de energia eletrica em bandeira"
               " verde, e de R$%.2lf, em bandeira amarela\n",
               (aparelhos[ind[0]].gasto+aparelhos[ind[1]].gasto)*tarifas[0]*30,
               (aparelhos[ind[0]].gasto+aparelhos[ind[1]].gasto)*tarifas[1]*30);
    }
}

void afirmIII(Aparelho_* aparelhos, double* tarifas)
{
    int i;
    int ind[2];
    int conf = 0;

    for(i = 0; i < 8; i++)
    {
        if(aparelhos[i].gasto == 0.3)
        {
            ind[0] = i;
            conf++;
        }
        else if(aparelhos[i].gasto == 0.04)
        {
            ind[1] = i;
            conf++;
        }
    }
    if(conf < 2)
    {
        printf("\nOs valores de gasto para os aparelhos nao foram encontrados!\n");
        return;
    }

    if(((aparelhos[ind[0]].gasto*tarifas[0]*30)-(aparelhos[ind[1]].gasto*tarifas[0]*30)) == 3.9)
    {
        printf("\nAfirmacao verdadeira!\n");
    }
    else
    {
        printf("\nAfirmacao falsa! Segue a afirmacao correta:\n");
        printf("\nEm bandeira verde, o consumidor gastaria mensalmente R$%.2lf a mais"
               " na tarifa de energia eletrica em relacao a cada lampada incandescente"
               " usada no lugar de uma lampada LED\n",
               (aparelhos[ind[0]].gasto*tarifas[0]*30)-(aparelhos[ind[1]].gasto*tarifas[0]*30));
    }
}
