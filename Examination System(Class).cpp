#include<iostream>
using namespace std;
class examination
{
	private:
		int duration;
		int crd_hrs;
		string course_title;
		int month;
		int date;
		int year;
		int time;
	public:
		void Duration(int dur)
		{
			duration=dur;
			cout<<"Duration is: ";
			cin>>dur;
		}
		void Crd_hrs(int crd)
		{
			crd_hrs=crd;
			cout<<"Credit hours are: ";
			cin>>crd;
		}
		void Course_title(string course)
		{
			course_title=course;
			cout<<"Course title is: ";
			cin>>course;
		}
		void Month(int m)
		{
			month=m;
			cout<<"Month is: ";
			cin>>m;
		}
		void Date(int d)
		{
			date=d;
			cout<<"Date is: ";
			cin>>d;
		}
		void Year(int y)
		{
			year=y;
			cout<<"Year is: ";
			cin>>y;
		}
		void Time(int t)
		{
			time=t;
			cout<<"Time is: ";
			cin>>t;
		}
};
int main()
{
	int dur;
	int crd;
	string c;
	int m;
	int d;
	int y;
	int t;
	examination exam;
	exam.Crd_hrs(crd);
	exam.Date(d);
	exam.Duration(dur);
	exam.Month(m);
	exam.Time(t);
	exam.Course_title(c);
	exam.Year(y);
	system("pause");
	return 0;
}
