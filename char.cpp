#include<stdio.h>
main()
{ char alpha;
printf("Enter a letter of your choice\n", alpha);
scanf("%c", &alpha);
if(alpha=='A'||alpha=='a'||alpha=='E'||alpha=='e'||alpha=='I'||alpha=='i'||alpha=='O'||alpha=='o'||alpha=='u'||alpha=='U')
{printf("Vowel");
}
else{printf("consonant");
}
}
