#include <iostream>
using namespace std;

void ALG_ARR(int*, int, int);
void PUT_ARR(int*, int);

int main()
{
	setlocale(LC_ALL, "Rus");

	int k, size;

	cout << "Введи k: "; cin >> k;
	cout << "size: "; cin >> size;

	int* arr = new int[size + 2];
	
	PUT_ARR(arr, size);
	ALG_ARR(arr, size, k);

	cout << "Массив в итоге: " << endl;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void ALG_ARR(int* arr, int size, int k)
{
	int n = 0;
	for (int i = 0; i < size; i++)
	{
		if (k > arr[i])
		{
			i++;
			if (k == arr[i])
			{
				i++;
				if (k < arr[i])
				{
					arr[i] = 0;
					arr[i - 1] = 0;
					arr[i - 2] = 0;
					n++;
				}
				else i--;
			}
			else i--;
		}
		
	}

	cout << "Кол-во серий: " << n << endl;
}

void PUT_ARR(int* arr, int size)
{
	int h;
	cout << "Ввод значений или рандом (вписать 1 или 2): "; cin >> h;
	
	if (h == 1)
	{
        for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
	}
	else {
		for (int i = 0; i < size; i++)
		{
			arr[i] = rand();
		}
	}
}
