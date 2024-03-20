#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <SPI.h>
#include <Wire.h>

#define screenWidth 128 
#define screenHeight 64 

Adafruit_SSD1306 display(screenWidth,screenHeight,&Wire,-1);

int mouthRadius=5;
int change=1;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  if(!display.begin(SSD1306_SWITCHCAPVCC,0x3C)){
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
}


void loop() {
 

  display.clearDisplay();
  display.drawCircle(50,30,30,WHITE);
  display.display();
  delay(1000);

   display.clearDisplay();
   display.fillCircle(50,30,30,WHITE);
   display.display();
   delay(1000);

  if(mouth_radius==15){
    change=-1;
    display(5000);
  }

  else if(mouth_radius==5){
        change=1;
  }

  mouth_radius=mouth_radius+change
  


}