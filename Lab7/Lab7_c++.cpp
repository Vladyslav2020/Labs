#include <bits/stdc++.h>

using namespace std;

enum Day{
    Sunny,
    Cloudy
};

Day* generate_array(int);
void output_array(Day*, int);
int solve(Day*, int, int, int);

int main()
{
    int A, B, k;
    cout << "Еnter the height at which the snail is: ";
    cin >> A;
    cout << "Enter height of tree: ";
    cin >> B;
    cout << "Enter count of days: ";
    cin >> k;
    Day* days = generate_array(k);
    output_array(days, k);
    int height = solve(days, k, A, B);
    cout << "Final height = " << height << endl;
    delete [] days;
    return 0;
}

int solve(Day* array, int n, int A, int B){
    int height = A;
    for (int i = 0; i < n; i++){
        if (array[i] == Sunny){
            height += 2;
            height = min(height, B);
        }
        else{
            height--;
            height = max(height, 0);
        }
    }
    return height;
}

Day* generate_array(int n){
    srand(time(NULL));
    Day* array = new Day[n];
    for (int i = 0; i < n; i++)
        array[i] = rand() % 2 ? Sunny: Cloudy;
    return array;
}

void output_array(Day* array, int n){
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;
}