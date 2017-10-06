/*
오늘은 2007년 1월 1일 월요일이다. 그렇다면 2007년 x월 y일은 무슨 요일일까? 이를 알아내는 프로그램을 작성하시오.
*/
//#include <iostream>
//using namespace std;
//int main() {
//	int m, d, sum = 0;
//	int day[13];
//	cin >> m >> d;
//	day[1] = day[3] = day[5] = day[7] = day[8] = day[10] = day[12] = 31;
//	day[2] = 28;
//	day[4] = day[6] = day[9] = day[11] = 30;
//
//	for (int i = 1; i < m; i++) {
//		sum += day[m];
//	}
//	sum += d;
//	switch (sum % 7) {
//	case 0:
//		cout << "SUN" << endl;
//		break;
//	case 1:
//		cout << "MON" << endl;
//		break;
//	case 2:
//		cout << "TUE" << endl;
//		break;
//	case 3:
//		cout << "WED" << endl;
//		break;
//	case 4:
//		cout << "THU" << endl;
//		break;
//	case 5:
//		cout << "FRI" << endl;
//		break;
//	case 6:
//		cout << "SAT" << endl;
//		break;
//	}
//
//	system("pause");
//	return 0;
//}