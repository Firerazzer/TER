﻿#include "capteurs.h" 
#include "actionneurs.h"
#include "commande.h"
#include <ros/ros.h>
#include <unistd.h>

using namespace std;

#define NOMBRE_PLACE 15
#define RESET   "\033[0m"
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */

int main(int argc, char **argv)
{	

//initialisation du noeud ros et création d'un handle associé au noeud
	ros::init(argc, argv, "commande");	
	ros::NodeHandle noeud;

//création et initialisation des objets Capteur et Actionneurs

	Capteurs Capteurs(noeud);

	Actionneurs Actionneurs(noeud);

	ros::Rate loop_rate(25); //fréquence de la boucle 


// Déclaration des variables //

	/* Tableau marquage */
	int  M[NOMBRE_PLACE+1];

	/* Capteurs */
	bool PSx[25],DxD[13],DxG[13],CPx[11],CPIx[9];  

	/* Actionneurs */
	bool STx[25],RxD[13],RxG[13],Vx[13],Dx[13],PIx[9]; 

// Initialisation variables //

	Initialisation(PSx,DxD,DxG,CPx,CPIx,STx,RxD,RxG,Vx,Dx,PIx);
	

//////////////////////////////////////////////
//////////// Initialisation scénario //////////////
//////////////////////////////////////////////

			for (int i=0;i<=NOMBRE_PLACE;i++) M[i] = 0 ;

			//Nombre de navettes
			M[1]=3; 

			// Disponibilité aiguillages
			M[10]=1;
			
			// Pour le positionnement initial des navettes sur simulation
			int Deplacement_effectue=0;
	
	

//////////////////////////////////////////////
//////////////////////////////////////////////
//////////////////////////////////////////////

	

	while (ros::ok())
	{
		

		
		cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		if (Capteurs.SIMULATION) cout <<"~      SIMULATION "<< BOLDGREEN <<"ON"<< RESET <<"    ~"<<endl; 
		else cout <<"~    SIMULATION "<< BOLDRED <<"OFF"<< RESET <<"     ~"<<endl;

		if (Capteurs.LIGNE) cout <<"~  LIGNE TRANSITIQUE "<< BOLDGREEN <<"ON"<< RESET <<" ~"<<endl;
		else cout <<"~ LIGNE TRANSITIQUE "<< BOLDRED <<"OFF"<< RESET <<" ~"<<endl;
		cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;

		

		// Déplacement des navettes si on utilise la simulation
		if(Capteurs.SIMULATION==true && Deplacement_effectue==0)
		{
			Deplacer_navettes(Actionneurs,STx,RxD,RxG,Vx,Dx,PIx,5);

			Mode_ligne(Actionneurs,STx,RxD,RxG,Vx,Dx,PIx);

			Deplacement_effectue=1;
		}

		// Initialisation de la ligne transitique
		if(Capteurs.LIGNE==true && Deplacement_effectue==0)
		{
			Mode_ligne(Actionneurs,STx,RxD,RxG,Vx,Dx,PIx);

			Deplacement_effectue=1;
		}

		// Actualisation des capteurs

		Capteurs.Actualiser(PSx,DxD,DxG,CPx,CPIx);

		Afficher_capteurs(PSx,DxD,DxG,CPx,CPIx);
		Afficher_marquage(M,NOMBRE_PLACE);

		/////////////////////////////////////////////////
		////////////////////// scenario //////////////////////
		/////////////////////////////////////////////////

		/*if(M[15]>=1){if(Baxter.Attente_prise_bras_gauche()){M[15]--;M[11]++;}}			//t12

		if(M[14]>=1){if(Baxter.Attente_prise_bras_droit()){M[14]--;M[12]++;}}			//t13

		if(M[1]>=1 && M[10]>=1){ if(PSx[5] && !PSx[20]) {M[1]--;M[10]--;M[2]++;}}		//t1

		if(M[2]>=1){ if(!PSx[5]) {M[2]--;M[3]++;}}						//t2

		if(M[3]>=1){ if(PSx[20] && !PSx[21]) {M[3]--;M[4]++;M[10]++;}}				//t3

		if(M[4]>=1){ if(!PSx[20]) {M[4]--;M[5]++;}}						//t4

		if(M[5]>=1){ if(PSx[21] && !PSx[22]) {M[5]--;M[6]++;}}					//t5

		if(M[6]>=1){ if(!PSx[21]) {M[6]--;M[7]++;}}						//t6

		if(M[7]>=1 && M[11]>=1){ if(PSx[22]) {M[7]--;M[11]--;M[8]++;}}				//t7

		if(M[7]>=1 && M[12]>=1){ if(PSx[22]) {M[7]--;M[12]--;M[13]++;}}				//t11

		if(M[13]>=1){ if(Baxter.Prise_effectuee_bras_droit() && !PSx[24]) {M[13]--;M[9]++;M[14]++;}}	//t10

		if(M[8]>=1){ if(Baxter.Prise_effectuee_bras_gauche() && !PSx[24]) {M[8]--;M[9]++;M[15]++;}}	//t8

		if(M[9]>=1){ if(!PSx[22]) {M[9]--;M[1]++;}}						//t9*/


	
		

		
      		// ACTIONNEURS //
		
		// Stops		
		STx[1]  = M[1] ;
		STx[2]  = M[1] ;
		STx[3]  = M[1] ;
		STx[5]  = M[2] ;
		STx[6]  = M[3] ;
		STx[20] = M[4] ;
		STx[21] = M[6] ;
		STx[22] = M[9] ;
		STx[24] = M[1] ;
		
		


 		//////////////////////////////////////////////////
		//////////////////////////////////////////////////
		//////////////////////////////////////////////////
		

		Afficher_actionneurs(STx,RxD,RxG,Vx,Dx,PIx);

		Actionneurs.Envoyer(STx,RxD,RxG,Vx,Dx,PIx);


		///////////////////////////////////
		//////////// fin code /////////////
		///////////////////////////////////


		ros::spinOnce(); //permet aux fonction callback de ros dans les objets d'êtres appelées
		loop_rate.sleep(); //permet de synchroniser la boucle while. Il attend le temps qu'il reste pour faire le 25Hz (ou la fréquence indiquée dans le loop_rate)
	}

	return 0;


}
