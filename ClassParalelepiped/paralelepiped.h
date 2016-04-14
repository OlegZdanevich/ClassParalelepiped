#include<iostream>
using namespace std;


class Paralelepiped
{
public:
	Paralelepiped(int, int);
	int Perimeter();
	int Square();
	bool IsSquare();
	void Draw();
	friend ostream& operator<< (ostream&, Paralelepiped);

private:
	int w, h;

};



