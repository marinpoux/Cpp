#include "CPoint.h"
#include <stdio.h>
#include <iostream>

//main sera soumis à utilisation d'un namespace (std) et donc plus besoin de l'écrire
using namespace std;
//la direction des chevrons cin et cout dépend : 'cout <<' ou 'cin >>'
//envoie flux vers la sortie + oppérateur de concaténation
//endl <-> \n (end line)

void afficheLog(int n_value);
void afficheLog(float flt_value);

int main() {

	//instance de la classe CPoint
	CPoint p;

	CPoint p1(6, 5);

	//p.setX(0);
	//p.setY(0);

	printf("X: ");
	afficheLog(p.getX());

	printf("Y: ");
	afficheLog(p.getY());
	
	//float flt_f = 12.8;
	//afficheLog(flt_f);

	return 0;
}

void afficheLog(int n_value) {

	//std::cout << n_value << std::endl;
	cout << "log : " << n_value << endl;
}

void afficheLog(float flt_value) {

	//std::cout << flt_value << std::endl;
	cout << "log : " << flt_value << endl;
}
