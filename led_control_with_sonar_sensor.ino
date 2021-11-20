const int trigPin = 9;
const int echoPin = 10;
const int led1 = 7;
const int led2 = 6;
const int led3 = 5;

long speed_of_sound;
int distance;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(trigPin, LOW);
  delay(20);
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);
  speed_of_sound = pulseIn(echoPin, HIGH);
  distance = speed_of_sound*.03/2;
  Serial.print("Distance: ");
  Serial.println(distance);
  if(distance<10){
    digitalWrite(led1, HIGH);
    }
  else{
    digitalWrite(led1, LOW);
    }
  if(distance>=11 and distance<15){
    digitalWrite(led2, HIGH);
    }
  else{
    digitalWrite(led2, LOW);
  }
  if(distance>=15){
    digitalWrite(led3, HIGH);
    }
  else{
    digitalWrite(led3, LOW);
  }
  delay(1000);

}
