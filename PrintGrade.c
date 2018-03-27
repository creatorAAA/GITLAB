#include <stdio.h>
void main()
{
  char Name[30][40] = {"John Wick", " Mike Miller", "Ying Phakpon","Chai Chanchai", "Yong Boonsith", "Kitti Karndee"}; 
  int ID[30] = {3442, 3417, 3436, 8888, 1111, 5306}; 
  float GPA[30] = {2.07, 2.34, 1.12, 8.88, 1.32, 3.26}; 
  int N = 6, i;
  int SearchID, found_index; 
 
  printf("\nSTUDENT GPA LIST: \n"); 
  printf("ID----Name------------------------GPA\n"); 
  for (i=0;i<N; i++)
    printf("%5d %-25s %5.2f\n", ID[i], Name[i], GPA[i]); 
  printf("-------------------------------------\n");
  printf("Enter Student ID to Search (0 to End): "); 
  scanf("%d", &SearchID); 
  while (SearchID)
  {
      found_index = -1; 
      for (i = 0; i<N && found_index == -1; i++)

        if (SearchID == ID[i])

          found_index = i;

      if (found_index == -1)
        printf("Sorry, Student ID %5d not found.\n", SearchID);
      else 
        printf("ID: %5d. Name: %-25s. GPA: %5.2f.\n", 
           ID[found_index], Name[found_index],  GPA[found_index]);

      printf("Enter Student ID to Search (0 to End): ");

      scanf("%d", &SearchID);
  }
  printf("Bye Bye\n"); 
}
