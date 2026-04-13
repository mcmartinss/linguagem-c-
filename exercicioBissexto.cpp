//Programa que peça ao usuário que digite tres numeros correspondentes ao dia, mes e ano. 
//Peça que o usuario insira numeros dentro da faixa correta ano entre 1900 e 2100, dias entre 1 e 31 e meses entre 1 e 12.
//Verifique se as datas sao validas (incluindo casos extra como ano bissexto)

#include <stdio.h>

int main(){
	
	//Definição de variaveis (inteiras)
	int dia, mes, ano;
	int diaNoMes, dataValida;
	
	//Laço de repetição para validar as instruções e repeti-las de acordo com a condiçao
	do{
		dataValida = 1; //Verdadeira
		
		//Entrada e saida de dados pelo usuario
		printf("Insira um dia: ");
		scanf("%d", &dia);
		printf("Insira um mes: ");
		scanf("%d", &mes);
		printf("Insira um ano: ");
		scanf("%d", &ano);
		
		//Condição para a validação do ano 
		if(ano<1900 || ano>2100){
			printf("ANO INVALIDO! Tente novamente\n");
			dataValida = 0; //falso 
		}
		//Condição para a validação do mes
		if (mes<1 || mes>12){
			printf("MES INVALIDO! Tente novamente\n");
			dataValida = 0; //Falso
		}
		//Condição de contagem de dias em diferentes meses (incluindo em anos bissextos)
		if(dataValida){
			switch (mes){
				case 2: //fevereiro (29 dias em ano bissexto; 28 dias em anos padrao)
					if ((ano%4 == 0 && ano%100 != 0) || (ano%100 == 0)){
						diaNoMes = 29;
					} else {
						diaNoMes = 28;
					}
				break;
				case 4: case 6: case 9: case 11: //meses com 30 dias
					diaNoMes = 30;
					break;
				default: //meses com 31 dias
					diaNoMes = 31;
					break;
			}   
		}
		if (dia<1 || dia>diaNoMes){ //Condição para a validação do dia 
			printf("DIA INVALIDO! Tente novamente\n");
			dataValida = 0; //Falso 
		}
	} while (!dataValida); //Roda o programa enquanto a condição for verdadeira
	
	printf("DATA VALIDADA: %d / %d / %d\n", dia, mes, ano); //Exibição da data 
	
return 0; //Fim do programa

}
