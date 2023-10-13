module student_1bib21055_Lab2_Variant17_Task2;
import <cmath>;


double RBPO::Lab2::Variant17::Task2::funcF1(double x)
{
	return sqrt(pow(3 * x + 2, 2) - 24 * x) / (3 * sqrt(x) + 2 / sqrt(x));
}
double RBPO::Lab2::Variant17::Task2::funcF2(double x)
{
	if (x >= 1.1)
		return (9 - x);
	else
		return (sin(3 * x) / (pow(x, 4) + 1));
}
static double funcA(int i)
{
	return (pow(-1, i) * (1 - ((double(i * i + 1) / double(i * i + 3)))));
}
double RBPO::Lab2::Variant17::Task2::funcF3(int n)
{
	double f3 = 0;
	int i = 1;
	while (i <= n)
	{
		f3 += funcA(i);
		i++;
	}
	return f3;
}
double RBPO::Lab2::Variant17::Task2::funcF4(double e)
{
	double temp1 = 1, temp2 = 0;
	double S = 0;
	int i = 1;
	while (abs(temp1 - temp2) > e)
	{
		temp1 = funcA(i);
		temp2 = funcA(i + 1);
		S += funcA(i);
		i++;
	}
	return S;
}