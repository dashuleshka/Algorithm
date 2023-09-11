// Проход по матрице.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//#include <iostream>
//#include <fstream>
//#include <algorithm>
//using namespace std;
//
//int Minimum_Func(int C, int D, int E) {
//	return (C <= D ? C <= E ? C : D <= E ? D : E : D <= E ? D : E);
//}
//
//int main() {
//	ifstream fin("input.txt");
//	ofstream fout("output.txt");
//
//	int n, m;
//	cin >> n >> m;
//	int** A = new int* [n];
//	int** B = new int* [n];
//	
//	for (int i = 0; i < n; i++) {
//		A[i] = new int[m + 2];
//	}
//
//	for (int i = 0; i < n; i++) {
//		A[i][0] = 90000000;
//		A[i][m + 1] = 90000000;
//	}
//
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 1; j < n + 1; j++) {
//			cin >> A[i][j];
//		}
//	}
//	if (n == m) {
//		int PUNITIVE_SUM = 0;
//		for (int i = 0; i < n; i++) {
//			for (int j = 1; j < n + 1; j++)
//				PUNITIVE_SUM += A[i][j];
//		}
//		cout << PUNITIVE_SUM;
//	}
//
//	if (n < m) {
//		cout << -1;
//	}
//	else if (n > m) {
//		for (int i = 0; i < n; i++) {
//			B[i] = new int[m + 2];
//		}
//		//for (int i = 0; i < n; i++) {
//		//	for (int j = 2; j < m + 2; j++) {
//		//		while (j > i) {
//		//			B[i][j] = INFINITY;		// ограничение по нулевой строке
//		//		}
//		//	}
//		//}
//
//		/*for (int i = 0; i < n; i++) {
//			B[i][0] = 90000000;
//			B[i][m + 1] = 90000000;
//		}*/
//
//		/*for (int i = 0; i < 1; i++) {
//			for (int j = 1; j < n + 1; j++) {
//				B[i][j] = A[i][j];
//			}
//		}*/
//
//		/*for (int i = 0; i < n; i++) {
//			for (int j = 2; j < m + 1; j++) {
//				if (j > i) {
//					B[i][j] = INFINITY;
//				}
//			}
//		}*/
//
//
//		B[0][1] = A[0][1];
//		for (int i = 0; i < n; i++) {
//			B[i][0] = 90000000;
//			B[i][m + 1] = 90000000;
//		}
//
//		for (int i = 0; i < 1; i++) {
//			for (int j = 2; j < m + 1; j++) {
//				B[i][j] = 90000000;
//			}
//		}
//
//		for (int i = 1; i < n; i++) {
//			for (int j = 1; j < m + 1; j++) {
//				B[i][j] = (Minimum_Func(B[i - 1][j - 1], B[i - 1][j], B[i - 1][j + 1]) + A[i][j]);
//			}
//		}
//		/*for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m + 2; j++) {
//				cout << B[i][j] << " ";
//			}
//			cout << endl;
//		}*/
//
//		cout << B[n - 1][m];
//	}
//	return 0;
//}
//#include <iostream>
//#include <fstream>
//#include <algorithm>
//using namespace std;
//
//int Minimum_Func(int C, int D, int E) {
//    return (C <= D ? C <= E ? C : D <= E ? D : E : D <= E ? D : E);
//}
//
//int main() {
//    ifstream fin("input.txt");
//    ofstream fout("output.txt");
//
//    int n, m;
//    cin >> n >> m;
//    int** A = new int* [n];
//    int** B = new int* [n];
//
//   /* for (int i = 0; i < n; i++) {
//        A[i] = new int[m + 2];
//    }
//
//    for (int i = 0; i < n; i++) {
//        A[i][0] = 90000000;
//        A[i][m + 1] = 90000000;
//    }
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 1; j < m + 1; j++) {
//            cin >> A[i][j];
//        }
//    }*/
//   /* if (n == m) {
//        int PUNITIVE_SUM = 0;
//        for (int i = 0; i < n; i++) {
//            PUNITIVE_SUM += A[i - 1][i];
//        }
//        cout << PUNITIVE_SUM;
//    }*/
//    for (int i = 0; i < n; i++) {
//        A[i] = new int[n];
//    }
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cin >> A[i][j];
//        }
//    }
//
//    if (n == m) {
//        int PUNITIVE_SUM = 0;
//       /* for (int i = 0; i < n; i++) {
//            A[i] = new int[n];
//        }
//
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                cin >> A[i][j];
//            }
//        }*/
//        for (int i = 0; i < n; i++) {
//            PUNITIVE_SUM += A[i][i];
//        }
//        cout << PUNITIVE_SUM;
//    }
//
//    if (n < m) {
//        /*for (int i = 0; i < n; i++) {
//            A[i] = new int[m];
//        }
//
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                cin >> A[i][j];
//            }
//        }*/
//        cout << -1;
//    }
//
//    else if (n > m) {
//        //int** A = new int* [n];
//        for (int i = 0; i < n; i++) {
//        A[i] = new int[m + 2];
//    }
//
//    for (int i = 0; i < n; i++) {
//        A[i][0] = 90000000;
//        A[i][m + 1] = 90000000;
//    }
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 1; j < m + 1; j++) {
//            cin >> A[i][j];
//        }
//    }
//        for (int i = 0; i < n; i++) {
//            B[i] = new int[m + 2];
//        }
//        //for (int i = 0; i < n; i++) {
//        //  for (int j = 2; j < m + 2; j++) {
//        //    while (j > i) {
//        //      B[i][j] = INFINITY;    // ограничение по нулевой строке
//        //    }
//        //  }
//        //}
//        /*for (int i = 0; i < n; i++) {
//          B[i][0] = 90000000;
//          B[i][m + 1] = 90000000;
//        }*/
//        /*for (int i = 0; i < 1; i++) {
//          for (int j = 1; j < n + 1; j++) {
//            B[i][j] = A[i][j];
//          }
//        }*/
//        /*for (int i = 0; i < n; i++) {
//          for (int j = 2; j < m + 1; j++) {
//            if (j > i) {
//              B[i][j] = INFINITY;
//            }
//          }
//        }*/
//
//        B[0][1] = A[0][1];
//        for (int i = 0; i < n; i++) {
//            B[i][0] = 90000000;
//            B[i][m + 1] = 90000000;
//        }
//
//        for (int i = 0; i < 1; i++) {
//            for (int j = 2; j < m + 1; j++) {
//                B[i][j] = 90000000;
//            }
//        }
//
//        for (int i = 1; i < n; i++) {
//            for (int j = 1; j < m + 1; j++) {
//                B[i][j] = (Minimum_Func(B[i - 1][j - 1], B[i - 1][j], B[i - 1][j + 1]) + A[i][j]);
//            }
//        }
//
//        cout << B[n - 1][m];
//    }
//    return 0;
//}
//#include <iostream>
//#include <fstream>
//#include <algorithm>
//using namespace std;
//
//int Minimum_Func(int C, int D, int E) {
//	return (C <= D ? C <= E ? C : D <= E ? D : E : D <= E ? D : E);
//}
//
//int main() {
//	ifstream fin("input.txt");
//	ofstream fout("output.txt");
//
//	int n, m;
//	fin >> n >> m;
//	int** A = new int* [n];
//	int** B = new int* [n];
//
//	for (int i = 0; i < n; i++) {
//		A[i] = new int[m + 2];
//	}
//
//	for (int i = 0; i < n; i++) {
//		A[i][0] = 90000000;
//		A[i][m + 1] = 90000000;
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 1; j < m + 1; j++) {
//			fin >> A[i][j];
//		}
//	}
//
//	if (n < m) {
//		fout << -1;
//	}
//	else if (n > m) {
//		for (int i = 0; i < n; i++) {
//			B[i] = new int[m + 2];
//		}
//
//		B[0][1] = A[0][1];
//		for (int i = 0; i < n; i++) {
//			B[i][0] = 90000000;
//			B[i][m + 1] = 90000000;
//		}
//
//		for (int i = 0; i < 1; i++) {
//			for (int j = 2; j < m + 1; j++) {
//				B[i][j] = 90000000;
//			}
//		}
//
//		for (int i = 1; i < n; i++) {
//			for (int j = 1; j < m + 1; j++) {
//				B[i][j] = (Minimum_Func(B[i - 1][j - 1], B[i - 1][j], B[i - 1][j + 1]) + A[i][j]);
//			}
//		}
//
//		fout << B[n - 1][m];
//	}
//	return 0;
//}

#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int Minimum_Func(int C, int D, int E) {
	return (C <= D ? C <= E ? C : D <= E ? D : E : D <= E ? D : E);
}

int main() {
	ifstream fin("input.txt");
	ofstream fout("output.txt");

	int n, m;
	cin >> n >> m;
	int** A = new int* [n];
	int** B = new int* [n];

	if (n == m) {
		int res = 0;
		for (int i = 0; i < n; i++) {
			A[i] = new int[n];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> A[i][j];
			}
		}
		for (int i = 0; i < n; i++) {
			res += A[i][i];
		}
		cout << res;
	}

	if (n < m) {
		for (int i = 0; i < n; i++) {
			A[i] = new int[m];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> A[i][j];
			}
		}
		cout << -1;
	}
	else if (n > m) {
		int** A = new int* [n];
		int** B = new int* [n];

		for (int i = 0; i < n; i++) {
			A[i] = new int[m + 2];
		}

		for (int i = 0; i < n; i++) {
			A[i][0] = INT_MAX;
			A[i][m + 1] = INT_MAX;
		}

		for (int i = 0; i < n; i++) {
			for (int j = 1; j < m + 1; j++) {
				cin >> A[i][j];
			}
		}

		for (int i = 0; i < n; i++) {
			B[i] = new int[m + 2];
		}

		B[0][1] = A[0][1];
		for (int i = 0; i < n; i++) {
			B[i][0] = INT_MAX;
			B[i][m + 1] = INT_MAX;
		}

		for (int i = 0; i < 1; i++) {
			for (int j = 2; j < m + 1; j++) {
				B[i][j] = INT_MAX;
			}
		}

		for (int i = 1; i < n; i++) {
			for (int j = 1; j < m + 1; j++) {
				B[i][j] = (Minimum_Func(B[i - 1][j - 1], B[i - 1][j], B[i - 1][j + 1]) + A[i][j]);
			}
		}

		cout << B[n - 1][m];
	}
	return 0;
}