#include<bits/stdc++.h>
using namespace std;
class Matrix3D
{
private:
    double m[3][3];
public:
    Matrix3D()
    {
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                m[i][j]=0;
    }
    Matrix3D(double arr[3][3])
    {
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                m[i][j]=arr[i][j];
    }
    double det()
    {
        double  d =   abs(m[0][0] * (m[1][1] * m[2][2] - m[2][1]* m[1] [2]) -
                          m[0][1] * (m[1][0] * m[2][2] - m[1][2] * m[2][0]) +
                          m[0][2] * (m[1][0] * m[2][1] - m[1][1] * m[2][0]));
        return d;
    }
    Matrix3D inverse(double d)
    {
        Matrix3D temp;
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
                temp.m[i][j]=((m[(j+1)%3][(i+1)%3]*m[(j+2)%3][(i+2)%3])-(m[(j+1)%3][(i+2)%3]*m[(j+2)%3][(i+1)%3]))/d ;
        }
        return temp;
    }
    Matrix3D operator +(Matrix3D mat)
    {
        Matrix3D temp;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                temp.m[i][j]=m[i][j]+mat.m[i][j];
        return temp;
    }
    Matrix3D operator -(Matrix3D mat)
    {
        Matrix3D temp;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                temp.m[i][j]=m[i][j]-mat.m[i][j];
        return temp;
    }
    Matrix3D operator *(Matrix3D mat)
    {
        Matrix3D temp;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                temp.m[i][j]=(m[i][0]*mat.m[0][j]+m[i][1]*mat.m[1][j]+m[i][2]*mat.m[2][j]);
        return temp;
    }
    void showData()
    {

        for(int i=0; i<3; i++)
        {
            cout << " ";
            for(int j=0; j<3; j++)
                cout << m[i][j] << "  ";
            cout << " " << endl;
        }
        cout << endl;
    }
    ~Matrix3D()
    {

    }
};
int main()
{
    double arr[3][3]= {{2,4,6},{3,10,9},{12,15,13}};
    double arr1[3][3]= {{3,5,7},{8,11,11},{19,17,21}};
    Matrix3D mat1(arr);
    Matrix3D mat2(arr1);

    Matrix3D mat3,matI;
    cout << mat1.det() << endl;
    matI = mat1.inverse(mat1.det());
    matI.showData();

    mat3 = mat1+mat2;
    mat3.showData();

    mat3 = mat1-mat2;
    mat3.showData();

    mat3 = mat1*mat2;
    mat3.showData();


}
