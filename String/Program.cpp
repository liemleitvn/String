#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string>
using namespace std;
void main()
{
	char *str1;
	str1 = new char[100];
	cout << "\nNhap chuoi 1: ";
	cin.get(str1, 100);
	cout << "\nXuat chuoi 1: "<< str1;
	getc(stdin);//Giai phong bo nho

	char *str2;
	str2 = new char[100];
	cout << "\nNhap chuoi str2: ";
	cin.get(str2, 100);
	cout << "\nXuat chuoi str2: " << str2;
	getc(stdin);

	char str3[100];
	cout << "\nNhap chuoi 3: ";
	gets_s(str3);
	cout << "\nXuat chuoi 3:";
	puts(str3);

	char str4[100];
	cout << "\nNhap chuoi 4: ";
	gets_s(str4);
	cout << "\nXuat chuoi 4: ";
	puts(str4);

	char str5[2];
	cout << "\nGo phim space, sau do enter ";
	gets_s(str5);
	//cin >> str5;//khong dung cin o day duoc, vi cin khong nhan khoang trong space


	strcat_s(str3, str5);
	strcat_s(str3, str4);
	cout << "\nNoi str4 vao str3 thanh chuoi str3: ";
	cout <<str3;

	strcat_s(str3, str5);
	strncat_s(str3,str4,4);
	cout << "\nChuoi noi 4 ky tu dau str4 vao str3 thanh chuoi str3 :  " << str3;

	char *p, h;
	cout << "\nNhap ky tu muon tim trong str3: ";
	cin >> h;
	p = strchr(str3, h);
	if (p == NULL)
		cout << "\nKhong tim thay vi tri xuat hien ky tu '" <<h <<"' trong str3";
	else
		cout << "\nVi tri xuat hien ky tu '" <<h<< "' trong chuoi str3 la: " << (p - str3);

	cout << "\nDo dai cua chuoi str1 la: " << strlen(str1);

	int ret = strcmp(str3, str4);
	if (ret == 0)
		cout << "\nHai chuoi str1 va str2 bang nhau";
	if (ret == 1)
		cout << "\nChuoi str1 lon hon chuoi str2";
	if (ret == -1)
		cout << "\nChuoi str1 nho hon chuoi str2";

	
		char list[5][20];
		for (int i = 0; i<5; i++)
		{
			cout << "\nname" << i << ": ";
			cin>>list[i];
		}
		for (int j = 0; j<5; j++)
			cout << " " << list[j];
	


	_getch();
}

