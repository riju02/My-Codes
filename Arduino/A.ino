#define sensorDigital 2
#define LED1 4
#define LED2 5
#define LED3 6
#define buzzer 3
#define sensorAnalog A1

void setup()
{
    pinMode(sensorDigital, INPUT);
    pinMode(LED3, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED1, OUTPUT);
    pinMode(buzzer, OUTPUT);
    Serial.begin(9600);
}
void loop()
{
    bool digital = digitalRead(sensorDigital);
    int analog = analogRead(sensorAnalog);

    Serial.print("Analog value : ");
    Serial.print(analog);
    Serial.print("t");
    Serial.print("Digital value :");
    Serial.println(digital);

    if (analog > 400)
    {
        digitalWrite(LED3, HIGH);
        digitalWrite(LED2, HIGH);
        digitalWrite(LED1, HIGH);
        analogWrite(buzzer, 200);
    }
    else
    {
        digitalWrite(LED3, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED1, LOW);
        digitalWrite(buzzer, LOW);
    }
    // delay(2000);

    if (analog > 300)
    {
        digitalWrite(LED1, HIGH);
        digitalWrite(LED2, HIGH);
    }
    // delay(2000);

    if (analog > 200)
    {
        digitalWrite(LED1, HIGH);
    }
    delay(1000);
}