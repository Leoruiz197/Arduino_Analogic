 int ledPin = 3;
 int analogPin = 0;
 int val = 0;
 
 void setup()
 { 
    pinMode(ledPin, OUTPUT); 
   	Serial.begin(9600);
 }
 
 void loop()
 {
    val = analogRead(analogPin);
   	Serial.println(val);
    analogWrite(ledPin, val / 4);
 }