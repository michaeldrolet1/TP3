/********************************************
* Titre: Travail pratique #3 - ProduitOrdinaire.h
* Date:
* Auteur:
*******************************************/


#include <string>
#include <iostream>
#include "ProduitOrdinaire.h"
#include "Fournisseur.h"
using namespace std;

ProduitOrdinaire::ProduitOrdinaire(Fournisseur& fournisseur, const string& nom = "outil", int reference = 0,
	double prix = 0.0, TypeProduit type = TypeProduitOrdinaire, bool estTaxable = true)
	: Produit(fournisseur, nom, prix, type), estTaxable_(estTaxable)
{
}
bool ProduitOrdinaire::obtenirEstTaxable() const
{
	return estTaxable_;
}

void ProduitOrdinaire::modifierEstTaxable(bool estTaxable)
{
	estTaxable_ = estTaxable;
}

ostream& operator<<(ostream& os, const ProduitOrdinaire& produit)
{
	static_cast<Produit> (produit);
	os << " \t \t est Taxable : " << produit.obtenirEstTaxable() << endl;
	return os;
}

istream & operator>>(istream & is, ProduitOrdinaire & produit)
{
	static_cast<Produit> (produit);
	is >> produit.estTaxable_;
	return is;
}
