

#include<iostream>

struct spare

{

int A[100][100];

int row;

int col;

};

struct spare set_data(spare obj)

{

spare obj1 = obj;

printf("Enter row,cols ");

scanf("%d %d",&obj1.row,&obj1.col); printf("Enter %d Elements ",(obj1.row)*(obj1.col)); for(int i=0; i<obj1.row; i++) for(int j=0; j<obj1.col; j++)


scanf("%d",&obj1.A[i][j]);

return obj1;

}

struct spare show_spare_matrix(spare obj)

{

struct spare temp;

temp=set_data(obj);

printf("Sparse Array is :\n") ;

for (int i=0; i<temp.row; i++)

{
 
for (int j=0; j<temp.col; j++)

{

printf("%d ", temp.A[i][j]);

}

printf("\n");

}

printf("\n\n");

return temp;

}

void display_compact(spare obj)

{

spare temp3; // = obj;

temp3=show_spare_matrix(obj);



int size = 0;

for (int i = 0; i < temp3.row; i++)

for (int j = 0; j < temp3.col; j++)

if (temp3.A[i][j] != 0)

size++;

int compactMatrix[3][size];

int k = 0;

for (int i = 0; i < temp3.row; i++)

for (int j = 0; j < temp3.col; j++)

if (temp3.A[i][j] != 0)

{

compactMatrix[0][k] = i;

compactMatrix[1][k] = j;
 
compactMatrix[2][k] = temp3.A[i][j];

k++;

}

printf("Compact Array: \n");

for (int i=0; i<3; i++)

{

for (int j=0; j<size; j++)

printf("%d ", compactMatrix[i][j]);

printf("\n");

}

printf("\n\n");



}

void sum(spare obj1,spare obj2)

{



spare temp3;

spare temp1 = show_spare_matrix(obj1); spare temp2 = show_spare_matrix(obj2); if(temp1.row!=temp2.row && temp1.col!=temp2.col) {

printf("Diamention not Equal!\n");

exit(0);

}

else

{

int size = 0;
 
printf("Addition is:\n") ;

for (int i=0; i<temp1.row; i++)

for(int j=0;j<temp1.col; j++)

temp3.A[i][j]=(temp1.A[i][j])+(temp2.A[i][j]) ;



for (int i = 0; i < temp1.row; i++)

for (int j = 0; j < temp1.col; j++)

{

if (temp3.A[i][j] != 0)

size++;

}

int compactMatrix[3][size];

int k = 0;

for (int i = 0; i < temp1.row; i++)

for (int j = 0; j < temp1.col; j++)

if (temp3.A[i][j] != 0)

{

compactMatrix[0][k] = i;

compactMatrix[1][k] = j;

compactMatrix[2][k] = temp3.A[i][j];

k++;

}

for (int i=0; i<3; i++)

{

for (int j=0; j<size; j++)

printf("%d ",compactMatrix[i][j]);

printf("\n");
 
}

printf("\n\n");

}








}

void subb(spare obj1,spare obj2)

{

spare temp3;

spare temp1 = show_spare_matrix(obj1); spare temp2 = show_spare_matrix(obj2); if(temp1.row!=temp2.row && temp1.col!=temp2.col) {

printf("Diamention not Equal! \n");

exit(0);

}

else

{

int size = 0;

printf("Subrtraction is:\n") ;

for (int i=0; i<temp1.row; i++)

for(int j=0;j<temp1.col; j++)

temp3.A[i][j]=(temp1.A[i][j])-(temp2.A[i][j]) ;



for (int i = 0; i < temp1.row; i++)

for (int j = 0; j < temp1.col; j++)
 
{

if (temp3.A[i][j] != 0)

size++;

}



int compactMatrix[3][size];

int k = 0;

for (int i = 0; i < temp1.row; i++)

for (int j = 0; j < temp1.col; j++)

if (temp3.A[i][j] != 0)

{

compactMatrix[0][k] = i;

compactMatrix[1][k] = j;

compactMatrix[2][k] = temp3.A[i][j];

k++;

}

for (int i=0; i<3; i++)

{

for (int j=0; j<size; j++)

printf("%d ",compactMatrix[i][j]);

printf("\n");

}

printf("\n\n");

}
 






}
 
int main()

{

struct spare n[2];

display_compact(n[0]);

display_compact(n[1]);

show_spare_matrix(n[2]);

sum(n[0],n[1]);

subb(n[0],n[1]);

}
