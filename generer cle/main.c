#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"conio.h"
#include"conio2.h"
#include"gmp.h"
#include"biblio.h"

int main()
{

     int menu1=0;
    int i;
	char* E1[] =    {

                      "Keys Generator",

                     };

	system("mode con  cols=168");


   int ii,j;

    for(ii=1,j=58;i<=29;ii++,j--)
    {
        AffichezCadre(1,ii,168 ,2,219,WHITE);
        AffichezCadre(1,j,168 ,2,219,WHITE);
    }
    start();
    system("pause");
    gotoxy(1,57);
    printf("11011111110001101111111001011110110011011111110010111101111001111011011111110001101110001100110011100101111011110011011101111111011010111001011110111100110110101111110001");



	do
	{

    menu:





      start();
    gotoxy(1,57);
    printf("11011111110001101111111001011110110011011111110010111101111001111011011111110001101110001100110011100101111011110011011101111111011010111001011110111100110110101111110001");

    menu1=Menu(E1,1,40,27,88,1);
    gotoxy(30,40);
    textcolor(BLACK);
    textbackground(WHITE);
    printf("realiser par:");

    switch (menu1)
            {
                case 1:





     system("cls");
                   FILE *ee=NULL;
                   FILE *nn=NULL;
                   FILE *dd=NULL;
                   ee=fopen("e.txt","w+");
                   nn=fopen("n.txt","w+");
                   dd=fopen("d.txt","w+");

                   mpz_t n;mpz_init (n);
                   mpz_t e;mpz_init (e);
                   mpz_t d;mpz_init (d);
                   char first[LONGUEUR_CHAINE];

                   gmp_randstate_t state;

                   gmp_randinit_default( state );//obligatoir initialisation du state (variable pour randomly)

                   mpz_t intsate;

                   mpz_init( intsate );

                   gotoxy(3,2);
                   printf("Entrer une chain de char pour initialiser le generateur: ");
                   lire(first,LONGUEUR_CHAINE);

                   mpz_import(intsate,strlen(first),1,1,0,0, first );


                       gmp_randseed( state, intsate );//initialisation state  par intstate

                   gotoxy(82,5);
                   printf("Patienter ...");

                   key_gen(  n,  e,  d,   state );

                   gmp_fprintf (nn, "%Zd\n",n );
                   gmp_fprintf (ee, "%Zd\n",e );
                   gmp_fprintf (dd, "%Zd\n",d );

                   gotoxy(82,7);
                   printf("FIN.");


                   fclose(ee);
                  fclose(nn);
                  fclose(dd);
                   char c1=0;
                  ret: c1=getch();
                   if(c1==8)
                   {

                    system("cls");

                    }

            }

            }while ((menu1 <1) || (menu1 >2));
            system("cls");
        system("pause");
}
