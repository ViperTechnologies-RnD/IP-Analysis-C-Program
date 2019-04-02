#include<stdio.h>
#include<math.h>

int main ()
{   //BASE 10 or 16 VARIABLE :
    int base;
    //CONTROL FLOW INITIALIZER :
    int init = 1;
    //IP DIGITS CONTROL FLO W INITIALIZER :
    int init_IP = 1;
    //IP DIGITS VARIABLES :
    int ip_D1, ip_D2, ip_D3, ip_D4;
    //SUBNET MASK CONTROL FLOW INITIALIZER :
    int init_SM = 1;
    //SUBNET MASK DIGITS VARIABLES :
    int smd1, smd2, smd3, smd4;
    //OPTION LIST INITIALIZATION FLOW CONTROL :
    int init_OPL = 1;
    //OPTION HOLDER :
    int opl;
    //BINARY IP VARIABLES :
    int dec_bin_IPD1, dec_bin_IPD2, dec_bin_IPD3, dec_bin_IPD4, dec_bin_SM1, dec_bin_SM2, dec_bin_SM3, dec_bin_SM4;
    //BINARY OPERATION VARIABLES :
    int bin_Num1 = 0, bin_Num2 = 0, bin_Num3 = 0, bin_Num4 = 0;
    int remainder, temp1 = 1, temp2 = 1, temp3 = 1, temp4 = 1;
    //IP TO BINARY CONVERSION CONTROL FLOW
    int init_dec_bin = 1;
    //OPTION 3 DIVISION Variable
    int ip_Class_Btd;
    int divOctet = 10000000;
    //OPTION 4 VARS
    //ZERO COUNTER FLOW CONTROL
    int zero_counter;
    int host_addr;
    //BASE 16 Vars
    char ip_D1_1, ip_D1_2, ip_D2_1, ip_D2_2, ip_D3_1, ip_D3_2, ip_D4_1, ip_D4_2;
    char sub_D1_1, sub_D1_2, sub_D2_1, sub_D2_2, sub_D3_1, sub_D3_2, sub_D4_1, sub_D4_2;
    int dec_bin_IPD1_1, dec_bin_IPD1_2, dec_bin_IPD2_1, dec_bin_IPD2_2, dec_bin_IPD3_1, dec_bin_IPD3_2, dec_bin_IPD4_1, dec_bin_IPD4_2, dec_bin_SM1_1, dec_bin_SM1_2, dec_bin_SM2_1, dec_bin_SM2_2, dec_bin_SM3_1, dec_bin_SM3_2,dec_bin_SM4_1, dec_bin_SM4_2;
    int bin;
    while(init == 1)
    {
        fflush(stdin);
        init_IP = 1;
        init_SM = 1;
        init_OPL = 1;
        printf("Please Please enter the Base for your IP Address (10/16): ");
        scanf("%d",&base);
        switch (base)
        {
            //DECIMAL IP OPERATIONS
            case 10 :
                init = 0;
                while(init_IP == 1)
                {
                    printf("\n\nPlease enter the IP Address in Decimal Base: \n\n");
                    scanf("%d.%d.%d.%d",&ip_D1,&ip_D2,&ip_D3,&ip_D4);
                    if ((ip_D1 <= 255) && (ip_D1 >= 0) && (ip_D2 <= 255) && (ip_D2 >= 0) && (ip_D3 <= 255) && (ip_D3 >= 0) && (ip_D4 <= 255) && (ip_D4 >= 0))
                    {
                        printf("\nThanks it is a valid IP address!\n\n");
                        init_IP = 0;
                        while (init_SM == 1)
                        {
                            printf("\n\nPlease enter the Subnet Mask: \n");
                            printf("%d.%d.%d.%d",smd1,smd2,smd3,smd4);
                            scanf("%d.%d.%d.%d",&smd1,&smd2,&smd3,&smd4);
                            if((smd1 <= 255) && (smd1 >= 0) &&(smd2 <= 255) && (smd2 >= 0) &&(smd3 <= 255) && (smd3 >= 0) &&(smd4 <= 255) && (smd4 >= 0))
                            {
                                printf("%d.%d.%d.%d",smd1,smd2,smd3,smd4);
                                printf("Thanks it is a valid Subnet Mask!\n\n");
                                init_SM = 0;
                            }
                            else
                            {
                                fflush(stdin);
                                printf("This is NOT a valid Subnet Mask!\n\n");
                                init_SM = 1;
                            }
                        }


                    }
                    else
                    {
                        fflush(stdin);
                        printf("This is NOT a valid IP Address!\n\n");
                        init_IP =1;
                    }

                }
                while (init_OPL == 1)
                {

                    printf("\nPlease Select and Option from 1 to 6\n\n1. Convert IP address to binary\n2. Convert subnet mask to binary\n3. Specify the class of the IP address\n4. Specify the number of host addresses available\n5. Provide new IP Address and subnet mask\n6. Exit\n\n");
                    scanf("%d",&opl);
                    fflush(stdin);
                    switch (opl)
                    {
                        case 1 :
                            dec_bin_IPD1 = ip_D1;
                            while (dec_bin_IPD1)
                            {
                                remainder = dec_bin_IPD1 % 2;
                                dec_bin_IPD1 = dec_bin_IPD1 / 2;
                                bin_Num1 = bin_Num1 + remainder * temp1;
                                temp1 = temp1 * 10;

                            }
                            dec_bin_IPD2 = ip_D2;
                            while (dec_bin_IPD2)
                            {
                                remainder = dec_bin_IPD2 % 2;
                                dec_bin_IPD2 = dec_bin_IPD2 / 2;
                                bin_Num2 = bin_Num2 + remainder * temp2;
                                temp2 = temp2 * 10;
                            }
                            dec_bin_IPD3 = ip_D3;
                            while (dec_bin_IPD3)
                            {
                                remainder = dec_bin_IPD3 % 2;
                                dec_bin_IPD3 = dec_bin_IPD3 / 2;
                                bin_Num3 = bin_Num3 + remainder * temp3;
                                temp3 = temp3 * 10;
                            }
                            dec_bin_IPD4 = ip_D4;
                            while (dec_bin_IPD4)
                            {
                                remainder = dec_bin_IPD4 % 2;
                                dec_bin_IPD4 = dec_bin_IPD4 / 2;
                                bin_Num4 = bin_Num4 + remainder * temp4;
                                temp4 = temp4 * 10;
                            }
                            printf("Binary representation of IP Address: %08d.%08d.%08d.%08d\n\n",bin_Num1,bin_Num2,bin_Num3,bin_Num4);
                            fflush(stdin);
                            bin_Num1 = 0, bin_Num2 = 0, bin_Num3 = 0, bin_Num4 = 0;
                            temp1 = 1, temp2 = 1, temp3 = 1, temp4 = 1;
                            break;
                        case 2 :
                            dec_bin_SM1 = smd1;
                            while (dec_bin_SM1)
                            {
                                remainder = dec_bin_SM1 % 2;
                                dec_bin_SM1 = dec_bin_SM1 / 2;
                                bin_Num1 = bin_Num1 + remainder * temp1;
                                temp1 = temp1 * 10;

                            }
                            dec_bin_SM2 = smd2;
                            while (dec_bin_SM2)
                            {
                                remainder = dec_bin_SM2 % 2;
                                dec_bin_SM2 = dec_bin_SM2 / 2;
                                bin_Num2 = bin_Num2 + remainder * temp2;
                                temp2 = temp2 * 10;
                            }
                            dec_bin_SM3 = smd3;
                            while (dec_bin_SM3)
                            {
                                remainder = dec_bin_SM3 % 2;
                                dec_bin_SM3 = dec_bin_SM3 / 2;
                                bin_Num3 = bin_Num3 + remainder * temp3;
                                temp3 = temp3 * 10;
                            }
                            dec_bin_SM4 = smd4;
                            while (dec_bin_SM4)
                            {
                                remainder = dec_bin_SM4 % 2;
                                dec_bin_SM4 = dec_bin_SM4 / 2;
                                bin_Num4 = bin_Num4 + remainder * temp4;
                                temp4 = temp4 * 10;
                            }
                            printf("Binary representation of Subnet Mask: %08d.%08d.%08d.%08d\n\n",bin_Num1,bin_Num2,bin_Num3,bin_Num4);
                            fflush(stdin);
                            bin_Num1 = 0, bin_Num2 = 0, bin_Num3 = 0, bin_Num4 = 0;
                            temp1 = 1, temp2 = 1, temp3 = 1, temp4 = 1;
                            break;
                        case 3 :
                            printf("Opt 3\n\n");
                            ip_Class_Btd = ip_D1;
                            while (ip_Class_Btd)
                            {
                                remainder = ip_Class_Btd % 2;
                                ip_Class_Btd = ip_Class_Btd / 2;
                                bin_Num1 = bin_Num1 + remainder * temp1;
                                temp1 = temp1 * 10;

                            }
                            ip_Class_Btd = bin_Num1;

                             if((ip_Class_Btd >= 00000000) && (ip_Class_Btd <= 1111110))
                                printf("The class of the given IP Address is: A\n");
                            else if((ip_Class_Btd >= 10000000) && (ip_Class_Btd <= 10111111))
                                printf("The class of the given IP Address is: B\n");
                            else if((ip_Class_Btd >= 11000000) && (ip_Class_Btd <= 11011111))
                                printf("The class of the given IP Address is: C\n");
                            else
                                printf("The class of the given IP Address is: D \n");
                            fflush(stdin);
                            bin_Num1 = 0;
                            temp1 = 1;
                            break;
                        case 4 :
                            //HOST ADDRESS CALCULATOR
                            //NOTE : DEAR PROF. IF zero_counter = 0, address range will be equal to -1 and
                            //because there were no instructions of this situation i hope this is acceptable.
                            dec_bin_SM4 = smd4;
                            while (dec_bin_SM4)
                            {
                                remainder = dec_bin_SM4 % 2;
                                dec_bin_SM4 = dec_bin_SM4 / 2;
                                bin_Num4 = bin_Num4 + remainder * temp4;
                                temp4 = temp4 * 10;
                            }
                            zero_counter = 0;
                            if (bin_Num4 == 0)
                            {
                                zero_counter = 8;
                            }
                            else
                            {
                                while (bin_Num4 != 1)
                                {
                                    remainder = bin_Num4 % 10;
                                    bin_Num4/=10;
                                    if(remainder == 0)
                                    zero_counter++;

                                }
                            }
                            host_addr = pow(2,zero_counter)-2;
                            printf("The number of available host addresses for the given Subnet Mask : %d",host_addr);
                            fflush(stdin);
                            bin_Num4 = 0;
                            temp4 = 1;
                            break;
                        case 5 :
                            fflush(stdin);
                            ip_D1 = 0, ip_D2 = 0, ip_D3 = 0, ip_D4 = 0;
                            smd1 = 0, smd2 = 0, smd3 = 0, smd4 = 0;
                            dec_bin_IPD1 = 0, dec_bin_IPD2 = 0, dec_bin_IPD3 = 0, dec_bin_IPD4 = 0, dec_bin_SM1 = 0, dec_bin_SM2 = 0, dec_bin_SM3 = 0, dec_bin_SM4 = 0;
                            bin_Num1 = 0, bin_Num2 = 0, bin_Num3 = 0, bin_Num4 = 0;
                            remainder = 0, temp1 = 1, temp2 = 1, temp3 = 1, temp4 = 1;
                            zero_counter = 0;
                            host_addr = 0;
                            init_OPL = 0;
                            init_SM = 0;
                            init_IP = 0;
                            init = 1;
                            break;
                        case 6 :
                            init_OPL = 0;
                            init = 0;
                            return 0;
                            break;
                        default :
                            fflush(stdin);
                            printf("Sorry this is Not a Valid Option Please Choose Numbers 1 to 6\n");
                            init_OPL = 1;
                            break;
                    }
                }
                break;
                // Hexadecimal Operations
            case 16 :
                fflush(stdin);
                init = 0;

                while(init_IP == 1)
                {
                    printf("\n\nPlease enter the IP Address in Hexadecimal Base: \n\n");
                    scanf("%c%c.%c%c.%c%c.%c%c",&ip_D1_1, &ip_D1_2, &ip_D2_1, &ip_D2_2, &ip_D3_1, &ip_D3_2, &ip_D4_1, &ip_D4_2);
                    if ((((ip_D1_1 >= 65) && (ip_D1_1 <= 70)) || ((ip_D1_1 >= 48) && (ip_D1_1 <= 57))) && (((ip_D1_2 >= 65) && (ip_D1_2 <= 70)) || ((ip_D1_2 >= 48) && (ip_D1_2 <= 57))) && (((ip_D2_1 >= 65) && (ip_D2_1 <= 70)) || ((ip_D2_1 >= 48) && (ip_D2_1 <= 57))) && (((ip_D2_2 >= 65) && (ip_D2_2 <= 70)) || ((ip_D2_2 >= 48) && (ip_D2_2 <= 57))) && (((ip_D3_1 >= 65) && (ip_D3_1 <= 70)) || ((ip_D3_1 >= 48) && (ip_D3_1 <= 57))) && (((ip_D3_2 >= 65) && (ip_D3_2 <= 70)) || ((ip_D3_2 >= 48) && (ip_D3_2 <= 57))) && (((ip_D4_1 >= 65) && (ip_D4_1 <= 70)) || ((ip_D4_1 >= 48) && (ip_D4_1 <= 57))) && (((ip_D4_2 >= 65) && (ip_D4_2 <= 70)) || ((ip_D4_2 >= 48) && (ip_D4_2 <= 57))))
                    {
                        printf("\nThanks it is a valid IP address!\n\n");
                        if(ip_D1_1 <= 57)
                                    ip_D1_1 -= 48;
                                else
                                    ip_D1_1 -= 55;
                                if(ip_D1_2 <= 57)
                                    ip_D1_2 -= 48;
                                else
                                    ip_D1_2 -= 55;
                                if(ip_D2_1 <= 57)
                                    ip_D2_1 -= 48;
                                else
                                    ip_D2_1 -= 55;
                                if(ip_D2_2 <= 57)
                                    ip_D2_2 -= 48;
                                else
                                    ip_D2_2 -= 55;
                                if(ip_D3_1 <= 57)
                                    ip_D3_1 -= 48;
                                else
                                    ip_D3_1 -= 55;
                                if(ip_D3_2 <= 57)
                                    ip_D3_2 -= 48;
                                else
                                    ip_D3_2 -= 55;
                                if(ip_D4_1 <= 57)
                                    ip_D4_1 -= 48;
                                else
                                    ip_D4_1 -= 55;
                                if(ip_D4_2 <= 57)
                                    ip_D4_2 -= 48;
                                else
                                    ip_D4_2 -= 55;
                        init_IP = 0;
                        fflush(stdin);
                        while (init_SM == 1)
                        {
                            printf("\n\nPlease enter the Subnet Mask: \n");
                            scanf("%c%c.%c%c.%c%c.%c%c",&sub_D1_1, &sub_D1_2, &sub_D2_1, &sub_D2_2, &sub_D3_1, &sub_D3_2, &sub_D4_1, &sub_D4_2);
                            if((((sub_D1_1 >= 65) && (sub_D1_1 <= 70)) || ((sub_D1_1 >= 48) && (sub_D1_1 <= 57))) && (((sub_D1_2 >= 65) && (sub_D1_2 <= 70)) || ((sub_D1_2 >= 48) && (sub_D1_2 <= 57))) && (((sub_D2_1 >= 65) && (sub_D2_1 <= 70)) || ((sub_D2_1 >= 48) && (sub_D2_1 <= 57))) && (((sub_D2_2 >= 65) && (sub_D2_2 <= 70)) || ((sub_D2_2 >= 48) && (sub_D2_2 <= 57))) && (((sub_D3_1 >= 65) && (sub_D3_1 <= 70)) || ((sub_D3_1 >= 48) && (sub_D3_1 <= 57))) && (((sub_D3_2 >= 65) && (sub_D3_2 <= 70)) || ((sub_D3_2 >= 48) && (sub_D3_2 <= 57))) && (((sub_D4_1 >= 65) && (sub_D4_1 <= 70)) || ((sub_D4_1 >= 48) && (sub_D4_1 <= 57))) && (((sub_D4_2 >= 65) && (sub_D4_2 <= 70)) || ((sub_D4_2 >= 48) && (sub_D4_2 <= 57))))
                            {
                                printf("Thanks it is a valid Subnet Mask!\n\n");

                                if(sub_D1_1 <= 57)
                                    sub_D1_1 -= 48;
                                else
                                    sub_D1_1 -= 55;
                                if(sub_D1_2 <= 57)
                                    sub_D1_2 -= 48;
                                else
                                    sub_D1_2 -= 55;
                                if(sub_D2_1 <= 57)
                                    sub_D2_1 -= 48;
                                else
                                    sub_D2_1 -= 55;
                                if(sub_D2_2 <= 57)
                                    sub_D2_2 -= 48;
                                else
                                    sub_D2_2 -= 55;
                                if(sub_D3_1 <= 57)
                                    sub_D3_1 -= 48;
                                else
                                    sub_D3_1 -= 55;
                                if(sub_D3_2 <= 57)
                                    sub_D3_2 -= 48;
                                else
                                    sub_D3_2 -= 55;
                                if(sub_D4_1 <= 57)
                                    sub_D4_1 -= 48;
                                else
                                    sub_D4_1 -= 55;
                                if(sub_D4_2 <= 57)
                                    sub_D4_2 -= 48;
                                else
                                    sub_D4_2 -= 55;
                                        init_SM = 0;
                            }
                            else
                            {
                                fflush(stdin);
                                printf("This is NOT a valid Subnet Mask!\n\n");
                                init_SM = 1;
                            }
                        }

                    }
                    else
                    {
                        fflush(stdin);
                        printf("This is NOT a valid IP Address!\n\n");
                        init_IP =1;
                    }

                }
                while (init_OPL == 1)
                {

                    printf("\nPlease Select and Option from 1 to 6\n\n1. Convert IP address to binary\n2. Convert subnet mask to binary\n3. Specify the class of the IP address\n4. Specify the number of host addresses available\n5. Provide new IP Address and subnet mask\n6. Exit\n\n");
                    scanf("%d",&opl);
                    fflush(stdin);
                    switch (opl)
                    {

                    printf("%d  %d\n\n",ip_D1_1,ip_D1_2);
                        case 1 :

                            dec_bin_IPD1_1 = ip_D1_1;
                            bin = 0;
                            while (dec_bin_IPD1_1)
                            {
                                remainder = dec_bin_IPD1_1 % 2;
                                dec_bin_IPD1_1 = dec_bin_IPD1_1 / 2;
                                bin = bin + remainder * temp1;
                                temp1 = temp1 * 10;
                            }
                            bin_Num1 = bin * 10000;
                            temp1 = 1;
                            bin = 0;
                            dec_bin_IPD1_2 = ip_D1_2;
                            while (dec_bin_IPD1_2)
                            {
                                remainder = dec_bin_IPD1_2 % 2;
                                dec_bin_IPD1_2 = dec_bin_IPD1_2 / 2;
                                bin = bin + remainder * temp1;
                                temp1 = temp1 * 10;
                            }
                            bin_Num1 += bin;
                            bin = 0;
                            dec_bin_IPD2_1 = ip_D2_1;
                            while (dec_bin_IPD2_1)
                            {
                                remainder = dec_bin_IPD2_1 % 2;
                                dec_bin_IPD2_1 = dec_bin_IPD2_1 / 2;
                                bin = bin + remainder * temp2;
                                temp2 = temp2 * 10;
                            }
                            temp2 = 1;
                            bin_Num2 = bin * 10000;
                            bin = 0;
                            dec_bin_IPD2_2 = ip_D2_2;
                            while (dec_bin_IPD2_2)
                            {
                                remainder = dec_bin_IPD4 % 2;
                                dec_bin_IPD2_2 = dec_bin_IPD2_2/ 2;
                                bin = bin + remainder * temp2;
                                temp2 = temp2 * 10;
                            }
                            bin_Num2 += bin;
                            bin = 0;
                            temp2 = 1;
                            dec_bin_IPD3_1 = ip_D3_1;
                            while (dec_bin_IPD3_1)
                            {
                                remainder = dec_bin_IPD3_1 % 2;
                                dec_bin_IPD3_1 = dec_bin_IPD3_1/ 2;
                                bin = bin + remainder * temp3;
                                temp3 = temp3 * 10;
                            }
                            bin_Num3 = bin * 10000;
                            bin = 0;
                            temp3 = 1;
                            dec_bin_IPD3_2 = ip_D3_2;
                            while (dec_bin_IPD3_2)
                            {
                                remainder = dec_bin_IPD3_2 % 2;
                                dec_bin_IPD3_2 = dec_bin_IPD3_2/ 2;
                                bin = bin + remainder * temp3;
                                temp3 = temp3 * 10;
                            }
                            bin_Num3 += bin;
                            bin = 0;
                            temp3 = 1;
                            dec_bin_IPD4_1 = ip_D4_1;
                            while (dec_bin_IPD4_1)
                            {
                                remainder = dec_bin_IPD4_1 % 2;
                                dec_bin_IPD4_1 = dec_bin_IPD4_1/ 2;
                                bin = bin + remainder * temp4;
                                temp4 = temp4 * 10;
                            }
                            bin_Num4 = bin * 10000;
                            bin = 0;
                            temp4 = 1;
                            dec_bin_IPD4_2 = ip_D4_2;
                            while (dec_bin_IPD4_2)
                            {
                                remainder = dec_bin_IPD4_2 % 2;
                                dec_bin_IPD4_2 = dec_bin_IPD4_2/ 2;
                                bin = bin + remainder * temp4;
                                temp4 = temp4 * 10;
                            }
                            bin_Num4 += bin;
                            printf("%08d\n",bin);
                            temp4 = 1;
                            bin = 0;
                            printf("Binary representation of IP Address: %08d.%08d.%08d.%08d\n\n",bin_Num1,bin_Num2,bin_Num3,bin_Num4);
                            fflush(stdin);
                            bin_Num1 = 0, bin_Num2 = 0, bin_Num3 = 0, bin_Num4 = 0;
                            temp1 = 1, temp2 = 1, temp3 = 1, temp4 = 1;
                            break;
                        case 2 :
                            dec_bin_SM1_1 = sub_D1_1;
                            bin = 0;
                            while (dec_bin_SM1_1)
                            {
                                remainder = dec_bin_SM1_1 % 2;
                                dec_bin_SM1_1 = dec_bin_SM1_1 / 2;
                                bin = bin + remainder * temp1;
                                temp1 = temp1 * 10;
                            }
                            bin_Num1 = bin * 10000;
                            temp1 = 1;
                            bin = 0;
                            dec_bin_SM1_2 = sub_D1_2;
                            while (dec_bin_SM1_2)
                            {
                                remainder = dec_bin_SM1_2 % 2;
                                dec_bin_SM1_2 = dec_bin_SM1_2 / 2;
                                bin = bin + remainder * temp1;
                                temp1 = temp1 * 10;
                            }
                            bin_Num1 += bin;
                            bin = 0;
                            dec_bin_SM2_1 = sub_D2_1;
                            while (dec_bin_SM2_1)
                            {
                                remainder = dec_bin_SM2_1 % 2;
                                dec_bin_SM2_1 = dec_bin_SM2_1 / 2;
                                bin = bin + remainder * temp2;
                                temp2 = temp2 * 10;
                            }
                            temp2 = 1;
                            bin_Num2 = bin * 10000;
                            bin = 0;
                            dec_bin_SM2_2 = sub_D2_2;
                            while (dec_bin_SM2_2)
                            {
                                remainder = dec_bin_IPD4 % 2;
                                dec_bin_SM2_2 = dec_bin_SM2_2/ 2;
                                bin = bin + remainder * temp2;
                                temp2 = temp2 * 10;
                            }
                            bin_Num2 += bin;
                            bin = 0;
                            temp2 = 1;
                            dec_bin_SM3_1 = sub_D3_1;
                            while (dec_bin_SM3_1)
                            {
                                remainder = dec_bin_SM3_1 % 2;
                                dec_bin_SM3_1 = dec_bin_SM3_1/ 2;
                                bin = bin + remainder * temp3;
                                temp3 = temp3 * 10;
                            }
                            bin_Num3 = bin * 10000;
                            bin = 0;
                            temp3 = 1;
                            dec_bin_SM3_2 = sub_D3_2;
                            while (dec_bin_IPD3_2)
                            {
                                remainder = dec_bin_IPD3_2 % 2;
                                dec_bin_IPD3_2 = dec_bin_IPD3_2/ 2;
                                bin = bin + remainder * temp3;
                                temp3 = temp3 * 10;
                            }
                            bin_Num3 += bin;
                            bin = 0;
                            temp3 = 1;
                            dec_bin_SM4_1 = sub_D4_1;
                            while (dec_bin_SM4_1)
                            {
                                remainder = dec_bin_SM4_1 % 2;
                                dec_bin_SM4_1 = dec_bin_SM4_1/ 2;
                                bin = bin + remainder * temp4;
                                temp4 = temp4 * 10;
                            }
                            bin_Num4 = bin * 10000;
                            bin = 0;
                            temp4 = 1;
                            dec_bin_SM4_2 = sub_D4_2;
                            while (dec_bin_SM4_2)
                            {
                                remainder = dec_bin_SM4_2 % 2;
                                dec_bin_SM4_2 = dec_bin_SM4_2/ 2;
                                bin = bin + remainder * temp4;
                                temp4 = temp4 * 10;
                            }
                            bin_Num4 += bin;
                            temp4 = 1;
                            bin = 0;
                            printf("Binary representation of Subnet Mask: %08d.%08d.%08d.%08d\n\n",bin_Num1,bin_Num2,bin_Num3,bin_Num4);
                            fflush(stdin);
                            bin_Num1 = 0, bin_Num2 = 0, bin_Num3 = 0, bin_Num4 = 0;
                            temp1 = 1, temp2 = 1, temp3 = 1, temp4 = 1;
                            break;
                        case 3 :
                            dec_bin_IPD1_1 = ip_D1_1;
                            bin = 0;
                            while (dec_bin_IPD1_1)
                            {
                                remainder = dec_bin_IPD1_1 % 2;
                                dec_bin_IPD1_1 = dec_bin_IPD1_1 / 2;
                                bin = bin + remainder * temp1;
                                temp1 = temp1 * 10;
                            }
                            bin_Num1 = bin * 10000;
                            temp1 = 1;
                            bin = 0;
                            dec_bin_IPD1_2 = ip_D1_2;
                            while (dec_bin_IPD1_2)
                            {
                                remainder = dec_bin_IPD1_2 % 2;
                                dec_bin_IPD1_2 = dec_bin_IPD1_2 / 2;
                                bin = bin + remainder * temp1;
                                temp1 = temp1 * 10;
                            }
                            bin_Num1 += bin;
                            bin = 0;

                            ip_Class_Btd = bin_Num1;
                             if((ip_Class_Btd >= 00000000) && (ip_Class_Btd <= 1111110))
                                printf("The class of the given IP Address is: A\n");
                            else if((ip_Class_Btd >= 10000000) && (ip_Class_Btd <= 10111111))
                                printf("The class of the given IP Address is: B\n");
                            else if((ip_Class_Btd >= 11000000) && (ip_Class_Btd <= 11011111))
                                printf("The class of the given IP Address is: C\n");
                            else
                                printf("The class of the given IP Address is: D \n");
                            fflush(stdin);
                            bin_Num1 = 0;
                            temp1 = 1;
                            break;
                        case 4 :
                            //HOST ADDRESS CALCULATOR
                            //NOTE : DEAR PROF. IF zero_counter = 0, address range will be equal to -1 and
                            //because there were no instructions of this situation i hope this is acceptable.
                            bin = 0;
                            temp4 = 1;
                            dec_bin_SM4_1 = sub_D4_1;
                            while (dec_bin_SM4_1)
                            {
                                remainder = dec_bin_SM4_1 % 2;
                                dec_bin_SM4_1 = dec_bin_SM4_1/ 2;
                                bin = bin + remainder * temp4;
                                temp4 = temp4 * 10;
                            }
                            bin_Num4 = bin * 10000;
                            bin = 0;
                            temp4 = 1;
                            dec_bin_SM4_2 = sub_D4_2;
                            while (dec_bin_SM4_2)
                            {
                                remainder = dec_bin_SM4_2 % 2;
                                dec_bin_SM4_2 = dec_bin_SM4_2/ 2;
                                bin = bin + remainder * temp4;
                                temp4 = temp4 * 10;
                            }
                            bin_Num4 += bin;
                            temp4 = 1;
                            bin = 0;
                            zero_counter = 0;
                            if (bin_Num4 == 0)
                            {
                                zero_counter = 8;
                            }
                            else
                            {
                                while (bin_Num4 != 1)
                                {
                                    remainder = bin_Num4 % 10;
                                    bin_Num4/=10;
                                    if(remainder == 0)
                                    zero_counter++;

                                }
                            }
                            host_addr = pow(2,zero_counter)-2;
                            printf("The number of available host addresses for the given Subnet Mask : %d",host_addr);
                            fflush(stdin);
                            bin_Num4 = 0;
                            temp4 = 1;
                            break;
                        case 5 :
                            fflush(stdin);
                            ip_D1 = 0, ip_D2 = 0, ip_D3 = 0, ip_D4 = 0;
                            smd1 = 0, smd2 = 0, smd3 = 0, smd4 = 0;
                            dec_bin_IPD1 = 0, dec_bin_IPD2 = 0, dec_bin_IPD3 = 0, dec_bin_IPD4 = 0, dec_bin_SM1 = 0, dec_bin_SM2 = 0, dec_bin_SM3 = 0, dec_bin_SM4 = 0;
                            bin_Num1 = 0, bin_Num2 = 0, bin_Num3 = 0, bin_Num4 = 0;
                            remainder = 0, temp1 = 1, temp2 = 1, temp3 = 1, temp4 = 1;
                            ip_D1_1 = 0, ip_D1_2 =0 , ip_D2_1 = 0, ip_D2_2 = 0, ip_D3_1 = 0, ip_D3_2 = 0, ip_D4_1 = 0, ip_D4_2 = 0;
                            sub_D1_1 = 0, sub_D1_2 = 0, sub_D2_1 = 0, sub_D2_2 = 0, sub_D3_1 = 0, sub_D3_2 = 0, sub_D4_1 = 0, sub_D4_2 = 0;
                            dec_bin_IPD1_1 = 0, dec_bin_IPD1_2 = 0, dec_bin_IPD2_1 = 0, dec_bin_IPD2_2 = 0, dec_bin_IPD3_1 = 0, dec_bin_IPD3_2 = 0, dec_bin_IPD4_1 = 0, dec_bin_IPD4_2 = 0, dec_bin_SM1_1 = 0, dec_bin_SM1_2 = 0, dec_bin_SM2_1 = 0, dec_bin_SM2_2 = 0, dec_bin_SM3_1 = 0, dec_bin_SM3_2 = 0,dec_bin_SM4_1 = 0, dec_bin_SM4_2 = 0;
                            bin = 0;
                            zero_counter = 0;
                            host_addr = 0;
                            init_OPL = 0;
                            init_IP = 0;
                            init = 1;

                            break;
                        case 6 :
                            init_OPL = 0;
                            init = 0;
                            return 0;
                            break;
                        default :
                            fflush(stdin);
                            printf("Sorry this is Not a Valid Option Please Choose Numbers 1 to 6\n");
                            init_OPL = 1;
                            break;
                    }
                }

                break;
            default :
                fflush(stdin);
                printf("Sorry that is not a valid base!\n\n");
                init = 1;
                break;
        }
    }
    return 0;
}
