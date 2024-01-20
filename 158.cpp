#include <iostream>  
#include <cstdlib> 
using namespace std;
int main() {
    setlocale(0, "");
    int q; cout << "[1]Белый\n[2]Голубой\n[3]Красный\n[4]Фиолетовый\n[5]Желтый\n[6]Зеленый\n[7]Синий\n[8]Серый\n[9]Cветло-красный\nВыберете цвет: "; cin >> q;
    switch (q) {
    case 1: //белый 	
        system("color 07");
    break; 
    case 2: //голубой 
        system("color 03");
        break;
    case 3: //красный 	
        system("color 04");
    break; 
    case 4: //фиолетовый 
        system("color 05");
        break;
    case 5: // Желтый 	
        system("color 06");
    break; 
    case 6: // Зеленый 
        system("color 02");	
        break;
    case 7: // Синий 	
        system("color 01");
        break;
    case 8: //Серый	
        system("color 08");
    break;
    case 9: //Cветло-красный
        system("color 0C");	
        break;
    default:	break;
    }
    cout << "[+] Программа - геометрические фигуры\n\n[1] Линия\n\n[2] Квадрат\n\n[3] Прямоугольник\n\n[+] Выберите фигуру: \n\n";
    int a{ 0 };
    while (true) {

        cin >> a;
        if (a == 1) {
            system("cls");
            int b{ 0 }, l{ 0 }; cout << "Длина не должна быть больше 30 и меньше 1!!";
           
            char str;
            cout << "[+] Фигура: линия\n\n[1] Горизонтальная\n\n[2] Вертикальная\n\n[+] Выберите тип: ";
            while (b != -3829743) {
                cin >> b;
                if (b == 1 or b == 2) {
                    cout << "Длина линии: ";
                    cin >> l; if (l > 30 or l < 1) { exit(0); }
                    cout << "Структура линии: ";
                    cin >> str;
                    if (b == 1) {
                        int n1 = 0;
                        while (n1 != l) {
                            cout << str;
                            ++n1;
                        }
                    }
                    else {
                        int n2 = 0;
                        while (n2 != l) {
                            cout << str << endl;
                            ++n2;
                        }
                    }

                }
                else {
                    cout << "Неправильный выбор. Измените: ";
                }
            }
        }
        else if (a == 2) {
            system("cls");
            int b{ 0 }, l{ 0 };
            char str;
            cout << "[+] Фигура: квадрат\n\n[1] Заполненный\n\n[2] Пустой\n\nВыберите тип: ";
            while (true) {
                cin >> b;
                if (b == 1 or b == 2) {
                    cout << "\n[+]Размер: ";
                    cin >> l;
                    cout << "[+] Текстура: ";
                    cin >> str;
                    if (b == 1) {
                        int n1, n2;
                        for (n2 = 0; n2 < l; n2++) {
                            cout << "\n";
                            for (n1 = 0; n1 < l; n1++) {
                                cout << str;
                            }
                        }
                    }
                    else if (b == 2) {
                        int n1, n2, n3;

                        for (n1 = 0; n1 < l; n1++) {
                            cout << str;
                        }

                        for (n2 = 0; n2 < l - 2; n2++) {
                            cout << endl << str;
                            for (n3 = 0; n3 < l - 2; n3++) {
                                cout << " ";
                            }
                            cout << str;
                        }
                        cout << "\n";
                        for (n1 = 0; n1 < l; n1++) {
                            cout << str;
                        }
                    }
                }
                else {
                    cout << "Неправильный выбор. Измените: ";
                }
            }
        }
        else if (a == 3) {
            system("cls");
            int b{ 0 }, l{ 0 }, h{ 0 };
            char str;
            cout << "[+] Фигура: Прямоугольник\n\n[1] Заполненный\n\n[2] Пустой\n\nВыберите тип: ";
            while (true) {
                cin >> b;
                if (b == 1 or b == 2) {
                    cout << "\n[+] Ширина: ";
                    cin >> l;
                    cout << "\n[+] Высота: ";
                    cin >> h;
                    cout << "\n[+] Текстура: ";
                    cin >> str;
                    if (b == 1) {
                        int n1, n2;
                        for (n2 = 0; n2 < h; n2++) {
                            cout << "\n";
                            for (n1 = 0; n1 < l; n1++) {
                                cout << str;
                            }
                        }
                    }
                    else if (b == 2) {
                        int n1, n2, n3;

                        for (n1 = 0; n1 < l; n1++) {
                            cout << str;
                        }

                        for (n2 = 0; n2 < h - 2; n2++) {
                            cout << endl << str;
                            for (n3 = 0; n3 < l - 2; n3++) {
                                cout << " ";
                            }
                            cout << str;
                        }
                        cout << "\n";
                        for (n1 = 0; n1 < l; n1++) {
                            cout << str;
                        }
                    }
                }
                else {
                    cout << "Неправильный выбор. Измените: ";
                }

            }
        }
    }
}
