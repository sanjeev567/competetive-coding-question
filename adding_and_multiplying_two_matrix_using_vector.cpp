#include <bits/stdc++.h>
using namespace std;

void displayVec(vector<vector<int>> &v)
{
    cout<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout<<endl;
    }
    cout << endl;
}

// assign value to the vector
void insertVec(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cin>> v[i][j];
        }
    }
    cout<<endl;
}

// find the addition of two vector
// void findSum(vector<vector<int>> &v1, vector<vector<int>> &v2)
// {
//     vector<vector<int>> v3(v1.size(), vector<int>(v2.size()));
//     for (int i = 0; i < v1.size(); i++)
//     {
//         for (int j = 0; j < v1[i].size(); j++)
//         {
//             v3[i][j]= v1[i][j] +v2[i][j];
//         }
//     }
//     displayVec(v3);
// }

vector<vector<int>> findSum(vector<vector<int>> &v1, vector<vector<int>> &v2)
{
    vector<vector<int>> v3(v1.size(), vector<int>(v2.size()));
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v1[i].size(); j++)
        {
            v3[i][j]= v1[i][j] +v2[i][j];
        }
    }
    return v3;
}

// multiplication of two matrix
void multiplyMatrix(vector<vector<int>> &v1, vector<vector<int>> &v2)
{
    vector<vector<int>> v3(v1.size(), vector<int>(v2.size()));
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v1[i].size(); j++)
        {
            for (int k = 0; k < v2[j].size(); k++)
            {
                
            v3[i][j]+= v1[i][k] *v2[k][j];
            }
            
        }
    }
    displayVec(v3);
}
// agian this could be written in form of fn return a vector so for that we need another vector in main and all that 



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    cin >> N >> M;

    vector<vector<int>> Matrix1(N, vector<int>(M)),Matrix2(N, vector<int>(M)),Matrix3(N, vector<int>(M));
    insertVec(Matrix1);
    insertVec(Matrix2);
    // Matrix3=findSum(Matrix1,Matrix2);
    // displayVec(Matrix3);
    multiplyMatrix(Matrix1, Matrix2);
    return 0;
}