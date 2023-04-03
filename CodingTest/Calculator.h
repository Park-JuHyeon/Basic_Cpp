// author ¹ÚÁÖÇö

class Calculator
{
private:
	double ax, ay;
	char acper;
public:
	Calculator(double x, char cper, double y) : ax(x), acper(cper), ay(y)
	{}
	double Calculate(double x, char cper, double y);
};