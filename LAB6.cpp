//#include<iostream>
//using namespace std;
//
//
//
//struct students {
//	int rollNo = 0;
//	string name;
//	int age =0;
//	string address;
//
//	void ageprintname() {
//		if (age == 14) {
//			cout << "Name : " << name << endl;
//		}
//	}
//
//	void rollNoname() {
//		if (rollNo % 2 == 0) {
//			cout << "Name : " << name << endl;
//		}
//	}
//
//	void printdetails() {
//		cout << "RollNO : " << rollNo << endl;
//		cout << "Name : " << name << endl;
//		cout << "Age : " << age << endl;
//		cout << "Address : " << address << endl;
//	}
//
//};
//
//struct Marks {
//	int rollNo=0;
//	string name;
//	int chem_marks=0;
//	int math_marks=0;
//	int phy_marks=0;
//	
//	void printPercentage() {
//		int totalmarks = chem_marks + math_marks + phy_marks;
//		int per = (totalmarks*100)/300;
////		per = per * 100;
//		cout << "Percentage is " << per << endl;
//	}
//
//	void printdetails() {
//		cout << "RollNO : " << rollNo << endl;
//		cout << "Name : " << name << endl;
//		cout << "Chem marks : " << chem_marks << endl;
//		cout << "math marks : " << math_marks << endl;
//		cout << "Phy marks : " << phy_marks << endl;
//	}
//
//};
//
//struct TIME {
//	int hours=0;
//	int minutes = 0;
//	int seconds = 0;
//	TIME differenceBetweenTimePeriod(TIME stop) {
//		TIME x1;
//		x1.hours = stop.hours - hours;
//		x1.minutes = stop.minutes - minutes;
//		if (x1.minutes < 0) {
//			x1.hours--;
//			x1.minutes = 60 + x1.minutes;
//		}
//		x1.seconds = stop.seconds - seconds;
//		if (x1.seconds < 0) {
//			x1.seconds = 60 + x1.seconds;
//			x1.minutes--;
//			if (x1.minutes < 0) {
//				x1.minutes += 60;
//				x1.hours--;
//			}
//		}
//		return x1;
//	}
//
//};
//
//struct dist {
//	int feet=0;
//	int inches = 0;
//
//	dist add(dist newDist) {
//		dist x;
//		x.inches = inches + newDist.inches;
//		if (x.inches > 11) {
//			x.feet++;
//			x.inches -= 12;
//		}
//		x.feet += feet + newDist.feet;
//		return x;
//
//	}
//};
//
//
//int main() {
//
//	cout << "QUESTION 1" << endl;
//
//	students arr[10] = { {01,"Saud",14,"a1"},{02,"Ali",11,"a2"}, {03,"Anas",14,"a3"}, {04,"Hasnain",13,"a4"}, {05,"Arshman",11,"a5"}, {06,"Massab",14,"a6"}, {07,"Saad",14,"a7"}, {8,"Mustafa",12,"a8"}, {9,"Shayan",11,"a9"}, {10,"Rehan",13,"a10"} };
//	cout << "Names of Students having age 14" << endl;
//	for (int i = 0; i < 10; i++) {
//		arr[i].ageprintname();
//	}
//
//	cout << endl;
//	cout << "Names of Students having even rollNO" << endl;
//	for (int i = 0; i < 10; i++) {
//		arr[i].rollNoname();
//	}
//	cout << endl;
//	int x;
//	cout << "Enter roll no to find details : ";
//	cin >> x;
//
//	cout << "Printing details of student : " << endl;
//	for (int i = 0; i < 10; i++) {
//		if (x == arr[i].rollNo) {
//			arr[i].printdetails();
//		}
//	}
//	cout << endl;
//
//	cout << "QUESTION 2" << endl << endl;
//	Marks marks[5] = { {1,"Saad",96,89,86},{2,"Massab",99,98,97},{3,"Mustafa",78,88,100},{4,"Ali",50,32,56},{5,"Hassan",67,46,98} };
//	for (int i = 0; i < 5; i++) {
//		marks[i].printdetails();
//		marks[i].printPercentage();
//	}
//
//	cout << endl;
//	cout << "QUESTION 3" << endl << endl;
//
//	TIME start = { 3,50,57 };
//	TIME stop = { 4,10,4 };
//	TIME xyz = start.differenceBetweenTimePeriod(stop);
//	cout << "Difference" << endl;
//	cout << "Hours : " << xyz.hours << endl;
//	cout << "Minutes : " << xyz.minutes << endl;
//	cout << "Seconds : " << xyz.seconds << endl;
//
//	cout << endl;
//	cout << "QUESTION 4" << endl << endl;
//	dist a1 = { 4,11 };
//	dist a2 = { 5,10 };
//	dist a3 = a1.add(a2);
//	cout << "Feet : " << a3.feet << endl;
//	cout << "Inches : " << a3.inches << endl;
//
//
//
//}
