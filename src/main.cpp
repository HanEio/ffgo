#include "scene.h"
#include "input.h"
#include <windows.h>

int main()
{
  SetConsoleOutputCP(65001);
  CScene scene;
  scene.generate();
  int erase_count = inputDifficulty(); // <-- 获取难度
  scene.eraseRandomGrids(erase_count); // <-- 挖洞
  scene.play(); // <-- 进入游戏主循环
  return 0;
}
