#include <iostream>

void createMatrix(int** matrix, int rows, int columns)
{
	std::cout<<"Enter elements of the matrix one by one"<<std::endl;
    for(int i=0;i<rows;i++)
    {
        matrix[i]=new int[columns];
        for(int j=0;j<columns;j++)
	{
		std::cin>>matrix[i][j];
        }
    }
}

void showMatrix(int** matrix, int rows, int columns)
{
	std::cout<<"\n**********************************************"<<std::endl;
	std::cout<<"* A Matrix of the order "<<rows<<"x"<<columns<<" has been created *"<<std::endl;
	std::cout<<"**********************************************"<<std::endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
	{
		std::cout<<matrix[i][j]<<" ";
        }
	std::cout<<std::endl;
    }
}

int RowSum(int* row, int columns)
{
    int sum=0;
    for(int j=0;j<columns;j++)
    {
        sum+=row[j];
    }
    return sum;
}
int ColumnSum(int** matrix, int rows, int column)
{
    int sum=0;
    for(int i=0;i<rows;i++)
    {
        sum+=matrix[i][column];
    }
    return sum;
}
void largestSum(int** matrix, int rows, int columns)
{
    int largestRowSum=0;
    int largestRow=0;
    int largestColumnSum=0;
    int largestColumn=0;
    for(int i=0;i<rows;i++)
    {
        int rowSum=RowSum(matrix[i],columns);
        if(rowSum>largestRowSum)
	{
            largestRowSum=rowSum;
            largestRow=i;
        }
    }

    for(int j=0;j<columns;j++)
    {
        int columnSum=ColumnSum(matrix,rows,j);
        if(columnSum>largestColumnSum)
	{
            largestColumnSum=columnSum;
            largestColumn=j;
        }
    }

    std::cout<<"Row with the largest sum: "<<largestRow+1<<std::endl;
    std::cout<<"Column with the largest sum: "<<largestColumn+1<<std::endl;
}
int main()
{
    int m,n;
    std::cout<<"Enter the number of rows: ";
    std::cin>>m;
    std::cout<<"Enter the number of columns: ";
    std::cin>>n;
    int** matrix=new int*[m];
    createMatrix(matrix, m, n);
    showMatrix(matrix, m, n);
    largestSum(matrix, m, n);
    return 0;
}
/* Input and Output
 * Enter the number of rows: 2
 * Enter the number of columns: 4
 * Enter the elements of the matrix one by one
 * 1
 * 2
 * 3
 * 4
 * 5
 * 5
 * 2
 * 3
 * **********************************************
 * * A Matrix of the order 2x4 has been created *
 * **********************************************
 * 1 2 3 4 
 * 5 5 2 3
 * Row with the largest sum: 2
 * Column with the largest sum: 2
 * */
