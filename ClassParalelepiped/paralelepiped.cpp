#include "paralelepiped.h"


Paralelepiped::Paralelepiped(int a, int b)
{
	
	if (a > 20 || b > 20 || a <= 0 || b <= 0)
	{
		this->w = 1;
		this->h = 1;
	}
	else
	{
		this->w = a;
		this->h = b;
	}
	
}

int  Paralelepiped::Perimeter()
{
	int c = 2 * w + 2 * h;
	return c;
}

int  Paralelepiped::Square()
{
	int c = w*h;
	return c;
}

bool  Paralelepiped::IsSquare()
{
	if (w == h) return true;
	return false;
}


void  Paralelepiped::Draw()
{
	char rd = (char)217;
	char ru = (char)191;
	char ld = (char)192;
	char lu = (char)218;
	char ve = (char)179;
	char go = (char)196;
	char em = (char)255;

	cout << lu;
	for (int i = 0; i < w - 1; i++) cout << go;
	cout << ru;
	cout << "\n";
	for (int i = 1; i < h - 1; i++)
	{
		cout << ve;
		for (int j = 0; j < w - 1; j++) cout << em;
		cout << ve;
		cout << "\n";
	}
	cout << ld;
	for (int i = 0; i < w - 1; i++) cout << go;
	cout << rd;
	cout << "\n";

}

ostream& operator<<(ostream& out, Paralelepiped a)
{
	out << "width: " << a.w << " height: " << a.h << endl;
	return out;
}