#include <stdio.h>
#include <SDL.h>

int main(int argc, char const* argv[]) {
    SDL_Init(SDL_INIT_EVERYTHING);
    printf_s("Hello, world!\n");
    return 0;
}
