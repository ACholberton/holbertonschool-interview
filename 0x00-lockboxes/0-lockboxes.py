#!/usr/bin/python3
"""You have n number of locked boxes in front of you. 
Each box is numbered sequentially from 0 to n - 1 and each box may contain keys to the other boxes."""

def canUnlockAll(boxes):

   open_boxes = [0]

   for key in range(len(boxes)):
      if key == 0 or key in open_boxes:
         open_boxes += boxes[key]
   for key in range(len(boxes)):
      if key in open_boxes:
         open_boxes += boxes[key]
         continue
      else:
         return False

   return True
   
