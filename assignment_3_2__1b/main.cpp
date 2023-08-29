#include <iostream>

enum month {Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
int main(){
    char month_names[][8*2+1] = {"Январь","Февраль","Март","Апрель","Май","Июнь","Июль","Август",
                                "Сентябрь","Октябрь","Ноябрь","Декабрь",}; //CYRILLIC CHAR NEEDS 2 BYTES!!!
    int num {};
    do{
        std::cout<<"Введите номер месяца: ";
        std::cin >> num;
        if(num<0 || num>12){
            std::cout<<"Неправильный номер!\n";
        }else{
            for(month iter = Jan; iter <= Dec; iter = static_cast<month>(iter + 1)){
                if(iter == num-1){
                    std::cout << month_names[iter]<<std::endl;
                }
            }

        }
    }while(num);
    std::cout<<"До свидания"<<std::endl;

    return 0;
}
