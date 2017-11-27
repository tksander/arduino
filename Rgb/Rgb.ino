/*
Adafruit Arduino - Lesson 3. RGB LED
*/


int redPin = 11;
int greenPin = 10;
int bluePin = 9;

//uncomment this line if using a Common Anode LED
#define COMMON_ANODE

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}

void loop()
{
//  allColors(100);
//  hanukkah();
  randomColor(1000);
   setColor(255, 255, 255);  // white
  delay(100);
}

void setColor(int red, int green, int blue)
{
  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}

void allColors(int waitMs)
{
    setColor(255, 0, 0);  // red
  delay(waitMs);
  setColor(0, 255, 0);  // green
  delay(waitMs);
  setColor(0, 0, 255);  // blue
  delay(waitMs);
  setColor(255, 255, 0);  // yellow
  delay(waitMs);  
  setColor(80, 0, 80);  // purple
  delay(waitMs);
  setColor(0, 255, 255);  // aqua
  delay(waitMs);
}

void hanukkah(void)
{
    setColor(0, 0, 255);  // blue
  delay(100);
    setColor(0, 0, 0);  // white
  delay(100);
}

void randomColor(int waitMs)
{
  genColor();
  delay(waitMs);
}
void genColor()
{
  int r, g, b;
  r = genNumber();
  g = genNumber();
  b = genNumber();

  setColor(r, g, b);
}

int genNumber()
{
//  #define UPPER_BOUND;
  int rando;
  int UPPERBOUND = 255;
  rando = random(255);
  return rando;
}

