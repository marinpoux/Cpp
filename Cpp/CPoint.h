#pragma once
#include <string>

using namespace std;

class CPoint {

private :
	//donnees membres = attributs = pptes
	int n_x;
	int n_y;

	string str_coul;
	char* pt_coul;

public :
	//fonctions membres
	void afficheLog() const;

	//CPoint(int n_x = 0, int n_y = 0, string str_coul = "rouge");

	CPoint();
	CPoint(int n_x, int n_y, char* pt_coul);

	//accesseurs
	int getX()const;
	int getY()const;
	//string getCoul()const;
	

	//mutateurs
	void setX(int n_x);
	void setY(int n_y);
	void setCoul(string str_cl);
};
