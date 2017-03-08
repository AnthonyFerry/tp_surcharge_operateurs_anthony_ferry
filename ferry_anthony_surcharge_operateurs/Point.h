#pragma once
#include <iostream>

using namespace std;

class Point
{
	float x, y;
	int tab[100];
public:

	// Constructeur
	Point(float abs = 0.0f, float ord = 0.0f)
	{
		x = abs;
		y = ord;
		initTab();
	}

	// Constructeur par recopie
	Point(const Point& p)
	{
		x = p.x;
		y = p.y;
		initTab();
	}

	// Destructeur
	~Point()
	{
	}

	// Operateurs -------------------------------------------------------------------
	// Addition de deux points
	Point operator+ (const Point& pt)
	{
		Point p;
		p.x = x + pt.x;
		p.y = y + pt.y;
		return p;
	}

	// Soustraction de deux points
	Point operator- (const Point& pt)
	{
		Point p;
		p.x = x - pt.x;
		p.y = y - pt.y;
		return p;
	}

	// Multiplication de deux points
	Point operator* (const Point& pt)
	{
		Point p;
		p.x = x * pt.x;
		p.y = y * pt.y;
		return p;
	}

	// Division de deux points
	Point operator/ (const Point& pt)
	{
		Point p;
		p.x = x / pt.x;
		p.y = y / pt.y;
		return p;
	}
	
	// Incrementation d'un point
	Point operator+= (const Point& pt) 
	{
		x += pt.x;
		y += pt.y;
		return *this;
	}

	// Décrémentation d'un point
	Point operator-= (const Point& pt) 
	{
		x -= pt.x;
		y -= pt.y;
		return *this;
	}

	// Implémentation de l'operateur *=
	Point operator*= (const Point& pt) 
	{
		x *= pt.x;
		y *= pt.y;
		return *this;
	}

	// Implémentation de l'operateur /=
	Point operator/= (const Point& pt) 
	{
		x /= pt.x;
		y /= pt.y;
		return *this;
	}

	// Operateur "est égale"
	bool operator== (const Point& pt)
	{
		return x == pt.x && y == pt.y;
	}

	// Operateur "est différent"
	bool operator!= (const Point& pt)
	{
		return x != pt.x || y != pt.y;
	}

	// Affectation
	Point operator= (const Point& pt)
	{
		x = pt.x;
		y = pt.y;
		return *this;
	}
	// ----------------------------------------------------------------------------------------------------------------------
	// Flux de sortie
	friend ostream& operator<<(ostream& os, const Point& mp)
	{
		return os << "x : " << mp.x << " / " << "y : " << mp.y << "\n" << "---------------------------" << "\n";
	}

	// Flux d'entrée
	friend istream& operator>>(istream& is, Point& mp)
	{
		cout << "Valeur de x : \n";
		is >> mp.x;
		cout << "Valeur de y : \n";
		is >> mp.y;
		return (is);
	}
	// -----------------------------------------------------------------------------------------------------------------------
	// Operateur []
	int operator[](int i)
	{
		return tab[i];
	}
	// -----------------------------------------------------------------------------------------------------------------------
	// Permet d'initialiser le tableau
	void initTab()
	{
		for (int i = 0; i < 100; i++)
			tab[i] = i * 10;
	}
};

