#include <iostream>
#include <cstdlib>

using namespace std;

int arr[20];
int* pa = arr;

void fillin(int num1);
void stepright();
int check(int pos);
void del(int pos);
void crt(int pos);

int main()
{
	int num1, num2, num3, pos, m;
	cin >> num1;
	fillin(num1);
	pos = 0;
	for (int i = 0; i < 20; i++)
	{
		cout << *pa++;
	}
	if (check(pos))
	{
		del(pos);
		pos++;
	}
	else if (!check(pos))
	{
		pos++;
	}
	for (int i = 0; i < 20; i++)
	{
		cout << arr[i];
	}
	return 0;
}

void fillin(int num1)
{
	for (int i = 0; i <= num1; i++)
	{
		arr[i] = 1;
	}
}

void stepright()
{
	
}


int check(int pos)
{
	if (arr[pos])
	{
		return 1;
	}
	else if (!arr[pos])
	{
		return 0;
	}

}

void del(int pos)
{
	if (arr[pos])
	{
		cout << endl << "Metka est";
		arr[pos] = 0;
	}
	else if(!arr[pos])
	{
		cout << endl << "Net metki";
	}
}

void crt(int pos)
{
	if (arr[pos])
	{
		cout << endl << "Metka uzhe stoit";
	}
	else if (!arr[pos])
	{

		arr[pos] = 1;
		cout << endl << "postavil";
	}
}