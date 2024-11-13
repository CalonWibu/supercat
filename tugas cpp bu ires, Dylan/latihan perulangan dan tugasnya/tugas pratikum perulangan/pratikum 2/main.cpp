#include <iostream>

using namespace std;

int main() {
	//° nya eror
    cout << "°C\t\t°F\t\t°R\t\t°K" << endl;
    cout << "------------------------------------------------------" << endl;
	//rumus 
    for (int celcius = 10; celcius <= 100; celcius += 10) {
        float fahrenheit = (celcius * 9.0 / 5) + 32;
        float reamur = celcius * 4.0 / 5;
        float kelvin = celcius + 273.15;

        
        cout << celcius << "\t\t" 
             << fahrenheit << "\t\t" 
             << reamur << "\t\t" 
             << kelvin << endl;
    }

    cout << "------------------------------------------------------" << endl;
}

