#include <iostream>
#include <chrono>


double converterBody(double temp, char conversionMethod){

switch(conversionMethod){
    case 'A':
    return (temp * 9.0 / 5.0) + 32;
    break;
    case 'B':
    return (temp - 32) * 5.0 / 9.0;
    break;

    default:
    std::cout << "ERROR: Invalid conversion method!" << std::endl;
    return temp;
}

return 0;
}

int main(){

 int exitVariable; double temp = 0; double convertedTemp; char conversionMethod;

 while(1){

    std::cout << "To exit, please type 0. If not, just enter 1." << std::endl;
    std::cin >> exitVariable;

    if(exitVariable == 0){
        std::cout << "Got it. Quitting..." << std::endl;
        break;
    }

 std::cout << "To convert from Celsius to Fahrenheit, enter A. To convert from Fahrenheit to Celsius, enter B" << std::endl;
 std::cin >> conversionMethod;

 std::cout << "How much is the temperature? " << std::endl;
 std::cin >> temp;

 auto start = std::chrono::high_resolution_clock::now();
 convertedTemp = converterBody(temp, conversionMethod);
 auto end = std::chrono::high_resolution_clock::now();
 std::chrono::duration<double, std::nano> duration = end - start;

    std::cout << "The converted temperature is: " << convertedTemp << std::endl;
    std::cout << "Time taken for conversion is " << duration.count() << " Nano seconds." << std::endl;

 }
    return 0;
}