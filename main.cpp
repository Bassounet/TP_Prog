#include "Zombie_.h"

int main() {
    srand(time(NULL));
	Zombie_ z1;

	z1.setNom("Zombix");
	z1.setAttack(50);
	z1.showInfos();
	cout << endl;

	cout << "	Zombie_ 2  " << endl;
	Zombie_ z2(z2);
	z2.setNom("Ta race");
	z2.setAttack(8);
	z2.showInfos();

	z2.~Zombie_();


	cout << "	Zombie_ 3 " << endl;
	Zombie_ z3("Abdulïae");
    z3.showInfos();
	cout << endl;

	cout << "Attack de p4 = "<<z3.getAttack()<<endl;
	cout << "PV de Z2 = "<<z2.getPv()<<endl;

    cout <<"ATTACK"<<endl;
	z3.attackPlayer(&z2);

	cout << "Attack de z3 = "<<z3.getAttack()<<endl;
	cout << "PV de z2 = "<<z2.getPv()<<endl;


    return 0;
}














