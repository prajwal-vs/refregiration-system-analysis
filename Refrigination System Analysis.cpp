#include <iostream>
#include<math.h>
using namespace std;


int main()
{
	//Input

	int et = 283, ct = 318;
	float rc = 3.5;

	//Output


	//For Steam Table
	float h1;
	float h21;
	float h3;
	float h4;
	float h2;

	//To find h2
	float s1;
	float s21;
	float s2;

	float cp = 1.20;
	float t2;
    float t21=318.0;

	cout << "Enter values for h1,h21,h3,h4" << endl;
	cin >> h1 >> h21 >> h3 >> h4;
	cout << endl;

	cout << "Enter values for s1,s21,s2" << endl;
	cin >> s1 >> s21 >> s2;
	cout << endl;


	float temp = (log(t21)* (s2 - s21)) / cp;
	 t2 = pow(2.7183, temp);
	cout << "t2=" << t2 << endl;

	h2 = h21 + cp*(t2 - t21);

	cout <<"h2="<< h2 << " kj"<<"/"<<"kg"<< endl;

	//Ref Floe Rate
	float inr;
	float q = 3500;

	inr = q / (h1 - h4);
	cout <<"Ref flow rate ="<< inr/1000 <<" kg"<<"/"<<"s" << endl;

	//Pressure Ratio
	float pr,p2=17.2901,p1=6.8070;
	pr = p2 / p1;
	cout <<"Pressure Ratio="<< pr << endl;

	//Power Req to drive comp
	float p;
	p = inr*(h2 - h1);
	cout <<"Power required to drive compressor="<< p/1000 << " kw" << endl;

	//COP
	float cop;
	cop = (h1 - h4) / (h2 - h1);
	cout <<"Coefficient of performnace="<< cop << endl;

	//Vol Ref Eff
	float v;
	v = (h1 - h4) / q;
	cout <<"Volumetric refrigirent effect="<< v << " kj"<<"/"<<"m^3" << endl;

	system("pause");
    //return 0;
}

