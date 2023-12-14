// C++ code
// Variablen
	int LEDgruen = 8;
	int LEDgelb = 7;
	int pause = 500;
// Setup
	void setup(){
		pinMode(LEDgruen,OUTPUT);
      	pinMode(LEDgelb,OUTPUT);
	}
// Loop (Hauptprogram)
	void loop(){
		digitalWrite(LEDgruen,HIGH);
      	digitalWrite(LEDgelb,LOW);
      	delay(pause);
      	digitalWrite(LEDgruen, LOW);
      	digitalWrite(LEDgelb, HIGH);
      	delay(pause);
	}