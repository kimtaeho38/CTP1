/*#include <iostream> //1번

int main(){
    for(int i = 1; i <=5; i++){
        for(int j= 1; j <= i; j++){
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}*/

/*#include <iostream> //2번

int main(){
    for (int i =1; i <= 5; ++i){
        for (int j = 5; j >= i; --j){
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}*/

/*#include <iostream> //3번

int main(){
    int rows = 5;
    
    for(int i = 1; i <=rows; ++i){
        for (int j = 1; j <= rows - i; ++j){
            std::cout << "  ";
        }
        for (int k = i; k >= 1; --k){
            std::cout << k << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}*/



/*#include <iostream> //4번
int main(){
    for (int i =1; i <=5; i++){
        for (int j = 1;j <=5 - i; ++j){
            std::cout << " ";
        }
        for (int j = i; j >= 1; --j){
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}*/
