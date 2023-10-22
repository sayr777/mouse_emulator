#include <Mouse.h>
int loop_interval = 30000; 
int switch_on_off; 

void setup() {
 randomSeed(analogRead(0));
 Mouse.begin();
 delay(100);    
}

void loop() {

  int x = random(4) - 2;
  int y = random(4) - 2;

  Mouse.move(x, y, 0);

  delay(loop_interval);

}