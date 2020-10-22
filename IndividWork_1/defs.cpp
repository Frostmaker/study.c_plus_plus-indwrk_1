int rev_num(int num) {
	// ������� ��������� ����� ����� <num> � ���������� ��� � �������� ����

	int res{ 0 }; // res � ����������, � ������� ���������� �������� �����

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


bool check_div(int temp, int rev_temp) {
	// ������� ��������� ������ �� 6-�� �������� <temp> � <rev_temp>

	if ((temp - rev_temp) % 6 == 0)
		return true;
	else
		return false;
}


int dig_sum(int num) {
	// ������� ������� ����� ���� ����� <num>
	int num_sum{ 0 };
	while (num != 0) {
		num_sum += num % 10;
		num /= 10;
	}
	return num_sum;
}


void find_max(int num, int& maxi, int& maxi_sum) {
	// ������� �������� ����� (<num> ��� <maxi>), � �������� ����� ���� ������
	// maxi_sum � ��� ����� ���� ����� <maxi> (����� �� ������� � �� ��������� ���)

	int num_sum = dig_sum(num); // num_sum � ����� ���� <num>
	if (num_sum > maxi_sum) {
		maxi = num;
		maxi_sum = num_sum;
	}
	return;
}