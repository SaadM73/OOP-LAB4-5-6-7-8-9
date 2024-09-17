//#include<iostream>
//#include<time.h>
//using namespace std;
//
//bool q1(char[], int );
//int* matrixMul(int*,int,int,int*, int,int);
//void q4(int*** , int, int, int);
//
//int** q4c(int***, int, int, int);
//
//
//int main(){
//	cout << "QUESTION 1" << endl << endl;
//	bool flag;
//	char arr[] = "rumman";
//	cout << "string passed is " << arr << endl;
//	int a = sizeof(arr);
////	cout << a;
//	flag=q1(arr, a);
//
//	if (flag) {
//		cout << "String is palindrome " << endl;
//
//	}
//	else {
//		cout << "String is not palindrome" << endl;
//
//	}
//
//
//	cout << endl << "QUESTION 2 already done in lab3" << endl << endl << "QUESTION 3" << endl;
//
//	int rowA, rowB, colA, colB;
//	cout << "Enter rows of col A :";
//	cin >> rowA;
//	cout << "Enter colums of col A :";
//	cin >> colA;
//	cout << "Enter rows of col B :";
//	cin >> rowB;
//	cout << "Enter cols of col B :";
//	cin >> colB;
//
//	int* ptr;
//	int* matA;
//	int* matB;
//	srand(time(0));
//
//	if (colA != rowB) {
//		cout << "Matrix multiplication not possible" << endl;
//	}
//	else {
//		matA = new int[rowA*colA];
//		matB = new int[rowB * colB];
//		for (int i = 0; i < rowA; i++) {
//			for (int j = 0; j < colA; j++) {
//				*(matA + (i * colA) + j) = rand() % 10;
//			}
//		}
//
//		cout << "Matrix A" << endl;
//		for (int i = 0; i < rowA; i++) {
//			for (int j = 0; j < colA; j++) {
//				cout<<*(matA + (i * colA) + j)<<" ";
//			}
//			cout << endl;
//		}
//
//
//		for (int i = 0; i < rowB; i++) {
//			for (int j = 0; j < colB; j++) {
//				*(matB + (i * colB) + j) = rand() % 10;
//			}
//		}
//
//		cout << "Matrix B" << endl;
//		for (int i = 0; i < rowB; i++) {
//			for (int j = 0; j < colB; j++) {
//				cout<<*(matB + (i * colB) + j)<<" ";
//			}
//			cout << endl;
//		}
//
//		ptr=matrixMul(matA,rowA, colA,matB, rowB, colB);
//		cout << "Resultant Matrix " << endl;
//		for (int i = 0; i < rowA; i++) {
//			for (int j = 0; j < colB; j++) {
//				cout<<*(ptr + (i * colB) + j) << " ";
//			}
//			cout << endl;
//		}
//	
//	}
//
//
//	cout << "QUESTION 4" << endl << endl;
//
//	int*** ptr3 =nullptr;
//	int** result=nullptr;
//	int pages = 3;
//	int rows = 2;
//	int cols = 2;
//	q4(ptr3, pages, rows, cols);
//
//	cout << "QUESTION 4 C" << endl;
//
//	result=q4c(ptr3, pages, rows, cols);
//
//	cout << "Resultant matrix is : " << endl;
//
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			cout << *(*(result + i) + j) << " ";
//		}
//		cout << endl;
//	}
//
//
//}
//
//bool q1(char* arr, int s) {
//	char* ptr = new char[s];
//	for (int i = 0; i < s; i++) {
//		*(ptr + i) = *(arr + i);
//	}
//	cout << ptr << endl;
//	bool flag = true;
//	int x = s - 2;
//	char temp;
//	for (int i = 0; i < (s - 1)/2; i++) {
//		temp = *(ptr + i);
//		*(ptr+i)= *(ptr + (x)-i);
//		*(ptr + (x)-i) = temp;
//	}
//
//	cout << ptr << endl;
//
//	for (int i = 0; i < s - 1;i++) {
//		if (*(arr + i) != *(ptr + i)) {
//			flag = false;
//		}
//	}
//
//
//	return flag;
//}
//
//
//int* matrixMul(int* matA, int rowA, int colA, int* matB, int rowB, int colB) {
//	int* newMat = new int[rowA * colB];
//	for (int i = 0; i < rowA; i++) {
//		for (int j = 0; j < colB; j++) {
//			*(newMat + (i * colB) + j) = 0;
//
//		}
//	}
//
//	int sumA=0, sumB=0;
//
//
//	for (int i = 0; i < rowA; i++) {
//		for (int j = 0; j < colB; j++) {
////		*(newMat + (i * rowA) + j) = 0;
//			for (int k = 0; k < rowB; k++) {
//				*(newMat + (i * rowA) + j) += *(matA + (i * colA) + k) * (*(matB + (k * colB) + j));
//				//cout << "A " <<endl<< *(matA + (i * colA) + k) << endl;
//				//cout << "B " << endl << *(matB + (k * colB) + j) << endl;
//				//cout << *(newMat + (i * colB) + j) << endl;
//
//			}
//		}
//	}
//
//	return newMat;
//}
//
//void q4(int*** ptr, int pages, int rows, int cols) {
//	ptr = new int** [pages];
//	for (int i = 0; i < pages; i++) {
//		*(ptr + i) = new int* [rows];
//		for (int j = 0; j < rows; j++) {
//			*(*(ptr + i) + j) = new int[cols];
//		}
//	}
//
//	for (int i = 0; i < pages; i++) {
//		for (int j = 0; j < rows; j++) {
//			for (int k = 0; k < cols; k++) {
//				*(*(*(ptr + i) + j) + k) = rand() % 10;
//			}
//		}
//	}
//
//	cout << "3D matrix is :" << endl << endl;
//
//
//	for (int i = 0; i < pages; i++) {
//		for (int j = 0; j < rows; j++) {
//			for (int k = 0; k < cols; k++) {
//				cout << *(*(*(ptr + i) + j) + k) << " ";
//			}
//			cout << endl;
//		}
//
//		cout << endl << endl;
//	}
//
//	for (int i = 0; i < pages; i++) {
//		for (int j = 0; j < rows; j++) {
//			delete[] ptr[i][j];
//		}
//		delete[] ptr[i];
//	}
//	delete[] ptr;
//
//
//
//
//}
//
//
//int** q4c(int*** ptr, int pages, int rows, int cols) {
//	ptr = new int** [pages];
//	for (int i = 0; i < pages; i++) {
//		*(ptr + i) = new int* [rows];
//		for (int j = 0; j < rows; j++) {
//			*(*(ptr + i) + j) = new int[cols];
//		}
//	}
//
//	for (int i = 0; i < pages - 1; i++) {
//		for (int j = 0; j < rows; j++) {
//			for (int k = 0; k < cols; k++) {
//				*(*(*(ptr + i) + j) + k) = rand() % 10;
//			}
//		}
//	}
//
//	cout << "3D matrix is :" << endl << endl;
//
//	for (int i = 0; i < pages; i++) {
//		for (int j = 0; j < rows; j++) {
//			for (int k = 0; k < cols; k++) {
//				cout << *(*(*(ptr + i) + j) + k) << " ";
//			}
//			cout << endl;
//		}
//
//		cout << endl << endl;
//	}
//		for (int j = 0; j < rows; j++) {
//			for (int k = 0; k < cols; k++) {
//				*(*(*(ptr + 2) + j) + k) = *(*(*(ptr + 0) + j) + k) + *(*(*(ptr + 1) + j) + k);
//			}
//		}
//
//		int** ptr2 = new int* [rows];
//		for (int i = 0; i < rows; i++) {
//			*(ptr2+i) = new int[cols];
//		}
//
//		for (int i = 0; i < rows; i++) {
//			for (int j = 0; j < cols; j++) {
//				*(*(ptr2 + i) + j) = *(*(*(ptr + 2) + i) + j);
//			}
//		}
//
//		return ptr2;
//
//
//}
