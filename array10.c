#include <stdio.h>
main()
{
      int i,j;
      char hari[7][10] =
	  {
           "minggu",
           "senin",
           "selasa",
           "rabu",
           "kamis",
           "jum'at",
           "sabtu"};
        for (i=0;i<7;i++)
		{
                for (j=0;j<7;j++)
				{
                   printf ("%s", hari[i][j]);
                }
                    printf("\n");
        }
                    return 0;
}  
