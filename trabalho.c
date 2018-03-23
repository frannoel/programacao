#include<stdio.h>

int main()
{
    float m_VE, VC, VF, soma, soma1;// definimos como variaveis a media de VE (m_VE), nota de VC (VC), nota de VF (VF), a soma das notas de VC + m_VE (soma) e o calculo da nota necessaria de VF (soma1)//
    printf("Entre com a media de VE e a nota de VC");// pede a entrada da media de VE e nota de VC//
    scanf("%f%f", &m_VE, &VC);//armazena a nota de VE e VC//
    soma = m_VE + VC;//efetua a soma da nota de VE e VC//
    soma1 = ((soma-20)*(-1))/2;//efetua o calculo da nota de VF necessaria apos a soma das notas de VC e media de VE//
    if(soma>=12)//condicional que define: caso o aluno tenha mais de 12 pontos somados em media de VE e nota de VC, ele necessitara tirar no minimo 4.0 na nota de VF
        VF = 4.0;
    else // caso a condicao acima nao seja satisfeita a nota minima de VF sera definida pela variavel soma1//
        VF = soma1;
    printf("nota de VF minima eh %f\n", VF);//apreenta  como saida a nota minima de VF//
    system("pause");
    return 0;
}
