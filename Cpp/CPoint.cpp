#include "CPoint.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
#define TAILLE 10

using namespace std;

//donnees statiques

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

CPoint::CPoint(int n_x, int n_y, char* pt_coul)
{
	this->n_x = n_x;
	this->n_y = n_y;
	this->pt_coul = new char[TAILLE];

	n_cpt++;
}

//destructeur

CPoint::~CPoint()
{
	cout << "Destructeur" << endl;

	delete[] pt_coul;

	n_cpt--;

	cout << n_cpt << endl;

	cout << this->getCptInstance() << endl;
}

int CPoint::getX() const
{
	return n_x;
}

int CPoint::getY() const
{
	return n_y;
}

char* CPoint::getCoul() const
{
	return pt_coul;
}

int CPoint::getCptInstance()
{
	return n_cpt;
}
/*
int CPoint::getCptInstance() const
{
	return n_cpt;
}
*/

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

void CPoint::afficheLog() const
{
	printf("Point en x : %d", n_x);
	printf("Point en y : %d", n_y);
}