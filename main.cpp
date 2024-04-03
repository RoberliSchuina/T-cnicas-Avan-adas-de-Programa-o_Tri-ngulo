#include <iostream>

using namespace std;

void drawTriangle(int height) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

double calculateArea(int height) {
    return 0.5 * height * height; 
}

int main() {
    int height;
    
        cout << "Digite a altura do tri�ngulo: ";
    cin >> height;

      cout << "Tri�ngulo com altura " << height << ":" << endl;
    drawTriangle(height);

    
    double area = calculateArea(height);
    cout << "A area do triangulo eh: " << area << endl;

    return 0;
}
