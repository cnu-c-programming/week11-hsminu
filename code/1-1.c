#include <stdio.h>

enum State {Idle, RUNNING, PAUSED, DOME}

void print_state(enum State s) {
  switch(s) {
case IDLE:
    printf("State: Idle\n");
    break;
case RUNNING:
    printf("State: RUNNING\n");
    break;
  }

int main() {
  print_state(RUNNING);
  return 0;
}
