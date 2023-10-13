module student_1bib21055_Lab2_Variant17_Task4:funcA;
import <cmath>;
double RBPO::Lab2::Variant17::Task4::funcA(int i)
{
	return (pow(-1, i) * (1 - ((double(i * i + 1) / double(i * i + 3)))));
}