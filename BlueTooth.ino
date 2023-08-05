char orden;
const byte led1 = 13;
const byte led2 = 8;

void setup() {
	Serial.begin(9600);
	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);
}

void loop() {
	if (Serial.available() > 0){
		orden = Serial.read();
		Serial.println(orden);
	}

	switch(orden){
		case 'A':
		digitalWrite(led1, HIGH);
		break;
		case 'B':
		digitalWrite(led1, LOW);
		break;
		case 'C':
		digitalWrite(led2, HIGH);
		break;
		case 'D':
		digitalWrite(led2, LOW);
		break;
	}
}
