#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	ifstream fin;
	fin.open("input.txt");
	
	int s;
	int tmp;
	fin >> s;

	vector<int> N(s);

	for(int i = 0; i < s; i++) N[i] = i + 1;

	for (int i = 0; i < s; i++) {//5
		int ticket;
		fin >> ticket;
		for (int j = 0; j < ticket; j++) {//6
			int tmp = N[i];
			N[i] = N[j + i - ticket ];
			N[j + i - ticket ] = tmp;
		}
		
	}
	cout << endl;

	
	for (int i = 0; i < s; i++){
		cout << N[i] << " ";
	}
}