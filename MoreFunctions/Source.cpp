//Персональный шаблон проекта С++
#include <iostream>

using namespace std;

inline int myPow(int num) {
	int res = num * num;
	return res;

}
int MaxEl(int num1, int num2) {
	cout << "INT\n";
	if (num1 > num2)
		return num1;
	return num2;
}
double MaxEl(double num1, double num2) {
	cout << "DOUBLE\n";
	if (num1 > num2)
		return num1;
	return num2;
}
bool MaxEl(int num1, double num2) {
	cout << "BOOL\n";
	if (num1 > num2)
		return true;
	return false;
}
int MaxEl(int num1, int num2, int num3) {
	cout << "THREE\n";
	if (num1 >= num2 && num1 >= num3)
		return num1;
	if (num2 >= num1 && num2 >= num3)
	    return num2;
	return num3;
}
int sum(int num1, int num2) {
	return num1 + num2;
}
template <typename T> T newSum(T num1, T num2) {
	return num1 + num2;
}

template <typename T> void showArray(T array[], int lenght) {
	cout << "[";
	for (int i = 0; i < lenght; i++)
		cout << array[i] << ", ";
	cout << "\b\b]\n";
}



int main()
{
	setlocale(LC_ALL, "Russian");
	int n;

	int a1[5] = { 1, 5, 2, 8, 10 };
	double a2[4] = { 1.2, 1.3, 1.4, 1.5 };
	cout << "Массив int: \n";
	showArray(a1, 5);
	cout << "Массив double: \n";
	showArray(a2, 4);
	
	
	
	/*cout << newSum(10, 6) << endl;
	cout << newSum(1.5, 2.4) << endl;
	cout << newSum(true, false) << endl;
	short a = 5, b = 7;
	cout << newSum(a, b) << endl;*/
	
	
	
	/*cout << MaxEl(10, 5) << endl;
	cout << MaxEl(1.5, 2.2) << endl;
	cout << MaxEl(10, 10.1) << endl;
	cout << MaxEl(5, 7, 10) << endl;*/




	/*cin >> n;
	cout << n << " * " << n << " = " << myPow(n) << endl;*/

	
	
	//Задача


	return 0;
}