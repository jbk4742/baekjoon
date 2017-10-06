//#include <iostream>
//#include <stack>
//#include <cstring>
//using namespace std;
//
//int main() {
//	stack<char> left;
//	stack<char> right;
//	int n;
//	char arr[100000];
//
//	cin >> arr;
//	cin >> n;
//	for (int i = 0; i < strlen(arr); i++) {
//		left.push(arr[i]);
//	}
//	for (int i = 0; i < n; i++) {
//		char cmd;
//		char temp;
//		cin >> cmd;
//		if (cmd == 'L') {
//			if (!left.empty()) {
//				right.push(left.top());
//				left.pop();
//			}
//		}
//		else if (cmd == 'D') {
//			if (!right.empty()) {
//				left.push(right.top());
//				right.pop();
//			}
//		}
//		else if (cmd == 'B') {
//			if (!left.empty()) {
//				left.pop();
//			}
//		}
//		else if (cmd == 'P') {
//			cin >> temp;
//			left.push(temp);
//		}
//	}
//	while(!left.empty()) {
//		right.push(left.top());
//		left.pop();
//	}
//	while (!right.empty()) {
//		cout << right.top();
//		right.pop();
//	}
//	system("pause");
//	return 0;
//}