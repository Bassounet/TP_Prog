#ifndef ZOMBIE__H
#define ZOMBIE__H

#include <string>
#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>

using namespace std;

class Zombie_
{
private:
	int pv = 100;
	string nom = "bloark";
	int attack = 10;

public:
    //CONSTRUCTEURS
    Zombie_();
    Zombie_(int pv, int atk);
    Zombie_(string n);


    //DESTRUCTEUR
    ~Zombie_();

    //GETTER/SETTER PV
	int getPv() const;
	void setPv(int pv);

    //GETTER/SETTER NOM
	string getNom() const;
	void setNom(string n);


    //GETTER/SETTER ATTACK
	int getAttack() const;
	void setAttack(int atk);


    //AFFICHE LES INFOS DU PERSO
	void showInfos() const;

    void attackPlayer(Zombie_* cible);
    void healPlayer(Zombie_* cible);

    bool operator==(Zombie_ & p);

    Zombie_ operator+(Zombie_ & p);
    void operator+=(Zombie_ const & p);

    bool operator!=(Zombie_ & p);
};

#endif // ZOMBIE_
