#include <iostream>
#include <cmath>
#include <string>
int main() {
    double first_num;
    double sec_num;
    char operation;
    double result;
    long long factorial;
    std::string ask;
    std::cout<<"Вас приветствует калькулятор !\n ";

    while(true){
        std::cout<<"если хотите выйти то введите exit(если нет то просто введите no) \n";
            std::cin>>ask;
        if ( ask == "exit") {
                return 0;
            }
        while(true){ 
            std::cout<<"Введите операцию из следующего списка \n '*' = умножение \n '/' = деление \n '+' = сложение \n '-' = вычитание \n '%' = найти процент \n '^' = возвести в квадрат \n '@' = найти корень \n ':' = возвести в степень любую \n '!' = найти факториал \n если не хотите что либо делать то введите no \n";
            std::cin>>operation;
            
            if (operation == '*' || operation == '/' || operation == '+' || operation == '-' || operation == '%' || operation == '^' || operation == '@' || operation == ':' || operation == '!') {
                break;
            }
        
        }
        switch (operation) {
            case '*':
                std::cout<<"Введите первое число \n";
                std::cin>>first_num;
                std::cout<<"Введите второе число \n"; 
                std::cin>>sec_num;
                std::cout<<sec_num*first_num;
                break;
            case'/':
                std::cout<<"введите делимое \n";
                std::cin>>first_num;
                std::cout<<"введите делитель \n"; 
                std::cin>>sec_num;
                if(sec_num == 0){
                    std::cout<<"Ноль нельзя ай ай ай\n";
                    break;
                }
                std::cout<<first_num/sec_num;
                break;
            case'+':
                std::cout<<"Введите первое число \n";
                std::cin>>first_num;
                std::cout<<"Введите второе число \n"; 
                std::cin>>sec_num;
                std::cout<<first_num+sec_num;
                break;
            case '-':
                std::cout<<"Введите первое число \n";
                std::cin>>first_num;
                std::cout<<"Введите второе число \n"; 
                std::cin>>sec_num;
                std::cout<<first_num-sec_num;
                break;
            case'%':
                std::cout<<"Число процент которого нужно найти \n";
                std::cin>>first_num;
                std::cout<<"Введите сколько процентов нужно найти \n"; 
                std::cin>>sec_num;
                std::cout<<(first_num * sec_num)/100;
                break;
            case'^':
                std::cout<<"Введите число для возведения \n";
                std::cin>>first_num;
                if(first_num<0){
                    std::cout<<"В отрицательную степень не выйдет\n";
                    break;
                }
                std::cout<<first_num*first_num;
                break;
            case'@':
                std::cout<<"Введите число для корня \n";
                std::cin>>first_num;
                result = sqrt(first_num);
                std::cout<<result;
                break;
            case':':
                std::cout<<"Введите первое число которое надо возвести в степень\n";
                std::cin>>first_num;
                std::cout<<"Степень в которую надо возвести \n"; 
                std::cin>>sec_num;
                result = 1;
                for (int i = 0; i < sec_num; i++){
                    result *= first_num;
                }
                std::cout<<result;
                break;
            case'!':
                std::cout<<"Введите число для нахождения факториала \n";
                std::cin>>first_num;
                if(first_num < 0){
                    std::cout<<"Не найдёшь из отрицательного\n";
                    break;
                }
                factorial = 1;
                for ( int i = 1; i <= first_num; i++){
                    factorial *= i;
                }
                std::cout<<factorial;
            break;
        }  
    std::cout<<"Хотите сделать что то ещё ? введите да или нет";
    std::cin>>ask;
    if( ask == "нет"){
            return 0;
    }
    }
}