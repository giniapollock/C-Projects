#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<class T>
void rotateLeft(vector <T>& v)
{
	rotate(v.begin(), v.begin() + 1, v.end());
}

template<class T>
void output(vector <T> v)
{
	typename vector<T>::iterator it = v.begin();
	for (it = v.begin(); it != v.end(); it++)
	{
		cout << " " << *it;
	}
	cout << endl;
}

int main()
{

	vector<int> vectInt = { 1,3,5,7 };
	vector<char> vectChar = { 'a', 'b', 'c', 'd', 'e' };

	int loopCount1 = 0;

	while (loopCount1 < 3)
	{
		output(vectInt);
		rotateLeft(vectInt);
		loopCount1++;
	}

	cout << endl;
	int loopCount2 = 0;

	while (loopCount2 < 3)
	{
		output(vectChar);
		rotateLeft(vectChar);
		loopCount2++;
	}

	cout << endl;
	system("pause");
	return 0;
}