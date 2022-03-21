/* Blink
 *
 *      Turns on an LED on for one second, then off for one second, repeatedly
 *
 *      This example code is in the public domain.
 */

/* Pin 13 has an LED connected on most Arduino boards. Give it a name: */
int led = 13;

/**
 * setup - This routine runs once when you press reset:
 *
 * Return: Nothing
 */
void setup() {
    /* initialize the digital pin as an output */
    pinMode(led, OUTPUT);
}

/**
 * loop - This routine runs over and over again forever
 *
 * Return: Nothing
 */
void loop() {
    digitalWrite(led, HIGH);   /* turn the LED on (HIGH is the voltage level */
    delay(3000);               /* wait for a second */
    digitalWrite(led, LOW);    /* turn the LED off by making the voltage LOW */
    delay(4000);               /* wait for a second */
}
