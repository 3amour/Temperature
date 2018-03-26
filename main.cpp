#include <iostream>
using namespace std;

int toFahre( int celsius )
{

return ( ( 9.0 / 5 ) * celsius + 32 );

}

int main()
{
int celsius;
int fahrenheit;

celsius = 100;
while ( ( fahrenheit = toFahre( celsius ) ) != celsius )
    celsius--;

cout << "celsius temperature = " << celsius
<< ", fahrenheit temperature = " << fahrenheit
<< endl;

return 0;
}



