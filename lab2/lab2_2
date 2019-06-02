#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

int * reverse_array(int * arr, int len);//инвертирование массива
int * sort_vosr(int * arr, int len);//сортировка по возрастанию
int * sort_ub(int * arr, int len);//сортировка по убыванию

int* (*action(int*, int))(int* array, int len);//возвращает указатель на функцию в соответствии с резльтатом сравнения первого элемента и суммы элементов массива (без него)

int main(int argc, char const *argv[])
{
	srand(time(0));
	int * (*func_arr)(int*, int);
	int size;
	cout << "Введите длину массива: ";
	cin >> size;
	int* array = new int[size];
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 100;
		cout << array[i] << '\t';
	}
	cout << '\n';
	func_arr = action(array, size);
	array = func_arr(array, size);
	for (int i = 0; i < size; i++) {
		cout << array[i] << '\t';
	}
	cout << endl;
	delete[] array;
	func_arr = NULL;
	return 0;
};

int * reverse_array(int * arr, int len) {
	for (int i = 0; i < len / 2; i++) {
		swap(arr[i], arr[len - 1 - i]);
	}
	return arr;
};

int * sort_vosr(int * arr, int len) {
	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			if (arr[i] > arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}
	return arr;
};

int * sort_ub(int * arr, int len) {
	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			if (arr[i] < arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}
	return arr;
};

int* (*action(int* array, int len))(int*, int) {
	int sum;
	for (int i = 1; i < len; i++) {
		sum += array[i];
	}
	if (sum == array[0]) {
		return reverse_array;
	}
	else if (sum > array[0]) {
		return sort_vosr;
	}
	else {
		return sort_ub;
	}
}
