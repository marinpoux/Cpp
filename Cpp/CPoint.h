#pragma once
#include <string>

using namespace std;

class CPoint {

private :
	//donnees membres = attributs = pptes
	int n_x;
	int n_y;

	string str_coul;

public :
	//fonctions membres
	void afficheLog() const;

	//instance de la classe CPoint
/*	//constructeur sans paramètres
	CPoint();

	//constructeur avec paramètres
	CPoint(int n_x, int n_y);
*/
	CPoint(int n_x = 0, int n_y = 0, string str_coul = "rouge");

	//accesseurs
	int getX()const;
	int getY()const;
	string getCoul()const;

	//mutateurs
	void setX(int n_x);
	void setY(int n_y);
	void setCoul(string str_cl);
};
