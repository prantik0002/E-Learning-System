#include<stdio.h>
void homework();
void teacherslogin();
void studentslogin();
void notes();
void classnotes();
char t[10000],p[10000],q[10000],r[10000],s[10000],l[10000],e[10000],f[10000],h[10000],v[10000];
int main()
{
   int i;
   printf("\n\n\t**************************************\n");
   printf("\t\t*E LEARNING SYSTEM*\n");
   printf("\t**************************************\n");


  while(1)
   {
       printf("\n     1.TEACHERS LOGIN         ");
       printf("\t\t   2.STUDENTS LOGIN        \n");
       printf("\n\n\t            PRANAVANANDA VIDYA MANDIR           \n");
       printf("\n\n     3.CLASS NOTES                         ");
       printf("4.EXIT  ");
       printf("\n\n    ENTER YOUR CHOICE     \n\t");
       scanf("%d",&i);

       switch(i)
            {
                case 1:

                teacherslogin();

                break;

                case 2:

                studentslogin();

                break;

                case 3:

                classnotes();

                break;

                case 4:

                exit(0);

                default:

                printf("YOU HAVE ENTERED WRONG CHOICE\n");
                getch();

                break;
            }
            system("cls");
   }
   return 0;
}

void homework()
          {
              system("cls");
              int u,k,i;
              printf("  1.WHO IS THE PRIME MINISTER OF INDIA IN 2020\n");
              printf("  2.WHO IS THE CHEIF MINISTER OF TRIPURA IN 2020\n");
              printf("  DO YOU WANT TO ANSWER THIS QUESTIONS,IF YES THEN PRESS 1,IF NO THEN PRESS 0\n");
              scanf("%d",&u);
              if(u==1)
              {
                  printf("ENTER THE ANSWER OF NUMBER 1 AND 2\n");
                  fflush(stdin);
                  gets(t);
                  printf("DO YOU WANT TO UPLOAD THE ANSWER'S OF 1 AND 2,IF YES THEN PRESS 1,IF NO THEN PRESS 0\n");
                  scanf("%d",&k);
                    if(k==1)
                    {
                        printf("ANSWERS ARE UPLOADED\n");
                        getch();
                    }
                    else
                    {
                        t[0]='\0';
                        getch();
                    }



              }
              else
              {
                  t[0]='\0';
                  getch();
              }

          }


void teacherslogin()
     {
         system("cls");
         int userID,d,m,y,a,n,b,i,g,j;
         printf("ENTER THE USER ID\n");
         scanf("%d",&userID);
         printf("ENTER THE PASSWORD\n");
         scanf("%d- %d- %d",&d,&m,&y);
           if((userID==12345) &&(d==26) && (m==01) && (y==2000))
           {
                 system("cls");
                 printf("LOG IN SUCCESSFUL\n");
                 getch();
                 system("cls");
                 printf(" DO YOU WANT TO UPDATE NOTES,IF YES THEN PRESS 1 ,IF NO THEN PRESS O\n ");
                 scanf("%d",&b);
                  if(b==1)
                  {
                    while(j!=0)
                    {
                        system("cls");
                        printf(" 1.CLASS 1\n");
                    printf("2.CLASS 2\n");
                    printf("3.CLASS 3\n");
                    printf("  ENTER YOUR CLASS  \n");
                    scanf("%d",&a);
                    printf(" 1.SCIENCE\n");
                    printf("2.MATHS\n");
                    printf("3.ENGLISH\n");
                    printf("  ENTER YOUR SUBJECT  \n");
                    scanf("%d",&n);
                    system("cls");
                     if(a==1 && n==1)
                     {
                         printf("ENTER THE NOTES OF CLASS 1 FOR SCIENCE\n");
                         fflush(stdin);
                         gets(p);
                         printf("NOTES ARE UPDATED\n");
                         getch();
                     }

                     if(a==1 && n==2)
                     {
                         printf("ENTER THE NOTES OF CLASS 1 FOR MATHS\n");
                         fflush(stdin);
                         gets(q);
                         printf("NOTES ARE UPDATED\n");
                         getch();
                     }

                     if(a==1 && n==3)
                     {
                         printf("ENTER THE NOTES OF CLASS 1 FOR ENGLISH\n");
                         fflush(stdin);
                         gets(r);
                         printf("NOTES ARE UPDATED\n");
                         getch();
                     }

                     if(a==2 && n==1)
                     {
                         printf("ENTER THE NOTES OF CLASS 2 FOR SCIENCE\n");
                         fflush(stdin);
                         gets(s);
                         printf("NOTES ARE UPDATED\n");
                         getch();
                     }

                     if(a==2 && n==2)
                     {
                         printf("ENTER THE NOTES OF CLASS 2 FOR MATHS\n");
                         fflush(stdin);
                         gets(l);
                         printf("NOTES ARE UPDATED\n");
                         getch();
                     }

                     if(a==2 && n==3)
                     {
                         printf("ENTER THE NOTES OF CLASS 2 FOR ENGLISH\n");
                         fflush(stdin);
                         gets(e);
                         printf("NOTES ARE UPDATED\n");
                         getch();
                     }

                     if(a==3 && n==1)
                     {
                         printf("ENTER THE NOTES OF CLASS 3 FOR SCIENCE\n");
                         fflush(stdin);
                         gets(f);
                         printf("NOTES ARE UPDATED\n");
                         getch();
                     }

                     if(a==3 && n==2)
                     {
                         printf("ENTER THE NOTES OF CLASS 3 FOR MATHS\n");
                         fflush(stdin);
                         gets(h);
                         printf("NOTES ARE UPDATED\n");
                         getch();
                     }

                     if(a==3 && n==3)
                     {
                         printf("ENTER THE NOTES OF CLASS 3 FOR ENGLISH\n");
                         fflush(stdin);
                         gets(v);
                         printf("NOTES ARE UPDATED\n");
                         getch();
                     }

                     system("cls");
                     printf(" DO YOU WANT TO ADD MORE NOTES OR YOU WANT TO EXIT,IF YOU WANT TO ADD MORE NOTES THEN PRESS 1 ,IF YOU WANT TO EXIT THEN PRESS O\n");
                     scanf("%d",&j);
                      while(j==1)
                      {
                          break;
                      }

                    }


                  }
                   system("cls");
                   printf("DO YOU WANT TO CHECK THE HOMEWORK,IF YES THEN PRESS 1 ,IF NO THEN PRESS O\n");
                   scanf("%d",&g);
                      if(g==1)
                        {
                           if(t[0]=='\0')
                              printf("HOMEWORK NOT SUBMITTED\n");
                           else
                           {
                               system("cls");
                               printf("%s\n",t);
                               printf("HOMEWORK IS SUBMITTED\n");
                           }

                        }
                        getch();

           }
           else
           {
               system("cls");
               printf("log in invalid");
               getch();
           }

     }


     void studentslogin()
          {
             system("cls");
             int userID,d,m,y,ch;
             printf("ENTER THE USER ID\n");
             scanf("%d",&userID);
             printf("ENTER THE PASSWORD\n");
             scanf("%d- %d- %d",&d,&m,&y);
                if((userID==12345) &&(d==26) && (m==01) && (y==2000))
              {
                 system("cls");
                 printf("LOG IN SUCCESSFUL\n");
                 getch();
                 system("cls");
            while(ch!=3)
            {
                 printf("  1.VIEW NOTES \n");
                 printf("  2.VEIW HOMEWORK\n");
                 printf("  3.EXIT\n");
                 printf("ENTER YOUR CHOICE:-\n");
                 scanf("%d",&ch);

                  switch(ch)
              {

                          case 1:

                          notes();

                          break;

                          case 2:

                          homework();

                          break;

                          case 3:

                          break;

                          default:

                          printf("YOU HAVE ENTERED WRONG CHOICE\n");

                          break;
                 }
                 system("cls");
            }

              }
              else
              {
                  system("cls");
                  printf("LOG IN INVALID\n");
                  getch();
              }

          }


    void notes()
           {
               system("cls");
               int z,c,o,j;
               printf("  DO YOU WANT TO VIEW THE NOTES,IF YES THEN PRESS 1,IF NO THEN PRESS 0\n");
               scanf("%d",&z);
               system("cls");
                if(z==1)
                {
                  while(j!=0)
                   {
                    system("cls");
                    printf(" 1.CLASS 1\n");
                    printf("2.CLASS 2\n");
                    printf("3.CLASS 3\n");
                    printf("  ENTER YOUR CLASS  \n");
                    scanf("%d",&c);
                    printf(" 1.SCIENCE\n");
                    printf("2.MATHS\n");
                    printf("3.ENGLISH\n");
                    printf("  ENTER YOUR SUBJECT  \n");
                    scanf("%d",&o);
                    system("cls");
                     if(c==1 && o==1)
                     {
                         if(p[0]=='\0')
                         {
                           printf("NOTES ARE NOT UPDATED");
                           getch();
                         }
                         else
                         {
                            printf("NOTES OF CLASS 1 FOR SCIENCE IS:-\n ");
                            printf("%s\n",p);
                            getch();
                         }

                     }
                    if(c==1 && o==2)
                     {
                         if(q[0]=='\0')
                         {
                           printf("NOTES ARE NOT UPDATED");
                           getch();
                         }
                         else
                         {
                            printf("NOTES OF CLASS 1 FOR MATHS IS:-\n ");
                            printf("%s\n",q);
                            getch();
                         }

                     }
                    if(c==1 && o==3)
                     {
                         if(r[0]=='\0')
                         {
                           printf("NOTES ARE NOT UPDATED");
                           getch();
                         }
                         else
                         {
                            printf("NOTES OF CLASS 1 FOR ENGLISH IS:-\n ");
                            printf("%s\n",r);
                            getch();
                         }

                     }
                    if(c==2 && o==1)
                     {
                         if(s[0]=='\0')
                         {
                           printf("NOTES ARE NOT UPDATED");
                           getch();
                         }
                         else
                         {
                            printf("NOTES OF CLASS 2 FOR SCIENCE IS:-\n ");
                            printf("%s\n",s);
                            getch();
                         }

                     }
                    if(c==2 && o==2)
                     {
                         if(l[0]=='\0')
                         {
                           printf("NOTES ARE NOT UPDATED");
                           getch();
                         }
                         else
                         {
                            printf("NOTES OF CLASS 2 FOR MATHS IS:-\n ");
                            printf("%s\n",l);
                            getch();
                         }

                     }
                    if(c==2 && o==3)
                     {
                         if(e[0]=='\0')
                         {
                           printf("NOTES ARE NOT UPDATED");
                           getch();
                         }
                         else
                         {
                            printf("NOTES OF CLASS 2 FOR ENGLISH IS:-\n ");
                            printf("%s\n",e);
                            getch();
                         }

                     }
                    if(c==3 && o==1)
                     {
                         if(f[0]=='\0')
                         {
                           printf("NOTES ARE NOT UPDATED");
                           getch();
                         }
                         else
                         {
                            printf("NOTES OF CLASS 3 FOR SCIENCE IS:-\n ");
                            printf("%s\n",f);
                            getch();
                         }

                     }
                    if(c==3 && o==2)
                     {
                         if(h[0]=='\0')
                         {
                           printf("NOTES ARE NOT UPDATED");
                           getch();
                         }
                         else
                         {
                            printf("NOTES OF CLASS 3 FOR MATHS IS:-\n ");
                            printf("%s\n",h);
                            getch();
                         }

                     }
                    if(c==3 && o==3)
                     {
                         if(v[0]=='\0')
                         {
                           printf("NOTES ARE NOT UPDATED");
                           getch();
                         }
                         else
                         {
                            printf("NOTES OF CLASS 3 FOR ENGLISH IS:-\n ");
                            printf("%s\n",v);
                            getch();
                         }

                     }
                     system("cls");
                     printf(" DO YOU WANT TO SEE ANOTHER NOTES OR YOU WANT TO EXIT,IF YOU WANT TO SEE ANOTHER NOTES THEN PRESS 1 ,IF YOU WANT TO EXIT THEN PRESS O\n");
                     scanf("%d",&j);
                      while(j==1)
                      {
                          break;
                      }

                    }

                }
           }


     void classnotes()
          {
              system("cls");
              int x,w,u,j,z;
              printf("  DO YOU WANT TO VIEW THE NOTES,IF YES THEN PRESS 1,IF NO THEN PRESS 0\n");
              scanf("%d",&u);
              system("cls");
            if(u==1)
              {
                while(j!=0)
                {
                 system("cls");
              printf(" 1.CLASS 1\n");
              printf("2.CLASS 2\n");
              printf("3.CLASS 3\n");
              printf("  ENTER YOUR CLASS  \n");
              scanf("%d",&x);
              printf(" 1.SCIENCE\n");
              printf("2.MATHS\n");
              printf("3.ENGLISH\n");
              printf("  ENTER YOUR SUBJECT  \n");
              scanf("%d",&w);
              system("cls");
                if(x==1 && w==1)
                {
                   if(p[0]=='\0')
                   {
                       printf("NOTES ARE NOT UPDATED");
                       getch();
                   }

                    else
                    {
                       printf("NOTES OF CLASS 1 FOR SCIENCE IS:-\n ");
                       printf("%s\n",p);
                       getch();
                    }
                }
                  if(x==1 && w==2)
                     {
                         if(q[0]=='\0')
                         {
                           printf("NOTES ARE NOT UPDATED");
                           getch();
                         }
                         else
                         {
                            printf("NOTES OF CLASS 1 FOR MATHS IS:-\n ");
                            printf("%s\n",q);
                            getch();
                         }

                     }
                     if(x==1 && w==3)
                     {
                         if(r[0]=='\0')
                         {
                           printf("NOTES ARE NOT UPDATED");
                           getch();
                         }
                         else
                         {
                            printf("NOTES OF CLASS 1 FOR ENGLISH IS:-\n ");
                            printf("%s\n",r);
                            getch();
                         }

                     }
                     if(x==2 && w==1)
                     {
                         if(s[0]=='\0')
                         {
                           printf("NOTES ARE NOT UPDATED");
                           getch();
                         }
                         else
                         {
                            printf("NOTES OF CLASS 2 FOR SCIENCE IS:-\n ");
                            printf("%s\n",s);
                            getch();
                         }

                     }
                     if(x==2 && w==2)
                     {
                         if(l[0]=='\0')
                         {
                           printf("NOTES ARE NOT UPDATED");
                           getch();
                         }
                         else
                         {
                            printf("NOTES OF CLASS 2 FOR MATHS IS:-\n ");
                            printf("%s\n",l);
                            getch();
                         }

                     }
                     if(x==2 && w==3)
                     {
                         if(e[0]=='\0')
                         {
                           printf("NOTES ARE NOT UPDATED");
                           getch();
                         }
                         else
                         {
                            printf("NOTES OF CLASS 2 FOR ENGLISH IS:-\n ");
                            printf("%s\n",e);
                            getch();
                         }

                     }
                      if(x==3 && w==1)
                     {
                         if(f[0]=='\0')
                         {
                           printf("NOTES ARE NOT UPDATED");
                           getch();
                         }
                         else
                         {
                            printf("NOTES OF CLASS 3 FOR SCIENCE IS:-\n ");
                            printf("%s\n",f);
                            getch();
                         }

                     }
                      if(x==3 && w==2)
                     {
                         if(h[0]=='\0')
                         {
                           printf("NOTES ARE NOT UPDATED");
                           getch();
                         }
                         else
                         {
                            printf("NOTES OF CLASS 3 FOR MATHS IS:-\n ");
                            printf("%s\n",h);
                            getch();
                         }

                     }
                      if(x==3 && w==3)
                     {
                         if(v[0]=='\0')
                         {
                           printf("NOTES ARE NOT UPDATED");
                           getch();
                         }
                         else
                         {
                            printf("NOTES OF CLASS 3 FOR ENGLISH IS:-\n ");
                            printf("%s\n",v);
                            getch();
                         }

                     }
                     system("cls");
                     printf(" DO YOU WANT TO SEE ANOTHER NOTES OR YOU WANT TO EXIT,IF YOU WANT TO SEE ANOTHER NOTES THEN PRESS 1 ,IF YOU WANT TO EXIT THEN PRESS O\n");
                     scanf("%d",&j);
                      while(j==1)
                      {
                          break;
                      }

                    }
                }

          }

