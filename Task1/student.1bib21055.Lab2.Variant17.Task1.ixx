export module student_1bib21055_Lab2_Variant17_Task1;

import <cmath>;

namespace RBPO
{
	namespace Lab2
	{
		namespace Variant17
		{
			namespace Task1
			{
				export double funcF1(double x)
				{
					return sqrt(pow(3*x+2,2)-24*x)/(3*sqrt(x)+2/sqrt(x));
				}
				export double funcF2(double x)
				{
					return (x >= 1.1) ? (9 - x) : (sin(3 * x) / (pow(x, 4) + 1));
				}
				double funcA(int i)
				{
					return (pow(-1, i) * (1-((double(i* i + 1) / double(i * i + 3)))));
				}
				export double funcF3(int n)
				{
					double f3 = 0;
					for (int i = 1; i <= n; i++)
					{
						f3 += funcA(i);
					}
					return f3;
				}
				export double funcF4(double e)
				{
					double temp1=1, temp2=0;
					double S=0;
					for(int i = 1; abs(temp1 - temp2) > e;i++)
					{
						temp1 = funcA(i);
						temp2 = funcA(i + 1);
						S += funcA(i);
					}
					return S;
				}

			}
				
		}
	}
}


