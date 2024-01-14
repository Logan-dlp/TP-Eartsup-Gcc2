#ifndef TP_EARTSUP_GCC2_NODE_H
#define TP_EARTSUP_GCC2_NODE_H

namespace data {
    template<class Datatype>
    class Node {
        public:
        Datatype _data;
        Node<Datatype>* _next;

        Node();
        Node(Datatype data);
        ~Node();

        void insertAfter(Datatype data);
    };
}

#endif //TP_EARTSUP_GCC2_NODE_H
