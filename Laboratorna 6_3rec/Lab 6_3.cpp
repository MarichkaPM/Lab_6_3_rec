#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

template <typename T, typename T1, typename T2, typename T3, typename T4>
void create(T* a, const T1 n, const T2 i, const T3 HIGH, const T4 LOW)
{
	a[i] = LOW + rand() % (HIGH - LOW + 1);
	if (i < n - 1)
		create(a, n, i + 1, HIGH, LOW);
}
template <typename T, typename T1, typename T2>
void print(T* a, const T1 n, const T2 i)
{
	cout << a[i] << " ";
	if (i < n - 1)
		print(a, n, i + 1);
}
template <typename T, typename T1, typename T2, typename T3>
T find_maximum(T* a, const T1 n, const T2 i, T3& max)

{
	if (a[i] >= max)
		max = a[i];
	if (i < n - 1)
		find_maximum(a, n, i + 1, max);
	else
		return max;
}

int main()
{
	srand(time(NULL));

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int n = 10;
	int a[n];
	const int HIGH = 53;
	const int LOW = -17;
	const int i = 0;
	cout << "a[10] = { ";
	create(a, n, i, HIGH, LOW);
	print(a, n, i);
	cout << "}" << endl;
	int max = a[0];
	cout << "Íàéá³ëüøèé åëåìåíò ìàñèâó = " << find_maximum(a, n, i, max) << endl;
}

//ÑÏÎÑ²Á 2 ÁÅÇ ØÀÁËÎÍ²Â

//#include <iostream>
//#include <Windows.h>
//#include <ctime>
//
//using namespace std;
//
//
//void create(int* a, const int n, const int i, const int HIGH, const int LOW)
//{
//	a[i] = LOW + rand() % (HIGH - LOW + 1);
//	if (i < n - 1)
//		create(a, n, i + 1, HIGH, LOW);
//}
//void print(int* a, const int n, const int i)
//{
//	cout << a[i] << " ";
//	if (i < n - 1)
//		print(a, n, i + 1);
//}
//int find_maximum(int* a, const int n, const int i, int& max)
//
//{
//	if (a[i] >= max)
//		max = a[i];
//	if (i < n - 1)
//		find_maximum(a, n, i + 1, max);
//	else
//		return max;
//}
//
//int main()
//{
//	srand(time(NULL));
//
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	const int n = 10;
//	int a[n];
//	const int HIGH = 53;
//	const int LOW = -17;
//	const int i = 0;
//	cout << "a[10] = { ";
//	create(a, n, i, HIGH, LOW);
//	print(a, n, i);
//	cout << "}" << endl;
//	int max = a[0];
//	cout << "Íàéá³ëüøèé åëåìåíò ìàñèâó = " << find_maximum(a, n, i, max) << endl;
//}