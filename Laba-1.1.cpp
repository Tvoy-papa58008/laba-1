#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	long double a=100, b=0.001, B0, B1, B2, A3, A2, A1, AB, AC, C1, C2, F;
	
	B0 = pow(b, 2);
	B1 = pow(b, 3);
	B2 = pow(b, 4);
	A3 = pow(a, 4);
	A2 = pow(a, 3);
	A1 = pow(a, 2); 
	AB = pow(a + b, 4);
	AC = A3 + 4*A2*b + 6*B0*A1;
	C1 = 4 * a * B1 + B2;
	C2 = AB-AC;
	F = C1/C2;
	cout<<F;
}