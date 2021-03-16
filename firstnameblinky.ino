// ------------
// Blink an LED
// ------------

int led1 = D6; // Instead of writing D0 over and over again, we'll write led1
// You'll need to wire an LED to this one to see it blink.

int multiplier = 2; // Manipulates the timing of the blinks.

void setup() {

    pinMode(led1, OUTPUT); 

}

// A procedure that produces a dash.
void line() {
    digitalWrite(led1, HIGH);
    delay(120 * multiplier);
    digitalWrite(led1, LOW);
    delay(120 * multiplier);
}

// A procedure that produces a dit.
void dot() {
    digitalWrite(led1, HIGH);
    delay(40 * multiplier);
    digitalWrite(led1, LOW);
    delay(40 * multiplier);
}

// A procedure that produces spacing between the dashes and dits.
void space() {
    delay(120 * multiplier);
}

void loop() {
    line(); //
    dot();  // D
    dot();  //
    
    space();
    
    dot();  // A
    line(); //
    
    space();
    
    line(); // N
    dot();  //
    
    space();
    
    dot();  // I
    dot();  //
    
    space();
    
    dot(); // E
    
    space();
    
    dot(); // L
    line();//
    dot(); //
    dot(); //
    
    delay(1000); // Stops for 1 second to indicate end of morse code message.
}