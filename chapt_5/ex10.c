#include <stdio.h>

int main(void)
{
  int user_grade;

  printf("Enter a numerical grade: \n");
  scanf("%d", &user_grade);

  if (user_grade < 0 || user_grade > 100)
  {
    printf("Grade must be between 0 to 100\n");
  }

  printf("Letter grade: ");
  user_grade = user_grade - (user_grade % 10); // Will turn this number into 80, 90, etc..

  switch(user_grade)
  {
    case 100: case 90:
	    printf("A \n");
		break;
	case 80:
	    printf("B \n");
		break;
	case 70:
	    printf("C \n");
		break;
	case 60:
	    printf("D \n");
		break;
	default:
	    printf("F \n");
		break;
  }

  return 0;
}
