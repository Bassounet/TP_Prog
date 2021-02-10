#include "Zombie_.h"


Zombie_::Zombie_(){

    pv = 100;
	nom = "Baze";
	attack = 0;
}

Zombie_::Zombie_(string n, int pv,int atk){

    nom = n;
    pv = pv;
    attack = atk;
}

Zombie_::~Zombie_(){

    cout<< nom << " ça y'est je suis mort ... "<< endl;
}

Zombie_::AttackZ(Zombie_ *cible){

    cible->setpv(cible->getpv() - getattack());
}

Zombie_::ShowInfos(){

	cout << "Hey i'm : " << getnom() << endl;
	cout << "Ma santé : " << getpv() << endl;
	cout << "Mon attaque vaut : " << getattack() << endl;
}

//GETTER/SETTER Pv

void Zombie_::setpv(int p){

	if (p > 1000 || p < 0)
	{
		cerr << "pv pas corrects" << endl;
		pv = 0;
	}
	else
	{
		pv = p;
	}
}

int Zombie_::getpv() const{
	return pv;
}

//GETTER/SETTER Nom

string Zombie_::getnom() const{

	return nom;
}

void Zombie_::setnom(string n){

	nom = n;
}

//GETTER/SETTER Force

int Zombie_::getattack() const{

	return attack;
}

void Zombie_::setattack(int atk){

	if (atk < 0)
	{
		attack = 0;
	}
	else
	{
		attack = atk;
	}
}
