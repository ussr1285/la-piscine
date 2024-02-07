#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void print_board(int board[4][4])
{
  
}

int check_valid(int board[4][4], int nums[4][4], int num, int idx)
{

  return 0;
}

void make_board(int board[4][4], int nums[4][4], int num, int idx)
{
  int i; 

  if (num > 4)
    return ;
  if (!check_valid(board, nums, num, idx))
    return ;
  if (idx == 16 - 1)
  {
    print_board(board);
  }
  else
  {
    i = 1;
    while (i < 4)
    {
      make_board(board, nums, num + i, idx + 1);
      i++;
    }
  }
}

int nums_preproc(char *nums_ch, int nums[4][4])
{
  int i;
  int cnt;

  i = 0;
  cnt = 0;
  while (nums_ch[i] != '\0')
  {
    if (nums_ch[i] >= '1' && nums_ch[i] <= '4')
    {
      nums[cnt / 4][cnt % 4] = nums_ch[i] - '0';
      //printf("nums[%d][%d]: %d\n", cnt / 4, cnt % 4, nums[cnt / 4][cnt % 4]);
      cnt++;
    }
    i++;
  }
  return (cnt);
}

int main(int argc, char **argv)
{
  int args_cnt;
  int nums[4][4];
  int board[4][4];
  int i;

  if (argc != 2)
    return (0);
  args_cnt = nums_preproc(argv[1], nums);
  //printf("%d\n", args_cnt);
  if (args_cnt != 16)
    return (0);
  i = 0;
  while (i < 16)
  {
    board[i / 4][i % 4] = 0;
    i++;
  }
  i = 0;
  while (i < 16)
  {
    make_board(board, nums, 1, i);
    i++;
  }
  return (0);
}
