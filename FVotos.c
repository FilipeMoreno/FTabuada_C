/* Um programa para calcular a porcentagem de votos Brancos, Nulos e Validos.
   By: Filipe Moreno - www.filipemoreno.com.br
   Versao: 1.0 - 24/03/2019
*/

int main()
{
    float eleitores, branco, nulo, valido, por1, por2, por3, total;
    printf("Qual foi o total de eleitores na cidade? ");
    scanf("%d", &eleitores);
    printf("Qual foi o total de votos em branco? ");
    scanf("%d", &branco);
    printf("Qual foi o total de votos nulos? ");
    scanf("%d", &nulo);
    printf("Qual foi o total de votos validos? ");
    scanf("%d", &valido);
    if (nulo,branco,valido >= eleitores){
        printf("\n");
        printf("ERRO. O numero dos votos nao pode ser maior do que o total de eleitores\n");
        printf("Tente novamente!\n");
        printf("\n");
        return main();
    }
    if (eleitores < branco){
        printf("\n");
        printf("ERRO. O numero de votos em BRACO nao pode ser maior do que o total de eleitores\n");
        printf("Tente novamente!\n");
        printf("\n");
        return main();
    }
    if (eleitores < nulo){
        printf("\n");
        printf("ERRO. O numero de votos NULOS nao pode ser maior do que o total de eleitores\n");
        printf("Tente novamente!\n");
        printf("\n");
        return main();
    }
    if (eleitores < valido){
        printf("\n");
        printf("ERRO. O numero de votos VALIDOS nao pode ser maior do que o total de eleitores\n");
        printf("Tente novamente!\n");
        printf("\n");
        return main();
    }
    else {
        total = valido + nulo + branco;
        if (total == eleitores){
            por1 = valido / eleitores * 100;
            por2 = nulo / eleitores * 100;
            por3 = branco / eleitores * 100;
            printf("\n");
            printf("    Sucesso! Votos iguais aos eleitores. Porcentagem dos votos:\n    Validos: %1.f%%, Nulos: %1.f%%, Brancos: %1.f%%", por1, por2, por3);
            printf("\n");
            return 0;
        }
        else{
            printf("\n");
            printf("ERRO! O total de votos e maior/menos doq os eleitores!\n");
            printf("Tente novamente!\n");
            printf("\n");
            return main();
        }
    }
}
