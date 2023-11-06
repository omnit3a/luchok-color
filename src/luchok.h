#pragma once

#include <stdint.h>

#define SCREEN_WIDTH 64
#define SCREEN_HEIGHT 32

typedef struct color_s {
  uint32_t color;
  int id;
} color_t;
