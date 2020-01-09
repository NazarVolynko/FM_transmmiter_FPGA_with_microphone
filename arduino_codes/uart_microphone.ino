//Copyright (c) 2020 Nazar Volynko

int buffer;

void setup() {
  Serial.begin(230400);
}

void loop() {

  buffer = analogRead(A0);
  Serial.write(buffer);
  
}
