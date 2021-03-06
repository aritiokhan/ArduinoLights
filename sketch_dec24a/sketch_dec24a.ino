#include <FastLED.h>
 
CRGB leds[150];
 
void setup() 
{
  FastLED.addLeds<WS2812, 2, RGB>(leds, 150);
}
 
void loop() 
{
  for(int i = 0; i < 150; i++)
  {
    leds[i] = CRGB(100, 0, 0);
    FastLED.show();
  }
  
  for(int i = 0; i < 150; i++)
  {
    leds[i] = CRGB(0, 100, 0);
    FastLED.show();
  }
  
  for(int i = 0; i < 150; i++)
  {
    leds[i] = CRGB(0, 0, 100);
    FastLED.show();
  }
}
