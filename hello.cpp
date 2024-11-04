#include <iostream>
using namespace std;

int main()
{
	float midterm_grade, final_grade, your_avarege;
	cout << "Input your midterm grade:\n ";
	cin >> midterm_grade;
	cout << " input your final grade: " << endl ;
	cin >> final_grade;
	your_avarege = (midterm_grade * 0.4) + (final_grade * 0.6);
	cout << "avarage is " << your_avarege << endl;
	if (your_avarege >= 50)
		cout << "passed..";
	if (40 < your_avarege || your_avarege < 50)
		cout << "depending on others grades";
	else
		cout << "failed... " << endl;
		
}

