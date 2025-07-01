#ifndef _SHUDU_SCENE_H_
#define _SHUDU_SCENE_H_

#include "common.h"

class CScene
{
  public:
    CScene();
    void show() const;
    void generate();   // 生成数独终盘
    void eraseRandomGrids(const int count); //擦除指定数量的格子
    void play();
    bool isComplete();
  private:
    point_value_t _map[81]; // 9x9的棋盘数据
    point_t _cur_point; // 当前选中的格子
    void setValue(const point_t& p, int value);
    void setValue(int value);
};

#endif 