#include "gwindow.h"


void CheckerBoard (GWindow & gw);
bool ShouldBeChecker (int a, int b);
int main ()
{
  GWindow gw (800, 800);
  CheckerBoard (gw);
  return 0;
}

void CheckerBoard (GWindow & gw)
{
  double width = 800;
  double height = 800;
  for (int i = 0; i < 800; i = i + 100)
  {
    
    if (i % 200 == 0)
    {
      gw.setColor ("GRAY");
      gw.fillRect (i, 100, 100, 100);
    }
    else gw.fillRect (i, 0, 100, 100);
  }
  for (int i = 0; i < 800; i = i + 100)
  {
    if (i % 200 == 0)
    {
      gw.setColor ("GRAY");
      gw.fillRect (i, 300, 100, 100);
    }
    else gw.fillRect (i, 200, 100, 100);
  }
  for (int i = 0; i < 800; i = i + 100)
  {
    if (i % 200 == 0)
    {
      gw.setColor ("GRAY");
      gw.fillRect (i, 500, 100, 100);
    }
    else gw.fillRect (i, 400, 100, 100);
  }
  for (int i = 0; i < 800; i = i + 100)
  {
    if (i % 200 == 0)
    {
      gw.setColor ("GRAY");
      gw.fillRect (i, 700, 100, 100);
    }
    else gw.fillRect (i, 600, 100, 100);
  }
  for (int j = 0; j < 3; j++)
  {
    height = j * 100;
    gw.setColor ("RED");
    for (int i = 0; i < 8; i++)
    {
      if (ShouldBeChecker (i, j)) {
      gw.fillOval (i*100 + 10, j*100 + 10, 80, 80);
        
      }
    }
  }
  for (int j = 5; j < 8; j++)
  {
    gw.setColor ("BLACK");
    for (int i = 0; i < 8; i++)
    {
      if (ShouldBeChecker (i, j)) {
        gw.fillOval (i*100 + 10, j*100 + 10, 80, 80);
      }
    }
  }
}
bool ShouldBeChecker (int a, int b)
{
  if (a % 2 == 0 && b % 2 != 0)
    return true;
  if (b % 2 == 0 && a % 2 != 0) return true;
  else return false;
}
