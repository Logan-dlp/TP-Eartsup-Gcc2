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

bool SubsetGivenSum(int num, int* tab, int size){
    for (int i = 0; i < size-1; ++i) {
        for (int j = i+1; j < size; ++j) {
            if (tab[i]+tab[j] == num){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int num;
    std::cin >> num;

    int tab[] = {3, 34, 4, 12, 5, 2};
    std::cout << SubsetGivenSum(num, tab, std::size(tab)) << std::endl;
    return 0;
}