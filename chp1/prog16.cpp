#include "gwindow.h"
#include <iostream>
using namespace std;

void drawMultipleOvals (GWindow & gw);

int main()
{
  GWindow gw (200, 100);
  drawMultipleOvals (gw);
  return 0;
}
void drawMultipleOvals (GWindow & gw) {
  double width = gw.getWidth();
  double height = gw.getHeight();
  int i = 0;
  gw.setColor ("CYAN");
  gw.fillRect (0, 0, 200, 100);
  gw.setColor ("RED");
  gw.fillOval (-20, 10, 230, 130);
  gw.setColor ("ORANGE");
  gw.fillOval (-18, 12, 228 - i,128);
  gw.setColor ("YELLOW");
  gw.fillOval (-16 + i, 14, 226 - i, 126);
  gw.setColor ("GREEN");
  gw.fillOval (-14 + i, 16, 224 - i, 124);
  gw.setColor ("BLUE");
  gw.fillOval (-12 + i, 18, 222 - i, 122);
  gw.setColor ("MAGENTA");
  gw.fillOval (-10, 20, 220 - i, 120);
  gw.setColor ("CYAN");
  gw.fillOval (-8, 22, 218, 108);
}
