#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double K_p, double K_i, double K_d) {
	d_error = 0;
	i_error = 0;
	Kp = K_p;
	Ki = K_i;
	Kd = K_d;
}

void PID::UpdateError(double cte) {
	d_error = cte - d_error; 
	i_error += cte;
}

double PID::TotalError() {
}

