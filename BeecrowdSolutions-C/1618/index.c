#include <stdio.h>


int main() {
  int N, Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, RX, RY;

  scanf("%d", &N);

  for (int i = 0; i < N; i++) {
    scanf("%d %d %d %d %d %d %d %d %d %d", &Ax, &Ay, &Bx, &By, &Cx, &Cy, &Dx, &Dy, &RX, &RY);
    printf("%d\n", (RX >= Ax && RX <= Cx && RY >= Ay && RY <= Cy) ? 1 : 0);
  }

  return 0;
}