
/*
 * 
 RFID READER    --------   Arduino 
SDA------------------------Digital 10

SCK------------------------Digital 13

MOSI----------------------Digital 11

MISO----------------------Digital 12

IRQ------------------------unconnected

GND-----------------------GND

RST------------------------Digital 9

3.3V------------------------3.3V (DO NOT CONNECT TO 5V) 
 */
#include <SPI.h>
#define SS_PIN 10
#define RST_PIN 9

void setup() {
  Serial.begin(9600);
  SPI.begin();
  while(!Serial); // wait for port to connect
  Serial.println("Starting Program");
 
}

void loop() {
  // put your main code here, to run repeatedly:

}
