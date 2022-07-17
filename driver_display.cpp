#include <M5Atom.h>
#include "driver_display.h"

void draw_display(int matrix[][5]);

int clr_info = 0;
int colors[][3] = {
    {0,0,0},    // turn_off
    {255,0,0},  // red
    {255,0,70}, // pink
    {0,255,0},  // green
    {70,255,0}, // orange
    {0,0,255},  // blue
    {70,0,255}  // purple
};

CRGB dispColor(uint8_t r, uint8_t g, uint8_t b) {
    return (CRGB)((r << 16)|(g << 8)|b);
}

void draw_display(int matrix[][5]) {
    int time;
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            clr_info = matrix[i][j];
            M5.dis.drawpix(i*5+j, dispColor(colors[clr_info][0], colors[clr_info][1], colors[clr_info][2]));
        }
    }
}

void show_vail_face(void) {
    int vail_face[5][5] = {
        {6,0,0,0,6},
        {6,0,0,0,6},
        {6,6,0,6,6},
        {0,6,0,6,0},
        {0,0,0,0,0}
    };
    draw_display(vail_face);
}
