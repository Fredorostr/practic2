#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
    double first_num;
    double sec_num;
    char operation;
    double result;
    long long factorial;
    std::string ask;
    std::cout<<"Вас приветствует калькулятор !\n ";

    while(true){
        cout<<"если хотите выйти то введите exit(если нет то просто введите no) \n";
            cin>>ask;
        if ( ask == "exit") {
                return 0;
            }
        while(true){ 
            cout<<"Введите операцию из следующего списка \n '*' = умножение \n '/' = деление \n '+' = сложение \n '-' = вычитание \n '%' = найти процент \n '^' = возвести в квадрат \n '@' = найти корень \n ':' = возвести в степень любую \n '!' = найти факториал \n если не хотите что либо делать то введите no \n";
            cin>>operation;
            
            if (operation == '*' || operation == '/' || operation == '+' || operation == '-' || operation == '%' || operation == '^' || operation == '@' || operation == ':' || operation == '!') {
                break;
            }
        
        }
        switch (operation) {
            case '*':
                cout<<"Введите первое число \n";
                cin>>first_num;
                cout<<"Введите второе число \n"; 
                cin>>sec_num;
                cout<<sec_num*first_num;
                break;
            case'/':
                cout<<"введите делимое \n";
                cin>>first_num;
                cout<<"введите делитель \n"; 
                cin>>sec_num;
                if(sec_num == 0){
                    cout<<"Ноль нельзя ай ай ай\n";
                    break;
                }
                cout<<first_num/sec_num;
                break;
            case'+':
                cout<<"Введите первое число \n";
                cin>>first_num;
                cout<<"Введите второе число \n"; 
                cin>>sec_num;
                cout<<first_num+sec_num;
                break;
            case '-':
                cout<<"Введите первое число \n";
                cin>>first_num;
                cout<<"Введите второе число \n"; 
                cin>>sec_num;
                cout<<first_num-sec_num;
                break;
            case'%':
                cout<<"Число процент которого нужно найти \n";
                cin>>first_num;
                cout<<"Введите сколько процентов нужно найти \n"; 
                cin>>sec_num;
                cout<<(first_num * sec_num)/100;
                break;
            case'^':
                cout<<"Введите число для возведения \n";
                cin>>first_num;
                cout<<first_num*first_num;
                break;
            case'@':
                cout<<"Введите число для корня \n";
                cin>>first_num;
                if(first_num<0){
                    cout<<"Не получится ай ай ай";
                    break;
                }
                result = sqrt(first_num);
                cout<<result;
                break;
            case':':
                cout<<"Введите первое число которое надо возвести в степень\n";
                cin>>first_num;
                cout<<"Степень в которую надо возвести \n"; 
                cin>>sec_num;
                if(sec_num<0){
                    cout<<"В отрицательную степень не выйдет\n";
                    break;
                }
                result = 1;
                for (int i = 0; i < sec_num; i++){
                    result *= first_num;
                }
                cout<<result;
                break;
            case'!':
                cout<<"Введите число для нахождения факториала \n";
                cin>>first_num;
                if(first_num < 0){
                    cout<<"Не найдёшь из отрицательного\n";
                    break;
                }
                factorial = 1;
                for ( int i = 1; i <= first_num; i++){
                    factorial *= i;
                }
                cout<<factorial;
            break;
        }  
    cout<<"Хотите сделать что то ещё ? введите да или нет";
    cin>>ask;
    if( ask == "нет"){
            return 0;
    }
    }
}