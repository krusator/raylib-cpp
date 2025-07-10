#include "raylib.h"
using namespace std;
int main(){
  InitWindow(500, 500, "Geht");
  while (WindowShouldClose() == false) {
    BeginDrawing();

    EndDrawing();
  }
  CloseWindow();
  return 0;
}
