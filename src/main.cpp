#include <raylib.h>

int main() {
	InitWindow(600, 400, "Handmade but raylib lmao");

	while(!WindowShouldClose()) {
		BeginDrawing();
			ClearBackground(RAYWHITE);
		EndDrawing();
	}
	return 0;
}