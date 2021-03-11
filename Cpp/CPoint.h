#pragma once

class CPoint {

private :
	//donnees membres = attributs = pptes
	int n_x;
	int n_y;

public :
	//fonctions membres
	void afficheLog() const;

	//instance de la classe CPoint
/*	//constructeur sans paramètres
	CPoint();

	//constructeur avec paramètres
	CPoint(int n_x, int n_y);
*/
	CPoint(int n_y);

	CPoint(int n_x = 0, int n_y = 0);

	//accesseurs
	int getX()const;
	int getY()const;

	//mutateurs
	void setX(int n_x);
	void setY(int n_y);
};
