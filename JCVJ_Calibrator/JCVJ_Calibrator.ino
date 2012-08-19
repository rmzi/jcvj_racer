// Jean Claude Van Jam
// Name: TBA
// Author: Ramzi Abdoch
// Team: Carl Majeau, Jackson Lin, Marie Rudnicki
// August 19th, 2012

int Rbutton = 2, Bbutton = 3, Gbutton = 4, Tbutton = 5;
int Lsensor = 1, Rsensor = 0;

//int SENSOR_THRESHOLD =  

boolean Rb, Bb, Gb, Tb, Ls, Rs;

void setup(){
  Serial.begin(9600);
  pinMode(Rbutton, INPUT);
  pinMode(Bbutton, INPUT);
  pinMode(Gbutton, INPUT);
  pinMode(Tbutton, INPUT);
  Rb = Bb = Gb = Tb = Ls = Rs = false;
}

void loop(){
  Serial.println("Left Sensor :");
  int lsv = analogRead(Lsensor);
  Serial.println(lsv - 1000);
  Serial.println("Right Sensor :");
  int rsv = analogRead(Rsensor);
  Serial.println(rsv - 1000);
  delay(1000);
}



