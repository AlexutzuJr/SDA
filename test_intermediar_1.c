/* Să se scrie o funcție care interschimbă elementul din colțul sus-stânga al unei matrice cu elementul din colțul jos-dreapta al aceleași matrice. 
   Prototipul funcției este: void interchange_corners(int *M, int rows, int cols); */


void interchange_corners(int *M, int rows, int cols)
{
    int copy;
    copy=M[0];
    M[0]=M[rows*cols-1];
    M[rows*cols-1]=copy;
}
