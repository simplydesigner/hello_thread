#include <iostream>
#include <thread>

void hello()
{
    std::cout << "hello" << std::endl;
}

int main(int argc, const char * argv[]) {

    std::thread thread(hello);
    thread.join();  
    
    return 0;
}
