/* PWM Fan control
 * ------------------ 
 *
 * Uses 4 wire fans from rack mount servers and potentiameter 
 * to leverage pwm to control speed.
 *
 * Created 1 December 2005
 * copyleft 2005 DojoDave <http://www.0j0.org>
 * http://arduino.berlios.de
 *
 */

int potPin = 2;    // select the input pin for the potentiometer
int pwmPin = 13;   // select the pin for the LED
int val = 0;       // variable to store the value coming from the sensor


void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
  int pwmSignal = analogRead(potPin);    // read the value from the sensor
  digitalWrite(pwmPin, HIGH);
  delayMicroseconds(pwmSignal); // Approximately 10% duty cycle @ 1KHz
  digitalWrite(pwmPin, LOW);
}
