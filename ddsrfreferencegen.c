#include <ddsrfreferencegen.h>;

#define SIZE 4

// Helper function to calculate the determinant of a 2x2 matrix
/*double det2x2(double a, double b, double c, double d) {
    return a * d - b * c;
}

// Function to calculate the determinant of a 4x4 matrix
double determinant(double mat[SIZE][SIZE], int n) {
    double det = 0;
    double submat[SIZE][SIZE];

    if (n == 2) {
        return det2x2(mat[0][0], mat[0][1], mat[1][0], mat[1][1]);
    } else {
        for (int x = 0; x < n; x++) {
            int subi = 0; // Submatrix's i value
            for (int i = 1; i < n; i++) {
                int subj = 0; // Submatrix's j value
                for (int j = 0; j < n; j++) {
                    if (j == x) continue;
                    submat[subi][subj] = mat[i][j];
                    subj++;
                }
                if (subj == n - 1) subi++;
            }
            det += (x % 2 == 0 ? 1 : -1) * mat[0][x] * determinant(submat, n - 1);
        }
    }
    return det;
}

void getCofactor(double mat[SIZE][SIZE], double temp[SIZE][SIZE], int p, int q, int n) {
    int i = 0, j = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row != p && col != q) {
                temp[i][j++] = mat[row][col];
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}
// Function to calculate and store the inverse of a matrix
void inverse(double mat[SIZE][SIZE], double inv[SIZE][SIZE]) {
    double det = determinant(mat, SIZE);
    if (det == 0) {
        printf("Singular matrix, can't find its inverse.\n");
        exit(1);
    }

    double temp[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            getCofactor(mat, temp, i, j, SIZE);
            inv[i][j] = pow(-1, i + j) * determinant(temp, SIZE - 1) / det;
        }
    }
}

void getInverse(double mat[SIZE][SIZE], double inv[SIZE][SIZE]) {
    double det = 0;
    int i, j;

    double temp[SIZE][SIZE]; // To store cofactors

    // Calculate determinant
    // For a 4x4 matrix, the determinant is a sum of products of various 3x3 sub-matrix determinants
    // Since this is a specific case, we can use a direct formula for a 4x4 determinant
    // ... (Implement determinant calculation here)
    double det = determinant( mat[SIZE][SIZE], int n)


    // Check if the matrix is non-singular (has a non-zero determinant)
    if (det == 0) {
        fprintf(stderr, "Singular matrix, can't find its inverse\n");
        exit(EXIT_FAILURE);
    }

    // Calculate cofactors for each element and transpose
    // For a 4x4 matrix, we can calculate cofactors for each element directly
    // ... (Implement cofactor and transpose here)

    double Cofactor = getCofactor(mat[SIZE][SIZE], temp[SIZE][SIZE], p, q, n)

    // Divide adjugate matrix by determinant to get the inverse
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            inv[i][j] = temp[i][j] / det;
        }
    }
}*/


void initializeMatrix(double mat[4][4], double ed_plus, double eq_plus, double ed_minus, double eq_minus) {
    mat[0][0] = ed_plus;
    mat[0][1] = eq_plus;
    mat[0][2] = ed_minus;
    mat[0][3] = eq_minus;
    
    mat[1][0] = ed_minus;
    mat[1][1] = -eq_minus;
    mat[1][2] = ed_plus;
    mat[1][3] = eq_plus;
    
    mat[2][0] = ed_minus;
    mat[2][1] = eq_minus;
    mat[2][2] = ed_plus;
    mat[2][3] = -eq_plus;
    
    mat[3][0] = eq_plus;
    mat[3][1] = -ed_plus;
    mat[3][2] = eq_minus;
    mat[3][3] = -ed_minus;
}


