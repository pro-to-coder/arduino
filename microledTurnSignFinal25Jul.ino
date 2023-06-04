// простейшие динамические эффекты
// сначала ознакомься с примером microLED_guide !!!

#define STRIP_1_PIN 5     // пин 1-й ленты
#define STRIP_2_PIN 7     // пин 2-й ленты
#define NUMLEDS 72      // кол-во светодиодов

#define COLOR_DEBTH 3
#include <microLED.h>   // подключаем библу
microLED<NUMLEDS, STRIP_1_PIN, MLED_NO_CLOCK, LED_WS2815, ORDER_GRB, CLI_AVER> lenta_1;
microLED<NUMLEDS, STRIP_2_PIN, MLED_NO_CLOCK, LED_WS2815, ORDER_GRB, CLI_AVER> lenta_2;

void setup() {
  lenta_1.setBrightness(255);
  lenta_2.setBrightness(255);
  pinMode(9,INPUT_PULLUP);
  pinMode(11,INPUT_PULLUP);
}

void loop() {
  
     if ((!digitalRead(9)) == true) {
      lenta_1.fill(mRed);
      lenta_1.show();
      delay(50);

    } else {
      lenta_1.fill(mYellow);
      lenta_1.show();
      delay(50);
    }

     if ((!digitalRead(11)) == true) {
      lenta_2.fill(mRed);
      lenta_2.show();
      delay(50);

    } else {
      lenta_2.fill(mYellow);
      lenta_2.show();
      delay(50);
    }
  
}



