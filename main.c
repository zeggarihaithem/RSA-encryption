#include <stdio.h>
#include <stdlib.h>
#include"conio.h"
#include"conio2.h"
#include"gmp.h"
#include"biblio.h"




void main()
{
    int menu1=0;

    int booll=0;
	char* E1[] =    {
                      "Display",
                      "Search_Replace",
                      "Crypt",
                      "Decrypt",
                      "EXIT"
                     };

	system("mode con  cols=168");


   int i,j;

    for(i=1,j=58;i<=29;i++,j--)
    {
        AffichezCadre(1,i,168 ,2,219,WHITE);
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
    dessine_menu (57 , 10);
    menu1=Menu(E1,5,40,20,88,17);
    gotoxy(30,40);
    textcolor(BLACK);
    textbackground(WHITE);
    printf("realiser par:");
 //----------------------------------------------------------------
       switch (menu1)
         {
            case 1:
            	Display();
                goto menu;
                break;


            case 3:
               choix_cryptage();
               goto menu;
                break;

            case 4:
                choix_decryptage();
                goto menu;
                break;

            case 5:
                booll=1;
                break;

        }
    }while (booll==0 );
         system("cls");
        system("pause");

}

