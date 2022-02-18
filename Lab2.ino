//**************************//
// Skeleton code of LAB 2   //
//**************************//
// Task 1: Grayscale Sensor
//  Description:
//    - Distinguish two different colors
//  Connection:
//    (Arduino) D5  -> (Grayscale) SIG
//===============================================
// Task 2: Ultrasonic Sensor
//  Description:
//    - Scanning obstacle of 180 degree area and 2-800 cm detecting range
//    - PWM triggered measurement mode
//  Connection:
//    (Arduino) VCC -> (URM37) VCC
//    (Arduino) VCC -> (URM37) GND
//    (Arduino) D2  -> (URM37) COMP/TRIG
//    (Arduino) D4  -> (URM37) ECHO
//===============================================
// Bonus Task:
//  Description:
//    - LED blinks faster when an obstacle move closer
//    - Start blinking from obstacle distance <= 30cm
//  Connection:
//    (Arduino) D3  -> LED -> Resistor 2k ohm -> GND
//================================================
#define GRAYSCALE_SIG 5
#define URM_TRIG      2
#define URM_ECHO      4
#define LED_PIN       3

void setup() {
  Serial.begin(9600);           // Set baud rate as 9600
  pinMode(GRAYSCALE_SIG, INPUT);    // Set SIG as input
  
  pinMode(URM_TRIG, OUTPUT);    // Set COMP/TRIG as output
  digitalWrite(URM_TRIG, HIGH); // Initial output: HIGH
  pinMode(URM_ECHO, INPUT);     // Set ECHO as input
  
  pinMode(LED_PIN, OUTPUT);
  Serial.println("URM37 sensor is initialized!");
}

void loop() {
  task1();                // application of grayscale sensor - comment out after demo to TA
  //task2();              // application of URM37 ultrasonic sensor - uncomment after task 1 finished
  //bonustask(task2());   // modify task2() function with a return value of obstacle distance
  delay(200);
}

void task1(){
  // For digital mode of grayscale sensor, after setting procedures,
  // SIG will output HIGH or LOW to represent two different colors
  // read the GRAYSCALE_SIG pin
 
  // check the read value and print out the color detected

}

// Uncomment this task2() function if task 1 finished
/*
void task2(){
  // Send out a LOW pulse to URM_TRIG (HIGH -> LOW -> HIGH)
  digitalWrite( , );
  
  // Get the low level pulse width of URM_ECHO by pulseIn();
  unsigned long echo_low_time = pulseIn( , );

  // According to datasheet, time > 50000us is invalid
  if (echo_low_time >= 50000){
    Serial.println("Invalid value!");
  }else{
    // As every 50us = 1cm distance, calculate the distance from echo_low_time
    unsigned int distance = ;
    
    // print out the obstacle distance in cm to serial monitor
    
  }
}
*/

// Uncomment this bonustask() function if task 2 finished
// By using the return value from modified version of task 2 (i.e. obstacle distance),
// LED starts to blink if there is an obstacle within 30cm
// LED blinks faster when obstacle move closer
/*
void bonustask(unsigned int obstacle_distance){

}
*/
