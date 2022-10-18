// проэкт создан с помощью персонального шаблона
#include<iostream>
using namespace std;
// Задача 1
void three_max(int& refa, int& refb, int& refc) {	
	int max = refa > (refb > refc ? refb : refc) ? refa : (refb > refc ? refb : refc);
	refa = max; refb = max; refc = max;
}
// Задача 2
int& first_negative(int arr[], int len) {
	for (int i = 0; i < len; i++)
		if (arr[i] < 0) {
			return arr[i];
		}
	return arr[0];
}
// Задача 3
void func(int arr1[], int len1, int arr2[], int len2) {
	for (int* pa2 = arr2; pa2 < &arr2[len2]; pa2++) {		
		for (int* pa1 = arr1; pa1 < &arr1[len1]; pa1++)
			if (*pa2 == *pa1)
				*pa2 = 0;
		cout << *pa2 << ' ';
	}
	
}

int main() {
	setlocale(LC_ALL, "Russian");
	// Задача 1
	int a = 3, b = 5, c = 2;	
	three_max(a, b, c);
	cout << a << ' ' << b << ' ' << c << '\n';
	// Задача 2
	const int size = 5;
	int arr[size]{ 2, 3, -5, 1, 1 };
	cout << first_negative(arr, size) << '\n';
	// Задача 3
	const int size1 = 7;
	const int size2 = 6;
	int arr1[size1]{ 3, 6, 4, 1, 4, 8, 2 };
	int arr2[size2]{ 5, 3, 1, 5, 10, 8 };
	func(arr1, size1, arr2, size2);

	return 0;
}