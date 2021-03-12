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
	int n_x = 0, n_y = 0;

	cout << "saisir x: " << endl;
	cin >> n_x;
	cout << "saisir y: " << endl;
	cin >> n_y;

	p.setX(n_x);
	p.setY(n_y);

	cout << "x: " << endl;
	afficheLog(p.getX());
	cout << "y: " << endl;
	afficheLog(p.getY());

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
