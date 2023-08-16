//

#include<iostream>
#include<math.h>
using namespace std;

int main() {
	char question1;
	double opp, hyp, adj;

	cout << "What type of Trig func is it (s for sin)" << endl;
	cin >> question1;

	if (question1 == 's') {
		cout << "Ok now type the opposite then hypotenuse" << endl;
		cin >> opp;
		cin >> hyp;
		adj = (hyp * hyp) - (opp * opp);
		adj = sqrt(adj);
		cout << "Sin = " << opp << "/" << hyp << endl;
		cout << "Cos = " << adj << "/" << hyp << endl;
		cout << "Tan = " << opp << "/" << adj << endl; 
		cout << "Csc = " << hyp << "/" << opp << endl;
		cout << "Sec = " << hyp << "/" << adj << endl;
		cout << "Cot = " << adj << "/" << opp << endl;
	}
}