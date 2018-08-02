#include <stdio.h>
float input();
int inputforchoice();
int metric();
int weight();
int area();
int time();
int volume();
int temprature();
int milege();
int pressure();
int length();
int power();

int main()
{

    int choice;
    float num;
    printf("-------------------- WELCOME --------------------\n");
    printf("------------TO UNIT & CURRENCY Converter----------\n");
    printf("-->Press 1 to calculate Unit Conversion-:\n");
    printf("-->Press 2 to calculate Currency Conversion-:\n");
    printf("-->Press 3 to EXIT!!-:\n");

    printf("-->Enter your choice:- \n");
    choice = inputforchoice();

    switch (choice) {
    case 1: {
        int num;

        printf("-->Press 1 Convert metric or length units like KM,M,CM,MM \n");
        printf("-->Press 2 Convert weight unit like KG,G,tone\n");
        printf("-->Press 3 Convert Area unit like square meter ,  square kilometer\n");
        printf("-->Press 4 Convert TIME unit like Min,sec,hour\n");
        printf("-->Press 5 Convert VOLUME unit like litre, mililitre\n");
        printf("-->Press 6 Convert TEMPRATURE unit like ferenheit, celsious\n");
        printf("-->Press 7 Convert MILEGE unit like miles, KM,yards\n");
        printf("-->Press 8 Convert PRESSURE unit like pascal,bar,torr,atm\n");
        printf("-->Press 9 Convert LENGTH unit like milimeter,centimeter\n");
        printf("-->Press 10 Convert POWER unit like KW,VOLTS\n");

        printf("-->Press 11 Back to MENU \n\n");

        printf("-->enter you choice to unit covert:-\n");
        num = inputforchoice();
        switch(num){
            case 1:{
                metric();
                break;
            }
            case 2:{
                weight();
                break;
            }
            case 3:{
                area();
                break;
            }
            case 4:{time();
                break;
            }
            case 5:{volume();
                break;
            }
            case 6:{temprature();
                break;
            }
            case 7:{milege();
                break;
            }
            case 8:{pressure();
                break;
            }
            case 9:{length();
                break;
            }
            case 10:{power();
                break;
            }
             case 11:{

                  main();
                break;
            }

        }

        break;
    }
    case 2: {
         float data1,output;
         int val;

        printf("-->Enter Amount to Convert:-\n");
        data1 = input();
        printf("\n");
        printf("-->Press 1 Convert INR to DOLLAR \n");
        printf("-->Press 2 Convert DOLLAR to INR\n");
        printf("-->Press 3 Convert INR to BITCOIN \n");
        printf("-->Press 4 Convert BITCOIN to INR \n");
        printf("-->Press 5 Convert DOLLAR to BITCOIN \n");
        printf("-->Press 6 Convert BITCOIN to DOLLAR \n");
        printf("-->Press 7 Convert INR to EURO \n");
        printf("-->Press 8 Convert INR to BRITISHPOUND \n");
        printf("-->Press 9 Back to menu \n\n");

        printf("-->enter your choice to Currency Covert!\n");
        val= inputforchoice();
        switch(val){
            case 1:{
               output =data1*68.30;
               printf("%frupee is dollar --> %f$",data1,output);
                break;
            }
            case 2:{
                output =data1/68.30;
               printf("%f$ is INR --> %frupees",data1,output);
                break;
            }
            case 3:{
               output =data1*0.0000019;
               printf("%frupee is BITCOIN --> %f$$",data1,output);
                break;
            }
            case 4:{
               output =data1/0.0000019;
               printf("%f$$ is INR --> %frupees",data1,output);
                break;
            }
            case 5:{
               output =data1*0.00013;
               printf("%f$ is BITCOIN --> %f$$",data1,output);
                break;
            }
            case 6:{
               output =data1/0.00013;
               printf("%f$$ is DOLLAR --> %f$",data1,output);
                break;
            }
            case 7:{
               output =data1*0.14636;
               printf("%frupee is EURO --> %f",data1,output);
                break;
            }
            case 8:{
               output =data1*0.1115;
               printf("%frupee is BRITISHPOUND --> %f",data1,output);
                break;
            }
            case 9:{
                main();
                break;
            }
        }

        break;
    }
    case 3:{  exit(0);
    break;}

    default:
        printf("wrong Input\n");
    }
    return 0;
}
float input()
{
    float number;
    scanf("%f", &number);
    return (number);
}
int inputforchoice()
{
    int number1;
    scanf("%d", &number1);
    return (number1);
}

int milege(){
    float num, result;
    int choice;
    printf("enter data for conversion");
    num = input();
    printf("Press 1 miles to KM Conversion\n");
    printf("Press 2 KM to miles Conversion\n");
    printf("Press 3 miles to yard Conversion\n");
    printf("Press 4 yard to miles Conversion\n");
     printf("Press 5 back  to options\n");
    printf("Enter your choice:\n");
    choice = inputforchoice();

    switch (choice) {
    case 1: {
           result = num/0.62137;
           printf("%f is in KM --> %f",num,result);
        break;
    }
    case 2: {
             result = num*0.62137;
           printf("%f is in MILES --> %f",num,result);
        break;
    }
    case 3: {
           result = num*1760;
           printf("%f is in YARDS --> %f",num,result);
        break;
    }
    case 4: {
           result = num/1760;
           printf("%f is in MILES --> %f",num,result);
        break;
    }
    case 5: {
        printf("going to menu");
            main();
        break;
    }
    default:
        printf("wrong option");
    }
    return 0;
}

int pressure(){
    float num, result;
    int choice;
    printf("enter data for conversion");
    num = input();
    printf("Press 1 PASCAL to BAR Conversion\n");
    printf("Press 2 BAR to PASCAL Conversion\n");
    printf("Press 3 PASCAL to TORR Conversion\n");
    printf("Press 4 TORR to PASCAL Conversion\n");
    printf("Press 5 back  to options\n");
    printf("Enter your choice:\n");
    choice = inputforchoice();

    switch (choice) {
    case 1: {
           result = num/100000;
           printf("%f is in BAR --> %f",num,result);
        break;
    }
    case 2: {
            result = num*100000;
           printf("%f is in PASCAL --> %f",num,result);
        break;
    }
    case 3: {
            result = num/0.0075;
           printf("%f is in TORR --> %f",num,result);
        break;
    }
    case 4: {
            result = num*0.0075;
           printf("%f is in PASCAL --> %f",num,result);
        break;
    }
    case 5: {
        printf("going to menu");
            main();
        break;
    }
    default:
        printf("wrong option");
    }
    return 0;
}

int length(){
    float num, result;
    int choice;
    printf("enter data for conversion");
    num = input();
    printf("Press 1 MILIMETER to CENTIMETER Conversion\n");
    printf("Press 2 CENTIMETER to MILIMETER Conversion\n");
     printf("Press 3 back  to options\n");
    printf("Enter your choice:\n");
    choice = inputforchoice();

    switch (choice) {
    case 1: {
           result = num*0.1;
           printf("%f is in CENTIMETER --> %f",num,result);
        break;
    }
    case 2: {
            result = num*10;
           printf("%f is in MILIMETER --> %f",num,result);
        break;
    }
    case 3: {
        printf("going to menu");
            main();
        break;
    }
    default:
        printf("wrong option");
    }
    return 0;
}

int power(){
    float num, result;
    int choice;
    printf("enter data for conversion");
    num = input();
    printf("Press 1 KILOWATT to WATT Conversion\n");
    printf("Press 2 WATT to KILLOWATT Conversion\n");
    printf("Press 3 KILOVOLT to VOLT Conversion\n");
    printf("Press 4 VOLT to KILLOVOLT Conversion\n");
    printf("Press 5 back  to options\n");
    printf("Enter your choice:\n");
    choice = inputforchoice();

    switch (choice) {
    case 1: {
           result = num*1000;
           printf("%f is in WATT --> %fjoules/sec",num,result);
        break;
    }
    case 2: {
            result = num/1000;
           printf("%fjoules/sec is in KILOWATT --> %f",num,result);
        break;
    }
    case 3: {
           result = num*1000;
           printf("%f is in VOLT --> %fjoules/coulomb",num,result);
        break;
    }
    case 4: {
           result = num/1000;
           printf("%fjoules/coulomb is in KILOVOLT --> %f",num,result);
        break;
    }
    case 5: {
        printf("going to menu");
            main();
        break;
    }
    default:
        printf("wrong option");
    }
    return 0;
}

int metric(){
    float num, result;
    int choice;
    printf("enter data for conversion");
    num = input();
    printf("Press 1 KM to M Conversion\n");
    printf("Press 2 M to KM Conversion\n");
     printf("Press 3 back  to options\n");
    printf("Enter your choice:\n");
    choice = inputforchoice();

    switch (choice) {
    case 1: {
           result = num*1000;
           printf("%f is in METER --> %f",num,result);
        break;
    }
    case 2: {
            result = num/1000;
           printf("%f is in KILOMETER --> %f",num,result);
        break;
    }
    case 3: {
        printf("going to menu");
            main();
        break;
    }
    default:
        printf("wrong option");
    }
    return 0;
}

int weight(){
    float num, result;
    int choice;
    printf("enter data for conversion");
    num = input();
    printf("Press 1 KILOGRAM to GRAM Conversion\n");
    printf("Press 2 GRAM to KILOGRAM Conversion\n");
     printf("Press 3 back  to options\n");
    printf("Enter your choice:\n");
    choice = inputforchoice();

    switch (choice) {
    case 1: {
           result = num*1000;
           printf("%fK.G is in GRAM --> %fgram",num,result);
        break;
    }
    case 2: {
            result = num/1000;
           printf("%fgram is in KILOGRAM --> %fK.G",num,result);
        break;
    }
    case 3: {
        printf("going to menu");
            main();
        break;
    }
    default:
        printf("wrong option");
    }
    return 0;
}
int area(){
    float num, result;
    int choice;
    printf("enter data for conversion");
    num = input();
    printf("Press 1 ACRE to SQUAREFEET Conversion\n");
    printf("Press 2 SQUAREFEET to ACRE Conversion\n");
     printf("Press 3 back  to options\n");
    printf("Enter your choice:\n");
    choice = inputforchoice();

    switch (choice) {
    case 1: {
           result = num*43560;
           printf("%fA is in SQUAREFEET --> %fsf",num,result);
        break;
    }
    case 2: {
            result = num/43560;
           printf("%fsf is in ACRE --> %fA",num,result);
        break;
    }
    case 3: {
        printf("going to menu");
            main();
        break;
    }
    default:
        printf("wrong option");
    }
    return 0;
}
int volume(){
    float num, result;
    int choice;
    printf("enter data for conversion");
    num = input();
    printf("Press 1 LITRE to MILILITRE Conversion\n");
    printf("Press 2  MILILITRE to LITRE Conversion\n");
     printf("Press 3 back  to options\n");
    printf("Enter your choice:\n");
    choice = inputforchoice();

    switch (choice) {
    case 1: {
           result = num*1000;
           printf("%fl is in MILILITRE --> %fml",num,result);
        break;
    }
    case 2: {
            result = num/1000;
           printf("%fml is in LITRE --> %fl",num,result);
        break;
    }
    case 3: {
        printf("going to menu");
            main();
        break;
    }
    default:
        printf("wrong option");
    }
    return 0;
}

int time(){
    float num, result;
    int choice;
    printf("enter data for conversion");
    num = input();
    printf("Press 1 MINUTE to HOUR Conversion\n");
    printf("Press 2 HOUR to MINUTE Conversion\n");
    printf("Press 3 MINUTE to SECOND Conversion\n");
    printf("Press 4 SECOND to MINUTE Conversion\n");
    printf("Press 5 SECOND to HOUR Conversion\n");
    printf("Press 6 HOUR to SECOND Conversion\n");
     printf("Press 7 back  to options\n");
    printf("Enter your choice:\n");
    choice = inputforchoice();

    switch (choice) {
    case 1: {
           result = num/60;
           printf("%fm is in HOUR --> %fh",num,result);
        break;
    }
    case 2: {
            result = num*60;
           printf("%fh is in MINUTE --> %fm",num,result);
        break;
    }
    case 3: {
           result = num*60;
           printf("%fm is in SECOND --> %fs",num,result);
        break;
    }
    case 4: {
           result = num/60;
           printf("%fs is in MINUTE --> %fm",num,result);
        break;
    }
    case 5: {
           result = num/3600;
           printf("%fs is in HOUR --> %fh",num,result);
        break;
    }
    case 6: {
           result = num*3600;
           printf("%fh is in SECOND --> %fs",num,result);
        break;
    }
    case 7: {
        printf("going to menu");
            main();
        break;
    }
    default:
        printf("wrong option");
    }
    return 0;
}



int temprature(){
    float num, result;
    int choice;
    printf("enter data for conversion");
    num = input();
    printf("Press 1 Celsius(C) to Fahrenheit(F) Conversion\n");
    printf("Press 2 Fahrenheit(F) to Celsius(C) Conversion\n");
    printf("Press 3 Celsius(C) to Kalvin(K) Conversion\n");
    printf("Press 4 back  to options\n");
    printf("Enter your choice:\n");
    choice = inputforchoice();

    switch (choice) {
    case 1: {
           result = (num*1.8)+32;
           printf("%fC is in FAHRENHEIT --> %fF",num,result);
        break;
    }
    case 2: {
            result = (num-32)*0.5556;
           printf("%fF is in CELSIUS --> %fC",num,result);
        break;
    }
     case 3: {
            result = num+273.15;
           printf("%fC is in KALVIN --> %fK",num,result);
        break;
    }
    case 4: {
        printf("going to menu");
            main();
        break;
    }
    default:
        printf("wrong option");
    }
    return 0;
}

