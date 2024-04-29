#include <ddsrfreferencegen.h>;

#define SIZE 4

// Helper function to calculate the determinant of a 2x2 matrix
double det2x2(double a, double b, double c, double d) {
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


    // Check if the matrix is non-singular (has a non-zero determinant)
    if (det == 0) {
        fprintf(stderr, "Singular matrix, can't find its inverse\n");
        exit(EXIT_FAILURE);
    }

    // Calculate cofactors for each element and transpose
    // For a 4x4 matrix, we can calculate cofactors for each element directly
    // ... (Implement cofactor and transpose here)

    // Divide adjugate matrix by determinant to get the inverse
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            inv[i][j] = temp[i][j] / det;
        }
    }
}

void calculateReferenceCurrents(double ed_plus, double eq_plus, double ed_minus, double eq_minus,
                                double Po_star, double Qo_star,
                                double *id_star_plus, double *iq_star_plus,
                                double *id_star_minus, double *iq_star_minus) {
    // The inverse matrix components would be pre-calculated and known
    double a11, a12, a13, a14;
    double a21, a22, a23, a24;
    double a31, a32, a33, a34;
    double a41, a42, a43, a44;
    
    // Inverse matrix is filled with the values for the sake of example.
    // In actual implementation, you should calculate these based on the matrix
    // of voltage components [ed_plus, eq_plus, ed_minus, eq_minus]
    // For the actual inverse matrix calculation, you would use a numerical method or a library
    
    // The Po_star and Qo_star terms correspond to the desired power outputs
    // Here we are solving the linear system using matrix multiplication of the inverse matrix with power vector
    *id_star_plus = a11 * Po_star + a12 * 0 + a13 * 0 + a14 * Qo_star;
    *iq_star_plus = a21 * Po_star + a22 * 0 + a23 * 0 + a24 * Qo_star;
    *id_star_minus = a31 * Po_star + a32 * 0 + a33 * 0 + a34 * Qo_star;
    *iq_star_minus = a41 * Po_star + a42 * 0 + a43 * 0 + a44 * Qo_star;
}
