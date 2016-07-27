#include <iostream>
#include <iomanip>
class Animal { public: virtual void sound(){} };
class Dog: public Animal { public: void sound() {/*code*/} };
class Cat: public Animal { public: void sound() {/*code*/} };
int main()
{
    Animal a ;
    Animal b ;
    Dog c ;
    Cat d ;
    //sizeof pointers has always long size.
    //sizeof long on 64 bit system is 8
    long *animal_1 = reinterpret_cast<long*>(&a); 
    long *animal_2 = reinterpret_cast<long*>(&b); 
    long *dog = reinterpret_cast<long*>(&c); 
    long *cat = reinterpret_cast<long*>(&d); 
    std::cout.setf(std::ios::hex, std::ios::basefield);
    std::cout << (animal_1+0) << std::endl;  //vptr  address
    std::cout << *(animal_1+0) << std::endl; //vtable address, probably data segment address
    std::cout << "----------" << std::endl;
    std::cout << (animal_2+0) << std::endl;  //vptr address
    std::cout << *(animal_2+0) << std::endl; //vtable address, probably data segment address
    std::cout << "----------" << std::endl;
    std::cout << (dog+0) << std::endl;  //vptr address
    std::cout << *(dog+0) << std::endl; //vtable address, probably data segment address
    std::cout << "----------" << std::endl;
    std::cout << (cat+0) << std::endl;  //vptr address
    std::cout << *(cat+0) << std::endl; //vtable address, probably data segment address
    std::cout.unsetf(std::ios::hex); 

}
/*
0x7ec877779890
400c50  // same class object same vtable animal_1
----------
0x7ec8777798a0
400c50 // same class object same vtable animal 2
----------
0x7ec8777798b0
400c70
----------
0x7ec8777798c0
400c90
 * */
