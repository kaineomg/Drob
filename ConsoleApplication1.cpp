#include <iostream>
#include "Drob.h"
using namespace std;

void showFriend(Drob drob) 
{
	cout<<"\n"<< "("<< drob.chis<<"/" <<drob.znam<<")";

}

Drob& operator+(Drob drob1, Drob drob2)
{
	int oznam, ochis;
	Drob drob3;
	
	
		ochis = ((drob1.chis * drob2.znam) 
			+ (drob2.chis * drob1.znam));
		oznam = (drob1.znam * drob2.znam);
	

	
	drob3.chis = ochis;
	drob3.znam = oznam;
	drob3.sokr();
	showFriend(drob3);

	return drob3;
}

Drob& operator*(Drob drob1, Drob drob2)
{
	int oznam, ochis;
	Drob drob3;

	ochis = (drob1.chis * drob2.chis);
	oznam = (drob1.znam * drob2.znam);


	cout << "Ответ :" << endl;
	drob3.chis = ochis;
	drob3.znam = oznam;
	drob3.sokr();
	drob3.showDrob();

	return drob3;

}

Drob& operator/(Drob drob1, Drob drob2)
{
	int chis1 = drob1.chis;
	int znam1 = drob1.znam;

	int chis2 = drob2.chis;
	int znam2 = drob2.znam;

	int chis3 = chis1 * znam2;
	int znam3 = chis2 * znam1;
	Drob drob3 = Drob(chis3, znam3);
	drob3.sokr();
	return drob3;

}



int main()

{
	Drob drob3;
    Drob drob1(3, 5);
	Drob drob2(1, 4);
	setlocale(LC_ALL, "ru");
	drob3 = drob1 * drob2;
	showFriend(drob3);

	/*Drob drob;
	cout << "Введите первую дробь: "<<endl;
	cin >> a;
	cout  << "-"<<endl;
    cin >> b;
	Drob drob1(a, b);
	cout << "Введите вторую дробь: "<<endl;
	cin >> a1;
	cout  << "-"<<endl;
	cin >> b1;
	Drob drob2(a1, b1);
	cout << "Выберите операцию (+,-,*) " << endl;
	
	cin >> e;

	switch (e)
	{
	case  '+' :
		drob.sloj(drob1, drob2);
		break;
	case '-':
		drob.sub(drob1, drob2);
		break;
	case '*':
		drob.mult(drob1, drob2);
		break;
	default:
		cout << "Выберите операцию (+,-,*) " << endl;
		break;
	}*/

}


