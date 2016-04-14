#include"paralelepiped.h"

inline void Convert(bool);

int main()
{
	int w, h;
	cout << "Width: ";
	cin >> w;
	cout << endl;
	cout << "Height: ";
	cin >> h;
	system("cls");
	cout << endl;
	Paralelepiped v1(w, h);
	cout << v1;
	bool t = v1.IsSquare();
	cout << "Is square: ";
	Convert(t);
	cout << endl;
	cout << "Perimeter:  " << v1.Perimeter() << endl;
	cout << "Square:  " << v1.Square() << endl;
	v1.Draw();
	system("pause");
	return 0;

}


inline void Convert(bool a)
{
	if (a == true) cout << " Yes ";
	else cout << " No ";
}
