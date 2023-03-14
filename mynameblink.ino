// We define MY_LED to be the LED that we want to blink.

const pin_t MY_LED = D7;


// This allows your code to run before the cloud is connected. 
SYSTEM_THREAD(ENABLED);

// The setup() method is called once when the device boots.
void setup()
{
    // telling the device OS what the output pin is
	pinMode(MY_LED, OUTPUT);
}


void loop()
{
	//My first name is 'Kulzum' 
	//it will be represented with dots and dashes 
	//a dot is LED being on for 1s and a dash is the LED being ON for 4s.
	
	//Letter 'k'
	digitalWrite(MY_LED, HIGH);
    delay(4s);
    digitalWrite(MY_LED, LOW);
	delay(1s);
    digitalWrite(MY_LED, HIGH);
    delay(1s);
    digitalWrite(MY_LED, LOW);
    delay(1s);
    digitalWrite(MY_LED, HIGH);
    delay(4s);
    
    //delay between letters
    digitalWrite(MY_LED, LOW);
    delay(2s); 
    
    //Letter 'U'
    digitalWrite(MY_LED, HIGH);
    delay(1s);
    digitalWrite(MY_LED, LOW);
	delay(1s);
    digitalWrite(MY_LED, HIGH);
    delay(1s);
    digitalWrite(MY_LED, LOW);
    delay(1s);
    digitalWrite(MY_LED, HIGH);
    delay(4s);
    
    //delay between letters 
    digitalWrite(MY_LED, LOW);
    delay(2s);
    
    //Letter 'L'
    digitalWrite(MY_LED, HIGH);
    delay(1s);
    digitalWrite(MY_LED, LOW);
	delay(1s);
    digitalWrite(MY_LED, HIGH);
    delay(4s);
    digitalWrite(MY_LED, LOW);
    delay(1s);
    digitalWrite(MY_LED, HIGH);
    delay(1s);
    digitalWrite(MY_LED, HIGH);
    delay(1s);
    
    //delay between letters 
    digitalWrite(MY_LED, LOW);
    delay(2s);
    
    //Letter 'Z'
    digitalWrite(MY_LED, HIGH);
    delay(4s);
    digitalWrite(MY_LED, LOW);
    delay(1s);
    digitalWrite(MY_LED, HIGH);
    delay(4s);
    digitalWrite(MY_LED, LOW);
    delay(1s);
    digitalWrite(MY_LED, HIGH);
    delay(1s);
    digitalWrite(MY_LED, LOW);
    delay(1s);
    digitalWrite(MY_LED, HIGH);
    delay(1s);
    digitalWrite(MY_LED, LOW);
    
    
    //delay between letters 
    digitalWrite(MY_LED, LOW);
    delay(2s);
    
    //Letter 'U'
    digitalWrite(MY_LED, HIGH);
    delay(1s);
    digitalWrite(MY_LED, LOW);
	delay(1s);
    digitalWrite(MY_LED, HIGH);
    delay(1s);
    digitalWrite(MY_LED, LOW);
    delay(1s);
    digitalWrite(MY_LED, HIGH);
    delay(4s);
    
    //delay between letters 
    digitalWrite(MY_LED, LOW);
    delay(2s);
    
    //Letter M 
    digitalWrite(MY_LED, HIGH);
    delay(4s);
    digitalWrite(MY_LED, LOW);
    delay(1s);
    digitalWrite(MY_LED, HIGH);
    delay(4s);
    
    //delay
    digitalWrite(MY_LED, LOW);
    delay(2s);
    // And repeat!
} 