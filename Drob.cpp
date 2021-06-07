#include "Drob.h"


void Drob::setChis(int chis)
{
	this->chis;
}

void Drob::setZnam(int znam)
{
	this->znam;
}

int Drob::getChis()
{
	return this->chis;
}

int Drob::getZnam()
{
	return this->znam;
}

void Drob::showDrob()const
{
	cout <<endl<< this->chis << endl << "-" <<endl <<this->znam;

}


Drob& Drob::sloj (Drob drob1, Drob drob2)
{
	int oznam, ochis;
	if (drob1.znam == drob2.znam)
	{
		ochis = (drob1.chis + drob2.chis);
		oznam = drob1.znam;
	}
	else
	{
		ochis = ((drob1.chis * drob2.znam) + (drob2.chis * drob1.znam));
		oznam = (drob1.znam * drob2.znam);
	}
	
	cout << "Ответ :"<<endl;
	this->chis = ochis;
	this->znam = oznam;
	sokr();
	this->showDrob();
	
	return *this;
}

Drob& Drob::mult(Drob drob1, Drob drob2)
{
	
	int oznam, ochis;
	 
	
		ochis = (drob1.chis *drob2.chis);
		oznam = (drob1.znam* drob2.znam);
	

	cout << "Ответ :" << endl;
	this->chis = ochis;
	this->znam = oznam;
	sokr();
	this->showDrob();

	return *this;

}

Drob& Drob::sub(Drob drob1, Drob drob2)
{
	int oznam, ochis;
	if (drob1.znam == drob2.znam)
	{
		ochis = (drob1.chis - drob2.chis);
		oznam = drob1.znam;
	}
	else
	{
		ochis = ((drob1.chis * drob2.znam) - (drob2.chis * drob1.znam));
		oznam = (drob1.znam * drob2.znam);
	}
	
	cout << "Ответ :" << endl;
	this->chis = ochis;
	this->znam = oznam;
	sokr();
	this->showDrob();

	return *this;
	
}

Drob& Drob::sloj(int _number)
{
	chis = chis + znam * _number;
	sokr();
	return *this;
}

int Drob::Nod()
{
	int delimoe = chis;
	int delitel = znam;
	int rem=1;
	if (delimoe < delitel) {
		int temp = delimoe;
		delimoe = delitel;
		delitel = temp;
	}
	while (rem = delimoe % delitel)
	{
		delimoe = delitel;
		delitel = rem;
	}
	return delitel;
	
}


void Drob::sokr() 
{
	int delitel = Nod();
	chis = chis / delitel;
	znam = znam / delitel;

}



