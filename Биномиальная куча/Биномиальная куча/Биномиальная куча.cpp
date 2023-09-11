// Биномиальная куча.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream> 
#include <string> 
#include <fstream> 
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");
  
    int temp, binary_temp = 0;
    cin >> temp;
    for (int j = 0; temp > 0; j++) {
        binary_temp += (temp % 2) * pow(10.0, j);
        temp /= 2;
    }
    //cout << binary_temp << endl;

    //string str = to_string(binary_temp);
    //cout << str << endl;
   
    vector<int> temps;
    int b = 0;
    while (binary_temp != 0) {
        temps.push_back(binary_temp % 10);
        binary_temp /= 10;
        b++;
    }
   /* cout << b << endl;
    for (int i = 0; i < b; i++) {
        cout << temps[i] << " ";
    }
    cout << endl;*/
    for (int i = 0; i < b; i++) {
        if (temps[i] == 1) {
            cout << i << endl;
        }
    }
}