#include "CPoint.h"
#include <iostream>
#include <string.h>
#define TAILLE 10

int CPoint::n_cpt = 0;

//constructeurs
CPoint::CPoint()
{

	this->n_x = 0;
	this->n_y = 0;
	this->pt_coul = new char[TAILLE];
	strcpy_s(this->pt_coul, TAILLE, "vert");
	n_cpt++;
	
}


CPoint::CPoint(int n_x, int n_y,char *pt_coul)
{
	
	this->n_x = n_x;
	this->n_y = n_y;
	this->pt_coul = new char[TAILLE];
	strcpy_s(this->pt_coul,TAILLE,pt_coul);
	n_cpt++;

}

//constructeur de copie
CPoint::CPoint(CPoint& p)
{
	this->n_x = p.n_x;
	this->n_y = p.n_y;
	this->pt_coul = new char[TAILLE];
	strcpy_s(this->pt_coul, TAILLE, p.getCoul());

	n_cpt++;
}

//destructeur
CPoint::~CPoint()
{
	std::cout << "Destructeur" << std::endl;
	
	delete[] pt_coul;

	n_cpt--;
		
	cout << n_cpt << endl;

}


int CPoint::getX()const
{
	return n_x;
}

int CPoint::getY()const
{
	return n_y;
}

char* CPoint::getCoul() const
{
	return this->pt_coul;
}

int CPoint::getCptInstance()
{
	return n_cpt;
}



void CPoint::setX(int n_x)
{
	this->n_x = n_x;
}

void CPoint::setY(int n_y)
{
	this->n_y = n_y;
}

void CPoint::setCoul(char* pt_coul)
{
	strcpy_s(this->pt_coul, TAILLE, pt_coul);
}

bool CPoint::coincidePoint(CPoint &p) const
{
	if (this->n_x == p.n_x && this->n_y == p.n_y)
		return true;
	else
		return false;
}

