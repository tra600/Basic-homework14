#include <iostream>  



int main()

{

    int Sidelength1,Sidelength2,Sidelength3; 

    printf("�T�ڤ���ण������@�ӤT���ΡC\n");

	printf("�w�q�G�T���Ϊ��T����@�w��������������M�j��ĤT��C\n");

	printf("�п�J�T��������סG");

scanf("%d%d%d",&Sidelength1,&Sidelength2,&Sidelength3);

        if( Sidelength1+Sidelength2>Sidelength3 && Sidelength1+Sidelength3>Sidelength2 && Sidelength2+Sidelength3>Sidelength1 ) 

        {

        printf("���G�G�i�H����\n");   

        }

        else

        {

        printf("���G�G���i�H����\n");   

        }

    system("pause"); 

	return 0; 

}
