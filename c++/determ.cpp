#include <iostream>
#include <vector>
using namespace std;

double determ(vector<vector<double>> matrix) {
    int n = matrix.size();
    if (n == 1)
        return matrix[0][0];
    if (n == 2)
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
     
    double det = 0;
    for (int p = 0; p < n; p++) {
        vector<vector<double>> subMatrix(n - 1, vector<double>(n - 1));
        for (int i =1; i < n; i++) {
            int colIdx = 0;
            for (int j = 0; j < n; j++) {
   	        if (j != p)
                    subMatrix[i - 1][colIdx++] = matrix[i][j];
            }
        }
        det += (p % 2 == 0 ? 1 : -1) * matrix[0][p] * determ(subMatrix);
    }
    return det;
}

int main() {
    vector<vector<double>> matrix = {
	{6, 1, 1},
	{4, -2, 5},
	{2, 8, 7}
    };

    double result = determ(matrix);

    cout << "Determinant: " << result <<endl;

    if (result != 0) {
   	cout << "The determinant has been successfully calculated" << endl;
    } else {
	cout << "The determinant is eqaul to zero" << endl;
    }

    return 0;
}			
