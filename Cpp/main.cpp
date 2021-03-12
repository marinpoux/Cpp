#include "CPoint.h"
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>


//main sera soumis à utilisation d'un namespace (std) et donc plus besoin de l'écrire
using namespace std;
//la direction des chevrons cin et cout dépend : 'cout <<' ou 'cin >>'
//envoie flux vers la sortie + oppérateur de concaténation
//endl <-> \n (end line)

void afficheLog(int n_value);
void afficheLog(float flt_value);
void afficheLog(string str_value);

int main() {

	const int TAILLE = 10;

	//instance de la classe CPoint
	CPoint p;

	CPoint p1(6, 5, "vert");

	//tableau de points
	CPoint tab_point[TAILLE];

	for (int n_i = 0; n_i < TAILLE; n_i++) {

		tab_point[n_i] = p1;

		afficheLog(tab_point[0].getX());
		afficheLog(tab_point[0].getY());
		afficheLog(tab_point[0].getCoul());

	}



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

void afficheLog(string str_value) {

	cout << "log : " << str_value << endl;
}