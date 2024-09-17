////#include "gtest/gtest.h"
//#include<iostream>
//using namespace std;
//
////======QUESTION 1==========
//
////
////class Complex {
////	double real;
////	double imaginary;
////
////public:
////	Complex() {
////		real = 0.0;
////		imaginary = 0.0;
////	}
////
////	Complex(double r, double i) {
////		real = r;
////		imaginary = i;
////	}
////
////	Complex(Complex& copy) {
////		real = copy.real;
////		imaginary = copy.imaginary;
////	}
////
////	void setReal(double r) {
////		real = r;
////	}
////
////	double getReal() {
////		return real;
////	}
////
////	void setImaginary(double i) {
////		imaginary = i;
////	}
////
////	double getImaginary() {
////		return imaginary;
////	}
////
////	Complex addComplex(double r) {
////		Complex temp(0, 0);
////		temp.real = real + r;
////		temp.imaginary = imaginary;
////		return temp;
////	}
////
////	Complex addComplex(Complex& c1) {
////		Complex temp(0, 0);
////		temp.real = real + c1.real;
////		temp.imaginary = imaginary + c1.imaginary;
////		return temp;
////	}
////
////	Complex subComplex(double r) {
////		Complex temp(0, 0);
////		temp.real = real - r;
////		temp.imaginary = imaginary;
////		return temp;
////	}
////
////	Complex subComplex(Complex c1) {
////		Complex temp(0, 0);
////		temp.real = real - c1.real;
////		temp.imaginary = imaginary - c1.imaginary;
////		return temp;
////	}
////
////	Complex mulComplex(double n) {
////		Complex temp(0, 0);
////		temp.real = real * n;
////		temp.imaginary = imaginary * n;
////		return temp;
////	}
////
////	Complex mulComplex(Complex& c1) {
////		Complex temp;
////		temp.real = (real * c1.real) - (imaginary * c1.imaginary);
////		temp.imaginary = (real * c1.imaginary) + (imaginary * c1.real);
////		return temp;
////	}
////};
//
//
//class Car {
//	string make;
//	string model;
//	double rentalPrice;
//	static int totalCarsRented;
//
//	//Car() {
//	//	make = "";
//	//	model = "";
//	//	rentalPrice = 0;
//	//	totalCarsRented++;
//	//}
//public:
//
//	Car(string m,string mod, double r) {
//		make = m;
//
//		model = mod;
//
//		rentalPrice = r;
//		totalCarsRented++;
//	}
//
//	void displayCarInfo() {
//		cout << "Make : " << make << endl;
//		cout << "Model : " << model << endl;
//		cout << "Rental Price : " << rentalPrice << endl;
//	}
//
//	static int getTotalCarsRented() {
//		return totalCarsRented;
//	}
//
//
//};
//
//int Car::totalCarsRented = 0;
//
//
//class Counter {
//	int count;
//	static int objCount;
//	int serialNo;
//
//public:
//	Counter() {
//		count = 0;
//		IncrementObjCount();
//		serialNo = objCount;
//	}
//
//	Counter(int c) {
//		count = c;
//		IncrementObjCount();
//		serialNo = objCount;
//	}
//
//	void setCount(int c) {
//		count = c;
//	}
//
//	int getCount()const {
//		return count;
//	}
//
//	int getSerialNo()const {
//		return serialNo;
//	}
//
//	static int getObjCount() {
//		return objCount;
//	}
//
//	static int IncrementObjCount() {
//		return ++objCount;
//	}
//
//};
//
//int Counter::objCount = 0;
//
//int main() {
//
//	cout << "QUESTION 2\n\n";
//
//	Car c1("Toyota", "Aqua", 10.99);
//	Car c2("Honda", "City", 16.99);
//	c1.displayCarInfo();
//	cout << endl;
//	c2.displayCarInfo();
//	cout << endl << "Total Cars Rented : " << Car::getTotalCarsRented() << endl;
//
//
//	cout << "QUESTION 3\n\n";
//
//	Counter co1(5);
//	Counter co2(7);
//	co2.setCount(9);
//	cout <<"Count of Second Object : "<< co2.getCount() << endl;
//	cout <<"Object Count : " << co2.getObjCount() << endl;
//	cout << "Serial No of Obj1: " << co1.getSerialNo() << endl;
//	cout << "Serial No of Obj2: " << co2.getSerialNo() << endl;
//	co1.IncrementObjCount();
//	cout <<"Object Count After incrementing: "<< co2.getObjCount() << endl;
//
//
//
//
//
//
//}