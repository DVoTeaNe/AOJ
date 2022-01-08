#include <iostream>

// 元の四角形から半径分だけ内側に小さくした四角形の範囲に中心点が入っているか
int main()
{
  int W, H, x, y, r;
  std::cin >> W >> H >> x >> y >> r;
  int maxX = W - r;
  int maxY = H - r;
  if (r <= x && r <= y && x <= maxX && y <= maxY) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }
  return 0;
}