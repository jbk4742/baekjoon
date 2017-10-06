//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int d[1000];
//	int n;
//	cin >> n;
//	d[0] = d[1] = 1;
//	for (int i = 2; i <= n; i++) {
//		d[i] = (d[i - 1] + 2*d[i - 2]) % 10007;
//	}
//	cout << d[n] << "\n";
//
//	system("pause");
//	return 0;
//} 
