#pragma once
#include <string.h>

using namespace std;

class CPoint {

private :
	//donnees membres = attributs = pptes
	int n_x;
	int n_y;

	char* pt_coul;

	//static -> d'un appel a l'autre, occuper le meme espace memoire
	static int n_cpt;
	//compte nb instances de constructeurs

protected :

public :
	//fonctions membres
	void afficheLog() const;

	//CPoint(int n_x = 0, int n_y = 0, string str_coul = "rouge");

	//constructeurs
	CPoint();
	CPoint(int n_x, int n_y, char* pt_coul);

	//destructeurs
	~CPoint();

	//accesseurs
	int getX()const;
	int getY()const;
	char* getCoul()const;
	
	//int getCptInstance()const;
	static int getCptInstance();

	//mutateurs
	void setX(int n_x);
	void setY(int n_y);
	void setCoul(string str_cl);
};
