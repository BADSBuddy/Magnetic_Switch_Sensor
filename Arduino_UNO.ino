const int buzzer = 3; 
const int sensor = 4;

int state; // 0 close - 1 open wwitch

void setup()
{
	pinMode(sensor, INPUT_PULLUP);
}

void loop()
{
	state = digitalRead(sensor);
	
	if (state == HIGH){
		alarm();
	}
	else{
		noTone(buzzer);
	}
}
void alarm()
{
  for(int e=0;e<5;e++)
  {
    digitalWrite(buzzer, HIGH);
    delay(50);
    digitalWrite(buzzer, LOW);
    delay(50);
  }
}
