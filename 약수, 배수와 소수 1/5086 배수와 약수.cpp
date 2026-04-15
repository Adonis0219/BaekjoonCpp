#include <stdio.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);

    while (a != 0 && b != 0) {
        if (b % a == 0)
            printf("factor \n");
        else if (a % b == 0)
            printf("multiple \n");
        else
            printf("neither \n");

        scanf("%d %d", &a, &b);
    }

    return 0;
}

#include <iostream>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    while (a != 0 && b != 0) {
        if (b % a == 0)
            cout << "factor" << '\n';
        else if (a % b == 0)
            cout << "multiple" << '\n';
        else
            cout << "neither" << '\n';

        cin >> a >> b;
    }

    return 0;
}