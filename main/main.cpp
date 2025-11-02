#include <iostream>
#include "TStack.hpp"
#include "TQueue.hpp"

int main()
{
    int stackCapacity;
    std::cout << "Enter stack capacity: ";
    std::cin >> stackCapacity;
    
    TStack<int> stack(stackCapacity);
    
    int value1, value2, value3;
    std::cout << "Enter three values for stack: ";
    std::cin >> value1 >> value2 >> value3;
    
    stack.Push(value1);
    stack.Push(value2);
    stack.Push(value3);
    
    std::cout << "Stack size: " << stack.GetSize() << '\n';
    std::cout << "Stack top: " << stack.Top() << '\n';
    
    stack.Pop();
    std::cout << "After pop, top: " << stack.Top() << '\n';
    
    int queueCapacity;
    std::cout << "Enter queue capacity: ";
    std::cin >> queueCapacity;
    
    TQueue<int> queue(queueCapacity);
    
    int qValue1, qValue2, qValue3;
    std::cout << "Enter three values for queue: ";
    std::cin >> qValue1 >> qValue2 >> qValue3;
    
    queue.Push(qValue1);
    queue.Push(qValue2);
    queue.Push(qValue3);
    
    std::cout << "Queue size: " << queue.GetSize() << '\n';
    std::cout << "Queue front: " << queue.Front() << '\n';
    std::cout << "Queue back: " << queue.Back() << '\n';
    
    int newStackCapacity;
    std::cout << "Enter new stack capacity: ";
    std::cin >> newStackCapacity;
    stack.Resize(newStackCapacity);
    std::cout << "Resized stack capacity: " << stack.GetCapacity() << '\n';
    
    queue.Pop();
    std::cout << "After pop, front: " << queue.Front() << '\n';
    
    int qValue4, qValue5;
    std::cout << "Enter two more values for queue: ";
    std::cin >> qValue4 >> qValue5;
    
    queue.Push(qValue4);
    queue.Push(qValue5);
    
    std::cout << "Queue front: " << queue.Front() << '\n';
    std::cout << "Queue back: " << queue.Back() << '\n';
    
    int newQueueCapacity;
    std::cout << "Enter new queue capacity: ";
    std::cin >> newQueueCapacity;
    queue.Resize(newQueueCapacity);
    std::cout << "Resized queue capacity: " << queue.GetCapacity() << '\n';
    
    return 0;
}