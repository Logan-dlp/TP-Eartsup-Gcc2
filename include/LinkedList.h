#ifndef TP_EARTSUP_GCC2_LINKEDLIST_H
#define TP_EARTSUP_GCC2_LINKEDLIST_H

#include "Node.h"

namespace data {
    template<class DataType>
    class LinkedList {
        public:
        Node<DataType>* _head;
        Node<DataType>* _tail;
        int _count;

        LinkedList();
        ~LinkedList();

        void append(DataType data);
        void prepend(DataType data);

        void removeHead();
        void removeTail();
    };
}

#endif //TP_EARTSUP_GCC2_LINKEDLIST_H
