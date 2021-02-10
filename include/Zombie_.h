#ifndef ZOMBIE__H
#define ZOMBIE__H

#include <string>
#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>

using namespace std;

class Zombie_{

private:



public:


    //VARIABLES
	string nom;
	int pv;
	int attack;


    //CONSTRUCTEURS
    Zombie_();
    Zombie_(string n, int pv, int atk);

    //DESTRUCTEUR
    ~Zombie_();

    //FONCTIONS
	AttackZ(Zombie_ *cible);
	ShowInfos();

    //GETTER/SETTER PV
	int getpv() const;
	void setpv(int pv);

    //GETTER/SETTER NOM
	string getnom() const;
	void setnom(string n);


    //GETTER/SETTER ATTACK
	int getattack() const;
	void setattack(int atk);



};

 #endif // ZOMBIE_

/* public:

	//VARIABLES
	string nom;
	int pv;
	int force;

	/* //CONSTRUCTEURS
	zombie();
	zombie(string n, int p, int f);

	//DESTRUCTEURS
	~zombie();

	//FONCTIONS
	AttaqueZombie(zombie *cible);
	ShowInfos();

	//GETTER/SETTER Nom
	string getNom() const;
	void setNom(string n);

	//GETTER/SETTER Pv
	int getPv() const;
	void setPv(int p);

	//GETTER/SETTER Force
	int getForce() const;
	void setForce(int f);

};

#endif // ZOMBIE_H

*/
