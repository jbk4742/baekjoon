//#include <iostream>
//#include <stack>
//#include <cstring>
//using namespace std;
//
//int main() {
//	char arr[100000];
//	int a,sum=0;
//	stack<char> s;
//
//	cin >> arr;
//
//	for (int i = 0; i < strlen(arr); i++) {
//		if (arr[i] == '(') {
//			s.push(i);
//		}
//		else {
//			a = s.top();
//			s.pop();
//			if (i - a == 1) {
//				sum += s.size();
//			}
//			else
//				sum++;
//		}
//	}
//	cout << sum;
//	system("pause");
//}