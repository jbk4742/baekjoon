//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string arr;
//
//	while (getline(cin, arr)) {
//		int lower = 0;
//		int space = 0;
//		int upper = 0;
//		int number = 0;
//		for (int i = 0; arr[i]; i++) {
//			if (arr[i] >= 'a' && arr[i] <= 'z') {
//				lower += 1;
//			}
//			else if (arr[i] >= 'A' && arr[i] <= 'Z') {
//				upper += 1;
//			}
//			else if (arr[i] >= '0' && arr[i] <= '9') {
//				number += 1;
//			}
//			else if (arr[i] == ' ') {
//				space += 1;
//			}
//			cout << lower << ' ' << upper << ' ';
//			cout << number << ' ' << space << '\n';
//		}
//	}
//	system("pause");
//
//}