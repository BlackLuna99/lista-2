#include <stdio.h>

int main(){

int votos=0,paulo=0,renata=0,branco=0,nulo=0;

puts("\n*Bem vindos a votação da presidencia de um certo pais*\n");

while(1){
    int voto;
printf("votos totais-%d",votos);
puts("\nDigite o seu voto.");
puts("5-Paulo\n7-Renata");
scanf("%d",&voto);

if(voto<0){
    break;
}

int comfirma;
switch(voto){
    case 0:
    puts("Você votou em branco");
    puts("Você tem certeza do seu voto?");
    puts("1-sim\n0-não");
    scanf(" %d",&comfirma);
    if(comfirma){
        puts("voto realizado com sucesso");
        ++branco;
        ++votos;
    }else{
        puts("repita a votação");
    }
    break;
    case 5:
    puts("Você votou no Paulo");
    puts("Você tem certeza do seu voto?");
    puts("1-sim\n0-não");
    scanf(" %d",&comfirma);
    if(comfirma){
        puts("voto realizado com sucesso");
        ++paulo;
        ++votos;
    }else{
        puts("repita a votação");
    }
    break;
    case 7:
    puts("Você votou na Renata");
    puts("Você tem certeza do seu voto?");
    puts("1-sim\n0-não");
    scanf(" %d",&comfirma);
    if(comfirma){
        puts("voto realizado com sucesso");
        ++renata;
        ++votos;
    }else{
        puts("repita a votação");
    }
    break;
    default:
    puts("Você votou nulo");
    puts("Você tem certeza do seu voto?");
    puts("1-sim\n0-não");
    scanf(" %d",&comfirma);
    if(comfirma){
        puts("voto realizado com sucesso");
        ++nulo;
        ++votos;
    }else{
        puts("repita a votação");
    }
}

}

if(paulo>renata) printf("paulo wins");
else printf("renata wins");

printf("\nvotos totais = %d",votos);
printf("\nvotos paulo = %.2f",(float)paulo/votos);
printf("\nvotos renata = %.2f",(float)renata/votos);
printf("\nvotos brancos = %.2f",(float)branco/votos);
printf("\nvotos nulos = %.2f\n",(float)nulo/votos);

return 0;
}