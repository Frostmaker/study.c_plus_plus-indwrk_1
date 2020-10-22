int rev_num(int num) {
	// Функция принимает целое число <num> и возвращает его в обратном виде

	int res{ 0 }; // res – переменная, в которую записывает обратное число

	/*  Алгоритм стандартный: пока число не равно 0,
	берём последнюю цифру и прибавляем её в <res>,
	потом увеличиваем разряд <res> (умножаем <res> на 10).
	Из-за особеностей цикла в конце функция увеличит разряд лишний раз.
	Поэтому уменьшаем разряд <res> и возвращаем его.  */

	while (num != 0) {
		res += num % 10;
		res *= 10;
		num /= 10;
	}
	res /= 10;
	return res;
}


bool check_div(int temp, int rev_temp) {
	// Функция проверяет кратна ли 6-ти разность <temp> и <rev_temp>

	if ((temp - rev_temp) % 6 == 0)
		return true;
	else
		return false;
}


int dig_sum(int num) {
	// Функция находит сумму цифр числа <num>
	int num_sum{ 0 };
	while (num != 0) {
		num_sum += num % 10;
		num /= 10;
	}
	return num_sum;
}


void find_max(int num, int& maxi, int& maxi_sum) {
	// Функция выбирает число (<num> или <maxi>), у которого сумма цифр больше
	// maxi_sum – это сумма цифр числа <maxi> (чтобы не считать её по несколько раз)

	int num_sum = dig_sum(num); // num_sum – сумма цифр <num>
	if (num_sum > maxi_sum) {
		maxi = num;
		maxi_sum = num_sum;
	}
	return;
}