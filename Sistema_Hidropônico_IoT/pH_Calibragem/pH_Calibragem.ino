#define pH4502C 34

void setup() { 
  // initialize serial communication at 9600 bits per second: 
  Serial.begin(115200);
  analogReadResolution(10);
} 

// the loop routine runs over and over showing the voltage on A0 
void loop() { 
  // read the input on analog pin 0: 
  int sensorValue = analogRead(pH4502C);

  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V): 
  float voltage = sensorValue * (3.3 / 1023.0); 

  // print out the value you read:
  Serial.print("ADC: ");
  Serial.print(sensorValue);
  Serial.print("    |    Tensão: ");
  Serial.println(voltage); 
  delay(100); 
}