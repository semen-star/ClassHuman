#include <iostream>
#include<locale>
#include<windows.h>
#include <cstdlib>  
#include <math.h>

using namespace std;
class Human {
private:
    string MobilePhone;
public:
    int Age;
    string Name;
    
    Human(int Age, string Name, string MobilePhone) :Age{ Age }, Name{ Name }, MobilePhone{MobilePhone} {}
    Human():Human(0,"None","None"){}

    void input() {
        system("cls");
        cout << "Введите имя:"; cin >> Name;
        cout << "Введите возраст:"; cin >> Age;
        cout << "Введите номер телефона:"; cin >> MobilePhone;
        system("cls");

    }

    void output() {
        system("cls");
        cout << "\tДанные про человека:" << endl << endl;
        cout << "Имя:" << Name << endl;
        cout << "Возраст:" << Age << endl;
        cout << "Номер телефона:" << MobilePhone << endl;
        cout << endl << endl << endl;
    }
};

int Menu(Human Person) {
    int choise{ 0 };
    Person.output();
    cout << "\tВыберите что нужно сделать:" << endl << endl;
    cout << "1-Изменить информацию\n2-Выход из программы\n";
    cout << endl << endl << "\tВвод:"; cin >> choise;



    return choise;
}


void locate() {
    //Разбираюсь с локализатором. Извините
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::system("chcp 1251");
    //спасибо за ожидание
}
int main()
{
    locate();
    Human Person;
    while (true)
    {
        int choise = Menu(Person);
        system("cls");

        if (choise == 1) 
            Person.input();
        
        else if (choise == 2)
            break;
    }

    return 0;
}
