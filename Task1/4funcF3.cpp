module student_1bib21055_Lab2_Variant17_Task4:funcF3;
import <cmath>;
import :funcA;
double RBPO::Lab2::Variant17::Task4::funcF3(int n)
{
	double f3 = 0;
	int i = 1;
	do
	{
		f3 += funcA(i);
		i++;
	} while (i <= n);
	return f3;
}