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
	// The code you've inserted already
	// Insert your code here
	int days = date.day;
	for (int i = 1; i < date.month; i++) {
		days += monthLength(date.year, i);
	}
	return days;
}

int daysBetween(Date d1, Date d2) {
	// Insert you code here
	int days = 0;

	days = 365 - dayOfYear(d1);
	if (isLeap(d1.year))
		days++;

	for (int i = d1.year + 1; i < d2.year; i++) {
		days += 365;
		if (isLeap(i))
			days++;
	}

	days += dayOfYear(d2);

	return days;
}

int main(void) {
	Date since, till;
	cout << "Enter first date (y m d): ";
	cin >> since.year >> since.month >> since.day;
	cout << "Enter second date (y m d): ";
	cin >> till.year >> till.month >> till.day;
	cout << daysBetween(since, till) << endl;
	return 0;
}
