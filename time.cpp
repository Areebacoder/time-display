#include<iostream>
using namespace std;
class time {
	public:
	int hours;
    int min;
	int sec;
	time(){
		hours = 0;
		min = 0;
		sec = 0;
	}
	time(int h, int m, int s){
		hours = h;
		min = m;
		sec = s;		
	}
	void addTime(time t1, time t2, time &t3)
    {
        t3.hours = t1.hours + t2.hours;
        t3.min = t1.min + t2.min;
        t3.sec = t1.sec + t2.sec;
           if (sec >= 60)
        {
            sec = sec - 60;
            min++;
        }
        if (min >= 60)
        {
            min = min - 60;
            hours++;
        }

    }
	void display() const
	{
		cout<<hours<<" : "<<min<<" : "<<sec;
	}
};
int main (){
	time t1 (4,34,54);
	time t2 (9,23,23);
	time t3;
	t3.addTime(t1,t2,t3);
	t3.display();
}
