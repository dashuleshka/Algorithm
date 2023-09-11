// DFS.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
int start = 0;
vector<int> result(100);
int c = 0;

void DFS(int start, vector<bool>& visited, vector<vector<int>>& matrix_smez, vector<int>& result, ofstream& fout, int size) {
    //fout << start + 1 << " ";
    result[start] = c++;
    visited[start] = true;
    for (int i = 0; i < matrix_smez[start].size(); i++) {
        if (matrix_smez[start][i] == 1 && (visited[i] == false)) {
            //result.push_back(result[start]);
            DFS(i, visited, matrix_smez, result, fout, size);
        }
    }
    //for (int i = 0; i < size; i++)
    //{
    //    if (!visited[i])
    //    {
    //        DFS(i, visited, matrix_smez, result, fout, size);
    //    }
    //}
}

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int size;
    fin >> size;
    int edjes = size - 1;
    vector<vector<int>> matrix_smez(size, vector<int>(size));
    vector<bool> visited(size, false);
    vector<int> result(size);
    for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < size; j++) {
            fin >> matrix_smez[i][j];
        }
    }

    DFS(start, visited, matrix_smez, result, fout, size);
    for (int i = 0; i < size; i++)
    {
        if (!visited[i])
        {
            DFS(i, visited, matrix_smez, result, fout, size);
        }
    }
    for (int i = 0; i < size; i++)
    {
        fout << result[i] + 1 << " ";
    }
}