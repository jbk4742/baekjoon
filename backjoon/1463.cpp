//#include <iostream>
//
//using namespace std;
//
//int d[1000000];
//int makeOne(int n);
//int main() {
//	int n;
//	cin >> n;
//	cout << makeOne(n)<<'\n';
//
//	system("pause");
//	return 0;
//}
//int makeOne(int n) {
//	int temp;
//	if (n == 1) return 0;
//	if (d[n] > 0) return d[n];
//
//	d[n] = makeOne(n-1) + 1;
//	if (n % 3 == 0) {
//		temp = makeOne(n / 3) + 1;
//		if (temp < d[n])
//			d[n] = temp;
//	}
//	else if (n % 2 == 0) {
//		temp = makeOne(n / 2) + 1;
//		if (temp < d[n])
//			d[n] = temp;
//	}
//	return d[n];
//}