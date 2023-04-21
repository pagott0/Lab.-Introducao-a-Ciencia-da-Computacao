#include <stdio.h>

int main(){
    float valorHora, numHoras, desc, sLiq, sBrut;
    printf("Digite o valor por hora trabalhada, o número de horas e o desconto\nxOs valores devem ser escritos separados por virgulas.\n\n");
    scanf("%f, %f, %f", &valorHora, &numHoras, &desc);
    sBrut = valorHora*numHoras;
    sLiq = sBrut - sBrut*(desc/100);
    printf("Salário bruto: %.1f\nDesconto: %.1f\nSalário liquido: %.1f", sBrut, desc, sLiq);


}
