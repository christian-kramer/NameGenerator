# NameGenerator
Spits out a noun/adjective combination when given a number.

Installation:
1. Download this repo as a `.zip`
2. Extract the folder `NameGenerator-main` into your Arduino Libraries folder (typically `Documents\Arduino\libraries`)

Example sketch:

```
#include <NameGenerator.h>

NameGenerator nameGen;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(nameGen.pick(random(4200)));
  delay(1000);
}
```
