#include <iostream>
using namespace std;
int main()
{



	int acii = 0;
	while (acii < 256)
	{
		cout << acii << " - " << (char)acii << endl;
		acii++;
	}

	int ulduz;
	cout << "ulduz sayi - ";
	cin >> ulduz;
	int say = 0;
	while (say < ulduz) {
		cout << "*";
		say++;
	}
	cout << endl;




	int say_3 = 0;
	while (say_3 < 50)
	{
		if (say_3 % 2 == 0)
			cout << say_3 << endl;
		say_3++;
	}




	int num4_1;
	cout << "eded daxil edin - ";
	cin >> num4_1;
	int num4_2;
	cout << "eded daxil edin - ";
	cin >> num4_2;
	int tek = 1;
	int cut = 0;
	while (num4_1 < num4_2)
	{
		if (num4_1 % 2 == 0)
			cut += num4_1;
		else
			tek *= num4_1;
		num4_1++;
	}
	cout << "cüt rəqəmlərin cəmini" << cut << endl;
	cout << "tek rəqəmlərin hasili" << tek << endl;



	int say_5 = 0;
	while (say_5 < 100)
	{
		if (say_5 % 3 == 0)
			cout << say_5 << endl;
		say_5++;
	}



	int num6_1;
	cout << "eded daxil edin - ";
	cin >> num6_1;
	int fakt = 1;
	while (num6_1 > 0)
	{
		fakt *= num6_1;
		num6_1--;
	}
	cout << "cavab - " << fakt << endl;



	int num7;
	cout << "eded daxil edin - ";
	cin >> num7;
	int ust;
	cout << "eded ustu daxil edin - ";
	cin >> ust;
	int tam = 1;
	while (ust > 0)
	{
		tam *= num7;
		ust--;
	}
	cout << tam << endl;



	int num8;
	cout << "eded daxil edin - ";
	cin >> num8;
	int cem = 0;
	int rsay = 0;
	while (num8 > 0)
	{
		cem += num8 % 10;
		num8 /= 10;
		rsay++;
	}
	cout << "reqemlerin sayi: " << rsay << endl;
	cout << "reqemlerin cemi: " << cem << endl;






	int num9;
	cout << "eded daxil edin - ";
	cin >> num9;
	int ters = 0;
	while (num9 > 0)
	{
		ters = ters * 10 + num9 % 10;
		num9 /= 10;
	}
	cout << "reqemlerin tersi: " << ters << endl;

	int num10;
	cout << "eded daxil edin - ";
	cin >> num10;
	int i10 = 1;
	while (i10 < num10 / 2)
	{
		if (num10 % i10 == 0) {
			cout << i10 << endl;
		}
		i10++;
	}





	int num11;
	cout << "eded daxil edin - ";
	cin >> num11;
	int i11 = 1;
	int bolu = 0;
	while (i11 < num11 / 2)
	{
		if (num11 % i11 == 0) {
			cout << i11 << endl;
			bolu++;
		}
		i11++;
	}
	if (bolu == 1) {
		cout << "sade" << endl;
	}
	else {
		cout << "murrekebdir" << endl;
	}





	int num12;
	cout << "eded daxil edin - ";
	cin >> num12;
	int evv = num12 % 10;
	num12 /= 10;
	int son = num12 % 10;
	num12 /= 10;
	while (num12 >= 0) {
		if (evv - 1 == son) {
			cout << "Ard arda edded var" << endl;
			break;
		}
		else if (num12 == 0) {
			break;
		}
		else {
			evv = son;
			son = num12 % 10;
			num12 /= 10;

		}

	}
	if (num12 == 0 && evv - 1 != son) {

		cout << "Ard arda edded yoxdur" << endl;
	}




	int min = 0;
	int num13;
	bool t = true;
	cout << "eded daxil edin - ";
	cin >> num13;
	while (num13 > 0)
	{
		min = num13 % 10;
		num13 /= 10;
		if (min >= num13 % 10) {
			continue;
		}
		else {
			cout << "artan deyil" << endl;
			t = false;
			break;
		}
	}
	if (t == true) {
		cout << "artandir" << endl;

	}





	srand(time(NULL));
	int mint = 0;
	int maxt = 100;
	int ran = mint + rand() % (maxt - mint + 1);
	int guess;
	cout << "eddi texmin edin - ";
	cin >> guess;
	int tries = 1;
	while (guess != ran) {
		cout << "sehv!!!" << endl;
		cout << ran << endl;
		ran = mint + rand() % (maxt - mint + 1);
		tries++;
	}
	cout << "eddedi tapildi - ";
	cout << ran << "!!! " << tries << "tutdu";
}