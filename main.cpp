#include <iostream>

using namespace std;


int otzhimaniya (int rost, int ves, int vozrast)
{
	return (rost+ves)/((vozrast+10)/10);
}


int podtyagivaniya (int rost, int ves, int vozrast)
{
	return (rost+ves)/vozrast;
}


int prisedaniya (int vozrast)
{
	return 120-vozrast;
}



int main()
{
	int rost, ves, vozrast;

	cout << "\tТри кита.\n";

	cout << "Ваш рост (см): ";
	cin >> rost;
	cout << "Ваш вес (кг): ";
	cin >> ves;
	cout << "Ваш возраст: ";
	cin >> vozrast;

	cout << endl;
	cout << "Отжимания = " << otzhimaniya (rost, ves, vozrast) << endl;
	cout << "Подтягивания = " << podtyagivaniya (rost, ves, vozrast) << endl;
	cout << "Приседания = " << prisedaniya (vozrast) << endl;	

	return 0;
}
