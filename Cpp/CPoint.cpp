#include "CPoint.h"
#include <stdio.h>
#include <string.h>
#define TAILLE 10


void CPoint::afficheLog() const
{
	printf("Point en x : %d", n_x);
	printf("Point en y : %d", n_y);
}

/*
CPoint::CPoint(int n_x, int n_y, string str_cl)
{
	this->n_x = n_x;
	this->n_y = n_y;
	this->str_coul = str_cl;
	strcpy_s(this->pt_coul, TAILLE, pt_coul);
}*/

CPoint::CPoint()
{
	this->n_x = 0;
	this->n_y = 0;
	this->pt_coul = new char[TAILLE];
	
}

CPoint::CPoint(int n_x, int n_y, char* pt_coul)
{
	this->n_x = n_x;
	this->n_y = n_y;
	this->pt_coul = new char[TAILLE];
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
