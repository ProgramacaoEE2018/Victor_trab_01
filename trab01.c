#include <stdio.h>

int main(void)
{
    int n=0,a;
    printf("Digite o numero de notas de VE\n");
    scanf("%d",&a);
    printf("Digite os valores das notas de VE\n");
    float ve = 0,vc,vf,aux = 0,mve;
    for(n=0;n<a;n++)
    {
        scanf("%f", &aux);
        ve = ve + aux;/*irei salvar na variavel aux os valores de cada nota nova e na variavel ve
        a soma de todas as ve*/
    }
    mve=ve/a;//mve é a media de ve
    printf("Digite a nota de VC\n");
    scanf("%f", &vc);
    vf=10-(mve+vc)/2;//a nota minima de vf para ficar com a media 5 independente se tem que tirar no minimo 4
    printf("Voce ira precisar de uma nota maior ou igual a %.2f\n", vf);
}
