#include <windows.h>


int CALLBACK WinMain(
  HINSTANCE hInstance,
  HINSTANCE hPrevInstance,
  LPSTR     lpCmdLine,
  int       nShowCmd
) {
    MessageBox(0, "Hello Handmade hero", "Handmade Hero", MB_ICONINFORMATION | MB_OK);
    return 0;
}
