#!/usr/bin/python3
"""You have n number of locked boxes in front of you. 
Each box is numbered sequentially from 0 to n - 1 and each box may contain keys to the other boxes."""

def canUnlockAll(boxes):
   set_open = set()
   set_close = set(0)

   for key in range(len(set_close)):
      key = set_close.pop()
