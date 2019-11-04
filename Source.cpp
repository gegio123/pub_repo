#include <string>
int gcd(int num1, int num2) {
	int num_gcd;
	if (num1 >= num2){
		num_gcd = num1;
	}
	else
	{
		num_gcd = num2;
	}
	
	for (int i = num_gcd; i >= 1; i--) {
		if (num1 % i == 0 && num2 % i == 0)
		{
			num_gcd = i;
			break;
		}
	}
	return num_gcd;

}

int lcm(int num1, int num2) {
	int is_greater;
	int is_smaller;
	if (num1 >= num2) {
		is_greater = num1;
		is_smaller = num2;
	}
	else
	{
		is_greater = num2;
		is_smaller = num1;
	}

	while (true)
	{
		is_greater *= 2;
		if ((is_greater % is_smaller) == 0){
			return is_greater;
		}
	}
}

int dgt_count(int num) {
	int count_lenght = 0;
	while (num != 0)
	{
		num /= 10;
		count_lenght++;
	}
	return count_lenght;
}

int dtg_el_cont(int num1, int num2) {
	int count_lenght = 0;
	while (num1 != 0)
	{
		num1 /= 10;
		count_lenght++;
		if (count_lenght == num2) {
			return num1;
		}

	}
	
}

int factorial(int num) {
	int out_num = 1;
	for (int i = 1; i <= num; i++) {
		out_num *=i;

	}
	return out_num;
}

int power(int num, int pwr) {
	int out_num = 1;
	for (int i = 0; i < pwr; i++) {
		out_num *= num;

	}
	return out_num;
}

int inc(int num) {
	int out_num = 0;
	for (int i = 1; i <= num; i++) {
		out_num += i;

	}
	return out_num;
}


void main() {
	int inc_num = inc(5);
	int get_pwr = power(2, 4);
	int get_fact = factorial(6);
	int dgt_el = dtg_el_cont(123456789, 5);
	int cnt_len = dgt_count(351);
	int test_gcd = gcd(10, 20);
	int test_lcm = lcm(18, 12);
}