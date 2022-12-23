// ChyrunSofialab13.2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_13_2.cpp
// < Чирун Софія >
// Лабораторна робота № 13.2.2
// Директиви препроцесора
// Варіант 18

#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

#define SUMA(x,y) (x)+(y)
#define IFSUMA(z,x,y) ((z)== ('+'))?((x)+(y)):(0)
#define MINUS(x,y) (x)-(y)
#define IFMINUS(z,x,y) ((z)== ('-'))?((x)-(y)):(0)
#define MULTI(x,y) (x)*(y)
#define IFMULTI(z,x,y) ((z)== ('*'))?((x)*(y)):(0)
#define DIVIS(x,y) (x)/(y)
#define IFDIVIS(z,x,y) ((z)== ('/'))?((x)/(y)):(0)
#define PRINT1 puts("Enter in the format: operand1 operation operand2 <Enter>")
#define PRINT2 puts("To finish work, press the Esc key")
#define PRINT3 puts("Input->")
#define PRINT4 puts("\n\rError: division by zero!!\n\r")
#define PRINT5 puts("Repeat? y/n ")
#define DRYK(x)  printf("result = %.0f\n\r", x)

int SUM(int x, int y, char z)
{
    int r;
    r = IFSUMA(z, x, y);
    cout << r;
    return r;

}

int main()
{
    int a, b, r;
    char opr, ch;
    float result1 = 0, result2 = 0;
    PRINT1;
    PRINT2;
    do {
        PRINT3;
        cin >> a >> opr >> b;
        r = SUM(a, b, opr);
        if (opr == '+') {
            result1 = (float)(SUMA(a, b));
            result2 = (float)(IFSUMA(opr, a, b));
        }
        if (opr == '-') {
            result1 = (float)(MINUS(a, b));
            result2 = (float)(IFMINUS(opr, a, b));
        }
        if (opr == '*') {
            result1 = (float)(MULTI(a, b));
            result2 = (float)(IFMULTI(opr, a, b));

        }
        if (opr == '/') {
            if (b == 0)
            {
                puts("\n\rError: division by zero!!\n\r");
            }
            else
            {
                result1 = (float)DIVIS(a, b);
                result2 = (float)(IFDIVIS(opr, a, b));
            }
        };
        if (opr != '+' && opr != '-' && opr != '*' && opr != '/') PRINT4;
        DRYK(result1);
        DRYK(result2);
        PRINT5;
        cin >> ch;
    } while (ch == 'y');
    return 0;
}