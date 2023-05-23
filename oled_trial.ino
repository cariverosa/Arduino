#include <SPI.h>
#include <Wire.h>

#include <Adafruit_SSD1306.h>

#define OLED_RESET -1
Adafruit_SSD1306 display(128,64, &Wire,OLED_RESET);

int r = 0;
int i = 0;
int ADJ_PIN = 0;
void setup()   {


  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initialize with the I2C addr 0x3C (for the 128x32)

  // i'll follow the license agreement and display the Adafruit logo
  // and since they were nice enough to supply the libraries
  display.clearDisplay();
  display.display();
  delay (1000);

  DrawTitles();

}


void loop() {

  // get some dummy data to display


  r = rand() / 220;
  r = analogRead(ADJ_PIN);
  r = r / 7.98;

  display.setTextSize(2);
  // note set the background color or the old text will still display
  display.setTextColor(WHITE, BLACK);
  display.setCursor(0, 33);
  display.println(Format(r * 7.99 / 204.6, 3, 2));

  //draw the bar graph
  display.fillRect(r, 50, 128 - r, 10, BLACK);
  display.fillRect(3, 50, r, 10, WHITE);

  for (i = 1; i < 13; i++) {
    display.fillRect(i * 10, 50, 2, 10, BLACK);
  }

  // now that the display is build, display it...
  display.display();


}


void DrawTitles(void) {

  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("Bar Graph");

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 19);
  display.println("Measured Volts");
  //display.println("Random number");
  display.display();

}


//String Format(double val, int dec, int dig ) {

  // this is my simple way of formatting a number
  // data = Format(number, digits, decimals) when needed

  //int addpad = 0;
  //char sbuf[20];
  //String fdata = (dtostrf(val, dec, dig, sbuf));
  //int slen = fdata.length();
  //for ( addpad = 1; addpad <= dec + dig - slen; addpad++) {
    //fdata = " " + fdata;
  //}
  //return (fdata);

//}
