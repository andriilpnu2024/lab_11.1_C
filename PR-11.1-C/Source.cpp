#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int Count(const char* str);
void PrintTXT(const char* fname);

int main()
{
    char fname[] = "t.txt";
    cout << "t.txt:" << endl;
    PrintTXT(fname);
    cout << "String contained " << Count(fname) << " elements of 'BASIC'" << endl;

    return 0;
}

void PrintTXT(const char* fname) // виведення файлу на екран
{
    FILE* fp = fopen(fname, "r");
    if (fp == NULL)
    {
        cout << "Error: could not open file " << fname << endl;
        return;
    }
    char ch;
    while ((ch = fgetc(fp)) != EOF) // поки можна прочитати символ
    {
        cout << ch; // виводимо його на екран
    }
    cout << endl;
    fclose(fp);
}

int Count(const char* fname)
{
    FILE* fp = fopen(fname, "r");

    if (fp == NULL)
    {
        cout << "Error: could not open file " << fname << endl;
        return 0;
    }

    int k = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == 'B' || ch == 'A' || ch == 'S' || ch == 'I' || ch == 'C')
        {
            k++;
        }
    }

    fclose(fp);
    return k;
}
