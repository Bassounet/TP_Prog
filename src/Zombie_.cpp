#include "Zombie_.h"


Zombie_::Zombie_(){
    pv = 100;
	nom = "Baze";
	attack = 0;
}

Zombie_::Zombie_(string n, int pv,int atk){

    nom = n
    pv = pv;
    attack = atk;
}



Zombie_::~Zombie_(){
    cout<<"Le zombie est mort"<<endl;
}


int Zombie_::getPv() const
{
	return pv;
}

void Zombie_::setPv(int pv) {
	if (pv > 100|| pv < 0) {
		cerr << "pv non autorise" << endl;
		pv = 0;
	}
	else {
		pv = pv;
	}
}

string Zombie_::getNom() const
{
	return nom;
}

void Zombie_::setNom(string n)
{
	nom = n;
}

int Zombie_::getAttack() const
{
	return attack;
}

void Zombie_::setAttack(int atk)
{
	if (atk < 0) {
		attack = 0;
	}
	else {
		attack = atk;
	}
}

void Zombie_::showInfos() const
{
	cout << "nom : " << getNom() << endl;
	cout << "pv : " << getPv() << endl;
	cout << "attack : " << getAttack() << endl;

}
