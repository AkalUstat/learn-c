#include <stdio.h>

struct packed_struct
{
  unsigned int f1 : 1;
  unsigned int f2 : 1;
  unsigned int f3 : 1;
  unsigned int type : 4;
  unsigned int index : 9;
};

main()
{
  struct packed_struct packed_data;
  packed_data.type = 7;
  unsigned int n = packed_data.type;
}