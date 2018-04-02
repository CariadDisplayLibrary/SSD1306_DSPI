#include <DSPI.h>
#include <SSD1306.h>
#include <SSD1306_DSPI.h>

const int reset = 8;
const int dc = 9;
const int cs = 10;

DSPI0 spi;
SSD1306_DSPI tft(spi, cs, dc, reset);

void setup() {
    tft.initializeDevice();
    tft.setBacklight(255);
    tft.fillScreen(Color::Black);
    tft.drawRectangle(0, 0, 127, 63, Color::White);
}

void loop() {
    tft.setCursor(10, 10);
    tft.print(millis());
}
