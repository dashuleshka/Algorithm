// Хеш-таблица.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//#include <iostream>
//#include <vector>
//#include <fstream>
//#include <set>
//using namespace std;
//
//void INDEXINSERT() {
//
//}
//
//int main() {
//	ifstream fin("input.txt");
//	ofstream fout("output.txt");
//
//	int m, c, n;
//	cin >> m >> c >> n;
//	int index = 0;
//	vector<int> h(n);
//	vector<int> res(m);
//
//	for (int i = 0; i < n; i++) {
//		cin >> h[i];
//	}
//	for (int i = 0; i < m; i++) {
//		res[i] = -1;
//	}
//	/*for (int i = 0; i < m; i++) {
//		res[i] = -1;
//	}*/
//	for (int i = 0; i < n; i++) {
//		index = (h[i] % m + c * i) % m;
//		res[index] = h[i];
//	}
//	for (int i = 0; i < m; i++) {
//		cout << res[i] << " ";
//	}
//}

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void h(vector<int>& Hash, int k, int& m, int& c) {
	for (int i = 0; i < m; i++) {
		int j = ((k % m) + c * i) % m;
		if (Hash[j] == k)
			return;
		if (Hash[j] == -1) {
			Hash[j] = k;
			return;
		}
	}
}

int main() {
	ifstream op("input.txt");
	ofstream cl("output.txt");
	int m;
	int n;
	int c, key;
	op >> m >> c >> n;
	vector<int> Hash(m);

	for (int i = 0; i < Hash.size(); i++) {
		Hash[i] = -1;
	}
	for (int j = 0; j < n; j++) {
		op >> key;
		h(Hash, key, m, c);
	}
	for (int i = 0; i < Hash.size(); i++) {
		cl << Hash[i] << " ";
	}
}