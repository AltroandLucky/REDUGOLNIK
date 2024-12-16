#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    
    // (Если честно не совсем понял что тут надо сделано сделал то что получилось) Я сделал нахождение максимального значения в одномерном массиве
    int size = 10;
    int arr1D[10];
    for (int i = 0; i < size; i++) {
        arr1D[i] = rand() % 100;
        cout << arr1D[i] << " ";
    }
    int max1D = arr1D[0];
    for (int i = 1; i < size; i++) {
        if (arr1D[i] > max1D) max1D = arr1D[i];
    }
    cout << "\nMax znak odin masiv: " << max1D << endl;

    // Тут нахождение максимального значения в двумерном массиве
    int rows = 3, cols = 4;
    int arr2D[3][4];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr2D[i][j] = rand() % 100;
            cout << arr2D[i][j] << "\t";
        }
        cout << endl;
    }
    int max2D = arr2D[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr2D[i][j] > max2D) max2D = arr2D[i][j];
        }
    }
    cout << "Max znak dva masiv: " << max2D << endl;

    return 0;
}
//(Да поможет мне бог если я тут все правильно сделал а не брак)...