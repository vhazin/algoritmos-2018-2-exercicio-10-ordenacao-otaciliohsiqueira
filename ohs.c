# include <stdio.h>
# include <string.h>

const int tam = 20;

int main()
{


    int qtdNomes;
    int comportou = 0, nComportou = 0; 
    
    char condicao;

    int i, j, x, menor;


    scanf("%d", &qtdNomes);    
    char listaNomes[qtdNomes][tam], aux[qtdNomes];
    for (i = 0; i < qtdNomes; i++) {
      scanf(" %c ", &condicao);
      if (condicao == '+') {
        comportou++;
      }else if (condicao == '-') {
        nComportou++;
      }
      scanf("%s", listaNomes[i]);
    }
    
    for(i = 0; i < qtdNomes - 1; i++)
    {
        x = 0;
        menor = i;
        for(j = i + 1; j < qtdNomes; j++)
        {
            x = 0;
            while(listaNomes[menor][x] == listaNomes[j][x])
            {
                    x++;
            } 
            if(listaNomes[menor][x] > listaNomes[j][x])
            {
                    menor = j;
            }
        }
        if(menor != i)
        {
            strcpy(aux, listaNomes[menor]);
            strcpy(listaNomes[menor], listaNomes[i]);
            strcpy(listaNomes[i], aux);
        }
    }

    
    for( i = 0; i < qtdNomes; i++)
    {
        printf("%s\n", listaNomes[i]);
        
    }

    printf("Se comportaram: %d | Nao se comportaram: %d\n", comportou, nComportou);
    return 0;
}
