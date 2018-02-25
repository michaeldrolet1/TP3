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
vector<Produit*> Fournisseur::obtenirCatalogue() const
{
	return contenuCatalogue_;
}

Satisfaction Fournisseur::obtenirSatisfaction() const
{
	return satisfaction_;
}

void Fournisseur::modifierSatisfaction(Satisfaction satisfaction)
{
	satisfaction_ = satisfaction;
}

void Fournisseur::noter(int appreciation)
{
	satisfaction_.niveaux_[appreciation]++;
}

void Fournisseur::ajouterProduit(Produit* produit)
{
	contenuCatalogue_.push_back(produit);
	
}

void Fournisseur::enleverProduit(Produit* produit)
{
	for (int i = 0; i < contenuCatalogue_.size(); i++)
	{
		if (contenuCatalogue_[i]= produit)
		contenuCatalogue_.erase(contenuCatalogue_.begin() +i);
	}
}

 ostream& operator<<(ostream & os, Fournisseur& fournisseur)
{
	 os << "Fournisseur :";
	 os << static_cast<Fournisseur> (fournisseur) << endl;
	 if (fournisseur.contenuCatalogue_.size() = 0)
	 {
		 os << " Le panier de " << fournisseur.obtenirPrenom() << fournisseur.obtenirNom << "est vide!";
	 }
	 else 
		 os <<	// je sais pas comment afficher les produits.
	 os << "notes";
	 for(int i=0;i<5;i++)
	 os << i<< fournisseur.satisfaction_.niveaux_[i];
	 
 }

 
 Fournisseur& Fournisseur::operator=(const Fournisseur& fournisseur)
 {
	 if (this != &fournisseur)
	 {
		 static_cast<Fournisseur> (fournisseur);
		 contenuCatalogue_ = fournisseur.contenuCatalogue_;
		 satisfaction_ = fournisseur.satisfaction_;
	 }
	 return *this;

 }