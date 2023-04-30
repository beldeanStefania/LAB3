#include<iostream>
#include"functionalitati.h"
using namespace std;

int citire(int &n, int*  &v)
{
	cout << "Scrieti nr n: ";
	cin >> n;
	v = new int[n];
	cout << endl;
	cout << "Scrieti lista: ";
	for (int i = 1; i <= n; i++)
		cin >> v[i];
	return 0;
}

void afisare(int* v, int st, int dr)
{
	cout << "Secventa este: ";
	for (int i = st; i <= dr; i++)
		cout << v[i] << " ";
	cout << endl;
}

void afisare_meniu()
{
	cout << "1. Citire lista"<<endl;
	cout << "2.Afisare lista" << endl;
	cout << "3. Secventa in care diferentele intre perechile de elemente de pe pozitii consecutive au semne contrare" << endl;
	cout << "4. Secventa in care elementele de pe pozitii consecutive au semne contrare" << endl;
	cout<<"0. Iesire din program"<<endl;
	cout<<endl;
	cout<<"Alegeti o optiune: ";
}

void Meniu()
{
	int op=4, n, st=0, dr=0;
	int *v = NULL;
    v = new int;
	while (op)
	{
		afisare_meniu();
		cin >> op;
		switch (op)
		{
		case 1:
			citire(n,v);
			break;
		case 2:
			afisare(v, 1, n);
			break;
		case 3:
            {int rez1 = secv_dif(v, n, st, dr);
			afisare(v, st, dr);
			break;}
		case 4:
			{int rez2 = secv_elem_dif(v, n, st, dr);
			afisare(v, st, dr);
			break;}
		default:
			op = 0;
			break;

		}
	}
	delete[] v;
}
