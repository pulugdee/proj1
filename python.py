#!/usr/bin/python
import os
from ctypes import *
fun=CDLL("./test.so")
res=res=fun.add(10,30)
print"Addition of {} and {} is :{}".format(10,30,res)
res=fun.sub(100,30)
print"Subtraction of {} and {} is :{}".format(100,30,res)

