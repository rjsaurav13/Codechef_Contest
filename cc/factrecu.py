# -*- coding: utf-8 -*-
"""


@author: saurav
"""

def fact(num):
   if num == 1:
       return num
   else:
       return num*fact(num-1)
tcase=int(input())
for i in range(0, tcase):
    num=int(input())
    print(fact(num))