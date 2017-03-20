// mini iOT projects
// created by superoo7 19/3/2017

// from Light dependant resistor take analog value to put in database
// mainly for iot purpose

// In arduino
// Connect LDR pin with 10k ohms parallel to A0 pin
// to create a potential difference for the ldr to sense value
// in Arduino analog pin


int LDR_Pin = A0; //analog pin 0

void setup() {
   Serial.begin(9600); //Baud rate: 9600

}

void loop() {
  int LDRReading = analogRead(LDR_Pin); 

  Serial.println(LDRReading);
  delay(250); //just here to slow down the output for easier reading
}
