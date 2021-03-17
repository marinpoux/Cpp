#include "CPoint.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
//#define TAILLE 10

using namespace std;


/*
void afficheLog(int n_value);
void afficheLog(float flt_value);
void afficheLog(string str_value);
void afficheLog(char* pt_value);
void modifPoint(CPoint &p);
*/

int main() {

	const int TAILLE = 10;
	
	//Instance de la classe CPoint
	char* pt_couleur = new char[TAILLE];
	strcpy_s(pt_couleur,TAILLE,"rouge");
	CPoint p1(0, 0, pt_couleur);
	
	CPoint p2(0, 2, pt_couleur);


	//Constructeur de copie
	//CPoint(&var);
	CPoint p3(p1);

	CPoint p4 = p2;
	//!! DIFFERENT DE : "CPoint p4; p4=p2;"






	
	//
	cout << CPoint::getCptInstance() << endl;

	bool test=p1.coincidePoint(p2);
	
	//modifPoint(p2);

	

	p1.afficheLog();
	

	return 0;
	
}

//Passage par r�f�rence
void modifPoint(CPoint &p) {

	p.setX(12);
	p.setY(25);
	strcpy_s(p.getCoul(), 10, "Orange");
	

}



void afficheLog(int n_value) {

	cout <<"Log : "<< n_value << endl;

}

void afficheLog(float flt_value) {

	cout <<"Log : "<< flt_value << endl;
}

void afficheLog(string str_value) {

	cout << "Log : " << str_value << endl;
}

void afficheLog(char* pt_value) {

	cout << "Log : " << pt_value << endl;

}
