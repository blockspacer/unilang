#include <iostream>
#include <fstream>
#include "code/hello_world/protobuf/serialization/message.pb.h"
#include "code/utilities/serialization/protobuf.hpp"

int main(){

    //construct
    demo::Message message;
    message.set_foo("hello world");
    std::string path = "/home/laptop/Desktop/message.serialized";
    
    //serialize / de-serialize
    Serialize(message,path);
    auto t = Deserialize<demo::Message>(path);
    std::cout << t.foo() << std::endl;
    
    
    return 0;
}