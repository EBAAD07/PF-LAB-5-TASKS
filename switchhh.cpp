#include<stdio.h>
int main()
{
	int course_code;
	char grade;
  printf("Enter course code = ");
  scanf("%d",&course_code);
  switch(course_code)
  {
  	case 1:
  	case 2:
    case 3:
  	case 4:
  	case 5:
    case 6:
    	printf("GRADE = ");
    	scanf(" %c",&grade);
  		switch(grade)
  	 {
  		case 'A':
  	    printf("VERY GOOD %d",course_code);
  	    break;
  	    case 'B':
  	    printf("GOOD %d",course_code);
  	    break;
  	    case 'C':
  	    printf("FAIR %d",course_code);
  	    break;
  	    case 'D':
  	    printf("WORK HARD %d",course_code);
  	    break;
  	    case 'E':
  	    printf("POOR %d",course_code);
  	    break;
  	    case 'F':
  	    printf("FAILED %d",course_code);
  	    break;
  	 default:
  	    	printf("invalid number");
  	}
  		break;
  	default:
  		printf("invalid number ");
		  }
  	    
  return 0;
}
