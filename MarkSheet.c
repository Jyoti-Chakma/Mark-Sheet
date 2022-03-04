    #include<conio.h>
    #include<stdio.h>
    #include<string.h>
    void main()
    {
    int roll;
    float s1,s2,s3,s4,s5,s6,s7,s8,t,cg1,cg2,cg3,cg4,cg5,cg6,cg7,cg8,CGPA,p1,p2,p3,p4,p5,p6,p7,p8;
    char nm[25],div1[10],div2[10],div3[10],div4[10],div5[10],div6[10],div7[10],div8[10];

    printf("Enter the Roll No : ");
    scanf("%d",&roll);
    printf("Enter Name        : ");
        fflush(stdin);
    gets(nm);
    printf("Enter the obtained mark in EEE-111 : ");
    scanf("%f",&s1);
    printf("Enter the obtained mark in EEE-112 : ");
    scanf("%f",&s2);
    printf("Enter the obtained mark in EEE-113 : ");
    scanf("%f",&s3);
    printf("Enter the obtained mark in EEE-114 : ");
    scanf("%f",&s4);
    printf("Enter the obtained mark in ENG-151 : ");
    scanf("%f",&s5);
    printf("Enter the obtained mark in MATH-161 : ");
    scanf("%f",&s6);
    printf("Enter the obtained mark in PHY-171 : ");
    scanf("%f",&s7);
    printf("Enter the obtained mark in PHY-172 : ");
    scanf("%f",&s8);
    t=s1+s2+s3+s4+s5+s6+s7+s8;
        if(s1>=60)
            {
                cg1=3*4.00;
                strcpy(div1,"A+");
                p1=4.00;
            }
            else if(s1>=56.25&&s1<=59)
            {
                cg1=3*3.75;
                strcpy(div1,"A");
                p1=3.75;
            }
            else if (s1>=52.5&&s1<=55.5)
            {
                cg1=3*3.50;
                strcpy(div1,"A-");
                p1=3.50;
            }
            else if (s1>=48.75&&s1<=51.75)
            {
                cg1=3*3.25;
                strcpy(div1,"B+");
                p1=3.25;
            }
            else if(s1>=45&&s1<=48)
            {
                cg1=3*3.00;
                strcpy(div1,"B");
                p1=3.00;
            }
            else if(s1>=41.25&&s1<=44.25)
            {
                cg1=3*2.75;
                strcpy(div1,"B-");
                p1=2.75;
            }
            else if(s1>=37.5&&s1<=40.5)
            {
                cg1=3*2.50;
                strcpy(div1,"C+");
                p1=2.50;
            }
            else if(s1>=33.75&&s1<=36.75)
            {
                cg1=3*2.25;
                strcpy(div1,"C");
                p1=2.25;
            }
            else if(s1>=30&&s1<=33)
            {
                cg1=3*2.00;
                strcpy(div1,"D");
                p1=2.00;
            }
            else if(s1<=30)
            {
                cg1=0;
                strcpy(div1,"Fail");
                p1=0.00;
            }

        if(s2>=20)
            {
                cg2=1*4;
                strcpy(div2,"A+");
                p2=4.00;
            }
            else if(s2>=18.75&&s2<=19.75)
            {
                cg2=1*3.75;
                strcpy(div2,"A");
                p2=3.75;
            }
            else if (s2>=17.5&&s2<=18.5)
            {
                cg2=1*3.50;
                strcpy(div2,"A-");
                p2=3.50;
            }
            else if (s2>=16.25&&s2<=17.25)
            {
                cg2=1*3.25;
                strcpy(div2,"B+");
                p2=3.25;
            }
            else if(s2>=15&&s2<=16)
            {
                cg2=1*3.00;
                strcpy(div2,"B");
                p2=3.00;
            }
            else if(s2>=13.75&&s2<=14.75)
            {
                cg2=1*2.75;
                strcpy(div2,"B-");
                p2=2.75;
            }
            else if(s2>=12.5&&s2<=13.5)
            {
                cg2=1*2.50;
                strcpy(div2,"C+");
                p2=2.50;
            }
            else if(s2>=11.25&&s2<=12.25)
            {
                cg2=1*2.25;
                strcpy(div2,"C");
                p2=2.25;
            }
            else if(s2>=10&&s2<=11)
            {
                cg2=1*2.00;
                strcpy(div2,"D");
                p2=2.00;
            }
            else if(s2<=10)
            {
                cg2=0;
                strcpy(div2,"Fail");
                p2=0.00;
            }

        if(s3>=60)
            {
                cg3=3*4.00;
                strcpy(div3,"A+");
                p3=4.00;
            }
            else if(s3>=56.25&&s3<=59)
            {
                cg3=3*3.75;
                strcpy(div3,"A");
                p3=3.75;
            }
            else if (s3>=52.5&&s3<=55.5)
            {
                cg3=3*3.5;
                strcpy(div3,"A-");
                p3=3.50;
            }
            else if (s3>=48.75&&s3<=51.75)
            {
                cg3=3*3.25;
                strcpy(div3,"B+");
                p3=3.25;
            }
            else if(s3>=45&&s3<=48)
            {
                cg3=3*3;
                strcpy(div3,"B");
                p3=3.00;
            }
            else if(s3>=41.25&&s3<=44.25)
            {
                cg3=3*2.75;
                strcpy(div3,"B-");
                p3=2.75;
            }
            else if(s3>=37.5&&s3<=40.5)
            {
                cg3=3*2.5;
                strcpy(div3,"C+");
                p3=2.50;
            }
            else if(s3>=33.75&&s3<=36.75)
            {
                cg3=3*2.25;
                strcpy(div3,"C");
                p3=2.25;
            }
            else if(s3>=30&&s3<=33)
            {
                cg3=3*2.00;
                strcpy(div3,"D");
                p3=2.00;
            }
            else if(s3<=30)
            {
                cg3=0;
                strcpy(div3,"Fail");
                p3=0.00;
            }

        if(s4>=20)
            {
                cg4=1*4.00;
                strcpy(div4,"A+");
                p4=4.00;
            }
            else if(s4>=18.75&&s4<=19.75)
            {
                cg4=1*3.75;
                strcpy(div4,"A");
                p4=3.75;
            }
            else if (s4>=17.5&&s4<=18.5)
            {
                cg4=1*3.50;
                strcpy(div4,"A-");
                p4=3.50;
            }
            else if (s4>=16.25&&s4<=17.25)
            {
                cg4=1*3.25;
                strcpy(div4,"B+");
                p4=3.25;
            }
            else if(s4>=15&&s4<=16)
            {
                cg4=1*3.00;
                strcpy(div4,"B");
                p4=3.00;
            }
            else if(s4>=13.75&&s4<=14.75)
            {
                cg4=1*2.75;
                strcpy(div4,"B-");
                p4=2.75;
            }
            else if(s4>=12.5&&s4<=13.5)
            {
                cg4=1*2.50;
                strcpy(div4,"C+");
                p4=2.50;
            }
            else if(s4>=11.25&&s4<=12.25)
            {
                cg4=1*2.25;
                strcpy(div4,"C");
                p4=2.25;
            }
            else if(s4>=10&&s4<=11)
            {
                cg4=1*2.00;
                strcpy(div4,"D");
                p4=2.00;
            }
            else if(s4<=10)
            {
                cg4=0;
                strcpy(div4,"Fail");
                p4=0.00;
            }

        if(s5>=40)
            {
                cg5=2*4;
                strcpy(div5,"A+");
                p5=4.00;
            }
            else if(s5>=37.5&&s5<=39.5)
            {
                cg5=2*3.75;
                strcpy(div5,"A");
                p5=3.75;
            }
            else if (s5>=35&&s5<=37)
            {
                cg5=2*3.50;
                strcpy(div5,"A-");
                p5=3.50;
            }
            else if (s5>=32.5&&s5<=34.5)
            {
                cg5=2*3.25;
                strcpy(div5,"B+");
                p5=3.25;
            }
            else if(s5>=30&&s5<=32)
            {
                cg5=2*3.00;
                strcpy(div5,"B");
                p5=3.00;
            }
            else if(s5>=27.5&&s5<=29.5)
            {
                cg5=2*2.75;
                strcpy(div5,"B-");
                p5=2.75;
            }
            else if(s5>=25&&s5<=27)
            {
                cg5=2*2.50;
                strcpy(div5,"C+");
                p5=2.50;
            }
            else if(s5>=22.5&&s5<=24.5)
            {
                cg5=2*2.25;
                strcpy(div5,"C");
                p5=2.25;
            }
            else if(s5>=20&&s5<=22)
            {
                cg5=2*2.00;
                strcpy(div5,"D");
                p5=2.00;
            }
            else if(s5<=20)
            {
                cg5=0;
                strcpy(div5,"Fail");
                p5=0.00;
            }

        if(s6>=60)
            {
                cg6=3*4;
                strcpy(div6,"A+");
                p6=4.00;
            }
            else if(s6>=56.25&&s6<=59)
            {
                cg6=3*3.75;
                strcpy(div6,"A");
                p6=3.75;
            }
            else if (s6>=52.5&&s6<=55.5)
            {
                cg6=3*3.50;
                strcpy(div6,"A-");
                p6=3.50;
            }
            else if (s6>=48.75&&s6<=51.75)
            {
                cg6=3*3.25;
                strcpy(div6,"B+");
                p6=3.25;
            }
            else if(s6>=45&&s6<=48)
            {
                cg6=3*3.00;
                strcpy(div6,"B");
                p6=3.00;
            }
            else if(s6>=41.25&&s6<=44.25)
            {
                cg6=3*2.75;
                strcpy(div6,"B-");
                p6=2.75;
            }
            else if(s6>=37.5&&s6<=40.5)
            {
                cg6=3*2.50;
                strcpy(div6,"C+");
                p6=2.50;
            }
            else if(s6>=33.75&&s6<=36.75)
            {
                cg6=3*2.25;
                strcpy(div6,"C");
                p6=2.25;
            }
            else if(s6>=30&&s6<=33)
            {
                cg6=3*2.00;
                strcpy(div6,"D");
                p6=2.00;
            }
            else if(s6<=30)
            {
                cg6=0;
                strcpy(div6,"Fail");
                p6=0.00;
            }

        if(s7>=80)
            {
                cg7=4*4;
                strcpy(div7,"A+");
                p7=4.00;
            }
            else if(s7>=75&&s7<=79)
            {
                cg7=4*3.75;
                strcpy(div7,"A");
                p7=3.75;
            }
            else if (s7>=70&&s7<=74)
            {
                cg7=4*3.50;
                strcpy(div7,"A-");
                p7=3.50;
            }
            else if (s7>=65&&s7<=69)
            {
                cg7=4*3.25;
                strcpy(div7,"B+");
                p7=3.25;
            }
            else if(s7>=60&&s7<=64)
            {
                cg7=4*3.00;
                strcpy(div7,"B");
                p7=3.00;
            }
            else if(s7>=55&&s7<=59)
            {
                cg7=4*2.75;
                strcpy(div7,"B-");
                p7=2.75;
            }
            else if(s7>=50&&s7<=54)
            {
                cg7=4*2.50;
                strcpy(div7,"C+");
                p7=2.50;
            }
            else if(s7>=45&&s7<=49)
            {
                cg7=4*2.25;
                strcpy(div7,"C");
                p7=2.25;
            }
            else if(s7>=40&&s7<=44)
            {
                cg7=4*2.00;
                strcpy(div7,"D");
                p7=2.00;
            }
            else if(s7<=40)
            {
                cg7=0;
                strcpy(div7,"Fail");
                p7=0.00;
            }

        if(s8>=20)
            {
                cg8=1*4.00;
                strcpy(div8,"A+");
                p8=4.00;
            }
            else if(s8>=18.75&&s8<=19.75)
            {
                cg8=1*3.75;
                strcpy(div8,"A");
                p8=3.75;
            }
            else if (s8>=17.5&&s8<=18.5)
            {
                cg8=1*3.50;
                strcpy(div8,"A-");
                p8=3.50;
            }
            else if (s8>=16.25&&s8<=17.25)
            {
                cg8=1*3.25;
                strcpy(div8,"B+");
                p8=3.25;
            }
            else if(s8>=15&&s8<=16)
            {
                cg8=1*3.00;
                strcpy(div8,"B");
                p8=3.00;
            }
            else if(s8>=13.75&&s8<=14.75)
            {
                cg8=1*2.75;
                strcpy(div8,"B-");
                p8=2.75;
            }
            else if(s8>=12.5&&s8<=13.5)
            {
                cg8=1*2.50;
                strcpy(div8,"C+");
                p8=2.50;
            }
            else if(s8>=11.25&&s8<=12.25)
            {
                cg8=1*2.25;
                strcpy(div8,"C");
                p8=2.25;
            }
            else if(s8>=10&&s8<=11)
            {
                cg8=1*2.00;
                strcpy(div8,"D");
                p8=2.00;
            }
            else if(s8<=10)
            {
                cg8=0;
                strcpy(div8,"Fail");
                p8=0.00;
            }

        CGPA=(cg1+cg2+cg3+cg4+cg5+cg6+cg7+cg8)/18;

    printf("\t\tUniversity of Chittagong\n");
    printf("\t\tFaculty of Engineering\n");
    printf("\tElectrical & Electronic Engineering \n");
    printf("\tFirst Semester B.Sc. Engineering Examination \n");
    printf("Student ID          : %d\n",roll);
        printf("Name of the Student : %s\n",nm);
        printf("Session             : 2017-2018\n");
    printf("\n\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("Course Code            Course Name                  Credit     Grade      Point\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("EEE-111       Basic Electrical Engineering           3          %s         %3.2f\n",div1,p1);
    printf("----------------------------------------------------------------------------------\n");
    printf("EEE-112    Lab on Basic Electrical Engineering       1          %s         %3.2f\n",div2,p2);
    printf("----------------------------------------------------------------------------------\n");
    printf("EEE-113       Basic Mechanical Engineering           3          %s         %3.2f\n",div3,p3);
    printf("----------------------------------------------------------------------------------\n");
        printf("EEE-114    Lab on Basic Mechanical Engineering       1          %s         %3.2f\n",div4,p4);
        printf("----------------------------------------------------------------------------------\n");
        printf("ENG-151            Technical English                 2          %s         %3.2f\n",div5,p5);
        printf("----------------------------------------------------------------------------------\n");
        printf("MATH-161    Differential and Integral Calculus       3          %s         %3.2f\n",div6,p6);
        printf("----------------------------------------------------------------------------------\n");
        printf("                  Properties of Matter\n");
        printf("PHY-171            Classical Mechanics               4          %s         %3.2f\n",div7,p7);
        printf("                   Applied Acoustics\n");
        printf("----------------------------------------------------------------------------------\n");
        printf("              Lab on Properties of Matter\n");
        printf("PHY-172           Classical Mechanics                1          %s         %3.2f\n",div8,p8);
        printf("                  Applied Acoustics\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("Total                                      Credit: 18               CGPA = %3.2f\n",CGPA);
    printf("----------------------------------------------------------------------------------\n");
    getch();
    }
