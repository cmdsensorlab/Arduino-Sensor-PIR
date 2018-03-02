//PIR-SENSOR QUICK START GUIDE
//PROVIDED BY THE CMD SENSORLAB CREW
//CREATED ON 2-3-2018
//V1.0
//DON'T PANIC

int inputPin = 2;       //declare input of sensorpin
int val = 0;            //value for reading data, starting value 0
 
void setup() {
  pinMode(inputPin, INPUT);         //declaring pin 2 as an INPUT
  Serial.begin(9600);               //bits per second for communicating with computer
}
 
void loop(){
  val = digitalRead(inputPin);      //declaring inputPin as a digital sensor
  Serial.println(val);              //Reading the data in de serial monitor
}
