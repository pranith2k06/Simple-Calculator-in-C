# include<stdio.h>
int main(){
int x=1;
int am,cm,kel,time,hr,mi,we,nm;
float cmm,far,kg,g,mg,sec,min,met,cen,mil;
while ( x==1){
  int n,m,y;
  float a,b;
  printf("Simple Calculator \n==================== \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Comparision \n6.Percentage Calculator \n7.Other Calculations\n====================");
  printf("\nEnter the S.No which you want to do:");
  scanf("%d", &n);
  
  switch(n){
  
  case 1: printf("Enter the First Number:");
          scanf("%f", &a);
          printf("Enter the Second Number:");
          scanf("%f", &b);
          printf("The Sum of %f and %f \nis %f\n", a,b,a+b);
          break;
          
  case 2: printf("Enter the First Number:");
          scanf("%f", &a);
          printf("Enter the Second Number:");
          scanf("%f", &b);
          printf("The Difference b/w %f and %f is %f\n", a,b,a-b);
          break;
  
  case 3: printf("Enter the First Number:");
          scanf("%f", &a);
          printf("Enter the Second Number:");
          scanf("%f", &b);
          printf("%f times of %f is %f\n", a,b,a*b);
          break;
  
  case 4: printf("Enter the First Number:");
          scanf("%f", &a);
          printf("Enter the Second Number:");
          scanf("%f", &b);
          printf("When %f is divided by %f \nthen the outcome is %.2f\n", a, b, a/b);
          break;
  
  case 5: printf("Enter the First Number:");
          scanf("%f", &a);
          printf("Enter the Second Number:");
          scanf("%f", &b);
          if(a>b)
              printf("%.4f is Greater than %.4f\n", a,b);
          else if(a==b)
              printf("Both are Equal.\n");
          else
              printf("%.4f is Greater than %.4f\n", b,a);
          break;
          
  case 6: printf("Enter the Number:");
          scanf("%f", &a);
          printf("Enter the Percentage:");
          scanf("%f", &b);
          printf("%.2f is %.2f Percentage of %.2f\n", a*b/100, b, a );
          break;
  
  case 7: printf("Conversions List \n==================== \n1.Temperature \n2.Length \n3.Time \n4.Mass \n====================");
          printf("\nEnter the S.No which you want to do:");
          scanf("%d", &m);
          switch(m){
          
              case 1: printf("1.Celsius(°C) to Farenheit(°F) \n2.Celsius(°C) to Kelvin(K) \n3.Farenheit(°F) to Celsius(°C) \n4.Kelvin(K) to Celsius(°C)\n \nEnter Here:");
                      scanf("%d", &am);
                      switch(am){
                   
                           case 1: printf("Enter the Temperature (in °C):");
                                   scanf("%d", &cm);
                                   printf("The Temperature in Farenheit \nis %.2f°F\n\n", 1.8*cm+32);
                                   break;
                  
                           case 2: printf("Enter the Temperature (in °C):");
                                   scanf("%f", &cmm);
                                   printf("The Temperature in Kelvin is %.2fK\n\n", 273+cmm);
                                   break;
                   
                           case 3: printf("Enter the Temperature (in °F):");
                                   scanf("%f", &far);
                                   printf("The Temperature in Celsius is %.3f°C\n\n", 0.5555*(far-32));
                                   break;
                   
                           case 4: printf("Enter the Temperature (in K):");
                                   scanf("%d", &kel);
                                   printf("The Temperature in Celsius is %d°C\n\n", kel-273);
                                   break;
                      } 
                      break;
              
              case 2: printf("1.Meter(m) to Centimeter(cm) \n2.Centimeter(cm) to Millimeter(mm) \n3.Millimeter(mm) to Centimeter(cm) \n4.Centimeter(cm) to Meter(m)\n \nEnter Here:");
                      scanf("%d", &nm);
                      switch(nm){
                        
                          case 1: printf("Enter the Length (in m);");
                                  scanf("%f", &met);
                                  printf("The Length in Centimeter is %.2fcm\n\n", met*100);
                                  break;
                     
                          case 2: printf("Enter the Length (in cm):");
                                  scanf("%f", &cen);
                                  printf("The Length in Millimeter is %.2fmm\n\n", cen*10);
                                  break;
                     
                          case 3: printf("Enter the Length (in mm):");
                                  scanf("%f", &mil);
                                  printf("The Length in Centimeter is %.2fcm\n\n", mil*1/10);
                                  break;
                          
                          case 4: printf("Enter the Length (in cm):");
                                  scanf("%f", &cen);
                                  printf("The Length in Centimeter is %.2fm\n\n", cen*1/100);
                                  break;        
                      } 
                      break;
              
              case  3: printf("1.Hours(hrs) to Minutes(mins) \n2.Minutes(mins) to Seconds(s) \n3.Seconds(s) to Minutes(mins) \n4.Minutes(mins) to Hours(hrs)\n \nEnter Here:");
                       scanf("%d", &time);
                       switch(time){
                       
                           case 1: printf("Enter the Time (in hrs):");
                                   scanf("%d", &hr);
                                   printf("The Time in Minutes is %dmins\n\n", hr*60);
                                   break;
                                  
                           case 2: printf("Enter the Time (in mins):");
                                   scanf("%d", &mi);
                                   printf("The Time in Minutes is %ds\n\n", mi*60);
                                   break;
                           
                           case 3: printf("Enter the Time (in s):");
                                   scanf("%f", &sec);
                                   printf("The Time in Minutes is %.2fmins\n\n", sec*1/60);
                                   break;
                            
                           case 4: printf("Enter the Time (in mins):");
                                   scanf("%f", &min);
                                   printf("The Time in Hours is %.2fhrs\n\n", min*1/60);
                                   break;       
                       }
                       break;
          
          
              case 4: printf("1.Kilograms(Kg) to Grams(g) \n2.Grams(g) to Milligrams(mg) \n3.Grams(g) to Kilograms(Kg) \n4.Milligrams(mg) to Grams(g)\n \nEnter Here:");
                      scanf("%d", &we);
                      switch(we){
                      
                          case 1: printf("Enter the Weight (in Kg):");
                                  scanf("%f", &kg);
                                  printf("The Weight in Grams is %.2fg\n\n", kg*1000);
                                  break;
                                  
                          case 2: printf("Enter the Weight (in g):");
                                  scanf("%f", &g);
                                  printf("The Weight in Milligrams is %.2fmg\n\n", g*1000);
                                  break;
                                  
                          case 3: printf("Enter the Weight (in g):");
                                  scanf("%f", &g);
                                  printf("The Weight in Kilograms is %.2fKg\n\n", g*1/1000);
                                  break;
                                  
                          case 4: printf("Enter the Weight (in mg):");
                                  scanf("%f", &mg);
                                  printf("The Weight in Grams is %.2fg\n\n", mg*1/1000);
                                  break;                 
                      }
                      break;
              
          }
  
  default: printf("Entered Option is not in the list.\n");  
 }
printf("\nTo Continue Press-1 \nTo Stop Press anything \nEnter Here:");
scanf("%d", &y);
if(y==1)
   continue;
else{
 printf("\nThis Code was Written by K.Pranith \nfrom CVR CSC.\n");
 break;
}
}
return 0;
} 