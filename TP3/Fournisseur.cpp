/********************************************
* Titre: Travail pratique #3 - Fournisseur.cpp
* Date:
* Auteur:
*******************************************/
#include "Fournisseur.h"

Fournisseur::Fournisseur(const string & nom, const string & prenom, int identifiant, const string & codePostal)
	: Usager(nom, prenom, identifiant, codePostal)
{
	Satisfaction satisfaction_[] = { 0 };
}
