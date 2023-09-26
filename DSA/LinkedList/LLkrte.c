#include <stdio.h>

struct list {
  int data;
  int *link;
};

list l1, l2;
void main() {
  l1.link = l2;
  l2.link = Null;
}
