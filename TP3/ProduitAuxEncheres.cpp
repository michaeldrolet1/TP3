/********************************************
* Titre: Travail pratique #3 - ProduitAuxEncheres.cpp
* Date:
* Auteur:
*******************************************/

#include "ProduitAuxEncheres.h"

ProduitAuxEncheres::ProduitAuxEncheres(Fournisseur& fournisseur, const string& nom , int reference,
	double prix , TypeProduit type , double prixBase , int identifiantClient )
	:Produit(fournisseur, nom, reference, prix, type), prixBase_(prixBase), identifiantClient_(identifiantClient)
{
}

int ProduitAuxEncheres::obtenirIdentifiantClient() const
{
	return identifiantClient_;
}

double ProduitAuxEncheres::obtenirPrixBase() const
{
	return prixBase_;
}

void ProduitAuxEncheres::modifierIdentifiantClient(int identifiantClient)
{
	identifiantClient = identifiantClient_;
}

void ProduitAuxEncheres::modifierPrixBase(double prixBase)
{
	prixBase = prixBase_;
}



ostream& operator<<(ostream& os, const ProduitAuxEncheres& produit)
{
	static_cast<Produit> (produit);
	os << " \t \t Prix de base : " << produit.obtenirPrixBase() << endl
		<< " \t \t Identifiant Client : " << produit.obtenirIdentifiantClient();

	return os;
}

istream & operator>>(istream & is, ProduitAuxEncheres & produit)
{
	static_cast<Produit> (produit);
	return is;
}