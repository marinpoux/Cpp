#pragma once
#include <string>

using namespace std;

class CPoint {


//Encapsulation :
	//Public
	//Private
	//Protected

private :
	//Donn�es membres
	int n_x;
	int n_y;

	char* pt_coul;

	static int n_cpt;



protected :

public :

	
	CPoint();
	CPoint(int n_x, int n_y, char *pt_coul);
	~CPoint();


	//Accesseurs
	int getX()const;
	int getY()const;
	char* getCoul()const;

	static int getCptInstance();

	


	//Mutateurs
	void setX(int n_x=9);
	void setY(int n_y=9);
	void setCoul(char* pt_coul);

	//Passage par r�f�rence
	bool coincidePoint(CPoint &p)const;






	
};

