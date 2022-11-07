// lab__5.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
double S0(const int N)
{
	double s = 0;
	for (int i = 3; i <= N; i++)
		s += (cos(i / 2.0) + sin(2 * i)) / (1.0 + sin(i) * cos(i));
	return s;
}
double S1(const int N, const int i)
{
	if (i > N)
		return 0;
	else
		return (cos(i / 2.0) + sin(2 * i)) / (1.0 + sin(i) * cos(i)) + S1(N, i + 1);
}
double S2(const int N, const int i)
{
	if (i < 3)
		return 0;
	else
		return (cos(i / 2.0) + sin(2 * i)) / (1.0 + sin(i) * cos(i)) + S2(N, i - 1);
}
double S3(const int N, const int i, double t)
{
	t = t + (cos(i / 2.0) + sin(2 * i)) / (1.0 + sin(i) * cos(i));
	if (i >= N)
		return t;
	else
		return S3(N, i + 1, t);
}
double S4(const int N, const int i, double t)
{
	t = t + (cos(i / 2.0) + sin(2 * i)) / (1.0 + sin(i) * cos(i));
	if (i <= 3)
		return t;
	else
		return S4(N, i - 1, t);
}
int main()
{
	int N;
	cout << "N = "; cin >> N;
	cout << "(iter) S0 = " << S0(N) << endl;
	cout << "(rec up ++) S1 = " << S1(N, 1) << endl;
	cout << "(rec up --) S2 = " << S2(N, N) << endl;
	cout << "(rec down ++) S3 = " << S3(N, 1, 0) << endl;
	cout << "(rec down --) S4 = " << S4(N, N, 0) << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
