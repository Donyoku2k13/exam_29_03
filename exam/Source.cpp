#include<iostream>
#include<locale.h>
#include<time.h>
#include<fstream>
#include<string>
#include<cstring>
#include <cctype>
using namespace std;


ifstream ifstr("out.txt");
struct animal
{
	char class_an[300]; 
	char type[300];
	char nickname[300];
	
};

void voiceanim(char *t) {
	char str[10] = { "Dog" };
	char str1[10] = { "Cat" };

	if (strcmp(t, str) == 0)
	{
		cout << "Wooof" << endl;
	}
	if (strcmp(t, str1) == 0)
	{
		cout << "myah" << endl;
	}
}


void fillArray(int a[], int n) {
	for (int *p = a; p <a + n; p++)
	{
		*p = 1 + rand() % 10;
	}
}
void printArray(int a[], int n) {
	for (int *p = a; p < a + n; p++)
	{
		cout << *p <<" ";
	}
	cout << endl;
}


bool isPowerG(int a, int g)
{
	int h = g;
	while (g < a)
	{
		if (g - a == 0)
		{
			return true;
		}
		g = g * h;
	}
	return false;
}

int func1(int *&a, int g)
{
	int c = 0;
	for (size_t i = 0; i < g; i++)
	{
		if (a[i] != 0)
		{
			c++;
		}
	}
	int *tmp;
	tmp = new int[c];
	int y = 0;
	for (size_t i = 0; i < g; i++)
	{
		if (a[i] != 0)
		{
			tmp[y] = a[i];
			y++;
		}
	}
	delete[] a;
	a = tmp;
	return c;
}

//1.	���� ������. ������������� � ��� ��� ��������� ��������� ����� � ��������.

//int main()                                
//{
//	char str[30];
//	cin.ignore();
//	cin.getline(str, 30);
//	int s;
//	s = strlen(str);
//	for (size_t i = 0; i < s; i++)
//	{
//		if (str[i] > 64 && str[i] < 91)
//		{
//			str[i] = str[i] + 32;
//		}
//
//	}
//	cout << str << endl;
//}

//2.	�������� �������, ������� ��������� ��������� �� ������ � ���������� ���������. ������� ������� ������, ������ �� ���� �������� ������ 0. ���������� ��������� �� ����� ������, �� ���������� 0.

//int main()
//{
//	int g;
//	cout << "������� �����?" << endl;
//	cin >> g;
//	int *a;
//	a = new int[g];
//	for (size_t i = 0; i <g; i++)
//	{
//		cout << "������� �����" << endl;
//		cin >> a[i];
//	}
//	int h = func1(a, g);
//	for (size_t i = 0; i < h; i++)
//	{
//		cout << a[i] << endl;
//	}
//	system("pause");
//}

//3.	���� ����� ����� N (> 1) � ����� �� N ����� �����. ������� �� �������� � ������, ������� ������ ������ ������ ������, � ���������� K ����� ���������.

//int main()
//{
//	int counter = 0;
//	const int n=10;
//
//	int arr[n] = { 0 };
//	fillArray(arr, n);
//	printArray(arr, n);
//	for (int i = 0; i<(n - 1); i++)
//	{
//		if (arr[i + 1]<arr[i])
//		{
//			cout << arr[i + 1] << " ";
//			counter++;
//		}
//
//	}
//	cout << endl << "K= " << counter << endl;
//	system("pause");
//}

//4.	������� ������� IsPowerN(K, N) ����������� ����, ������������
//TRUE, ���� ����� �������� K(> 0) �������� �������� ����� N(> 1), �
//FALSE � ��������� ������.���� ����� N(> 1) � ����� �� 10 ����� �� -
//����������� �����.� ������� ������� IsPowerN ����� ���������� �������� ����� N � ������ ������.


//int main()
//{
//	int g;
//cout << "what`s your number?" << endl;
//cin >> g;
//int a[10];
//int c = 0;
//for (size_t i = 0; i <10; i++)
//{
//	a[i] = 1 + rand() % 100;
//	cout << a[i] << endl;
//}
//cout << "-----------------------" << endl;
//for (size_t i = 0; i < 10; i++)
//{
//	cout << isPowerG(a[i], g) << endl;
//}
//	
//	system("pause");
//}

//5.	���� ������� ������� M ? N � ����� ����� K (1 ? K ? N). �������
//�������� K - �� ������� ������ �������.

//int main()
//{
//	const int m = 4;
//	const int n = 5;
//	int k = 3;
//	int arr[m][n];
//	for (int i = 0; i<m; i++)
//		for (int j = 0; j<n; j++)
//			arr[i][j] = i * j; //��������� 
//
//	for (int p = 0; p<m; p++)
//		cout << arr[k][p] << " ";
//
//
//	system("pause");
//}


//6.
//����������� ���������, ������� ��������� ��������(��������, �����, ������).������� ������� ��� ������ � ���� ���������� :
//	���������� �������
//?	����� �� ����� ������ �� �������
//?	������� ������� �����

//
//int main()
//{
//	animal *s = new animal[4];
//	for (int i = 0; i < 4; i++)
//	{
//		ifstr >> s[i].class_an;
//		ifstr >> s[i].type;
//		ifstr >> s[i].nickname;
//	}
//	for (size_t i = 0; i < 4; i++)
//	{
//		cout <<"class: "<<" " << s[i].class_an << " " << "type: "<<" " << s[i].type<<" " << "nickname: "<<"  "<< s[i].nickname << endl;
//		voiceanim(s[i].class_an);
//	}
//
//	
//
//	system("pause");
//}