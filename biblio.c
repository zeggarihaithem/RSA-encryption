#include <stdio.h>
#include <stdlib.h>
#include"conio.h"
#include"conio2.h"
#include"gmp.h"
#include"biblio.h"

#define COLOR0 BLACK//DARKGRAY
#define COLOR1 WHITE//LIGHTCYAN
#define COLOR2 LIGHTGRAY
#define LONGUEUR_PREMIER_p 401
#define LONGUEUR_PREMIER_q 400
#define LONGUEUR_PREMIER_e 30
#define LONGUEUR_CHAINE 200

//************************************graphique***afichage menue*****************************************

void start()
{


    int i=0;
    textcolor(BLACK);
    textbackground(WHITE);
    while(i<=56)
{
    if(i%2==0)
    {
        gotoxy(1,i);i++;
        printf("010011011100101111011110011011111100110111001011110111100110111111100011011100011011100101111011110011011111110010111101111001101111111000110111001110011001101010011011011");
    }
    else
    {
        gotoxy(1,i);i++;
        printf("11011111110001101111111001011110110011011111110010111101111001111011011111110001101110001100110011100101111011110011011101111111011010111001011110111100110110101111110001");
    }
}

}

//------------------------------------------------------------------------------------------------------------

void dessine_menu (int x , int y) // Dessine le mot menu à partir du point M(x,y) de la console
{
textcolor(DARKGRAY);
textbackground(WHITE);
 gotoxy(x,y);
 printf("%c%c%c%c%c   %c%c%c%c%c   %c%c%c%c%c%c%c%c   %c%c%c%c     %c%c%c%c   %c%c%c   %c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); gotoxy(x,y+1);
 printf("%c%c%c%c%c%c %c%c%c%c%c%c   %c%c%c%c%c%c%c%c   %c%c%c%c%c    %c%c%c%c   %c%c%c   %c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); gotoxy(x,y+2);
 printf("%c%c%c%c%c%c%c%c%c%c%c%c%c   %c%c%c        %c%c%c%c%c%c   %c%c%c%c   %c%c%c   %c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); gotoxy(x,y+3);
 printf("%c%c%c%c%c%c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c  %c%c%c%c   %c%c%c   %c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); gotoxy(x,y+3);
 printf("%c%c%c  %c%c%c  %c%c%c   %c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c %c%c%c%c   %c%c%c   %c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); gotoxy(x,y+4);
 printf("%c%c%c   %c   %c%c%c   %c%c%c        %c%c%c%c  %c%c%c%c%c%c%c   %c%c%c   %c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); gotoxy(x,y+5);
 printf("%c%c%c       %c%c%c   %c%c%c%c%c%c%c%c   %c%c%c%c    %c%c%c%c%c   %c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); gotoxy(x,y+6);
 printf("%c%c%c       %c%c%c   %c%c%c%c%c%c%c%c   %c%c%c%c     %c%c%c%c    %c%c%c%c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
}
//------------------------------------------------------------------------------------------------------------
void AffichezCadre(int x,int y,int Longueur ,int Hauteur,int ch,int color){

    /** Affichez un cadre avec cractère ch debutera par la postion (x,y)
     ** se termenra sur la postion (x+longueur-1,y+Hauteur-1)
     ** color est le color de cadre
     **/
     int colorText= 0 ;
     int colorbackground = 14;
     int i;
     if (ch==219) textbackground(color);
     textcolor(color);
     gotoxy(x,y);
     for (i=0;i<Longueur;i++) printf("%c",ch);
     gotoxy(x,y+Hauteur-1);
     for (i=0;i<Longueur;i++) printf("%c",ch);
     for (i=1;i<Hauteur-1;i++) {
        gotoxy(x,y+i);
        printf("%c",ch);
        gotoxy(x+Longueur-1,y+i);
        printf("%c",ch);
    }
     if (ch==219) textbackground(colorbackground);
     textcolor(colorText); /// return le color du text comme aupervant

     printf("\n");printf("\n");printf("\n");
}
//------------------------------------------------------------------------------------------------------------
void AffichezListeChoix(char** ch,int NbrChoix ,int num,int MaxLongueurString,int x,int y){

    /** Affichez un liste des chiox qui se trouve dans tableau ch de Nbrchoix phrase
     * la taille maximan de ces phrase est MaxLongString
     * le premier pherase se trouve dans la postion (x,y) de ecran
     * le num est un debut numeration de la pherase à affichez
     */

    int i;
    char c[5];
    for (i=0;i<NbrChoix;i++){
                /// allez à la postion (x,y+i) le premier phrase se trouve dans (x,y) et la 2 se trouva dans (x,y+1) ...
        sprintf(c,"%d- ",num+i);
        cputsxyBlanc(x,y+i,c,5); /// affichez le numeration
        cputsxyBlanc(x+5,y+i,ch[i],MaxLongueurString-5);
        }
    gotoxy(1,1);
}
//------------------------------------------------------------------------------------------------------------
void cputsxyBlanc(int x,int y,char ch[],int T){

    /** affichez un chaine de cractère à la postion (x,y) dans ecran
     ** affichez seulement T cractére
     ** si la longueur de ch < T donc terminera le affichage par de blanc
     **/

     int i,m=strlen(ch);  /// calculer la longueur de chain de cractère ch
     gotoxy(x,y); /// allez à la postion (x,y)
     for (i=0;i<T;i++){
        if (i<m) printf("%c",ch[i]);
         else printf(" "); /// on complete la rest par de blanc
   }
}


int Min(int a,int b){
    if (a>b) return b;
        else return a;
}
//------------------------------------------------------------------------------------------------------------
void AffichezPage(int x,int y,int Longueur ,int Hauteur,int color){

    /** affiche une page vide
     ** color est sa color
     ** debutera par la postion (x,y)
     ** se termenra sur la postion (x+longueur-1,y+Hauteur-1)
     **/
int colorbackground = WHITE ;
     int i,j;
     textbackground(color);
     for (i=0;i<Hauteur;i++){
        gotoxy(x,y+i);
        for (j=0;j<Longueur;j++) printf(" ");
        //cputsxyBlanc(x,y+i," ",Longueur); /// affichez un text avec seulement de blanc
        }
    textbackground(colorbackground); /// return le color de text comme aupervant

    gotoxy(85,30);
    textcolor(BLACK);
    textbackground(WHITE);
    printf("realiser par:");
    gotoxy(100,30);
    printf("Berkane Ibrahim");
    gotoxy(100,31);
    printf("Hamla Hichem");
     gotoxy(100,34);
    printf("2CPI||G:04");

}
//------------------------------------------------------------------------------------------------------------
int Menu(char** Ph,int NbrPhrase,int x,int y,int Longueur,int Hauteur){

    /** Affichez Le menu
     ** return le nemero choiser
     ** return 0 c'est choiser retourner en arreire
     **/
     int Mn,chx=1,f=0;
     char c;
     Mn=Min(Hauteur,NbrPhrase); /// on prend le minimant pour affichez les choix pour evitez de soortire de cadre
     AffichezCadre(x-1,y-1,Longueur+2,Hauteur+2,219,COLOR0);
     AffichezPage(x,y,Longueur,Hauteur,COLOR1);
     textbackground(COLOR1); /// affichez le reste des choix avec le color1
     AffichezListeChoix(&(Ph[1]),Mn-1,2,Longueur,x,y+1);
     textbackground(COLOR2); /// Affichez le prmier choix avec le color2
     AffichezListeChoix(Ph,1,1,Longueur,x,y);
     do {
            do{
                c=getch();
              }while((c!=-32)&&(c!=8)&&(c!=27)&&(c!=13));
             if ((c==8)||(c==27)) {
                chx=0; /// chiox pour retournez en arriere
                break;
                }
             if (c==13) break ; /// il chioser le choix selectionez
             c=getch();
             if ((c!=72)&&(c!=80)) continue;
             textbackground(COLOR1);
             if (c==72) {
             /// SI IL APPEUIYER SUR UP
              if ((f==0)&&(NbrPhrase>Mn)){
                if(chx==1) {
                    f=Mn-1;
                    AffichezListeChoix(&Ph[NbrPhrase-Mn],Mn-1,NbrPhrase-Mn+1,Longueur,x,y);
                }else AffichezListeChoix(&Ph[chx-1],Mn-1,chx,Longueur,x,y+1);
                }else {
                    AffichezListeChoix(&Ph[chx-1],1,chx,Longueur,x,y+f);
                    f=((f+Mn)-1)%Mn; /// decrimanter le f mais il dois restez sur intervale 0 .. Hauteur-1
                }
                chx=((chx+NbrPhrase)-2)%NbrPhrase+1; /// decrimanter le chx mais il dois restez sur intervale 1 .. NbrPhrase
            }else {
               if (c==80) {
                 if ((f==Mn-1)&&(NbrPhrase>Mn)){
                   if(chx==NbrPhrase) {
                    f=0;
                    AffichezListeChoix(&Ph[1],Mn-1,2,Longueur,x,y+1);
                      }else AffichezListeChoix(&Ph[chx-f],Mn-1,chx-f+1,Longueur,x,y);
                   }else {
                      AffichezListeChoix(&Ph[chx-1],1,chx,Longueur,x,y+f);
                      f=((f+Mn)+1)%Mn; /// incrimanter le f mais il dois restez sur intervale 0 .. Hauteur-1
                }
                chx=(chx+NbrPhrase)%NbrPhrase+1; /// incrimanter le chx mais il dois restez sur intervale 1 .. NbrPhrase
                }
                }
            textbackground(COLOR2); /// Affichez le prmier choix avec le color2
            AffichezListeChoix(&Ph[chx-1],1,chx,Longueur,x,y+f);
     }while(1);
     gotoxy(1,1);
    resetcolor();
     return chx;
}

//------------------------------------------------------------------------------------------------------------
void resetcolor(){
    int colorText0 = BLACK ; /// color de la text
int colorbackground0 = WHITE ; /// color de la background
int colorText = BLACK ; /// color de la text
int colorbackground = WHITE ; /// color de la background
       colorbackground=colorbackground0;
       colorText=colorText0;
       textbackground(colorbackground0);
       textcolor(colorText0);
}

//*******************************************************display**************************************************************


void info_fich(FILE *fic,int*nb_page,int*nb_ligne,int*nb_mot,int*nb_char) //donner nb de ligne char et nb de page chaque 31 ligne
{                                                                         //est une  page
    rewind(fic);
	char buf[LONGUEUR_CHAINE];
	char* p=NULL;
	char deliminateur[]=" =''\t\n,;:\"()_{}<>!?&/\\";

	int page=0;
	*nb_page=1;
    *nb_ligne=0;
    *nb_mot=0;
    *nb_char;
    int i=0;


	  // printf("--------------------------------------------------------------\n" );


	   while(fgets(buf,LONGUEUR_CHAINE,fic)!=NULL)//lire ligne par ligne le fichier
	   {

	   	 i=0;
	   	 page++;
	   	 if(page==31)//chaque 31 ligne on a une page
         {
             *nb_page =*nb_page+1;
            // printf("***************************************************\n\n");
            // system("pause");
             //system("cls");
             page=0;
         }
         while(buf[i]!='\0' )
         {
             *nb_char=*nb_char+1;
             i++;
         }
	   	// printf("\t%s",buf);//affichier une ligne

	   	 //*****************************************//compter le nombre de mot est eliminer les deliminateur
	   	 p = strtok(buf, deliminateur);
         if(p!=NULL)
	   	   {
	   	     	*nb_mot=*nb_mot+1;
		   }
         while(p!=NULL)
          {
             p = strtok(NULL, deliminateur);
             if(p!=NULL)
             {
               *nb_mot=*nb_mot+1;
             }
          }
         //************************************************
	   	 *nb_ligne=*nb_ligne+1;


       }
	   printf("\n");
	  // printf("--------------------\n" );



}

//------------------------------------------------------------------------------------------------------------
void affichage_page_parpage(FILE *fic,int nb_page,int page_vis,int nb_ligne)//donner le numerau de la page avoir
{
    int k,pos;
    char chain[LONGUEUR_CHAINE];
    if(page_vis>nb_page || page_vis<=0)
    {
        textcolor(WHITE);
        printf("\npage n'existe pas");
    }
    else
    {
       AffichezCadre(20,4,128 ,35,254,RED);//cadre pour le text
       AffichezCadre(82,40,5 ,5,254,RED);// cadre pour le num de la page
       gotoxy(84,41);
       textcolor(BLACK);
       printf("%d",page_vis);
       gotoxy(84,42);
       textcolor(BLACK);
       printf("%c",196);
       gotoxy(84,43);
       textcolor(BLACK);
       printf("%d",nb_page);
        fseek(fic,0,SEEK_SET);
//***************************************** pour deplacer dans le fichier et aller a la page a voire
        k=1;
        while(k<=(page_vis-1)*31)
        {
            fgets(chain,LONGUEUR_CHAINE,fic);

            k++;
        }
//************************************
        k=1;  pos=5;
        if(nb_ligne-31*page_vis<0)//si la page ne contient pas 31 ligne elle contient moin de lignes
        {
           while(k<=31+(nb_ligne-31*page_vis))
          {
            fgets(chain,LONGUEUR_CHAINE,fic);
            textcolor(BLACK);
           gotoxy(25,pos);
           printf("%s",chain);
            pos=pos+1;
            k++;
          }
        }
        else
        {
           while(k<=31)//si la page est complete elle contient axactement 31 lignes
          {
            fgets(chain,LONGUEUR_CHAINE,fic);
            textcolor(BLACK);
           gotoxy(25,pos);
           printf("%s",chain);
            pos=pos+1;
            k++;
          }
        }

    }
}

//***************************************cryptage/decrtptage***************************************************************


void generer_nombre_premier( mpz_t  prime, int n, gmp_randstate_t  state )//enregestrer le nombre premier dans prime
{
                                                                            // nombre de chifre de prime est n
    mpz_t rand;mpz_init( rand ); /*création et initialisation de la variable rand*/

     mpz_t max; //Définition de la borne supérieure.
     mpz_init( max );
     mpz_ui_pow_ui( max, 10, n+1 );//max=10^n+1

     mpz_t min; //Définition de la borne inférieure.
     mpz_init( min );
     mpz_ui_pow_ui( min, 10, n );//min=10^n

     do
     {
         //system("pause");
        mpz_urandomm( rand, state, max );// generer nombre de 0 a max-1

        //system("pause");
     }while( mpz_cmp( rand, min) > 0 );//repeter jusqua rand est > a min

     do
     {
        mpz_nextprime( prime, rand );
     }while( !mpz_probab_prime_p( prime, 15 ) );//repeter jusqua asurer que prime est premier
     return;
}

//------------------------------------------------------------------------------------------------------------

void key_gen( mpz_t n, mpz_t e, mpz_t d, gmp_randstate_t  state )
{
    mpz_t p; mpz_t q; //crée et initialise p et q;
     mpz_init( p ); mpz_init( q );
unsigned long int op=37;
mpz_t intsate; mpz_init( intsate );

    generer_nombre_premier( p, LONGUEUR_PREMIER_p, state );

    generer_nombre_premier( q, LONGUEUR_PREMIER_q, state );
   //gmp_printf("p=%Zd\nq=%Zd\n", p,q);
    mpz_mul( n, p, q);

    mpz_t phiN; // création et initialisation de phiN, qui servira à stocker l'indice d'Euler de N.
     mpz_init( phiN );

     mpz_t p2;
     mpz_init(p2);
     mpz_t q2;
     mpz_init(q2);

     mpz_sub_ui( p2, p, 1 );
     mpz_sub_ui( q2, q, 1 );

     mpz_mul( phiN, p2, q2 );

     mpz_t rop;mpz_init(rop);

     mpz_clear( p2 ); // libération de l'espace mémoire utilisé par les variables temporaires p2 et q2;
     mpz_clear( q2 );


      //  mpz_init_set_str(e,"65537",10);

      do
    {
        generer_nombre_premier( e, LONGUEUR_PREMIER_e,state );
        mpz_gcd (rop, e,phiN);

        mpz_set_ui (intsate,  op++);
        gmp_randseed( state, intsate );

    }while(mpz_cmp_ui(rop, 1)!=0);



    mpz_invert( d, e, phiN );


}
//------------------------------------------------------------------------------------------------------------
void Cryptage( mpz_t  Code, mpz_t e, mpz_t N )
{
     mpz_powm( Code, Code, e, N );

}
//------------------------------------------------------------------------------------------------------------
void DeCryptage( mpz_t  Code, mpz_t d, mpz_t N )
{
     mpz_powm( Code, Code, d, N );

}
//------------------------------------------------------------------------------------------------------------

void Transcod( char * Message, mpz_t  Code ) // fonction de transcodage : Transforme la chaine de caractères passée en argument en un nombre qui est stocké dans Code
{
     int a, k, i;
     mpz_t b; mpz_init( b );
     mpz_t c; mpz_init( c );
     //cout << "\n\n";
     for( i = 0; Message[i]; i++ )
     {

          k = Message[i];

          //cout << k << "\t";
          a = strlen( Message ) - i;
          mpz_ui_pow_ui( b, 256, a );
          mpz_mul_ui( c, b, k );
          mpz_add( Code, Code, c );
          //mpz_out_str( 0,10, Code );
          //cout << "\n";
     }
     //cout << "\n\n";
     return;
}
//------------------------------------------------------------------------------------------------------------
void DeTranscod( mpz_t Code, char * Message ) // Opération inverse de la fonction de Transcodage.
{
     unsigned long int j;
     mpz_t k; mpz_init( k );
     int i = 0;
     char M[LONGUEUR_CHAINE];
     char N[LONGUEUR_CHAINE];
     mpz_t Code2; mpz_init_set( Code2, Code );

     while( mpz_sgn( Code2 ) != 0 )
     {
            mpz_mod_ui( k, Code2, 256 );
            mpz_sub( Code2, Code2, k );
            mpz_divexact_ui( Code2, Code2, 256 );
            i++;
     }

     int a;
     for( a = 0; a < i; a++ )
     {
            j = mpz_mod_ui( k, Code, 256 );
            //cout << a << "\t" << j << "\n";
            Message[i-a-1] = j;
            mpz_sub( Code, Code, k );
            mpz_divexact_ui( Code, Code, 256 );
     }

     return;
}

//------------------------------------------------------------------------------------------------------------
void lire(char *chaine, int longueur)
{
     char *positionEntree = NULL;
      // On lit le texte saisi au clavier
     if (fgets(chaine, longueur, stdin) != NULL) // Pas d'erreur de saisie ?
    {
        positionEntree = strchr(chaine, '\n'); // On recherche l'"Entrée"
        if (positionEntree != NULL) // Si on a trouvé le retour à la ligne
        {
             *positionEntree = '\0'; // On remplace ce caractère par \0
        }
    }
}
//------------------------------------------------------------------------------------------------------------
void Cryptage_fichier(FILE*fic1,FILE*fic2,mpz_t e,mpz_t n)//fic1: lire le text a crypter
{
    char buff [LONGUEUR_CHAINE];
    mpz_t Codee;mpz_init (Codee);
    rewind(fic1);
      while (fgets(buff,200,fic1)!=NULL)
  {
     //printf("****%s*****\n",buf);
     Transcod( buff, Codee);//transformer la chain buf into numbers
     //gmp_printf("apres tarnscode:%Zd\n\n\n",Code);
     Cryptage( Codee, e, n );
     //gmp_printf("apres cryptage:%Zd\n\n\n",Code);
   gmp_fprintf (fic2, "%Zd\n",Codee );
   mpz_init(Codee);
  }

}
//------------------------------------------------------------------------------------------------------------

void deCryptage_fichier(FILE*fic1,FILE*fic2,mpz_t d,mpz_t n,int nbligne)
{
    int sort=1;
    mpz_t Codee;
    mpz_init(Codee);
    char MessageFinal[LONGUEUR_CHAINE];
    rewind(fic1);
    rewind(fic2);
while(/*sort<=nbligne*/gmp_fscanf (fic1, "%Zd", Codee )!=EOF)
{




//gmp_printf("\n%d))%Zd\n",sort,Code);

   DeCryptage( Codee, d, n ) ;

  // gmp_printf("apres decodage:%Zd\n\n\n",Code);


   DeTranscod( Codee, MessageFinal );
     //printf("chain finale: %s\n\n",MessageFinal);
   mpz_init(Codee);

   fprintf (fic2, "%s",MessageFinal );
sort++;
}

}

//****************************************************************************************************

void Display()//affichge du choix display
{

    system("cls");
                   /* for(i=1;i<=57;i++)
                         {
                            AffichezCadre(1,i,168 ,2,219,LIGHTCYAN);
                         }*/

                         char c=0;//pour lire les bouton du clavier

                          int voir_page=0;
	                      char buf;
	                      char nom_fich[100];
	                      int nb_pagee,nb_ligne,nb_mot;int nb_charr=0;
	                      FILE *fic=NULL;

	                      while(fic==NULL)
                           {

                             textcolor(BLACK);
                             textbackground(WHITE);
                             system("cls");
                             gotoxy(3,2);
                             printf("Enrtrer le nom du fichier:");
	                         scanf("%s",nom_fich);
	                         fic=fopen(nom_fich,"r");

	                         if(fic==NULL)
                             {
                                textcolor(BLACK);
		                        printf("le fichier n'existe pas...\n");

                             }
                             else
                              {
                                     info_fich(fic,&nb_pagee,&nb_ligne,&nb_mot,&nb_charr);
                                     system("cls");
                                     AffichezCadre(20,41,50 ,11,254,RED);
                                     textcolor(BLACK);
                                     gotoxy(22,43);
                                     textcolor(BLACK);
                                     printf("Nombre de page:     %d ",nb_pagee);
                                     gotoxy(22,45);
                                     printf("Nombre de lignes est:  %d",nb_ligne);
                                     gotoxy(22,47);
                                     printf("Nombre de mot:     %d ",nb_mot);
                                     gotoxy(22,49);
                                     printf("Nombre char:     %d",nb_charr);
                                     /*  printf("Enrtre la page a voir:");
                                         scanf("%d",&voir_page);*/
                                      voir_page=1;
                                      affichage_page_parpage(fic,nb_pagee,voir_page,nb_ligne);

                                      while(c!=8)//si on appui a retourn
                                      {
                                          retourn:
                                          c=getch();
                                          if(c==100 || c==68)//si est egale a d ou D
                                          {
                                              if(voir_page<nb_pagee)
                                              {
                                                voir_page++;
                                                system("cls");

                                                affichage_page_parpage(fic,nb_pagee,voir_page,nb_ligne);
                                                AffichezCadre(20,41,50 ,11,254,RED);
                                                textcolor(BLACK);
                                                gotoxy(22,43);
                                                textcolor(BLACK);
                                                printf("Nombre de page:     %d ",nb_pagee);
                                                gotoxy(22,45);
                                                printf("Nombre de lignes est:  %d",nb_ligne);
                                                gotoxy(22,47);
                                                printf("Nombre de mot:     %d ",nb_mot);
                                                gotoxy(22,49);
                                                printf("Nombre char:     %d",nb_charr);
                                              goto retourn;
                                              }
                                          }
                                          else
                                          {
                                              if(c==113 || c==81 )// si est egale a q ou Q
                                              {
                                                if(voir_page>1)
                                               {
                                                voir_page--;
                                                system("cls");

                                                affichage_page_parpage(fic,nb_pagee,voir_page,nb_ligne);
                                                AffichezCadre(20,41,50 ,11,254,RED);
                                                textcolor(BLACK);
                                                gotoxy(22,43);
                                                textcolor(BLACK);
                                                printf("Nombre de page:     %d ",nb_pagee);
                                                gotoxy(22,45);
                                                printf("Nombre de lignes est:  %d",nb_ligne);
                                                gotoxy(22,47);
                                                printf("Nombre de mot:     %d ",nb_mot);
                                                gotoxy(22,49);
                                                printf("Nombre char:     %d",nb_charr);
                                                goto retourn;
                                              }
                                              }
                                          }
                                      }





                                 }
                              }
                             fclose(fic);
                              //system("cls");
}

//------------------------------------------------------------------------------------------------------------

void choix_cryptage()//affichge du choix cryptage
{
     redemarer:
                system("cls");
                   /* for(i=1;i<=57;i++)
                         {
                            AffichezCadre(1,i,168 ,2,219,LIGHTCYAN);
                         }*/

                         char c3=0;//pour lire les bouton du clavier

	                      char nom_fich1[100];
	                     mpz_t e;mpz_t n;
	                     mpz_init(e);mpz_init(n);
	                      FILE *f1=NULL;
                          FILE *f2=NULL;


	                      while(f1==NULL )
                           {

                             textcolor(BLACK);
                             textbackground(WHITE);
                             system("cls");
                             gotoxy(3,2);
                             printf("Enrtrer le nom du fichier:");
	                         scanf("%s",nom_fich1);
	                         f1=fopen(nom_fich1,"r");

	                         if(f1==NULL)
                             {
                                textcolor(BLACK);
		                        printf("le fichier n'existe pas...\n");

                             }
                             else
                              {
                                  FILE *ee=fopen("e.txt","r");
                                  FILE *nn=fopen("n.txt","r");
                                  if((ee==NULL) || (nn==NULL))
                                  {
                                      textcolor(BLACK);
                                      printf("L'un des deux fichier du cles n'exist pas...\n");
                                      system("pause");
                                      goto redemarer;
                                  }
                                  else
                                  {




                                      f2=fopen("fichier_crypter.txt","w");


                                      gmp_fscanf (ee, "%Zd", e );
                                      gmp_fscanf (nn, "%Zd", n );
                                       gotoxy(82,5);
                                      printf("Patienter  ...");
                                     Cryptage_fichier(f1,f2,e, n);

                                       gotoxy(82,7);
                                       printf("FIN.");
                                     cc:
                                         c3=getch();
                                     if(c3==8)
                                     {
                                         fclose(f1);
                                         fclose(f2);
                                         fclose(ee);
                                         fclose(nn);
                                         mpz_clear(e);
                                         mpz_clear(n);
                                         //system("cls");
                                         //goto menu;
                                     }
                                     else {goto cc;}

                                  }
                             }

                         }

}

//------------------------------------------------------------------------------------------------------------
void choix_decryptage()//affichge du choix decryptage
{
                    redemarer1:
                system("cls");
                   /* for(i=1;i<=57;i++)
                         {
                            AffichezCadre(1,i,168 ,2,219,LIGHTCYAN);
                         }*/

                         char c4=0;//pour lire les bouton du clavier
                             int nb_page;int nb_linnn=0;
	                      char nom_fich2[100];
	                     mpz_t d;mpz_t n1;
	                     mpz_init(d);mpz_init(n1);
	                      FILE * f11=NULL;
                          FILE *f33=NULL;


	                      while(f11==NULL )
                           {

                             textcolor(BLACK);
                             textbackground(WHITE);

                             system("cls");
                             gotoxy(3,2);
                             printf("Enrtrer le nom du fichier:");
	                         //scanf("%s",nom_fich2);
	                         lire(nom_fich2,100);
	                         f11=fopen(nom_fich2,"r");

	                         if(f11==NULL)
                             {
                                textcolor(BLACK);
		                        printf("le fichier n'existe pas...\n");

                             }
                             else
                              {
                                  FILE *dd=fopen("d.txt","r");
                                  FILE *nnn=fopen("n.txt","r");
                                  if((dd==NULL) || (nnn==NULL))
                                  {
                                      textcolor(BLACK);
                                      printf("L'un des deux fichier du cles n'exist pas...\n");
                                      system("pause");
                                      goto redemarer1;
                                  }
                                  else
                                  {




                                      f33=fopen("fichier_decrypter.txt","w");


                                      gmp_fscanf (dd, "%Zd", d );
                                      gmp_fscanf (nnn, "%Zd", n1 );

                                      info_fich(f11,&nb_page,&nb_linnn,&nb_page,&nb_page);
                                      gotoxy(82,5);
                                     printf("Patienter  ...");
                                      deCryptage_fichier(f11,f33,d,n1,nb_linnn);
                                      gotoxy(82,7);
                                      printf("FIN.");

                                     ccc:
                                         c4=getch();
                                     if(c4==8)
                                     {
                                         fclose(f11);
                                         fclose(f33);
                                         fclose(dd);
                                         fclose(nnn);
                                         mpz_clear(d);
                                         mpz_clear(n1);
                                        // system("cls");
                                         //goto menu;
                                     }
                                     else {goto ccc;}

                                  }
                             }

                         }
}
//------------------------------------------------------------------------------------------------------------





