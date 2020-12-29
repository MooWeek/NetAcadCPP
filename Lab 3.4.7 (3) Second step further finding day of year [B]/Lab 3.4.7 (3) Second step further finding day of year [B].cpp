#include <iostream>

using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

bool isLeap(int year) {
	// The code you've inserted already
	if (year % 4 != 0)
		return false;
	else if (year % 100 != 0)
		return true;
	else if (year % 400 != 0)
		return false;
	else
		return true;
}

int monthLength(int year, int month) {
	// The code you've inserted already
	if (month == 2 && isLeap(year))
		return 29;
	else if (month == 2 && !isLeap(year))
		return 28;
	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		return 31;
	else
		return 30;
}

int dayOfYear(Date date) {
	// Insert your code here
	int days = date.day;
	for (int i = 1; i < date.month; i++) {
		days += monthLength(date.year, i);
	}
	return days;
}

int main(void) {
	Date d;
	cout << "Enter year month day: ";
	cin >> d.year >> d.month >> d.day;
	cout << dayOfYear(d) << endl;
	return 0;
}