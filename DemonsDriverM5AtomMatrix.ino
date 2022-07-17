#include <M5Atom.h>
#include "driver_display.h"

void setup() {
    M5.begin(false, false, true);
}

void loop() {
    show_vail_face();
    delay(1000);
}
