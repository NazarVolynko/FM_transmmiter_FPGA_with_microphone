//Copyright (c) 2020 Nazar Volynko

int buffer[512];

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(230400);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  for (int i =0;i< 512;i++){
      buffer[i]=analogRead(A0);
    }
  delay(50);
  for (int i =0;i< 512;i++){
      Serial.println((float)(buffer[i] * (5.0 / 1023.0)));
    }
}
