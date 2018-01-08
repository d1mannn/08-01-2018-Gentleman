#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int task;
	do
	{
		cout << "Введите номер задания -";
		cin >> task;
		switch (task)
		{
			case 1:
			{
				/*1.	В массиве а1, а2, ..., а50 определить количество нулей.*/
				int a[50], sum = 0;
				for (int i = 0; i < 50; i++)
				{
					a[i] = -100 + rand() % 200;
					if (a[i] == 0)
						sum++;
				} 
				cout << "Количество нулей " << sum << endl;
			} break;

			case 2:
			{
				/*Даны три последовательности чисел а1, а2, ..., a9, b1, b2 ..., b9, с1, с2, ..., с9.
				Составьте новую последовательность d1, d2, …, d9, каждый элемент которой определяется по правилу di = max(аi, bi, сi), где i = 1, 2, ..., 9.*/
				int a[9], b[9], c[9], d[9];
				for (int i = 0; i < 9; i++)
				{
					a[i] = -100 + rand() % 200;
					b[i] = -100 + rand() % 200;
					c[i] = -100 + rand() % 200;
					cout << a[i] << "\t" << b[i] << "\t" << c[i] << endl;
				}
				for (int i = 0; i <9; i++)
				{
					if (a[i] > b[i] && a[i] > c[i])
						d[i] = a[i];
					else if (b[i] > a[i] && b[i] > c[i])
						d[i] = b[i];
					else
						d[i] = c[i];
					cout << d[i] << endl;
				}
			} break;

			case 3:
			{
				/*Найти номер первого нулевого элемента массива х1, х2, ..., х20 и сумму элементов предшествующих ему.*/
				int a[20], sum = 0;
				for (int i = 0; i < 20; i++)
				{
					a[i] = -100 + rand() % 200;
					sum += a[i];
					if (a[i] == 0)
					{	
						cout << "Индекс = " << i + 1 << endl;
						cout << "сумма всех элементов массива = " << sum << endl;
						break;
					}
				}

			} break;

			case 4:
			{
				/*Даны три последовательности чисел : а1, а2, ..., а8; b1, b2, ..., b8; с1, с2, ..., с8.
					Составить новую последовательность, в которой чередовались бы числа всех трех последовательностей, т.е.
					d1 = a1; d2 = b1; d3 = c1; d4 = a2; d5 = b2; d6 = c2.*/
				int a[8], b[8], c[8], d[24], step = 0;
				for (int i = 0; i < 8; i++)
				{	
					a[i] = -100 + rand() % 200;
					b[i] = -100 + rand() % 200;
					c[i] = -100 + rand() % 200;
					cout << a[i] << "\t" << b[i] << "\t" << c[i] << endl;

				}
				for (int i = 0; i < 24; i+=3)
				{	
					
					d[i] = a[step];
					d[i + 1] = b[step];
					d[i + 2] = c[step];
					step++;
				}
				for (int i = 0; i < 24; i++)
				{
					cout << d[i] << endl;
				}
				
			} break;

			case 5:
			{
				/*Известно, что в массиве а1, а2, ..., а16 
				количество отрицательных чисел равно количеству положительных.Составить новый массив так, чтобы чередовались положительные и отрицательные числа.*/
				int a[16];
				for (int i = 0; i < 16; i++)
				{
					if (i < 8)
						a[i] = -100 + rand() % 99;
					if (i >= 8)
						a[i] = 1 + rand() % 99;
					cout << a[i] << endl;
				} 
				for (int i = 0; i < 16; i++)
				{	
					if(i + 1 % 2 != 0)
						cout << a[i] << endl;
					else if (i + 1 % 2 == 0)
						cout << a[i] << endl;
				}
			} break;
		}
	} while (task <= 25);


}