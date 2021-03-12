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

	//instance de la classe CPoint
	CPoint p;

	CPoint p1(6, 5, "vert");
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
	cout << "couleur du point : " << endl;
	afficheLog(p.getCoul());

	string str_chaine = p.getCoul();
	str_chaine = p1.getCoul();

	cout << str_chaine[3] << endl;
	char c_car = str_chaine[0];

	//str_chaine.length();
	str_chaine.c_str();
	
	int n_i = 0;
	int n_cpt = 0;
	while (str_chaine[n_i] != '\0') {

		n_cpt = n_i;
		n_i++;
	}

	char* ptr_chaine = (char*)malloc(n_cpt + 2 * sizeof(char));

	for (n_i = 0; n_i <= n_cpt + 1; n_i++) {

		if (ptr_chaine) {
			ptr_chaine[n_i] = str_chaine[n_i];
		}

		if (n_i == n_cpt + 1)
			if (ptr_chaine) {
				ptr_chaine[n_i] = '\0';
			}
	}

	free(ptr_chaine);

	//int n_len = strlen(ptr_chaine);
	int n_len = strlen(str_chaine.c_str());





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