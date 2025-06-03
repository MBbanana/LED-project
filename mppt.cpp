#include <iostream>
using namespace std; 

// vairables 
float previousPower = 0.0; // power calculated in the last iteration
float previousVoltage = 0.0; // both remember the last measurement to compare it with the current one
float dutyCycle = 0.5; // This controls the DC-DC converter representing how much on time the PWM signal has
const float stepSize =0.01; // gradually adjusts the duty cycle by a certain amount on each iteration

//simulates readings for this example we use dummy values but in the real world would be real ac values
float readVoltage(){
    return 18.0; 
}

float readCurrent(){
     return 2.0; 
}

/**setting the duty cycle  where the function updates the duty cycle and keeps it between 0 and 1(0-100%)
 this configures the PWM output**/

/* This section of the code limits the duty cycle between 0 - 1 then proceeds to print it to the console. */ 
void setDutyCycle( float dc){
     if(dc > 1.0) dc = 1.0; 
     if (dc < 0.0) dc = 0.0; 
     dutyCycle = dc; 
     cout << "Duty cycle is set to " << dutyCycle << endl; 
}

/*If the power is increased from the previous step it keeps going in the same direction 
and if the power decreases the power goes in the opposite direction*/
void mpptperturbanddisturb() { 

    float voltage = readVoltage(); 
    float current = readCurrent(); 
    float power = voltage * current; 

    float deltaPower = power - previousPower; 
    float deltavoltage = voltage - previousVoltage; 

    if(deltaPower > 0){ 
        if(deltavoltage > 0)
        dutyCycle += stepSize; 
         else 
        dutyCycle -= stepSize; 
         } else {

        if(deltavoltage > 0)
        dutyCycle -= stepSize; 
          else 
        dutyCycle += stepSize; 
         } 

    setDutyCycle(dutyCycle); 
    previousPower = power; 
    previousVoltage = voltage; 

    }


// runs the mppt loop 10 times 
int main(){ 
    for (int i = 0; i < 10; ++i){ 
        mpptperturbanddisturb(); 

    }
    return 0; 
}
