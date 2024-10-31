 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
#include<string.h>
 #define PAI 3.1415826

float F(float x)
{
    float a;
    a = 1 + 1 / x;
    return a;
}

long long rabbites(int n)
{
    if (n < 2)
    {
        return 1;
    }
    else 
    {
        return (rabbites(n - 1) + rabbites(n - 2));
    }
 }


 //�׳˺���
 int more_multiply(int n)
 {
     int sum = 1;
     for (int i = 1; i <= n; i++)
     {
         sum *= i;
     }
     return sum;
 }
 //�˷�����
 double M(double x, int n)
 {
     double sum = 1;
     for (int i = 1; i <= n; i++)
     {
         sum *= x;
     }
     return sum;
 }

 float gx(float x, int n)
 {
     int i; float sum = 1;
     for (i = 1; i <= n; i++) 
     {
         sum *= x / i;//ÿһ�ת��Ϊx/3 * x/2 * x /1����ʽ
     }
     return sum;
 }

  //�ֶκ������׳ˣ�
 double f(int m, int n)
 {
     if (m < n && m > 0 && n > 0)
     {
         return 0;
     }
     else if (m == n && m > 0 && n > 0)
     {
         return 1;

     }
     else if (m > n && m > 0 && n > 0)
     {
         double sum = 1;
         if (n > (double)(m / 2))
         {
             for (int i = 0; i < n; i++)
             {
                 sum *= (m - i) / ((m - n - i) * (n - i));
            }
             for (int i = 0; i < m - 2 * n; i++)
             {
                 sum *= (m - n - i) / (m - 2 * n - i);
             }
             for (int i = 0; i < n; i++)
             {
                 sum *= n - i;
             }
         }
         else
         {
             for (int i = 0; i < m - n; i++)
             {
                 sum *= (m - i) / ((m - n - i) * (n - i));
             }
             for (int i = 0; i < 2 * n - m; i++)
             {
                 sum *= n - i / (2 * n - m - i);
             }
             for (int i = 0; i < m - n; i++)
             {
                 sum *= m - n - i;
             }
         }
     }
     else
     {
         return -1;
     }

 }

 double p(double x, int n)
 {
     if (n == 0)
     {
         return 1;
     }
     else if (n == 1)
     {
         return x;
     }
     else if (n > 1)
     {
         return (((2.0 * n - 1.0) / n) * x * p(x, n - 1.0)) - (((n - 1.0) / n) * p(x, n - 2.0));
     }
 }



 void judge_zishou(int n)
 {
     for (int i = 1; i <= n; i++)
     {
         int  sum = 0;
         int temp = i;
         while (temp != 0)//����λ
         {
             temp /= 10;
             sum++;
         }
         if (i * i % (int)(pow(10, sum)) == i)
         {
             if (i != 1)
             {
                 printf(" ");
             }
             printf("%d", i);
         }
     }

 }

 //�����ж�
 void judge_su(int n)
 {
     int i = 2;
     while (i < n)
     {
         if (n % i == 0)
         {
             printf("N");
             return;//return�ɽ�������
         }
         i++;
     }
     printf("Y");
     
 }

 double line(int x1, int x2, int y1, int y2)//���ܳ�

 {

     double a = (x1 - x2) * (x1 - x2);

     double b = (y1 - y2) * (y1 - y2);

     return sqrt(a + b);

 }

 struct Teacher//��ʦͳ��
 {
     char name[20];
     int gender, age;
 };

 int strlen(char* str)
 {
     int i = 0, sum = 0;
     while (str[i - 1] != NULL)
     {
         sum++;
         i++;
     }
     return sum;
 }

 struct Student//ѧ������
 {
     int score;
     int id;
     char name[10];
 };

 //�ж�����
 int judge_num(int a, int b, int n)
 {
     if (a * n == b || b * n == a)
     {
         return 1;
     }
     return 0;
 }

 int main(void)
 {
     int a[100];
     int n;
     scanf_s("%d", &n);
     for (int i = 0; i < n; i++)
     {
         scanf_s("%d", &a[i]);
     }

     
     for (int j = 0; j < n - 1; j++)
     {
         if (a[j] == 0)
         {
             j--;
             for (int k = j; k < n - 1; k++)
             {
                 a[k] = a[k + 1];
             }
             a[n - 1] = 0;
         }
     }
     for(int i = 0; i < n;i++)
     {
         if (i > 0)
         {
             printf(" ");
         }
         printf("%d", a[i]);
     }

     /*int a1[10], a2[10], a3[10];
     for (int i = 0; i < 10; i++)
     {
         scanf_s("%d", &a1[i]);
         a2[i] = a1[i];
         a3[i] = a1[i];
     }
     int swp1 = 0, swp2 = 0, swp3 = 0;
     int con1 = 0, con2 = 0, con3 = 0;

     //��Ԫ����
     for( int i = 0; i < 10; i++)
     {
         int key = i;
         for (int j = i + 1; j < 10; j++)
         {
             if (a1[key] > a1[j])
             {
                 key = j;
             }
              con1++;
         }
         int temp = a1[i];
         a1[i] = a1[key];
         a1[key] = temp;
         swp1++;
     }


     //ð������
     int flag = 1;
     while (flag)
     {
         flag = 0;
         for (int i = 0; i < 10 - 1; i++)
         {
             if (a2[i] > a2[i + 1])
             {
      
                 int temp;
                 temp = a2[i];
                 a2[i] = a2[i + 1];
                 a2[i + 1] = temp;
                  swp2++;
                 flag = 1;
             }
              con2++;
         }
     }
    
     //��������
     for (int i = 0; i < 10; i++)
     {
         int j = i - 1;
         int key = a3[i];
         while (j >= 0 && a3[j] > key)//j��Ԫ���Դ��ڲ����������������ں���
         {
             a3[j + 1] = a3[j];
             swp3++;
             j--;
             con3++;
         }
         if (j + 1 != key)
         {
             swp3++;
         }
         a3[j + 1] = key;//key����j��Ԫ�أ��������j+1��λ��
           
            
     }

     printf("%d %d %d %d %d %d", con1, swp1 - 1, con2, swp2, con3 + 9, swp3);


     //typedef int inter;//int = inter�������
     //typedef struct Student stu;
     //stu stud;//ʹ��typedef�ɽ�sturct����ʱ��struct�ؼ���ȥ��
     struct Student student[3];
     for (int i = 0; i < 3; i++)//ѧ������
     {
         scanf_s("%d %d", &student[i].id, &student[i].score);//scanf���������ַ���
         gets(student[i].name);
     }

     int flag = 1;
     while (flag)
     {
         flag = 0;
         for (int i = 0; i < 2; i++)
         {
             if (student[i].score > student[i + 1].score)
             {
                 struct Student temp = student[i];
                 student[i] = student[i + 1];
                 student[i + 1] = temp;
                 flag = 1;
             }
         }
     }


     //for (int i = 0; i < 3; i++)//���������������
     //{
     //    int j = i - 1;
     //    struct Student key_student = student[i];
     //    while (j >= 0 && student[j].score > key_student.score)
     //    {
     //        student[j] = student[j - 1];
     //        j--;
     //    }
     //    student[j + 1] = key_student;
     //}


     for (int i = 0; i < 3; i++)
     {
         printf(" % d % d % s", student[i].id, student[i].score, student[i].name);
     }
     /*
     char str1[10] = "qwsasd", str2[10] = "asczz";
     //�Ƚ��ַ�
     printf("%d", strcmp(str1,str2));//�Ƚϸ��ַ�ASCLL�룬��һ����ͬ�ķ���1/0/-1
     //����
     strcpy_s(str1,8, "asdasdz");//ǰ���Ϊ�ַ����������м�Ϊ�����ַ��ĳ��ȼ�һ(\0)
     printf("%s", str1);

     gets(str2);

     

     /*
     int a[10] = { 1,4,5,2,6,3,7,8,10,9 };
     for (int i = 0; i < 10; i++)
     {
         int j = i - 1;
         int key = a[i];
         while (j >= 0 && a[j] > key)//j��Ԫ���Դ��ڲ����������������ں���
         {
             a[j + 1] = a[j];
             j--;
         }
         a[j + 1] = key;//key����j��Ԫ�أ��������j+1��λ��
     }
     for (int i = 0; i < 10; i++)
     {
         printf("%d", a[i]);
     }
     /*char str[256];
     int i = 0;
     gets(str);
     printf("%d", strlen(str) - 1);
     /*
     //��ʦͳ��
     struct Teacher teacher[10];
     int n;
     scanf_s("%d", &n);
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < 21; j++)
         {
             teacher[i].name[j] = getchar();
             if (teacher[i].name[j] == '1' || teacher[i].name[j] == '0')
             {
                 teacher[i].gender = (int)teacher[i].name[j];
                 teacher[i].name[j] = NULL;
                 break;
             }
         }
         scanf_s("%d", &teacher[i].age);
     }
     int i = 1;
     while (teacher[n / 2].name[i] != NULL)
     {
         printf("%c", teacher[n / 2].name[i]);
         i++;
     }
     if (teacher[n / 2].gender == 1)
     {
         printf("Male");
     }
     else
     {
         printf("Female");
     }

     printf(" %d", teacher[n / 2].age);

     */
     //�����ж�
    /*int sum = 0,flag1 = 1,flag2 = 1;
    int a[101], b[100];
    int n;
    scanf_s("%d", &n);
    int r = 0;
    while (flag2)
    {
        scanf_s("%d", &a[0]);
        if (a[0] == -1)
        {
            break;
        }

        int i = 1;
        flag1 = 1;
        while (flag1)
        {
            scanf_s("%d", &a[i]);
            flag1 = a[i];
            i++;
        }

        for (int j = 0; j < i; j++)
        {
            for (int k = j + 1; k < i - 1; k++)
            {
                if (judge_num(a[j], a[k], n))
                {
                    sum++;
                }
            }
        }
        b[r] = sum;
        sum = 0;
        r++;
        
    }

    for (int i = 0; i < r; i++)
    {
        printf("%d\n", b[i]);
    }*/

     /*int n;//����
     int c;//ϵ��
     scanf_s("%d", &n);
     if (n == 0)//�жϴ����Ƿ�Ϊ��
     {
         scanf_s("%d", &c);//����ϵ��
         printf("0");//����Ϊ�㣬����Ϊ��
     }
     else
     {
         for (int i = n; i >= 0; i--)//��n��ʼ�ݼ�����
         {
             scanf_s("%d", &c);//����ϵ��
             if (i < n)
             {
                 printf(" ");//��i�ӵڶ�����ʼʱ����ÿһ������ǰ����ո�
             }
             if (i != 0)//�жϴ����Ƿ�Ϊ��
             {
                 printf("%d", i * c);//��Ϊ����ô�����ϵ�����
             }
             else
             {
                 break;//Ϊ��˵�������һ��˳�ѭ��
             }
         }

     }


/*     //���ܳ�
     int n;

     double c = 0;

     scanf_s("%d", &n);

     if (n == 1)

     {
         scanf_s("%lf", &c);
         printf("0.00");

     }
     else if (n == 2)
     {
         int x1, y1;

         int x2, y2;

         scanf_s("%d %d %d %d", &x1, &y1,&x2,&y2);
         printf("%.2lf", line(x1, x2, y1, y2));
     }

     else

     {

         int x1, y1;

         int x2, y2;

         scanf_s("%d %d", &x1, &y1);

         int temp1 = x1, temp2 = y1;//װ��ʼ��

         for (int i = 1; i < n; i++)

         {

             scanf_s("%d %d", &x2, &y2);

             c += line(x1, x2, y1, y2);

             x1 = x2;

             y1 = y2;

         }

          printf("%.2lf", c += line(temp1, x1, temp2, y1));

         

     }

     //�ֶκ������׳ˣ�
     long long a = 1, b = 1, c = 1;
     int k;
     int m, n;
     scanf_s("%d %d", &m, &n);
     if (m > 0 && n > 0)
     {
         if (m < n)
             printf("0");
         if (m == n)
             printf("1");
         if (m > n)
         {//����ķֱ����Ƚ�����
             for (k = 1; k <= m; k++)
                 a *= k;
             for (k = 1; k <= n; k++)
                 b *= k;
             for (k = 1; k <= m - n; k++)
                 c *= k;
             printf("%d", a / (b * c));//???
         }
     }

     else
         printf("-1");
    

     //�����ж�
     int n;
     scanf_s("%d", &n);
     judge_su(n);
     
     /*long long n;//����
     long long num1 = 1, num2 = 1,temp;
     scanf_s("%lld", &n);
     if (n == 0 || n == 1)
     {
         printf("1");
     }
     else
     {
         for (long long i = 1; i < n; i++)
         {
             temp = num2;//����ڶ���
             num2 += num1;//num2������
             num1 = temp;//�ڶ����num1
         }
         printf("%lld", num2);
     }

     /*double x;//���õ��ն���ʽ
     int n ;
     scanf_s("%lf%d",&x, &n);
     printf("%.2lf", p(x, n));

     
     /*int n;//����

     scanf_s("%d", &n);

     printf("%lld", rabbites(n));



     /*char x = 0;//����ͳ��
     int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
     for (; x != '@';) {
         x = getchar();
         switch (x) {
         case'(':a++; break;
         case')':b++; break;
         case'[':c++; break;
         case']':d++; break;
         case'{':e++; break;
         case'}':f++; break;
         default:break;
         }
     }

     if (e != f) printf("{}");

     if (c != d) printf("[]");

     if (a != b) printf("()");

     if (a == b && c == d && e == f) {
         printf("NULL");
     }
   
     /*int n;
     scanf_s("%d", &n);
     int x1, y1;
     double c = 0;
     sanf_s("%d%d", &x1, &y1);
     for (int i = 0; i < n - 1; i++)
     {



         int x2, y2;
         double a, b;
         sanf("%d", &x2);
         scanf_s("%d", &y2);
         a = pow((x2 - x1), 2);
         b = pow((y2 - y1), 2);
         c += sqrt( a + b);
         x2 = x1;
         y2 = y1;
     }
     printf("%lf", c);
     /*int num;
     int a = 0;
     scanf_s("%d", &num);
     if (num >= 0)
     {   
     while (num != 0)
     {
         a += num % 10;
         a *= 10;
         num /= 10;
     }
     printf("%d", a / 10);
     }
     else
     {
         printf("NULL");
     }


     /*int m, n;
     scanf_s("%d%d", &m, &n);
     printf("%.f", f(m, n));

   char ch = ' ';
     int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
     while (ch != "@")
     {
         ch = getchar();
         if (ch == "(")
         {
             a++;
         }
         if (ch == ")")
         {
             b++;
         }
         if (ch == "[")
         {
             c++;
         }
         if (ch == "]")
         {
             d++;
         }if (ch == "{")
         {
             e++;
         }
         if (ch == "}")
         {
             f++;
         }
     }
     if (a == b && c == d && e == f)
     {
         printf("NULL");
     }
     else if (a == b && c != d && e != f)
     {
         printf("[]{}");
     }
     else if(a != b && c == d && e != f)
     {
         printf("(){}");
     }
     else if (a != b && c != d && e == f)
     {
         printf("()[]");
     }
     else if (a == b && c == d && e != f)
     {
         printf("{}");
     }
     else if (a == b && c != d && e == f)
     {
         printf("[]");
     }
     else if (a != b && c == d && e == f)
     {
         printf("()");
     }
     else if (a != b && c != d && e != f)
     {
         printf("()[]{}");
     }

     /*
     float x, m = 0, out = 0;
     scanf_s("%f", &x);
     for (size_t i = 0; i <= 100; i++) 
     {
         out  += gx(x, i);//����ѧ���ʽ����ת��
     }
     printf("%.2f", out);
     /*double x;
     scanf_s("%lf", &x);
     //�ۼ�
     double sum = 0;
     for (int i = 0; i <= 100; i++)
     {
         sum += M(x, i) / more_multiply(i);
         printf(" %.2lf", sum);
     }
  /*   if (x == 0)
     {
         printf("1.00");
     }
     else
     {
         printf("%.2lf", M(x, 100) / more_multiple(100));
     }
     


     /*double a = 1, n;//��double��ֹ������ʧ����
     scanf_s("%lf", &n);
     for (int i = 1; i <= n; i++)
     {
         a *= (2.0 * i) / (2.0 * i - 1.0) * (2.0 * i) / (2.0 * i + 1.0);
     }
     printf("%.10lf",  2 * a);//ע��lf��f

     /*double x, sum = 0, a = 1;
     int y = 1;
     scanf_s("%lf", &x);
     if (x == 0)
     {
         printf("1.00");
     }
     else
     {
         a = x * x;
         for (int i = 1; i <= 100; i++)
         {
             for (int j = 1; j <= i; j++)
             {
                 x *= x;
             }
             for (int k = i; k > 0; k--)
             {
                 y *= k;
             }
             sum += (a / y);
             printf("%lf", sum);
         }
         printf("%.2lf", sum + 1.0);
     }

     

     /*int n;
     double x;
     scanf_s("%lf%d", &x, &n);
     printf("%.2lf", p(x, n));


    /* int n;
     scanf_s("%d", &n);
     for (int i = 0; i < n; i++)
     {
         for (int j = 2 * (n - i) - 2; j > 0; j--)//��i��ո�������ѧ��ϵ
         {
             printf(" ");
         }
         for (int k1 = 1; k1 <= i + 1; k1++)//��i�����ֵ���ѧ��ϵ
         {
             printf("%2d", k1 % 10);
         }
         for (int k2 = i; k2 > 0; k2--)//�ֽ�����
         {
             printf("%2d", k2);
         }

         printf("\n");
     }

     /*int n;
     double sum = 1;
     scanf_s("%d", &n);
     for (float i = 1; i <= n; i++)
     {
         sum *= (((2.0 * i) / ((2.0 * i) - 1.0)) * ((2.0 * i) / ((2.0 * i) + 1.0)));
     }
     printf("%.10lf\n", sum);

     /*int i, j, k, s = 1;
     float x;
     scanf_s("%f", &x);
     float sum = 1 + x;
     for (i = 1; i < 100; i++)
     {
         for (j = 1; j < i - 1; j++)//����
         {
             x *= x;
         }
         for (k = i - 1; k > 1; k--)//��ĸ
         {
             s *= k;
         }
         sum += (x / s);
     }
     printf("%.2f", sum);

     

     /*int i;
     for (i = 1; i <= 200; i++)
     {
         if (i % 2 == 1 && i % 3 == 2 && i % 5 == 4 && i % 7 == 0)
         {
             printf("%d\n", i);
         }
     }

     /*int n;
     float x;
     scanf_s("%f %d", &x, &n);
     printf("%.2f", p(x, n));

     /*
     /*int i;
     double a, b, c;
     for (i = 100; i <= 999; i++)
     {
         a = pow(i % 10, 3);
         b = pow(i / 10 % 10, 3);
         c = pow(i / 100, 3);
         if (a + b +  c== i)
         {
             printf("%d", i);
             if (i != 998)
             {
                 printf(" ");
             }

         }
     }

    /* int n;
     scanf_s("%d", &n);
     if (n % 3 == 0 && n % 5 == 0 && n % 7 == 0)
     {
         printf("3,5,7");
     }
     else if (n % 3 == 0 && n % 5 == 0 )
     {
         printf("3,5");
     }
     else if ( n % 5 == 0 && n % 7 == 0)
     {
         printf("5,7");
     }
     else if (n % 3 == 0 && n % 7 == 0)
     {
         printf("3,7");
     }
     else if (n % 3 == 0)
     {
         printf("3");
     }
     else if ( n % 5 == 0 )
     {
         printf("5");
     }
     else if (n % 7 == 0)
     {
         printf("7");
     }
     else
     {
         printf("NULL");
     }

     /*int data, i = 0;
     scanf_s("%d", &data);
     while (i < data)
     {
         if (i % 11 == 0)
         {
             printf("%d", i);
             if (i != data - 1)
             {
                 printf(" ");
             }
         }
         i++;
     }

     /*float y, x;
     scanf_s("%f", &x);
     y = F(F(F(F(F(x)))));
     printf("%.3f", y);

       /*int gender, year;
        scanf_s("%d %d", &gender, &year);
        if (gender == 1)
        {
            if (year > 65 && year <= 70)
            {
                printf("%d", 50);
            }
            else if(year > 70)
            {
                printf("%d", 70);
            }
            else
            {
                printf("��");
            }
        }
        else
        {
            if (year > 60 && year <= 65)
            {
                printf("%d", 45);
            }
            else if (year > 65)
            {
                printf("%d", 70);
            }
            else
            {
                printf("��");
            }
        }

        /*float a[3];
        float s;
        for (int i = 0; i < 3; i++)
        {
            scanf_s("%f", &a[i]);
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 2 - i ; j++)
            {
                if (a[j] > a[j + 1])
                {
                    s = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = s;
                }
            }

        }
        for (int i = 0; i < 3; i++)
        {
            printf("%.1f", a[i]);
        }

        /*int h, m, s;
        scanf_s("%d", &s);
        if (s >= 3600 * 24)//�ж��Ƿ�һ��
        {
            s %= 3600 * 24;//ȥ����һ��Ĳ���
        }
        h = s / 3600;
        m = (s  % 3600) / 60;
        printf("%02d:%02d:%02d", h, m, (s % 3600) % 60);
        /*if (s < 60)
        {
            printf("00:00:%02d", s);
        }
        else if (s >= 60 && s < 3600)
        {
            printf("00:%02d:%02d", s / 60, s % 60);
        }
        else
        {
            printf("%02d:%02d:%02d", s / 3600, (s - (s / 3600) * 3600) / 60, (s % 3600) % 60);
        }*/

        /*float x, y, z, d;
        float A, B, C, D;
        scanf_s("%f %f %f %f %f %f %f ", &x,& y, &z, &A, &B, &C, &D);
        d = (fabs(A * x + B * y + C * z + D)) / (sqrt(A * A + B * B + C * C));
        printf("%.3f", d);

        /*int num1, num2;
        scanf_s("%d %d", &num1,&num2);
        printf("%d %d %d %d %d", num1 + num2, num1 - num2, num1 * num2, num1 / num2, num1 % num2);*/

        /*float C, F;
        scanf_s("%f", &C);
        F = 1.8 * C + 32;
        printf("%.3f", F);*/

        /*char ch1;
        ch1 = getchar();
        printf("%c%c%c", ch1 - 1 , ch1 , ch1 + 1);*/

        //ch1 = getchar();
        /*float x, a, y;
        scanf_s("%f %f", &a, &x);
        y = (sin(x) / (a * x)) + (fabs(cos(pai * x / 2)));
        printf("%.3f" , y);*/

        /*int power;
        float real_hurt ,  hurt = 256;
        printf("������������������\r");
        scanf_s("%i", &power);
        real_hurt = hurt * (power + 100) / 100;
        printf("�������Ϊ��%.2f", real_hurt);
        return 0;
    }*/

return 0;
}
