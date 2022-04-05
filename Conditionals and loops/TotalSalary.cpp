#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
	double basic,allow;
    char grade;
    cin>>basic>>grade;
    
    double hra=(20*basic/100);
    double da=(50*basic/100);
    double pf=(11*basic/100);
    
    if(grade=='A')
        allow=1700;
    else if(grade=='B')
        allow=1500;
    else
        allow=1300;
        
        double totalsalary=(basic+hra+da+allow);
        totalsalary=totalsalary-pf;
        cout<<llround(totalsalary);
}
