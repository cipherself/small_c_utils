#include <stdio.h>

#define   IN    1
#define   OUT   0

int main(void)
{
  int c, nc, nl, nw, state;

  state = OUT;
  nc = nw = nl = 0;

  while ((c = getchar()) != EOF) {
    ++nc;

    if (c == '\n')
      ++nl;

    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;

    else if (state == OUT) {
    state = IN;
    ++nw;
    }

  }
  return 0;
}
