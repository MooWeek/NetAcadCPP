#include <iostream>
#include <iomanip>

using namespace std;

float GetFinalGrade(float grades[], int size)
{
    float finalgrade = 0;
    for (int i = 0; i < size; i++)
    {
        finalgrade += grades[i];
    }

    return finalgrade / (float)size;
}

int main()
{
    int rows;
    cin >> rows;

    float** grades = new float*[rows];
    int* rowSizes = new int[rows];

    for (int i = 0; i < rows; i++) 
    {
        cin >> rowSizes[i];

        grades[i] = new float[rowSizes[i]];

        for (int j = 0; j < rowSizes[i]; j++)
        {
            cin >> grades[i][j];
        }
    }

    float* finalCousesGrades = new float[rows];

    for (int i = 0; i < rows; i++) 
    {
        finalCousesGrades[i] = GetFinalGrade(grades[i], rowSizes[i]);
    }

    float finalGrade = GetFinalGrade(finalCousesGrades, rows);

    for (int i = 0; i < rows; i++) 
    {
        cout << fixed << "Course " << i + 1 << ": final " << setprecision(2) << finalCousesGrades[i] << ", grades: ";

        for (int j = 0; j < rowSizes[i]; j++)
        {
            cout << setprecision(0) << grades[i][j] << " ";
        }
        cout << endl;
    }
    cout << setprecision(2) << "Overall final " << finalGrade << endl;
}