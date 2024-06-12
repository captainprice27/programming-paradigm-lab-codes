#include <iostream>
using namespace std;

const unsigned int MATRIX_ORDER = 10;

// create a class

class Matrix
{
    // public data members

public:                                // access specifier
    int x[MATRIX_ORDER][MATRIX_ORDER]; // 2D array
    int row, col;

    // public member functions

public: // access specifier
    // getMatrix() function to insert matrix
    void getMatrix(int r, int c)
    {
        // initialising a matrix type variable
        Matrix M1;

        // copying value of parameters in the data members
        row = r;
        col = c;

        // nested for loop for insertion of matrix
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << "Enter x[" << i << "][" << j << "] : ";
                cin >> x[i][j];
            }
        }
    }

    // putMatrix() function to print the matrix
    void putMatrix()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << x[i][j] << " ";
            }
            cout << "\n";
        }
    }

    // add() function to perform addition of two matrix

    Matrix add(Matrix M2)

    {
        // initializing a Matrix type variable
        Matrix M;

        // copying the value of parameters in the data members
        M.row = row;
        M.col = col;

        // nested for loop to add two matrices
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                M.x[i][j] = x[i][j] + M2.x[i][j];
            }
        }

        // returning the resulted matrix
        return (M);
    }

    // substract function to perform subtraction of two matrix

    Matrix subtract(Matrix M2)
    {
        // initializing a Matrix type variable
        Matrix M;

        // copying the value of parameters in the data members
        M.row = row;
        M.col = col;

        // nested for loop to add two matrices
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                M.x[i][j] = x[i][j] - M2.x[i][j];
            }
        }

        // returning the resulted matrix
        return (M);
    }

    // function to check the equa;ity of two matrics

    Matrix is_equal_matrix(Matrix M2)
    {
        Matrix M;
        M.row = row;
        M.col = col;
        int flag = 0;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (x[i][j] == M2.x[i][j])
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 1)
        {
            cout << "THE MATRICES ARE EQUAL " << endl;
        }
        else
        {
            cout << " THE MATRICES AREN'T EQUAL " << endl;
        }
    }
    Matrix transpose()
    {
        Matrix M;
        M.row = row;
        M.col = col;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                M.x[j][i] = x[i][j];
            }
        }
        return M;
    }
};

// int main()
// {
//     // creating objects
//     Matrix M1, M2;

//     cout << "enter the order of matrix -->  " << endl;
//     int order;
//     cin >> order;

//     // inserting matrix using getMatrix() function
//     cout << "Enter Matrix A\n"
//          << endl;
//     M1.getMatrix(order, order);

//     cout << "\nEnter Matrix B\n"
//          << endl;
//     M2.getMatrix(order, order);

//     // printing the matrix using putMatrix() function
//     cout << "\nMatrix A:" << endl;
//     M1.putMatrix();

//     cout << endl;

//     cout << "Matrix B:" << endl;
//     M2.putMatrix();

//     // calling add() function to add two matrix
//     Matrix M3;
//     M3 = M1.add(M2);
//     cout << "\nAddition of A and B matrix\n"
//          << endl;

//     // printing the resulted matrix
//     M3.putMatrix();

//     // calling subtract() function to add two matrix
//     Matrix M4;
//     M4 = M1.subtract(M2);
//     cout << "\n subtraction of A and B matrix\n"
//          << endl;

//     // printing the resulted matrix
//     M4.putMatrix();

//     // calling is_equal_matrix function to check equality two matrix
//     M1.is_equal_matrix(M2);

//     Matrix M5;
//     M5 = M1.transpose();

//     M5.putMatrix();
//     cout << endl;

//     return 0;
// }

int main()
{
    Matrix M1, M2; // creating objects

    cout << "enter the order of matrix -->  " << endl;
    int order;
    cin >> order;
    int switch_value;

    while (true)
    {
        cout << " press 0 to view all the opeartions \n " << endl;
        cout << " enter any operation to perform " << endl;
        cin >> switch_value;

        switch (switch_value)
        {
        case 0:
        {
            cout << "Press 1 to add two matrices\n";
            cout << "Press 2 to substract two matrices\n";
            cout << "Press 3 get the matrix \n";
            cout << "Press 4 to print the matrix \n";
            cout << "Press 5 to perform transpose operaion of a matrix\n";
            cout << "Press 6 to check equality of two matrices  \n";
            cout << "Press 7 to Exit \n";
            break;
        }

        case 1:

        {
            cout << "the entered matrices will be added " << endl;
            Matrix M3;
            M3 = M1.add(M2);
            cout << "the added matrix is --> \n"
                 << endl;
            M3.putMatrix();
            cout << endl;
            break;
        }

        case 2:

        {
            cout << "the entered matrices will be subtracted " << endl;
            Matrix M4;
            M4 = M1.subtract(M2);
            cout << "the added matrix is --> \n"
                 << endl;
            M4.putMatrix();
            cout << endl;
            break;
        }

        case 3:

        {
            // inserting matrix using getMatrix() function
            cout << "Enter Matrix A\n"
                 << endl;
            M1.getMatrix(order, order);

            cout << "\nEnter Matrix B\n"
                 << endl;
            M2.getMatrix(order, order);
            cout << endl;
            break;
        }

        case 4:

        {
            // printing matrix ...
            cout << "Matrix M1 is -->\n"
                 << endl;
            M1.putMatrix();

            cout << "Matrix M2 is -->\n"
                 << endl;
            M2.putMatrix();
            cout << endl;
            break;
        }
        case 5:

        {
            // performing the transpose operation of a given matrix ...
            Matrix M5;
            M5 = M1.transpose();
            M5.putMatrix();
            cout << endl;

            Matrix M6;
            M6 = M1.transpose();
            M6.putMatrix();
            cout << endl;
            break;
        }

        case 6:

        {
            // calling is_equal_matrix function to check equality two matrix
            M1.is_equal_matrix(M2);
            cout << endl;
            break;
        }
        }
    }
}