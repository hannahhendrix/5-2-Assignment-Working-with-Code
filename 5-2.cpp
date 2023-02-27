//Hannah Hendrix
//1-14-2023
//5-2 Assignment
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream inFS; //input file stream
  ofstream outFS; //output file stream
  string city;
  int tempFarenheit;
  double tempCelsius;
  inFS.open("FahrenheitTemperature.txt");
  if (!inFS.is_open()) {
    cout << "Could not open FahrenheitTemperature.txt." << endl;
    return 1;
  }
  while(inFS >> city >> tempFarenheit) {
    tempCelsius = (tempFarenheit - 32) * ((double) 5 / (double) 9);
    outFS << city << " " << tempCelsius << endl;
  }

  inFS.close();
  outFS.close();
  return 0;
}
