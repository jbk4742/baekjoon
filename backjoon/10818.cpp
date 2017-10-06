//#include <iostream>
//using namespace std;
//
//int main() {
//	int max=0, min=0, temp;
//	int n, *arr;
//	cin >> n;
//	arr = new int[n];
//	
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	max = min = arr[0];
//	for (int i = 1; i < n; i++) {
//		if (max < arr[i])
//			max = arr[i];
//		if (min > arr[i])
//			min = arr[i];
//	}
//	cout << min << " " << max;
//	
//	system("pause");
//	return 0;
//}