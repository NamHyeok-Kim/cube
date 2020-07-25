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
	
	//첫번째 줄은 인원수
	//두번째 줄은 서로간의 번호차
	//자료를 먼저 읽어오도록 한다.



	//입력된 값을 기준으로 실제 줄세우기 배열의 최종 번호를 결정한다.



	//결과를 출력한다.


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