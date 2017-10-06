//#include <iostream>
//
//using namespace std;
//int d[11];
//int main() {
//	int n;
//
//
//	cin >> n;
//	d[0]= 1;
//	for (int i = 1; i <= 10; i++) {
//		if (i - 1 >= 0) {
//			d[i] += d[i - 1];
//		}
//		if (i - 2 >= 0) {
//			d[i] += d[i - 2];
//		}
//		if (i - 3 >= 0) {
//			d[i] += d[i - 3];
//		}
//		cout << d[i] << "\n";
//	}
//
//	while (n--) {
//		int num;
//		cin >> num;
//		cout << d[num] << "\n";
//	}
//
//	system("pause");
//	return 0;
//} 
