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
	
	//ù��° ���� �ο���
	//�ι�° ���� ���ΰ��� ��ȣ��
	//�ڷḦ ���� �о������ �Ѵ�.



	//�Էµ� ���� �������� ���� �ټ���� �迭�� ���� ��ȣ�� �����Ѵ�.



	//����� ����Ѵ�.


	for (int i = 0; i < s; i++) {//5
		N[i] = i + 1;
		int ticket;
		fin >> ticket;
		for (int j = 0; j < ticket; j++) {//6
			tmp = N[i];
			N[i] = N[i + 1];
			N[i + 1] = tmp;
		}
		
	}
	cout << endl;

	
	for (int i = 0; i < N.size(); i++){
		cout << N[i] << " ";
	}
}