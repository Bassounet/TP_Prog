#include "Zombie_.h"

int main() {
    srand(time(NULL));
	Zombie_ z1;

	z1.setnom("Zombix");
	z1.setattack(50);
	cout << endl;

	cout << "	Zombie_ 2  " << endl;
	Zombie_ z2(z2);
	z2.setnom("Ta race");
	z2.setattack(8);

	z2.~Zombie_();



	z2.AttackZ(&z1);

	cout << "Attack de zombix = "<<z1.getattack()<<endl;
	cout << "PV de zombie_2 = "<<z2.getpv()<<endl;


    return 0;
}














