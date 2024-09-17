//#include<iostream>
//using namespace std;
//void q1(char* ptr, int size);
//bool q2(char* ptr,int index, int size);
//bool q2b(char* ptr);
//int q3(int* ptr, int left, int right, int val);
//int q4(int x);
//int main() {
//	cout << "QUESTION 1" << endl;
//	char arr[] = {"rac"};
//	int x = sizeof(arr);
////	cout << x;
//	q1(arr,x-1);
//	cout << endl;
//
//	cout << "QUESTION 2" << endl;
//	bool flag;
//	flag=q2b(arr);
//	if (q2b) {
//		cout << "String is palindrome" << endl;
//
//	}
//	else {
//		cout << "String is not palindrome" << endl;
//	}
//
//
//
//	cout << "QUESTION 3" << endl;
//	int arr1[] = { 0,1,2,3,4,5,6,7 };
//	int value = 3;
//	int size = sizeof(arr1) / sizeof(arr1[0]);
////	cout << size;
//	int y = q3(arr1, 0, size-1, value);
//	if (y == -1) {
//		cout << "VAlue doesnot exist in array" << endl;
//	}
//	else {
//		cout << "Value is present at " << y << " index" << endl;
//	}
//
//	cout << endl;
//	cout << "QUESTION 4" << endl;
//
//	int num = 101;
//	int result = 0;
//	result=q4(num);
//	cout << "Number of ones are : " << result << endl;
//
//}
//
//void q1(char* ptr, int size) {
//	if (size < 0) {
//		return;
//	}
//	else {
//		cout << *(ptr + size);
//		q1(ptr, size - 1);
//	}
//}
//
//bool q2(char* ptr,int index, int size) {
//	if (index >= size) {
//		return true;
//	}
//	else if (ptr[index]!= ptr[size]) {
//		return false;
//	}
//	else {
//		return q2(ptr, index + 1, size - 1);
//	}
//}
//
//bool q2b(char* ptr) {
//	int x = sizeof(ptr);
//	if (x <= 1) {
//		return true;
//	}
//	return q2(ptr, 0, x - 1);
//}
//
//int q3(int* ptr, int left, int right, int val) {
//	if(right < left) {
//		return -1;
//	}
//		int middle = (right + left) / 2;
////		cout << "middle value: " << middle << endl;
//		if (*(ptr + middle) == val) {
//			return middle;
//		}
//
//		else if (*(ptr + middle) > val) {
//			return q3(ptr, left, middle - 1, val);
//		}
//		else  {
//			return q3(ptr, middle + 1, right, val);
//		}
//	
//
//
//}
//
//int q4(int x) {
//	if (x <= 0) {
//		return 0;
//	}
//	if (x >= 10) {
//		int a=0;
//		if (x % 10 == 1) {
//			a++;
//		}
//		if (x / 10 == 1) {
//			a++;
//		}
//		return a + q4(x - 1);
//
//	}
//	if (x <10) {
//		if (x == 1) {
//			return 1 + q4(x - 1);
//		}
//	}
//}
//
