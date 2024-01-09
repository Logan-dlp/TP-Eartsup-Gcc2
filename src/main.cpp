#include <iostream>

int SmallestGapSorted(int* tab, int size){
    int aux = tab[1] - tab[0];
    for (int i = 1; i < size-1; ++i) {
        int gap = tab[i+1]-tab[i];

        if (gap < aux){
            aux = gap;
        }
    }
    return aux;
}

int main(){
    int tab[] = {1, 5, 7, 9, 11, 18};
    std::cout << SmallestGapSorted(tab, 5) << std::endl;
    return 0;
}