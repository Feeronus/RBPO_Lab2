module student_1bib21055_Lab2_Variant17_Task4:funcF2;
import <cmath>;
double RBPO::Lab2::Variant17::Task4::funcF2(double x)
{
	if (x >= 1.1)
		return (9 - x);
	else
		return (sin(3 * x) / (pow(x, 4) + 1));
}