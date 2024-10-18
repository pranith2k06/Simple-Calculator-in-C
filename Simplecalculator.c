# include <stdio.h>
int main()
{
int x=1;
while ( x==1){
  int n,m,nu,y;
  float f,s,fc,sc,fs,ss,fd,sd,fm,sm,p;
  printf("Simple Calculator \n==================== \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Comparision \n6.Percentage Calculator \n7.Other Calculations\n====================");
  printf("\nEnter the S.No which you want to do:");
  scanf("%d", &n);
 
  if(n==1){
   printf("Enter the First Number:");
   scanf("%f", &f);
   printf("Enter the Second Number:");
   scanf("%f", &s);
   printf("The Sum of %f and %f \nis %f.\n", f,s,f+s);
  }
  
  if(n==2){
   printf("Enter the First Number:");
   scanf("%f", &fs);
   printf("Enter the Second Number:");
   scanf("%f", &ss);
   printf("The Difference b/w %f and %f is %f.\n", fs,ss,fs-ss);
  }
  
  if(n==3){
   printf("Enter the First Number:");
   scanf("%f", &fm);
   printf("Enter the Second Number:");
   scanf("%f", &sm);
   printf("%f times of %f is %f.\n", fm,sm,fm*sm);
  }
  
  if(n==4){
   printf("Enter the First Number:");
   scanf("%f", &fd);
   printf("Enter the Second Number:");
   scanf("%f", &sd);
   printf("When %f is divided by %f \nthen the outcome is %.2f.\n", fd, sd, fd/sd);
  }
  
  if(n==5){
   printf("Enter the First Number:");
   scanf("%f", &fc);
   printf("Enter the Second Number:");
   scanf("%f", &sc);
   if(fc>sc){
   printf("%.4f is Greater than %.4f.\n", fc,sc);
   }
   else if(fc==sc){
   printf("Both are Equal.\n");
   }
   else{
   printf("%.4f is Greater than %.4f.\n", sc,fc);
   }
  }
  
  if(n==6){
   printf("Enter the Number:");
   scanf("%d", &nu);
   printf("Enter the Percentage:");
   scanf("%f", &p);
   printf("%.2f is %.2f Percentage of %d\n", nu*p/100, p, nu );
  } 
  
  int am,cm,kel;
  float cmm,far;
  if(n==7){
   printf("Conversions List \n==================== \n1.Temperature \n2.Length \n3.Time \n4.Mass \n====================");
   printf("\nEnter the S.No which you want to do:");
   scanf("%d", &m);
   if(m==1){
   printf("1.Celsius(°C) to Farenheit(°F) \n2.Celsius(°C) to Kelvin(K) \n3.Farenheit(°F) to Celsius(°C) \n4.Kelvin(K) to Celsius(°C)\n \nEnter Here:");
   scanf("%d", &am);
   }
   if(am==1){
   printf("Enter the Temperature (in °C):");
   scanf("%d", &cm);
   printf("The Temperature in Farenheit \nis %.2f°F.\n", 1.8*cm+32);
   }
   if(am==2){
   printf("Enter the Temperature (in °C):");
   scanf("%f", &cmm);
   printf("The Temperature in Kelvin is %.2fK\n", 273+cmm);
   }
   if(am==3){
   printf("Enter the Temperature (in °F):");
   scanf("%f", &far);
   printf("The Temperature in Celsius is %.3f°C.\n", 0.5555*(far-32));
   }
   if(am==4){
   printf("Enter the Temperature (in K):");
   scanf("%d", &kel);
   printf("The Temperature in Celsius is %d°C.\n", kel-273);
   }
   
   int nm;
   if(m==2){
   printf("1.Meter(m) to Centimeter(cm) \n2.Centimeter(cm) to Millimeter(mm) \n3.Millimeter(mm) to Centimeter(cm) \n4.Centimeter(cm) to Meter(m)\n \nEnter Here:");
   scanf("%d", &nm);
   float met,cen,mil;
   if(nm==1){
   printf("Enter the Length (in m);");
   scanf("%f", &met);
   printf("The Length in Centimeter is %.2fcm.\n", met*100);
   }
   if(nm==2){
   printf("Enter the Length (in cm):");
   scanf("%f", &cen);
   printf("The Length in Millimeter is %.2fmm.\n", cen*10);
   }
   if(nm==3){
   printf("Enter the Length (in mm):");
   scanf("%f", &mil);
   printf("The Length in Centimeter is %.2fcm.\n", mil*1/10);
   }
   if(nm==4){
   printf("Enter the Length (in cm):");
   scanf("%f", &cen);
   printf("The Length in Centimeter is %.2fm.\n", cen*1/100);
   }
    }
   
   
   int time,hr,mi; 
   float sec,min;
   if(m==3){
   printf("1.Hours(hrs) to Minutes(mins) \n2.Minutes(mins) to Seconds(s) \n3.Seconds(s) to Minutes(mins) \n4.Minutes(mins) to Hours(hrs)\n \nEnter Here:");
   scanf("%d", &time);
   if(time==1){
   printf("Enter the Time (in hrs):");
   scanf("%d", &hr);
   printf("The Time in Minutes is %dmins.\n", hr*60);
   }
   if(time==2){
   printf("Enter the Time (in mins):");
   scanf("%d", &mi);
   printf("The Time in Minutes is %ds.\n", mi*60);
   }
   if(time==3){
   printf("Enter the Time (in s):");
   scanf("%f", &sec);
   printf("The Time in Minutes is %.2fmins.\n", sec*1/60);
   }
   if(time==4){
   printf("Enter the Time (in mins):");
   scanf("%f", &min);
   printf("The Time in Hours is %.2fhrs.\n", min*1/60);
   }
   
   }
  
   int we;
   float kg,g,mg;
   if(m==4){
   printf("1.Kilograms(Kg) to Grams(g) \n2.Grams(g) to Milligrams(mg) \n3.Grams(g) to Kilograms(Kg) \n4.Milligrams(mg) to Grams(g)\n \nEnter Here:");
   scanf("%d", &we);
   if(we==1){
   printf("Enter the Weight (in Kg):");
   scanf("%f", &kg);
   printf("The Weight in Grams is %.2fg.\n", kg*1000);
   }
   if(we==2){
   printf("Enter the Weight (in g):");
   scanf("%f", &g);
   printf("The Weight in Milligrams is %.2fmg.\n", g*1000);
   }
   if(we==3){
   printf("Enter the Weight (in g):");
   scanf("%f", &g);
   printf("The Weight in Kilograms is %.2fKg.\n", g*1/1000);
   }
   if(we==4){
   printf("Enter the Weight (in mg):");
   scanf("%f", &mg);
   printf("The Weight in Grams is %.2fg.\n", mg*1/1000);
   }
   
   }
  
  }
  else if(n==0) {
  printf("Entered Option is not in the list.\n");
  }
  else if(n>7){
  printf("Entered Option is not in the list.\n");
  }
  
 
  printf("\nTo Continue Press-1 \nTo Stop Press-2 \nEnter Here:");
  scanf("%d", &y);
  if(y==1){
       continue;
   }
  if(y==2){
      printf("\nThis Code was Written by K.Pranith \nfrom CVR CSC.\n");
       break;
   }
  }
  return 0;
}