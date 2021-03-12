#include "CPoint.h"
#include <stdio.h>


void CPoint::afficheLog() const
{
	printf("Point en x : %d", n_x);
	printf("Point en y : %d", n_y);
}
/*
//constructeur sans paramètres
CPoint::CPoint()
{
	this->n_x = 0;
	this->n_y = 0;
}*/

CPoint::CPoint(int n_x, int n_y, string str_cl)
{
	this->n_x = n_x;
	this->n_y = n_y;
	this->str_coul = str_cl;
}

int CPoint::getX() const
{
	return n_x;
}

int CPoint::getY() const
{
	return n_y;
}

string CPoint::getCoul() const
{
	return str_coul;
}

void CPoint::setX(int n_x)
{
	//n_x = n_x;	--> ne fonctionne pas : utilise l'argument deux fois!!

	this->n_x = n_x;
}

void CPoint::setY(int n_y)
{
	this->n_y = n_y;
}

void CPoint::setCoul(string str_cl)
{
	this->str_coul = str_cl;
}
