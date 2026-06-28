

#include <iostream>
using namespace std;

double calculatePower (double voltage, double current){

	return voltage * current; // power = voltage * current 
		
}




// function to caalculate power in a circuit 
int main(){
	double voltage, current;
	
	//Input voltage and current from user 
	cout << "Enter voltage {in Volts}: ";
	cin >> voltage;
	cout << "Enter current {in Amperes}: ";
	cin >> current;
	
	// Calculate power 
	double power = calculatePower (voltage, current);
	
	// Dispaly the results 
	cout << "The power in the circuit is: " <<power<<"watts"<<endl;
	
	
	return 0;
	
}
 
 
