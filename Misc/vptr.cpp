#include <iostream>
#include <iomanip>
class dog
{
    public:
    //to avoid padding related pointer issues 
    long name;
    long tail;
        virtual void activity()
        {
            std::cout << "Running" << std::endl;
        }
};

int main()
{
    dog d ;
    d.name = 78;
    d.tail = 18;
    dog c ;
    c.name=79;
    c.tail = 19;
    //sizeof pointers has always long size.
    //sizeof long on 32 bit system is 4
    //sizeof long on 64 bit system is 8
    long *i = reinterpret_cast<long*>(&d); 
    long *j = reinterpret_cast<long*>(&c); 
    std::cout.setf(std::ios::hex, std::ios::basefield);
    std::cout << (i+0) << std::endl;  //vptr  address
    std::cout << *(i+0) << std::endl; //vtable address, probably data segment address
    std::cout.unsetf(std::ios::hex);
    std::cout << *(i+1) << std::endl;
    std::cout << *(i+2) << std::endl;
    std::cout << "----------" << std::endl;
    std::cout.setf(std::ios::hex, std::ios::basefield);
    std::cout << (j+0) << std::endl;  //vptr address
    std::cout << *(j+0) << std::endl; //vtable address, probably data segment address
    std::cout.unsetf(std::ios::hex); 
    std::cout << *(j+1) << std::endl;
    std::cout << *(j+2) << std::endl;
    
}

/*output
0x7d5cf78a8a80
400e50
78
18
----------
0x7d5cf78a8aa0
400e50
79
19
*/