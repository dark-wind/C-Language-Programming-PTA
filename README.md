# C-Language-Programming-PTA
PTA-浙大版《C语言程序设计（第3版）》题目集
```
一些题目的边界问题
1. 精度，采用double能解决不少sample通过但ac不了的题目
2. 计算近似值：cos、pi等，需要把小于精度的最后一项也加上
3. pow函数在整数的时候效率很低，可以手写替代
4. 兔子问题就是Fibonacci
5. 报数问题就是约瑟夫问题
6. 三角形面积计算可以使用海伦公式
7. 打印输出时检测结果正负，不要打印-0这种违反常识的东西
```