#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define PIN 4
#define LICZBADIOD 112

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(LICZBADIOD, PIN, NEO_GRB + NEO_KHZ800);
int offset;


void cyfra (int poz, int cyfry, int red, int green, int blue)
{

  if (poz==1)
  {
    offset=0;
  }
  if (poz==2)
  {
    offset=28;
  }
  if (poz==3)
  {
    offset=56;
  }
  if (poz==4)
  {
    offset=84;
  }

  switch (cyfry) {
    case 0:
      for(int i=0+offset; i<24+offset; i++)
      {
        pixels.setPixelColor(i, red,green,blue);
      }
      break;
    case 1:
      // C
      pixels.setPixelColor(0+offset, red, green, blue);
      pixels.setPixelColor(1+offset, red, green, blue);
      pixels.setPixelColor(2+offset, red, green, blue);
      pixels.setPixelColor(3+offset, red, green, blue);
      //B
      pixels.setPixelColor(20+offset, red, green, blue);
      pixels.setPixelColor(21+offset, red, green, blue);
      pixels.setPixelColor(22+offset, red, green, blue);
      pixels.setPixelColor(23+offset, red, green, blue);
      break;
    case 2:
      //A
      pixels.setPixelColor(16+offset, red, green, blue);
      pixels.setPixelColor(17+offset, red, green, blue);
      pixels.setPixelColor(18+offset, red, green, blue);
      pixels.setPixelColor(19+offset, red, green, blue);
      //B
      pixels.setPixelColor(20+offset, red, green, blue);
      pixels.setPixelColor(21+offset, red, green, blue);
      pixels.setPixelColor(22+offset, red, green, blue);
      pixels.setPixelColor(23+offset, red, green, blue);
      //G
      pixels.setPixelColor(24+offset, red, green, blue);
      pixels.setPixelColor(25+offset, red, green, blue);
      pixels.setPixelColor(26+offset, red, green, blue);
      pixels.setPixelColor(27+offset, red, green, blue);
      //E
      pixels.setPixelColor(8+offset, red, green, blue);
      pixels.setPixelColor(9+offset, red, green, blue);
      pixels.setPixelColor(10+offset, red, green, blue);
      pixels.setPixelColor(11+offset, red, green, blue);
      //D
      pixels.setPixelColor(4+offset, red, green, blue);
      pixels.setPixelColor(5+offset, red, green, blue);
      pixels.setPixelColor(6+offset, red, green, blue);
      pixels.setPixelColor(7+offset, red, green, blue);
      break;
    case 3:
      //A
      pixels.setPixelColor(16+offset, red, green, blue);
      pixels.setPixelColor(17+offset, red, green, blue);
      pixels.setPixelColor(18+offset, red, green, blue);
      pixels.setPixelColor(19+offset, red, green, blue);
      //G
      pixels.setPixelColor(24+offset, red, green, blue);
      pixels.setPixelColor(25+offset, red, green, blue);
      pixels.setPixelColor(26+offset, red, green, blue);
      pixels.setPixelColor(27+offset, red, green, blue);
      //D
      pixels.setPixelColor(4+offset, red, green, blue);
      pixels.setPixelColor(5+offset, red, green, blue);
      pixels.setPixelColor(6+offset, red, green, blue);
      pixels.setPixelColor(7+offset, red, green, blue);
      //B
      pixels.setPixelColor(20+offset, red, green, blue);
      pixels.setPixelColor(21+offset, red, green, blue);
      pixels.setPixelColor(22+offset, red, green, blue);
      pixels.setPixelColor(23+offset, red, green, blue);
      //C
      pixels.setPixelColor(0+offset, red, green, blue);
      pixels.setPixelColor(1+offset, red, green, blue);
      pixels.setPixelColor(2+offset, red, green, blue);
      pixels.setPixelColor(3+offset, red, green, blue);
      break;
    case 4:
      //F
      pixels.setPixelColor(12+offset, red, green, blue);
      pixels.setPixelColor(13+offset, red, green, blue);
      pixels.setPixelColor(14+offset, red, green, blue);
      pixels.setPixelColor(15+offset, red, green, blue);
      //G
      pixels.setPixelColor(24+offset, red, green, blue);
      pixels.setPixelColor(25+offset, red, green, blue);
      pixels.setPixelColor(26+offset, red, green, blue);
      pixels.setPixelColor(27+offset, red, green, blue);
      //B
      pixels.setPixelColor(20+offset, red, green, blue);
      pixels.setPixelColor(21+offset, red, green, blue);
      pixels.setPixelColor(22+offset, red, green, blue);
      pixels.setPixelColor(23+offset, red, green, blue);
      //C
      pixels.setPixelColor(0+offset, red, green, blue);
      pixels.setPixelColor(1+offset, red, green, blue);
      pixels.setPixelColor(2+offset, red, green, blue);
      pixels.setPixelColor(3+offset, red, green, blue);
      break;
    case 5:
      //A
      pixels.setPixelColor(16+offset, red, green, blue);
      pixels.setPixelColor(17+offset, red, green, blue);
      pixels.setPixelColor(18+offset, red, green, blue);
      pixels.setPixelColor(19+offset, red, green, blue);
      //F
      pixels.setPixelColor(12+offset, red, green, blue);
      pixels.setPixelColor(13+offset, red, green, blue);
      pixels.setPixelColor(14+offset, red, green, blue);
      pixels.setPixelColor(15+offset, red, green, blue);
      //G
      pixels.setPixelColor(24+offset, red, green, blue);
      pixels.setPixelColor(25+offset, red, green, blue);
      pixels.setPixelColor(26+offset, red, green, blue);
      pixels.setPixelColor(27+offset, red, green, blue);
      //C
      pixels.setPixelColor(0+offset, red, green, blue);
      pixels.setPixelColor(1+offset, red, green, blue);
      pixels.setPixelColor(2+offset, red, green, blue);
      pixels.setPixelColor(3+offset, red, green, blue);
      //D
      pixels.setPixelColor(4+offset, red, green, blue);
      pixels.setPixelColor(5+offset, red, green, blue);
      pixels.setPixelColor(6+offset, red, green, blue);
      pixels.setPixelColor(7+offset, red, green, blue);
      break;
    case 6:
      //A
      pixels.setPixelColor(16+offset, red, green, blue);
      pixels.setPixelColor(17+offset, red, green, blue);
      pixels.setPixelColor(18+offset, red, green, blue);
      pixels.setPixelColor(19+offset, red, green, blue);
      //F
      pixels.setPixelColor(12+offset, red, green, blue);
      pixels.setPixelColor(13+offset, red, green, blue);
      pixels.setPixelColor(14+offset, red, green, blue);
      pixels.setPixelColor(15+offset, red, green, blue);
      //E
      pixels.setPixelColor(8+offset, red, green, blue);
      pixels.setPixelColor(9+offset, red, green, blue);
      pixels.setPixelColor(10+offset, red, green, blue);
      pixels.setPixelColor(11+offset, red, green, blue);
      //D
      pixels.setPixelColor(4+offset, red, green, blue);
      pixels.setPixelColor(5+offset, red, green, blue);
      pixels.setPixelColor(6+offset, red, green, blue);
      pixels.setPixelColor(7+offset, red, green, blue);
      //C
      pixels.setPixelColor(0+offset, red, green, blue);
      pixels.setPixelColor(1+offset, red, green, blue);
      pixels.setPixelColor(2+offset, red, green, blue);
      pixels.setPixelColor(3+offset, red, green, blue);
      //G
      pixels.setPixelColor(24+offset, red, green, blue);
      pixels.setPixelColor(25+offset, red, green, blue);
      pixels.setPixelColor(26+offset, red, green, blue);
      pixels.setPixelColor(27+offset, red, green, blue);
      break;
    case 7:
      //A
      pixels.setPixelColor(16+offset, red, green, blue);
      pixels.setPixelColor(17+offset, red, green, blue);
      pixels.setPixelColor(18+offset, red, green, blue);
      pixels.setPixelColor(19+offset, red, green, blue);
      //B
      pixels.setPixelColor(20+offset, red, green, blue);
      pixels.setPixelColor(21+offset, red, green, blue);
      pixels.setPixelColor(22+offset, red, green, blue);
      pixels.setPixelColor(23+offset, red, green, blue);
      //C
      pixels.setPixelColor(0+offset, red, green, blue);
      pixels.setPixelColor(1+offset, red, green, blue);
      pixels.setPixelColor(2+offset, red, green, blue);
      pixels.setPixelColor(3+offset, red, green, blue);
      break;
    case 8:
      for(int i=0+offset; i<32+offset; i++)
      {
        pixels.setPixelColor(i, red,green,blue);
      }
      break;
    case 9:
      //A
      pixels.setPixelColor(16+offset, red, green, blue);
      pixels.setPixelColor(17+offset, red, green, blue);
      pixels.setPixelColor(18+offset, red, green, blue);
      pixels.setPixelColor(19+offset, red, green, blue);
      //B
      pixels.setPixelColor(20+offset, red, green, blue);
      pixels.setPixelColor(21+offset, red, green, blue);
      pixels.setPixelColor(22+offset, red, green, blue);
      pixels.setPixelColor(23+offset, red, green, blue);
      //C
      pixels.setPixelColor(0+offset, red, green, blue);
      pixels.setPixelColor(1+offset, red, green, blue);
      pixels.setPixelColor(2+offset, red, green, blue);
      pixels.setPixelColor(3+offset, red, green, blue);
      //D
      pixels.setPixelColor(4+offset, red, green, blue);
      pixels.setPixelColor(5+offset, red, green, blue);
      pixels.setPixelColor(6+offset, red, green, blue);
      pixels.setPixelColor(7+offset, red, green, blue);
      //F
      pixels.setPixelColor(12+offset, red, green, blue);
      pixels.setPixelColor(13+offset, red, green, blue);
      pixels.setPixelColor(14+offset, red, green, blue);
      pixels.setPixelColor(15+offset, red, green, blue);
      //G
      pixels.setPixelColor(24+offset, red, green, blue);
      pixels.setPixelColor(25+offset, red, green, blue);
      pixels.setPixelColor(26+offset, red, green, blue);
      pixels.setPixelColor(27+offset, red, green, blue);
      break;

  // statements
}

}


void setup() {
    // put your setup code here, to run once:
    pixels.begin(); // Inicjalizacja biblioteki
    cyfra(1,7,255,0,0);

    cyfra(2,8,0,255,0);
    cyfra(3,9,0,0,255);
    cyfra(4,0,255,0,255);
    pixels.show();

}

void loop() {


}
