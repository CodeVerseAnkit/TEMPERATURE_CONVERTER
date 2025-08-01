#include <iostream>
using namespace std;
// <--- TEMPERATURE CONVERTER --->
/*
 Author: Ankit
 Date: 31-7-2025
 Project: Temperature Converter
 Description: It is a simple console based temperature converter tool which is used to convert temperature from one scale to another. 
*/
// ---> UI
void menu()
{
	cout << "  <------------- TEMPERATURE CONVERTER ------------->\n                 ~~~~~~~~~~~~~~~~~~~~~\n\n          🙏welcome To Temperature Converter🙏\n          -------------------------------------\n"
		 << endl;
	cout << "  1) CELSIUS➡️FAHRENHEIT    2) CELSIUS➡️KELVIN\n  3) CELSIUS➡️REAUMUR       4) CELSIUS➡️RANKINE\n  5) FAHRENHEIT➡️CELSIUS    6) FAHRENHEIT➡️KELVIN\n  7) FAHRENHEIT➡️REAUMUR    8) FAHRENHEIT➡️RANKINE\n  9) KELVIN➡️CELSIUS        10) KELVIN➡️FAHRENHEIT\n  11) KELVIN➡️REAUMUR       12) KELVIN➡️RANKINE\n  13) REAUMUR➡️CELSIUS      14) REAUMUR➡️FAHRENHEIT\n  15) REAUMUR➡️KELVIN       16) REAUMUR➡️RANKINE\n  17) RANKINE➡️CELSIUS      18) RANKINE➡️FAHRENHEIT\n  19) RANKINE➡️KELVIN       20) RANKINE➡️REAUMUR\n  21) TEMPERATURE Info      22) EXIT\n ____________________________________________________\n"
		 << endl;
}
// ---> Navigation Button
void back_button()
{
	char yes;
	do
	{
		cout << "   Type (y) to back: ";
		cin >> yes;
		if (yes == 'y' || yes == 'Y')
		{
			break;
		}
	} while (yes != 'y' || yes != 'Y');
}

// ---> 1. Celsius To Fahrenheit
void celsius_to_fahrenheit()
{
	cout << "     Convert Celsius To Fahrenheit 🌡:~\n     ••••••••••••••••••••••••••••••••••••\n"
		 << endl;
	char user; // user input

	do
	{				 // loop for repeating
		double temp; // store temperature

		cout << "  Enter Celsius Temperature: ";
		cin >> temp;
		// celsius to fahrenheit formula
		double ans = (temp * 9 / 5) + 32;
		cout << "  After converting🌡...\n  " << temp << "°C = " << ans << "°F\n"
			 << endl;
		do
		{ // this loop for preventing wrong input
			cout << "  Do you want to convert again (y/n) : ";
			cin >> user;
			cout << endl;
			if (user == 'n' || user == 'N' || user == 'y' || user == 'Y')
			{
				break;
			}
		} while (user != 'n' || user != 'N' || user != 'y' || user != 'Y');
		if (user == 'n' || user == 'N')
		{
			break; // exit loop
		}

	} while (user != 'n' || user != 'N');
	back_button(); // back button
}

// ---> 2. Celsius To Kelvin
void celsius_to_kelvin()
{
	cout << "     Convert Celsius To Kelvin 🌡:~\n     ••••••••••••••••••••••••••••••••\n"
		 << endl;
	char user; // user input

	do
	{				 // loop for repeating
		double temp; // store temperature

		cout << "  Enter Celsius Temperature: ";
		cin >> temp;
		// celsius to kelvin formula
		double ans = temp + 273.15;
		cout << "  After converting🌡...\n  " << temp << "°C = " << ans << "°K\n"
			 << endl;
		do
		{ // this loop for preventing wrong input
			cout << "  Do you want to convert again (y/n) : ";
			cin >> user;
			cout << endl;
			if (user == 'n' || user == 'N' || user == 'y' || user == 'Y')
			{
				break;
			}
		} while (user != 'n' || user != 'N' || user != 'y' || user != 'Y');
		if (user == 'n' || user == 'N')
		{
			break; // exit loop
		}

	} while (user != 'n' || user != 'N');
	back_button(); // back button
}

// ---> 3. Celsius To Reaumur
void celsius_to_reaumur()
{
	cout << "     Convert Celsius To Reaumur 🌡:~\n     •••••••••••••••••••••••••••••••••\n"
		 << endl;
	char user; // user input

	do
	{				 // loop for repeating
		double temp; // store temperature

		cout << "  Enter Celsius Temperature: ";
		cin >> temp;
		// celsius to reaumur formula
		double ans = temp * 4 / 5;
		cout << "  After converting🌡...\n  " << temp << "°C = " << ans << "°Re\n"
			 << endl;
		do
		{ // this loop for preventing wrong input
			cout << "  Do you want to convert again (y/n) : ";
			cin >> user;
			cout << endl;
			if (user == 'n' || user == 'N' || user == 'y' || user == 'Y')
			{
				break;
			}
		} while (user != 'n' || user != 'N' || user != 'y' || user != 'Y');
		if (user == 'n' || user == 'N')
		{
			break; // exit loop
		}

	} while (user != 'n' || user != 'N');
	back_button(); // back button
}

// ---> 4. Celsius To Rankine
void celsius_to_rankine()
{
	cout << "     Convert Celsius To Rankine 🌡:~\n     •••••••••••••••••••••••••••••••••\n"
		 << endl;
	char user; // user input

	do
	{				 // loop for repeating
		double temp; // store temperature

		cout << "  Enter Celsius Temperature: ";
		cin >> temp;
		// celsius to rankine formula
		double ans = (temp * 9 / 5) + 491.67;
		cout << "  After converting🌡...\n  " << temp << "°C = " << ans << "°Ra\n"
			 << endl;
		do
		{ // this loop for preventing wrong input
			cout << "  Do you want to convert again (y/n) : ";
			cin >> user;
			cout << endl;
			if (user == 'n' || user == 'N' || user == 'y' || user == 'Y')
			{
				break;
			}
		} while (user != 'n' || user != 'N' || user != 'y' || user != 'Y');
		if (user == 'n' || user == 'N')
		{
			break; // exit loop
		}

	} while (user != 'n' || user != 'N');
	back_button(); // back button
}

// ---> 5. Fahrenheit To Celsius
void fahrenheit_to_celsius()
{
	cout << "     Convert Fahrenheit To Celsius 🌡:~\n     ••••••••••••••••••••••••••••••••••••\n"
		 << endl;
	char user; // user input

	do
	{				 // loop for repeating
		double temp; // store temperature

		cout << "  Enter Fahrenheit Temperature: ";
		cin >> temp;
		// Fahrenheit to Celsius formula
		double ans = (temp - 32) * 5 / 9;
		cout << "  After converting🌡...\n  " << temp << "°F = " << ans << "°C\n"
			 << endl;
		do
		{ // this loop for preventing wrong input
			cout << "  Do you want to convert again (y/n) : ";
			cin >> user;
			cout << endl;
			if (user == 'n' || user == 'N' || user == 'y' || user == 'Y')
			{
				break;
			}
		} while (user != 'n' || user != 'N' || user != 'y' || user != 'Y');
		if (user == 'n' || user == 'N')
		{
			break; // exit loop
		}

	} while (user != 'n' || user != 'N');
	back_button(); // back button
}

// ---> 6. Fahrenheit To Kelvin
void fahrenheit_to_kelvin()
{
	cout << "     Convert Fahrenheit To Kelvin 🌡:~\n     •••••••••••••••••••••••••••••••••••\n"
		 << endl;
	char user; // user input

	do
	{				 // loop for repeating
		double temp; // store temperature

		cout << "  Enter Fahrenheit Temperature: ";
		cin >> temp;
		// Fahrenheit to Kelvin formula
		double ans = (temp - 32) * 5 / 9 + 273.15;
		cout << "  After converting🌡...\n  " << temp << "°F = " << ans << "°K\n"
			 << endl;
		do
		{ // this loop for preventing wrong input
			cout << "  Do you want to convert again (y/n) : ";
			cin >> user;
			cout << endl;
			if (user == 'n' || user == 'N' || user == 'y' || user == 'Y')
			{
				break;
			}
		} while (user != 'n' || user != 'N' || user != 'y' || user != 'Y');
		if (user == 'n' || user == 'N')
		{
			break; // exit loop
		}

	} while (user != 'n' || user != 'N');
	back_button(); // back button
}

// ---> 7. Fahrenheit To Reaumur
void fahrenheit_to_reaumur()
{
	cout << "     Convert Fahrenheit To Reaumur 🌡:~\n     ••••••••••••••••••••••••••••••••••••\n"
		 << endl;
	char user; // user input

	do
	{				 // loop for repeating
		double temp; // store temperature

		cout << "  Enter Fahrenheit Temperature: ";
		cin >> temp;
		// Fahrenheit to Reaumur formula
		double ans = (temp - 32) * 4 / 9;
		cout << "  After converting🌡...\n  " << temp << "°F = " << ans << "°Re\n"
			 << endl;
		do
		{ // this loop for preventing wrong input
			cout << "  Do you want to convert again (y/n) : ";
			cin >> user;
			cout << endl;
			if (user == 'n' || user == 'N' || user == 'y' || user == 'Y')
			{
				break;
			}
		} while (user != 'n' || user != 'N' || user != 'y' || user != 'Y');
		if (user == 'n' || user == 'N')
		{
			break; // exit loop
		}

	} while (user != 'n' || user != 'N');
	back_button(); // back button
}

// ---> 8. Fahrenheit To Rankine
void fahrenheit_to_rankine()
{
	cout << "     Convert Fahrenheit To Rankine 🌡:~\n     ••••••••••••••••••••••••••••••••••••\n"
		 << endl;
	char user; // user input

	do
	{				 // loop for repeating
		double temp; // store temperature

		cout << "  Enter Fahrenheit Temperature: ";
		cin >> temp;
		// Fahrenheit to Rankine formula
		double ans = temp + 459.67;
		cout << "  After converting🌡...\n  " << temp << "°F = " << ans << "°Ra\n"
			 << endl;
		do
		{ // this loop for preventing wrong input
			cout << "  Do you want to convert again (y/n) : ";
			cin >> user;
			cout << endl;
			if (user == 'n' || user == 'N' || user == 'y' || user == 'Y')
			{
				break;
			}
		} while (user != 'n' || user != 'N' || user != 'y' || user != 'Y');
		if (user == 'n' || user == 'N')
		{
			break; // exit loop
		}

	} while (user != 'n' || user != 'N');
	back_button(); // back button
}

// ---> 9. Kelvin To Celsius
void kelvin_to_celsius()
{
	cout << "     Convert Kelvin To Celsius 🌡:~\n     ••••••••••••••••••••••••••••••••\n"
		 << endl;
	char user; // user input

	do
	{				 // loop for repeating
		double temp; // store temperature

		cout << "  Enter Kelvin Temperature: ";
		cin >> temp;
		// Kelvin to Celsius formula
		double ans = temp - 273.15;
		cout << "  After converting🌡...\n  " << temp << "°K = " << ans << "°C\n"
			 << endl;
		do
		{ // this loop for preventing wrong input
			cout << "  Do you want to convert again (y/n) : ";
			cin >> user;
			cout << endl;
			if (user == 'n' || user == 'N' || user == 'y' || user == 'Y')
			{
				break;
			}
		} while (user != 'n' || user != 'N' || user != 'y' || user != 'Y');
		if (user == 'n' || user == 'N')
		{
			break; // exit loop
		}

	} while (user != 'n' || user != 'N');
	back_button(); // back button
}

// ---> 10. Kelvin To Fahrenheit
void kelvin_to_fahrenheit()
{
	cout << "     Convert Kelvin To Fahrenheit 🌡:~\n     ••••••••••••••••••••••••••••••••••\n"
		 << endl;
	char user; // user input

	do
	{				 // loop for repeating
		double temp; // store temperature

		cout << "  Enter Kelvin Temperature: ";
		cin >> temp;
		// Kelvin to Fahrenheit formula
		double ans = ((temp - 273.15) * 9 / 5) + 32;
		cout << "  After converting🌡...\n  " << temp << "°K = " << ans << "°F\n"
			 << endl;
		do
		{ // this loop for preventing wrong input
			cout << "  Do you want to convert again (y/n) : ";
			cin >> user;
			cout << endl;
			if (user == 'n' || user == 'N' || user == 'y' || user == 'Y')
			{
				break;
			}
		} while (user != 'n' || user != 'N' || user != 'y' || user != 'Y');
		if (user == 'n' || user == 'N')
		{
			break; // exit loop
		}

	} while (user != 'n' || user != 'N');
	back_button(); // back button
}

// ---> 11. Kelvin To Reaumur
void kelvin_to_reaumur()
{
	cout << "     Convert Kelvin To Reaumur 🌡:~\n     ••••••••••••••••••••••••••••••••\n"
		 << endl;
	char user; // user input

	do
	{				 // loop for repeating
		double temp; // store temperature

		cout << "  Enter Kelvin Temperature: ";
		cin >> temp;
		// Kelvin to Reaumur formula
		double ans = (temp - 273.15) * 4 / 5;
		cout << "  After converting🌡...\n  " << temp << "°K = " << ans << "°Re\n"
			 << endl;
		do
		{ // this loop for preventing wrong input
			cout << "  Do you want to convert again (y/n) : ";
			cin >> user;
			cout << endl;
			if (user == 'n' || user == 'N' || user == 'y' || user == 'Y')
			{
				break;
			}
		} while (user != 'n' || user != 'N' || user != 'y' || user != 'Y');
		if (user == 'n' || user == 'N')
		{
			break; // exit loop
		}

	} while (user != 'n' || user != 'N');
	back_button(); // back button
}

// ---> 12. Kelvin To Rankine
void kelvin_to_rankine()
{
	cout << "     Convert Kelvin To Rankine 🌡:~\n     ••••••••••••••••••••••••••••••••\n"
		 << endl;
	char user; // user input

	do
	{				 // loop for repeating
		double temp; // store temperature

		cout << "  Enter Kelvin Temperature: ";
		cin >> temp;
		// Kelvin to Rankine formula
		double ans = temp * 1.8;
		cout << "  After converting🌡...\n  " << temp << "°K = " << ans << "°Ra\n"
			 << endl;
		do
		{ // this loop for preventing wrong input
			cout << "  Do you want to convert again (y/n) : ";
			cin >> user;
			cout << endl;
			if (user == 'n' || user == 'N' || user == 'y' || user == 'Y')
			{
				break;
			}
		} while (user != 'n' || user != 'N' || user != 'y' || user != 'Y');
		if (user == 'n' || user == 'N')
		{
			break; // exit loop
		}

	} while (user != 'n' || user != 'N');
	back_button(); // back button
}

// ---> 13. Reaumur To Celsius
void reaumur_to_celsius()
{
	cout << "     Convert Reaumur To Celsius 🌡:~\n     ••••••••••••••••••••••••••••••••\n"
		 << endl;
	char user; // user input

	do
	{				 // loop for repeating
		double temp; // store temperature

		cout << "  Enter Reaumur Temperature: ";
		cin >> temp;
		// Reaumur to Celsius formula
		double ans = temp * 5 / 4;
		cout << "  After converting🌡...\n  " << temp << "°Re = " << ans << "°C\n"
			 << endl;
		do
		{ // this loop for preventing wrong input
			cout << "  Do you want to convert again (y/n) : ";
			cin >> user;
			cout << endl;
			if (user == 'n' || user == 'N' || user == 'y' || user == 'Y')
			{
				break;
			}
		} while (user != 'n' || user != 'N' || user != 'y' || user != 'Y');
		if (user == 'n' || user == 'N')
		{
			break; // exit loop
		}

	} while (user != 'n' || user != 'N');
	back_button(); // back button
}

// ---> 14. Reaumur To Fahrenheit
void reaumur_to_fahrenheit()
{
	cout << "     Convert Reaumur To Fahrenheit 🌡:~\n     •••••••••••••••••••••••••••••••••••\n"
		 << endl;
	char user; // user input

	do
	{				 // loop for repeating
		double temp; // store temperature

		cout << "  Enter Reaumur Temperature: ";
		cin >> temp;
		// Reaumur to Fahrenheit formula
		double ans = (temp * 9 / 4) + 32;
		cout << "  After converting🌡...\n  " << temp << "°Re = " << ans << "°F\n"
			 << endl;
		do
		{ // this loop for preventing wrong input
			cout << "  Do you want to convert again (y/n) : ";
			cin >> user;
			cout << endl;
			if (user == 'n' || user == 'N' || user == 'y' || user == 'Y')
			{
				break;
			}
		} while (user != 'n' || user != 'N' || user != 'y' || user != 'Y');
		if (user == 'n' || user == 'N')
		{
			break; // exit loop
		}

	} while (user != 'n' || user != 'N');
	back_button(); // back button
}

// ---> 15. Reaumur To Kelvin
void reaumur_to_kelvin()
{
	cout << "     Convert Reaumur To Kelvin 🌡:~\n     ••••••••••••••••••••••••••••••••\n"
		 << endl;
	char user; // user input

	do
	{				 // loop for repeating
		double temp; // store temperature

		cout << "  Enter Reaumur Temperature: ";
		cin >> temp;
		// Reaumur to Kelvin formula
		double ans = (temp * 5 / 4) + 273.15;
		cout << "  After converting🌡...\n  " << temp << "°Re = " << ans << "°K\n"
			 << endl;
		do
		{ // this loop for preventing wrong input
			cout << "  Do you want to convert again (y/n) : ";
			cin >> user;
			cout << endl;
			if (user == 'n' || user == 'N' || user == 'y' || user == 'Y')
			{
				break;
			}
		} while (user != 'n' || user != 'N' || user != 'y' || user != 'Y');
		if (user == 'n' || user == 'N')
		{
			break; // exit loop
		}

	} while (user != 'n' || user != 'N');
	back_button(); // back button
}

// ---> 16. Reaumur To Rankine
void reaumur_to_rankine()
{
	cout << "     Convert Reaumur To Rankine 🌡:~\n     ••••••••••••••••••••••••••••••••\n"
		 << endl;
	char user; // user input

	do
	{				 // loop for repeating
		double temp; // store temperature

		cout << "  Enter Reaumur Temperature: ";
		cin >> temp;
		// Reaumur to Rankine formula
		double ans = temp * 2.25 + 491.67;
		cout << "  After converting🌡...\n  " << temp << "°Re = " << ans << "°Ra\n"
			 << endl;
		do
		{ // this loop for preventing wrong input
			cout << "  Do you want to convert again (y/n) : ";
			cin >> user;
			cout << endl;
			if (user == 'n' || user == 'N' || user == 'y' || user == 'Y')
			{
				break;
			}
		} while (user != 'n' || user != 'N' || user != 'y' || user != 'Y');
		if (user == 'n' || user == 'N')
		{
			break; // exit loop
		}

	} while (user != 'n' || user != 'N');
	back_button(); // back button
}

// ---> 17. Rankine To Celsius
void rankine_to_celsius()
{
	cout << "     Convert Rankine To Celsius 🌡:~\n     ••••••••••••••••••••••••••••••••\n"
		 << endl;
	char user; // user input

	do
	{				 // loop for repeating
		double temp; // store temperature

		cout << "  Enter Rankine Temperature: ";
		cin >> temp;
		// Rankine to Celsius formula
		double ans = (temp - 491.67) * 5 / 9;
		cout << "  After converting🌡...\n  " << temp << "°Ra = " << ans << "°C\n"
			 << endl;
		do
		{ // this loop for preventing wrong input
			cout << "  Do you want to convert again (y/n) : ";
			cin >> user;
			cout << endl;
			if (user == 'n' || user == 'N' || user == 'y' || user == 'Y')
			{
				break;
			}
		} while (user != 'n' || user != 'N' || user != 'y' || user != 'Y');
		if (user == 'n' || user == 'N')
		{
			break; // exit loop
		}

	} while (user != 'n' || user != 'N');
	back_button(); // back button
}

// ---> 18. Rankine To Fahrenheit
void rankine_to_fahrenheit()
{
	cout << "     Convert Rankine To Fahrenheit 🌡:~\n     •••••••••••••••••••••••••••••••••••\n"
		 << endl;
	char user; // user input

	do
	{				 // loop for repeating
		double temp; // store temperature

		cout << "  Enter Rankine Temperature: ";
		cin >> temp;
		// Rankine to Fahrenheit formula
		double ans = temp - 459.67;
		cout << "  After converting🌡...\n  " << temp << "°Ra = " << ans << "°F\n"
			 << endl;
		do
		{ // this loop for preventing wrong input
			cout << "  Do you want to convert again (y/n) : ";
			cin >> user;
			cout << endl;
			if (user == 'n' || user == 'N' || user == 'y' || user == 'Y')
			{
				break;
			}
		} while (user != 'n' || user != 'N' || user != 'y' || user != 'Y');
		if (user == 'n' || user == 'N')
		{
			break; // exit loop
		}

	} while (user != 'n' || user != 'N');
	back_button(); // back button
}

// ---> 19. Rankine To Kelvin
void rankine_to_kelvin()
{
	cout << "     Convert Rankine To Kelvin 🌡:~\n     ••••••••••••••••••••••••••••••••\n"
		 << endl;
	char user; // user input

	do
	{				 // loop for repeating
		double temp; // store temperature

		cout << "  Enter Rankine Temperature: ";
		cin >> temp;
		// Rankine to Kelvin formula
		double ans = temp * 5 / 9;
		cout << "  After converting🌡...\n  " << temp << "°Ra = " << ans << "°K\n"
			 << endl;
		do
		{ // this loop for preventing wrong input
			cout << "  Do you want to convert again (y/n) : ";
			cin >> user;
			cout << endl;
			if (user == 'n' || user == 'N' || user == 'y' || user == 'Y')
			{
				break;
			}
		} while (user != 'n' || user != 'N' || user != 'y' || user != 'Y');
		if (user == 'n' || user == 'N')
		{
			break; // exit loop
		}

	} while (user != 'n' || user != 'N');
	back_button(); // back button
}

// ---> 20. Rankine To reaumur
void rankine_to_reaumur()
{
	cout << "     Convert Rankine To Reaumur 🌡:~\n     ••••••••••••••••••••••••••••••••\n"
		 << endl;
	char user; // user input

	do
	{				 // loop for repeating
		double temp; // store temperature

		cout << "  Enter Rankine Temperature: ";
		cin >> temp;
		// Rankine to Reaumur formula
		double ans = (temp - 491.67) / 2.25;
		cout << "  After converting🌡...\n  " << temp << "°Ra = " << ans << "°Re\n"
			 << endl;
		do
		{ // this loop for preventing wrong input
			cout << "  Do you want to convert again (y/n) : ";
			cin >> user;
			cout << endl;
			if (user == 'n' || user == 'N' || user == 'y' || user == 'Y')
			{
				break;
			}
		} while (user != 'n' || user != 'N' || user != 'y' || user != 'Y');
		if (user == 'n' || user == 'N')
		{
			break; // exit loop
		}

	} while (user != 'n' || user != 'N');
	back_button(); // back button
}

void temp_info(); //only declaration

// ---> main function
int main()
{
	int input; // store user input
	do
	{
		menu();
		do
		{ // this loop for users wrong input
			cout << "   INPUT: ";
			cin >> input;
			cout << endl;
			if (input > 0 && input <= 22)
			{
				break;
			}

		} while (input <= 0 || input > 22);
		// ---> Switch Cases
		switch (input)
		{
		case 1:
			celsius_to_fahrenheit();
			break;
		case 2:
			celsius_to_kelvin();
			break;
		case 3:
			celsius_to_reaumur();
			break;
		case 4:
			celsius_to_rankine();
			break;
		case 5:
			fahrenheit_to_celsius();
			break;
		case 6:
			fahrenheit_to_kelvin();
			break;
		case 7:
			fahrenheit_to_reaumur();
			break;
		case 8:
			fahrenheit_to_rankine();
			break;
		case 9:
			kelvin_to_celsius();
			break;
		case 10:
			kelvin_to_fahrenheit();
			break;
		case 11:
			kelvin_to_reaumur();
			break;
		case 12:
			kelvin_to_rankine();
			break;
		case 13:
			reaumur_to_celsius();
			break;
		case 14:
			reaumur_to_fahrenheit();
			break;
		case 15:
			reaumur_to_kelvin();
			break;
		case 16:
			reaumur_to_rankine();
			break;
		case 17:
			rankine_to_celsius();
			break;
		case 18:
			rankine_to_fahrenheit();
			break;
		case 19:
			rankine_to_kelvin();
			break;
		case 20:
			rankine_to_reaumur();
			break;
		case 21:
			temp_info();
			break;
		case 22: // exit case
			cout << "                ❤THANKS FOR VISITING❤\n                ------------------------\n"
				 << endl;
			cout << "   Exiting... \n   Exiting... \n   Exiting... \n"
				 << endl;
			break;
		default: // default case
			cout << "    PLEASE GIVE AVAILABLE INPUT\n"
				 << endl;
		}

	} while (input != 22);
	return 0;
}

// ---> 21. Temperature Information
void temp_info()
{ // information about temperature scale and their conversation formula.
	cout << "  <------------- TEMPERATURE CONVERTER ------------->\n                 ~~~~~~~~~~~~~~~~~~~~~\n\n          😀welcome To Temperature Converter😀\n          -------------------------------------\n"
		 << endl;
	cout << "     TEMPERATURE SCALES 🌡\n    〰️〰️〰️〰️〰️〰️〰️〰️〰️〰️〰️\n"
		 << endl;
	cout << "    Temp. Scales       Low Temp.       High Temp. \n    ------------       ---------       ----------\n\n    CELSIUS(°C)         0°C             100°C\n    FAHRENHEIT(°F)      32°F            212°F\n    KELVIN(°K)          273.15°K        373°K\n    REAUMUR(°Re)        0°Re            80°Re\n    RANKINE(°R,°Ra)     491.67°Ra       671.67°Ra\n"
		 << endl;
	cout << "     CONVERTION FORMULA 🧪\n    〰️〰️〰️〰️〰️〰️〰️〰️〰️〰️〰️\n"
		 << endl;

	cout << "   1) CELSIUS TO FAHRENHEIT :- \n       °F = (°C*9/5)+32  \n\n   2) CELSIUS TO KELVIN :- \n       °K = °C+273.15\n\n   3) CELSIUS TO REAUMUR :- \n       °Re = °C*4/5 \n\n   4) CELSIUS TO RANKINE :- \n       °Ra = (°C*9/5)+491.67 \n\n"
		 << endl;

	cout << "   5) FAHRENHEIT TO CELSIUS :- \n       °C = (°F-32)*5/9  \n\n   6) FAHRENHEIT TO KELVIN :- \n       °K = (°F-32)*5/9+273.15\n\n   7) FAHRENHEIT TO REAUMUR :- \n       °Re = (°F-32)*4/9 \n\n   8) FAHRENHEIT TO RANKINE :- \n       °Ra = °F+459.67 \n\n"
		 << endl;

	cout << "   9) KELVIN TO CELSIUS :- \n       °C = °K-273.15 \n\n   10) KELVIN TO FAHRENHEIT :- \n       °F = (°K-273.15)*9/5+32\n\n   11) KELVIN TO REAUMUR :- \n       °Re = (°K-273.15)*4/5 \n\n   12) KELVIN TO RANKINE :- \n       °Ra = °K*1.8\n\n"
		 << endl;

	cout << "   13) REAUMUR TO CELSIUS :- \n       °C = °Re*5/4  \n\n   14) REAUMUR TO FAHRENHEIT :- \n       °F = (°Re*9/4)+32\n\n   15) REAUMUR TO KELVIN :- \n       °K = (°Re*5/4)+273.15\n\n   16) REAUMUR TO RANKINE :- \n       °Ra = (°Re*2.25)+491.67\n\n"
		 << endl;

	cout << "   17) RANKINE TO CELSIUS :- \n       °C = (°Ra-491.67)*5/9 \n\n   18) RANKINE TO FAHRENHEIT :- \n       °F = °Ra-459.67\n\n   19) RANKINE TO KELVIN :- \n       °K = °Ra*5/9 \n\n   20) RANKINE TO REAUMUR :- \n       °Re = (°Ra-491.67)/2.25\n\n"
		 << endl;
	cout << "                 ❤THANKS FOR VISIT❤\n                 ---------------------\n"
		 << endl;
	back_button();
}
// ---> THE END 😮‍💨