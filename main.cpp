#include<iostream>
#include<array>
#include <utility>

int main()
{
    std::array<int, 5> myArray {2,3,4,5,6};

    // auto adress = myArray.data();

    // std::cout << "ilk eleman: " << *adress << std::endl; // 2 
    // std::cout << "ikinci eleman: " << *(adress + 1 ) << std::endl; // 3
    // std::cout << "ucuncu eleman: " << *(adress + 2 ) << std::endl; // 4

    for ( auto i = myArray.begin() ; i != myArray.end() ; ++i){
        std::cout << "addres: "<< i << " deger: " <<  *i  << std::endl;
    }
    /* ----- Output --------- 
    addres: 0x7fff6f879390 deger: 2
    addres: 0x7fff6f879394 deger: 3
    addres: 0x7fff6f879398 deger: 4
    addres: 0x7fff6f87939c deger: 5
    addres: 0x7fff6f8793a0 deger: 6
    */

   for (auto it : myArray){
    std::cout << it << std::endl;
   }

   /* Bu şekilde, std::to_array işlevini kullanarak bir diziyi std::array'e dönüştürebilir ve 
   C++'ın sabit boyutlu dizilere özgü özelliklerini kullanabilirsiniz. */ 
   auto arr = std::to_array<int>({2,3,4,5,6});
   std::cout << " -------------- to_array ------ " << std::endl;
   std::cout << arr.size() << std::endl; // 5
   std::cout << arr.at(2) << std::endl;  // 4

   std::array arr2 {2,3,4,5,6};
   std::cout << " ------- normal array -------- " << std::endl;
   std::cout << arr2.size() << std::endl; // 5
   std::cout << arr2.at(2) << std::endl;  // 4

    return 0;
}
