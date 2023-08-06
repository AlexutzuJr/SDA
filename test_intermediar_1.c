/* Să se scrie o funcție care primește ca argumente adresa unei matrice M, numărul de linii (rows) și numărul de coloane (columns) ce creează o clonă a matricei respective într-o nouă zonă de memorie și returnează adresa 
clonei.
   Prototipul funcției este: int *clone_matrix_to_p(int *M, int rows, int cols) */


int *clone_matrix_to_p(int *M, int rows, int cols)
{	
	int i;
	int j;

	//declaram o noua matrice A ca pointer
	int *A;
	
	for(i=0; i<rows; i++)
   {
		for(j=0; j<cols; j++)
      { 
			//A[i][j] = M[i][j]		
			*(A+ i*cols + j)= *(M + i*cols+ j);  
		}

	}

	//returnam adresa matricei
	return A;

}
