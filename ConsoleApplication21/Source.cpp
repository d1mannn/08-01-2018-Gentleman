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
		cout << "������� ����� ������� -";
		cin >> task;
		switch (task)
		{
			case 1:
			{
				/*1.	� ������� �1, �2, ..., �50 ���������� ���������� �����.*/
				int a[50], sum = 0;
				for (int i = 0; i < 50; i++)
				{
					a[i] = -100 + rand() % 200;
					if (a[i] == 0)
						sum++;
				} 
				cout << "���������� ����� " << sum << endl;
			} break;

			case 2:
			{
				/*���� ��� ������������������ ����� �1, �2, ..., a9, b1, b2 ..., b9, �1, �2, ..., �9.
				��������� ����� ������������������ d1, d2, �, d9, ������ ������� ������� ������������ �� ������� di = max(�i, bi, �i), ��� i = 1, 2, ..., 9.*/
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
				/*����� ����� ������� �������� �������� ������� �1, �2, ..., �20 � ����� ��������� �������������� ���.*/
				int a[20], sum = 0;
				for (int i = 0; i < 20; i++)
				{
					a[i] = -100 + rand() % 200;
					sum += a[i];
					if (a[i] == 0)
					{	
						cout << "������ = " << i + 1 << endl;
						cout << "����� ���� ��������� ������� = " << sum << endl;
						break;
					}
				}

			} break;

			case 4:
			{
				/*���� ��� ������������������ ����� : �1, �2, ..., �8; b1, b2, ..., b8; �1, �2, ..., �8.
					��������� ����� ������������������, � ������� ������������ �� ����� ���� ���� �������������������, �.�.
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
				/*��������, ��� � ������� �1, �2, ..., �16 
				���������� ������������� ����� ����� ���������� �������������.��������� ����� ������ ���, ����� ������������ ������������� � ������������� �����.*/
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