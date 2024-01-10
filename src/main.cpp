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

int SmallestGapUnsorted(int* tab, int size){
    int aux = tab[1] - tab[0];
    if (aux < 0){
        aux = -aux;
    }
    for (int i = 1; i < size-1; ++i) {
        for (int j = i+1; j < size; ++j) {
            int result = tab[i] - tab[j];
            if (result < 0){
                result = -result;
            }
            if (result < aux){
                aux = result;
            }
        }
    }
    return aux;
}

int main(){
    int tab[] = {5, 18, 7, 9, 11, 1};
    std::cout << SmallestGapUnsorted(tab, std::size(tab)) << std::endl;
    return 0;
}