#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <Windows.h>
using namespace std;

static const char alphanum[] =
"0123456789"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

int stringLength = sizeof(alphanum) - 1;

char genRandom()
{
	return alphanum[rand() % stringLength];
}

void yirmiDort() {
	unsigned long long x;
	cout << "Enter the amount of generations\n>>  ";
	cin >> x;

	ofstream of("24_digit_generated.txt");


	srand(time(0));
	for (int o = 0; o < x; o++) {
		of << "https://discord.gift/";
		for (int z = 0; z < 24; z++)
		{
			of << genRandom();

		}
		of << endl;
	}
	of.close();
	cout << "Successfully generated " << x << " Discord Nitro Codes" << endl;
	cout << endl << endl << "Saved to " << char(47) << "24_digit_generated.txt\n\n";
}

void onAlti() {
	unsigned long long x;
	cout << "Enter the amount of generations\n\n>> ";
	cin >> x;
	ofstream of("16_digit_generated.txt");

	srand(time(0));
	for (int o = 0; o < x; o++) {
		of << "https://discord.gift/";

		for (int z = 0; z < 16; z++)
		{
			of << genRandom();

		}
		of << endl;
	}
	of.close();
	cout << "Successfully generated " << x << " Discord Nitro Codes" << endl;
	cout << endl << endl << "Saved to " << char(47) << "16_digit_generated.txt\n\n";
}

int main()
{
	system("color 0D");

	cout << "#####   #   ###    ####   ####   ####   #####        #   #  #  #####  ####    ####" << endl;//         #####  #####  #   #  #####  ####      #    #####   ####   ####" << endl;
	Sleep(100);
	cout << "#    #  #  #      #      #    #  #   #  #    #       ##  #  #    #    #   #  #    #" << endl;//       #       #      ##  #  #      #   #    # #     #    #    #  #   #" << endl;
	Sleep(100);
	cout << "#    #  #   ###   #      #    #  ####   #    #       # # #  #    #    ####   #    #" << endl;//      ######  #####  # # #  #####  ####    #   #    #    #    #  ####" << endl;
	Sleep(100);
	cout << "#    #  #      #  #      #    #  #  #   #    #       #  ##  #    #    #  #   #    #" << endl;//     #    #  #      #  ##  #      #  #   #######   #    #    #  #  #" << endl;
	Sleep(100);
	cout << "#####   #   ###    ####   ####   #   #  #####        #   #  #    #    #   #   #### " << endl;//        ####   #####  #   #  #####  #   #  #     #   #     ####   #   #" << endl;
	Sleep(100);
	cout << endl << endl;
	cout << " #####  #####  #   #  #####  ####      #    #####   ####   ####" << endl;
	Sleep(100);
	cout << "#       #      ##  #  #      #   #    # #     #    #    #  #   #" << endl;
	Sleep(100);
	cout << "######  #####  # # #  #####  ####    #   #    #    #    #  ####" << endl;
	Sleep(100);
	cout << "#    #  #      #  ##  #      #  #   #######   #    #    #  #  #" << endl;
	Sleep(100);
	cout << " ####   #####  #   #  #####  #   #  #     #   #     ####   #   #" << endl;
	Sleep(100);
	cout << endl << endl;
	Sleep(100);
	cout << "####   #   #        ####      #     #   #  ####   #    #  #   #" << endl;
	Sleep(100);
	cout << "#   #   # #         #   #    # #     # #   #   #  #    #  ##  #" << endl;
	Sleep(100);
	cout << "####     #          ####    #   #     #    ####   #    #  # # #" << endl;
	Sleep(100);
	cout << "#   #    #          #  #   #######    #    #      #    #  #  ##" << endl;
	Sleep(100);
	cout << "####     #          #   #  #     #    #    #       ####   #   #" << endl << endl << endl;

w:
	cout << "Choose the type of generation you want\n\n1. 16 digits generation\n2. 24 digit generation\n\n>> ";
	unsigned int j;
	cin >> j;
	cout << endl;
	if (j == 1)
		onAlti();
	else if (j == 2)
		yirmiDort();
	else {
		cout << "Please select a valid type\n\n";
		goto w;
	}

	system("pause");
}