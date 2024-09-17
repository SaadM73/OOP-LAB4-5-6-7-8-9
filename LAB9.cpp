//
//
//#include"LAB9.h"
//
//
//BankAccount::BankAccount() {
//	{
//		accountHolderName = "";
//		accountNumber = "";
//		balance = 0.0;
//	}
//}
//
//BankAccount::BankAccount(string ahn, string AccN, double b) {
//	accountHolderName = ahn;
//	accountNumber = AccN;
//	balance = b;
//}
//
//void BankAccount:: setAccountHolderName(string name) {
//	accountHolderName = name;
//}
//
//void BankAccount::setAccountNumber(string num) {
//	accountNumber = num;
//}
//
//void BankAccount:: setBalance(double b) {
//	balance = b;
//}
//
//string BankAccount:: getName() {
//	return accountHolderName;
//}
//
//string BankAccount::getAccN() {
//	return accountNumber;
//}
//
//double BankAccount::getBalance() {
//	return balance;
//}
//
////TASK 2
//
//
//Matrix::Matrix() {
//	mat = nullptr;
//	rows = 0;
//	cols = 0;
//}
//
//Matrix::Matrix(int r, int c) {
//	rows = r;
//	cols = c;
//	mat = new int* [r];
//	for (int i = 0; i < r; i++) {
//		mat[i] = new int[c];
//	}
//
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			mat[i][j] = rand() % 10;
//		}
//
//	}
//
//}
//
//void Matrix::print() {
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			cout << mat[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//
//
//
////TASK3
//
//User::User() {
//	username = "";
//	password = "";
//}
//User::User(string name, string pass) {
//	username = name;
//	password = pass;
//}
//
//string User::getname() {
//	return username;
//}
//string User::getpass() {
//	return password;
//}
//
//void User::setName(string name) {
//	username = name;
//}
//
//
//
//passwordEncryptor::passwordEncryptor(){
//	encryptedPassword = "";
//}
//
//void passwordEncryptor::encryptpass(User& a) {
//	int x = 0;
//	while (a.password[x] != '\0') {
//		a.password[x] = (a.password[x]) + 3;
//		x++;
//	}
//	encryptedPassword = a.password;
//
//}
//
//string passwordEncryptor::getEpass(){
//	return encryptedPassword;
//}
//
//
//
//
//
//
//int main() {
//	// TASK 1
//	BankAccount b1("Saad", "123", 58.5);
//	BankAccount b2("Massab", "456", 78.0);
//
//	TransferFunds(b1, b2, 50.5);
//	
//		cout << endl;
//
//	//TASK 2
//
//	int row1 = 2, col1 = 3, row2 = 3, col2 = 2;
//
//	Matrix m1(row1, col1);
//	Matrix m2(row2, col2);
//	cout << "Matrix 1" << endl;
//	m1.print();
//
//	cout << "Matrix 2" << endl;
//	m2.print();
//
//	Matrix m3 = MatMul(m1, m2);
//
//	cout << "After Multiplication" << endl;
//	m3.print();
//
//	cout << endl;
//
//	//TASK 3
//
//	User u1("Saad", "hello");
//	passwordEncryptor p1;
//	cout << "Name of user 1 : " << u1.getname() << endl;
//	cout << "Pasword of user1 before encrypting : " << u1.getpass() << endl;
//	p1.encryptpass(u1);
//
//	cout << "Password of user1 after encrypting : " << p1.getEpass() << endl;
//
//
//}
//
//
//
//
//
//
//
