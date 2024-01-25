#include<Windows.h>
#include <iostream>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    while (true)
    {
        int a, b, c;
        cout << "Выберите действие:\n1.Сложение\n2.Вычетание\n3.Произведение\n4.Частное\n5.Возведение в степень\n6.Нахождение квадртного корня\n7.Найти 1% от числа\n8.Факториал\n9.Поменять данные\n10.Выход\n";
        cin >> c;

        if (c == 1)
        {
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            int sum = a + b;
            cout << "1. Сумма чисел = " << sum << endl;         
        }
        else if (c == 2)
        {
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            int razn = a - b;
            cout << "2. Разность чисел = " << razn << endl;
        }
        else if (c == 3)
        {
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            int proiz = a * b;
            cout << "3. Произведение чисел = " << proiz << endl;
        }
        else if (c == 4)
        {
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            if (b == 0)
            {
                cout << "Неверные значения" << endl;
            }
            else
            {
                double chast = a / b;
                cout << "4.Частное чисел = " << chast << endl;
            }
        }
        else if (c == 5)
        {
            cout << "Введите число: ";
            cin >> a;
            cout << "Введите степень ";
            cin >> b;
            int step = pow(a, b);
            cout << "5. Ввозведение числа равно = " << step << endl;
        }
        else if (c == 6)
        {
            cout << "Введите число: ";
            cin >> a;
            double koren = sqrt(a);
            cout << "6. Нахождение квадратного корня = " << koren << endl;
        }
        else if (c == 7)
        {
            cout << "Введите первое число: ";
            cin >> a;
            double procent = a * 0.01;
            cout << "7. 1% от числа = " << procent << endl;
        }
        else if (c == 8)
        {
            cout << "Введите число: ";
            cin >> a;
            int factorial = 1;
            for (int i = 1; i <= a; i++)
            {
                factorial *= i;
            }
            cout << "8. Факториал числа = " << factorial << endl;
        }
        else if (c == 9)
        {
            break;
        }
        else
        {
            break;
        }
        
    }
}
        
    

   


    

 

