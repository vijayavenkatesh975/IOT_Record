// Interfacing Buzzer with Arduino UNO
#define BUZZER 5
#define FREQUENCY 200
void setup()
{
pinMode(BUZZER, OUTPUT);
}
void loop()
{
tone(BUZZER,FREQUENCY);
delay(500);
noTone(BUZZER);
delay(500);
}