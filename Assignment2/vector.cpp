#include <iostream>
#include <vector>
using namespace as std

int main() {
    
    vector<int> myVector;

    
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    
    cout << "Elements of the vector: ";
    for (size_t i = 0; i < myVector.size(); ++i) {
        cout << myVector[i] << " ";
    }
    cout << std::endl;

  
    myVector[1] = 25;

    return 0;
}
