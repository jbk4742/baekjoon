//#include <iostream>
//#include <queue>
//#include <string>
//
//using namespace std;
//
//int main() {
//	int n;
//	int num;
//	string cmd;
//	cin >> n;
//	queue<int> q;
//
//	while (n--) {
//		cin >> cmd;
//		if (cmd == "push") {
//			cin >> num;
//			q.push(num);
//		}
//		else if (cmd == "front") {
//			if (q.empty())
//				cout << "-1\n";
//			else
//				cout << q.front()<<"\n";
//		}
//		else if (cmd == "pop") {
//			if(q.empty())
//				cout << "-1\n";
//			else {
//				cout << q.front() << "\n";
//				q.pop();
//			}
//		}
//		else if (cmd == "size") {
//			cout << q.size() << "\n";
//		}
//		else if (cmd == "empty") {
//			cout << q.empty() << "\n";
//		}
//		else if (cmd == "back") {
//			if (q.empty())
//				cout << "-1\n";
//			else
//				cout << q.back() << "\n";
//		}
//	}
//	system("pause");
//	return 0;
//}