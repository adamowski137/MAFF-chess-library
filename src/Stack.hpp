#pragma once

#include <vector>
#include <iostream>

namespace maff
{

    template <typename T>
    class Stack 
    {
    private:
        int index;
        std::vector<T> vector;
        void resize(size_t size);
    public:
        Stack<T>();
        static constexpr size_t InitialSize = 1e2;
        void pop();
        void push(T object);
        T top() const;
    };
    
    template<typename T>
    Stack<T>::Stack() : vector(InitialSize), index{-1}
    {}

    template<typename T>
    void Stack<T>::pop()
    {
        index--;
    }
    template<typename T>
    void Stack<T>::push(T object)
    {
        if(index == vector.size() - 1)
        {
            resize(2 * vector.size());
        }
        vector[++index] = object; 
    }
    template<typename T>
    void Stack<T>::resize(size_t size)
    {
        vector.resize(size);
    }

    template<typename T>
    T Stack<T>::top() const
    {
        return vector[index];
    }
    
} // namespace maff
