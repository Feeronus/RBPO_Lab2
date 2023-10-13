module student_1bib21055_Lab2_Variant17_Task3;
import <cmath>;
double RBPO::Lab2::Variant17::Task3::funcA(int i)
{
	return (pow(-1, i) * (1 - ((double(i * i + 1) / double(i * i + 3)))));
}