//#ifndef LAB9_H_
//#define LAB9_H_
//
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//
//class BankAccount {
//	string accountHolderName;
//	string accountNumber;
//	double balance;
//
//public:
//	BankAccount();
//
//	BankAccount(string ahn, string AccN, double b);
//	void setAccountHolderName(string name);
//
//	void setAccountNumber(string num);
//
//	void setBalance(double b);
//
//	string getName();
//
//	string getAccN();
//
//	double getBalance();
//
//
//	friend bool TransferFunds(BankAccount& source, BankAccount& destination, double amount);
//
//};
//
//
//bool TransferFunds(BankAccount& source, BankAccount& destination, double amount) {
//	if (source.balance < amount) {
//		return false;
//	}
//	else {
//		source.balance -= amount;
//		destination.balance += amount;
//
//		cout << "FROM : " << endl;
//		cout << "Sender's Name : " << source.accountHolderName << endl;
//		cout << "Sender's Account Number : " << source.accountNumber << endl;
//		cout << "Sender's New Balance : " << source.balance << endl;
//		cout << endl;
//		cout << "TO : " << endl;
//		cout << "Receiver's Name : " << destination.accountHolderName << endl;
//		cout << "Receiver's Account Number : " << destination.accountNumber << endl;
//		cout << "Receiver's New Balance : " << destination.balance << endl;
//		cout << endl;
//		cout << "AMOUNT : " << amount << endl;
//		return true;
//	}
//}
//
//
//class Matrix {
//	int** mat;
//	int rows;
//	int cols;
//
//public:
//	Matrix();
//	Matrix(int r, int c);
//	void print();
//
//	friend Matrix MatMul(Matrix& a, Matrix& b);
//};
//
//Matrix MatMul(Matrix& a, Matrix& b) {
//	Matrix newmat(a.rows, b.cols);
//
//	if (a.cols != b.rows) {
//		cout << "Invalid dimensions" << endl;
//		return newmat;
//	}
//	for (int i = 0; i < a.rows; i++) {
//		for (int j = 0; j < b.cols; j++) {
//			newmat.mat[i][j] = 0;
//		}
//	}
//
//	for (int i = 0; i < a.rows; i++) {
//		for (int j = 0; j < b.cols; j++) {
//			for (int k = 0; k < b.rows; k++) {
//				newmat.mat[i][j] += a.mat[i][k] * b.mat[k][j];
//			}
//		}
//	}
//
//	return newmat;
//
//}
//
//
//
//
//class User {
//	string username;
//	string password;
//public:
//	User();
//	User(string user, string pass);
//
//	void setName(string name);
//	string getname();
//	string getpass();
//
//	friend class passwordEncryptor;
//};
//
//class passwordEncryptor {
//	string encryptedPassword;
//public:
//
//	passwordEncryptor();
//	void encryptpass(User& a);
//	string getEpass();
//};
//
//
//#endif
