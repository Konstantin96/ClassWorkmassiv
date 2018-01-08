#include <iostream>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <conio.h>
#include <time.h>
#include <stdio.h>

using namespace std;

void main()
{
start:
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int nz;
	cout << "Vvedite nomer zadaniya: ";
	cin >> nz;
	cout << endl;
	switch (nz)
	{

	case 1:
	{
		/*Заполнить массив из восьми элементов следующими значениями: первый элемент массива равен 37, второй — 0, третий — 50, четвертый — 46, пятый — 34, шестой — 46, седьмой — 0, восьмой —13*/
		int a[] = { 0,37,0,50,46,34,0,5613 };
		for (int i = 0; i <= 7; i++)
		{
			cout << a[i] << endl;
		}
	}
	break;

	case 2:
	{
		/* Заполнить массив из десяти элементов значениями, вводимыми с клавиатуры в ходе выполнения программы */
		srand(time(NULL));
		int a[10];
		cout << "Vvedite desyat' znacheniy: ";
		for (int i = 0; i < 10; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < 10; i++)
		{
			cout << a[i] << endl;
		}
	}
	break;

	case 3:
	{
		/*3.	Массив предназначен для хранения значений ростов двенадцати человек.
		С помощью датчика случайных чисел заполнить массив целыми значениями,
		лежащими в диапазоне от 163 до 190 включительно*/
		int rost[12];

		for (int i = 0; i < 12; i++)
		{
			rost[i] = 163 + rand() % 27;
			cout << rost[i] << endl;
		}
	}
	break;

	case 4:
	{
		/* Составить программу вывода на экран любого элемента массива по его индексу */
		int b, a[10] = { 15,18,581,16,865,18,32,145,59,198 };

		cout << "Vvedite index: ";
		cin >> b;
		cout << endl << a[b] << endl;
	}
	break;

	case 5:
	{
		/* Вывести элементы массива на экран в обратном порядке */
		int rost[12];

		for (int i = 11; i >= 0; i--)
		{
			rost[i] = 163 + rand() % 27;
			cout << rost[i] << endl;
		}
	}
	break;

	case 6:
	{
		/* Дан массив. Составить программу:
		   a.	расчета квадратного корня из любого элемента массива;
		   b.	расчета среднего арифметического двух любых элементов массива */
		int b, a[10] = { 25,86,186,18,18,89,486,489,23,17 };
		cout << " Chto hotite sdelat' s massivom \n 1)raschitat' kvadratniy koren'\n 2)raschitat' srednee arifmeticheskoe dvuh chisel \n";
		cout << "Vvedite variant: ";
		cin >> b;

		switch (b)
		{
		case 1:
		{
			int re;
			cout << "Vvedite nomer massiva (0-9): \n";
			cin >> re;
			cout << a[re] << " = " << sqrt(a[re]) << endl;
		}
		break;

		case 2:
		{
			int rt, er, sr;
			cout << "Vvedite 2 chisla massiva (0-9):" << endl;
			cin >> rt;
			cin >> er;
			cout << "Srednee aridmeticheskoe = " << a[rt] + a[er] / 2 << endl;
		}
		break;
		}

	}
	break;

	case 7:
	{
		/* Дан массив. Все его элементы:
		  a.	увеличить в 2 раза;
		  b.	уменьшить на число А;
		  c.	разделить на первый элемент */
		int b, a[10] = { 15,89,98,48,145,15,18,56,15,156 };
		cout << "Vvedite nomer massiva (0-9) :";
		cin >> b;
		cout << "a. увеличить в 2 раза = " << a[b] * 2 << " \n";
		cout << "Vvedite chislo: ";
		int f;
		cin >> f;
		cout << "b. уменьшить на число А= " << a[b] - f << endl;
		cout << "c. разделить на первый элемент= " << a[b] / a[0] << endl;
	}
	break;

	case 8:
	{
		/* В массиве хранятся сведения о стоимости 12 различных предметов. Определить общую стоимость всех предметов*/
		int sum = 0, a[12] = { 1500,5888,1466,1611,5656,1361,1235,1555,2555,7000,1555,1111 };

		for (int i = 0; i < 12; i++)
		{
			sum += a[i];
		}
		cout << sum << "\t";
	}
	break;

	case 9:
	{
		/* В массиве хранятся сведения о количестве осадков, выпавших за каждый день февраля. Определить среднедневное количество осадков в этом месяце */
		int osa = 0, a[28];

		for (int i = 0; i < 28; i++)
		{
			a[i] = 1 + rand() % 99;
			cout << a[i] << endl;
			osa += a[i];
		}
		cout << "Sr arefm osdkov = " << osa / 28 << endl;

	}
	break;

	case 10:
	{
		/* В массиве хранится информация о массе каждого из 30 предметов, загружаемых в грузовой автомобиль, грузоподъемность которого известна.
		Определить, не превышает ли общая масса всех предметов грузоподъемность автомобиля*/
		int mass = 0, a[30], avto = 5000;

		for (int i = 0; i < 30; i++)
		{
			a[i] = 1 + rand() % 349;
			mass += a[i];
		}
		if (avto < mass)
		{
			cout << "Ne vmeshaetsya gruz" << endl;
		}
		else
			cout << "Vmeshaetsya mass avto = " << mass << " kg" << endl;

	}
	break;

	case 11:
	{
		/*  Дан массив. Напечатать:
		  a.	все неотрицательные элементы;
		  b.	все элементы, не превышающие число 100.
		  c.	все четные элементы */
		int a[100];

		cout << "Vse neotricatel'nye chisla \n";
		for (int i = 0; i < 100; i++)
		{
			a[i] = -1000 + rand() % 2000;	
			if (a[i]>0)
				cout << a[i]<<" ";
		}
		cout << endl;
		cout << endl;
		cout << "Vse elementi ne prevyshayushie 100\n";
		for (int i = 0; i < 100; i++)
		{
			a[i] = -1000 + rand() % 2000;
			if (a[i]<100)
				cout << a[i] << " ";
		}
		cout << endl;
		cout << endl;
		cout << "Vse chetnye elementy\n";
		for (int i = 0; i < 100; i++)
		{
			a[i] = -1000 + rand() % 2000;
			if (a[i]%2==0)
				cout << a[i] << " ";
		}
		cout << endl;
		cout << endl;

	}
	break;

	case 12:
	{
		/* Дан массив. Вывести на экран сначала его элементы, стоящие на четных местах, затем — на нечетных */
		int a[100];

		cout << "Chetnye chisla \n";
		for (int i = 0; i < 100; i++)
		{
			a[i] = -1000 + rand() % 2000;
			if (a[i]%2==0)
				cout << a[i] << " ";
		}
		cout << endl;
		cout << endl;
		cout << "Ne chetnye chisla \n";
		for (int i = 0; i < 100; i++)
		{
			a[i] = -1000 + rand() % 2000;
			if (a[i]%2)
				cout << a[i] << " ";
		}
		cout << endl;
	}
	break;

	default:
		cout << " Dannogo zadaniya net, \n poprobuyte eshe raz!\n";
		break;
	}
}



















