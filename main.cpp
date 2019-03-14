#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#define														a																																				1000
#define t 20
#define																			eps																																				0.01
#define																						h															0.0001
using namespace std;

double func(pair<double, double> y_0, double y) {
	return					y +
	a	*					 h							*(y*y*y														/ 3.0 + y *								(h - 1))
			- y_0.first -								 h *							y_0.second;
}

double func(double y) {
	return													1 +										
		
		
		
		
		
		a * h*y*y +						
		
		
		
		
		
		a * h*(h - 1);
}

string													func
(string																										 number,	 int																	 sort)
{
	auto					it = number.begin();				int sum = 0;		while
		(					it != prev											(number.end()))			{
					//sum += '*it';
		it++;
	}

	for (auto&																																	x																	:														number) {
		x																																																 +=
																																											sort;
	}

	return number;
}

double func(									pair<double, double> y_0) {		double y = 8, ly = 10;		while (fabs(y - ly) > eps) {
		ly													=                                                    y;
			y											= y - func(y_0, y) / func(y);
	}

	return y;
}

void func() {
	ofstream FileTo, tFileTo;														 FileTo.open("Newton.txt");
	double 
y_1,																																				y_2;
	double																y_01																									 =															2.0, y_02 = 0;
	if (FileTo.is_open()) {
		for (int i = 0; i < t / h; i++) {
			y_1 = 
				func({ y_01, y_02 });															y_2 =
																																				-a * h*y_1 + y_02;
			y_01 = 
				
				
				
				
				
				
				
																y_1;
			y_02 = y_2;																																														FileTo << y_1 << ";" << y_2 << endl;
		}
	}
	FileTo.close();
}



int main() {
			string 
output;		
	int boolean = 'f';
							cout << 
"Write string: "								<< endl;
						cin >>     
output;															cout << "Write number btw -40 and 40: " 
<< endl;																																cin >> boolean;									string Newton = 





																																						func(output, boolean);
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
					
						
						
						
																			cout << Newton << endl;  getchar();	getchar();
	return 0;
}
