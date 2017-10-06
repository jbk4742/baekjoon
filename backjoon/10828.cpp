//#include <iostream>
//#include <stack>
//#include <string>
//using namespace std;
//
//int main() {
//	int n;
//	string cmd;
//
//	cin >> n;
//
//	stack<int> s;
//
//	while (n--) {
//
//		cin >> cmd;
//		if (cmd == "push") {
//			int num;
//			cin >> num;
//			s.push(num);
//		}
//		else if (cmd == "pop") {
//			if (s.empty())
//				cout << -1<<endl;
//			else
//				s.pop();
//		}
//		else if (cmd == "size") {
//			cout << s.size() << endl;
//		}
//		else if (cmd == "empty") {
//			cout << s.empty() << endl;
//		}
//		else if (cmd == "top") {
//			if (s.empty())
//				cout << -1<<endl;
//			else
//				cout << s.top() << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}
