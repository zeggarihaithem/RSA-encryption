#ifndef _biblio_
#define _biblio_

#define LONGUEUR_CHAINE 200

//************************************graphique***afichage menue*****************************************
void AffichezCadre(int x,int y,int Longueur ,int Hauteur,int ch,int color);
int Menu(char** Ph,int NbrPhrase,int x,int y,int Longueur,int Hauteur);
void AffichezListeChoix(char** ch,int NbrChoix ,int num,int MaxLongueurString,int x,int y);
void cputsxyBlanc(int x,int y,char ch[],int T);
int Min(int a,int b);
void AffichezPage(int x,int y,int Longueur ,int Hauteur,int color);
void resetcolor();
void dessine_menu (int x , int y);


//****************************************display*********************************************************
void info_fich(FILE *fic,int*nb_page,int*nb_ligne,int*nb_mot,int*nb_char);
void affichage_page_parpage(FILE *fic,int nb_page,int page_vis,int nb_ligne);



//*****************************************programme principale********************************************
void Display();
void choix_decryptage();
void choix_cryptage();
void start();
#endif
