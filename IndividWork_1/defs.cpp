#define _USE_MATH_DEFINES
#include <cmath>

int rev_num(int num)
{
	// ������� ��������� ����� ����� <num> � ���������� ��� � �������� ����

	int res{ 0 };  // res � ����������, � ������� ���������� �������� �����

	/*  �������� �����������: ���� ����� �� ����� 0,
	���� ��������� ����� � ���������� � � <res>,
	����� ����������� ������ <res> (�������� <res> �� 10).
	��-�� ����������� ����� � ����� ������� �������� ������ ������ ���.
	������� ��������� ������ <res> � ���������� ���.  */

	while (num != 0) {
		res += num % 10;
		res *= 10;
		num /= 10;
	}
	res /= 10;
	return res;
}


bool check_div(int temp, int rev_temp)
{
	// ������� ��������� ������ �� 6-�� �������� <temp> � <rev_temp>

	if ((temp - rev_temp) % 6 == 0)
		return true;
	else
		return false;
}


int dig_sum(int num)
{
	// ������� ������� ����� ���� ����� <num>
	int num_sum{ 0 };
	while (num != 0) {
		num_sum += num % 10;
		num /= 10;
	}
	return num_sum;
}


void find_max(int num, int& maxi, int& maxi_sum)
{
	// ������� �������� ����� (<num> ��� <maxi>), � �������� ����� ���� ������
	// maxi_sum � ��� ����� ���� ����� <maxi> (����� �� ������� � �� ��������� ���)

	int num_sum = dig_sum(num);  // num_sum � ����� ���� <num>
	if (num_sum > maxi_sum) {
		maxi = num;
		maxi_sum = num_sum;
	}
	return;
}


double prob_integr(double x)
{
	// ������� ���������� ��������� �����������

	double eps = 1e-20;
	int k = 1;
	double el = x, sum = 0.0, m = 1.0;

	while (abs(el) > eps) {
		sum += el;
		el *= m;
		m += 2.0;
		el *= (-1.0) * x * x / 2.0 / m / k;
		k += 1.0;
	}
	return sum * sqrt(2.0) / sqrt(M_PI);
}


double func(int n, int t = 0)
{
	// ������� ���������� �� �������� ������� (����������)

	if (t == n)
		return sqrt(2 * t + 1);
	else
		return sqrt((2 * t + 1) + func(n, t + 1));
}