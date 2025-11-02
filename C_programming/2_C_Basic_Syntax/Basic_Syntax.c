#include <stdio.h> 
//this lines includes the standard input/output library to use printf,scanf and others



int main(){//the main function is the start point of any C,Cpp Program

    /*1)Escape Sequences:
    Escape sequence=\ + a single character
    a)\n:for a new line*/
    printf("hey,\tHow are you\n");

    /*b)\t: for a horizontal tab (4 spaces)*/
    printf("Hey\tBro\n");
    
    /*c)\a:for an alarm beep*/
    //printf("\a");
    
    /*d)\b:It moves the cursor back one positionIt does not automatically erase the character 
    that was previously there.Any character printed after \b will overwrite the character currently 
    under the cursor's new position.*/
    printf("Karim Ahmed\b\bXX\n");
    printf("Studying\b\b\t\n");
    printf("C program\b\b\n");
    /*The Execution FlowHere is the step-by-step breakdown of what happens:printf processes the string: 
    The printf function internally processes the string "C program\b\b\n". 
    It converts this into a stream of characters to be sent to the standard output (your console).
    It sends 'C', ' ', 'p', 'r', 'o', 'g', 'r', 'a', 'm'. The text is now C program, and the cursor is 
    immediately after the 'm'.The first \b: The backspace character (\b) is encountered. The cursor moves 
    one position backward, placing it under the 'm'.Text on line: C programCursor position: C progra**m** 
    The second \b: The second \b is encountered. The cursor moves one more position backward, 
    placing it under the 'a'.Text on line: C programCursor position: C progr**a**m The \n (Newline): 
    The newline character (\n) is encountered. This character is executed immediately.Crucially, 
    \n does not print any characters; it only moves the cursor to the start of the next line.
    Since no characters were printed after the \b sequences, there was nothing to overwrite the 'a' or 
    the 'm'.The entire content of the line (C program) remains in the output buffer, 
    and the cursor just drops down to the next line.*/

    /*e)\f:Form feed The \f escape sequence represents the Form Feed control character (ASCII value 12).
    Primary Action: Historically, its purpose was to advance a paper printer to the beginning of a new page 
    (or "form"). It would eject the current page and position the print head to the top of the next page.
    Modern Effect: In most modern console or terminal applications, \f has very little visible effect,
    or it may simply display as a vertical space or a page-break character. 
    You usually won't see an actual page break on your screen.*/
    printf("Page1_Content\fPage2_Content\n");
    
    /*f)\r:Carriage Return control character (ASCII value 13).
    Primary Action: It moves the cursor to the beginning of the current line without moving down to 
    the next line.
    Use Case: It is essential for overwriting previously printed text on the same line, 
    which is commonly used for:Progress bars,Animated status updates Real-time counters*/
    for(int i=0;i<1000000;i++)
    {
        printf("\r%d",i);
        if(i==5000){
            break;
        }
    }
    printf("\n");
    printf("Karim Ahmed\rMarwan\n");
    
    /*g)\\:to display a backslash
    h)\':to display a single quote
    i)\"":to display double quote
    j)\?:to display a question mark*/
    printf("\\ \' \" \? \n");


    /* Octal Representation: \oooThe \ooo escape sequence uses an octal (base-8) number to represent 
    a single character's value (its ASCII code).Syntax: A backslash (\) followed by up to three octal digits
    (0 through 7).How it Works: The compiler reads the octal digits and converts them into a single 8-bit 
    character (a char type).Stop Condition: The compiler stops reading digits for the octal escape sequence 
    as soon as it sees a non-octal digit, or after reading three digits.
    Example: The Bell/Alert (\a)The ASCII code for the Alert or Bell character (\a) is 7 (in decimal).
    Octal representation of 7 (decimal) is 007*/
    printf("Warning,\007There is a bre\141ch\n"); /*\141 is the octal representation of a*/

    /* Hexadecimal Representation: \xhhThe \xhh escape sequence uses a hexadecimal (base-16) number to 
    represent a single character's value.Syntax: A backslash (\) followed by the letter x and then one or 
    more hexadecimal digits (0-9 and a-f or A-F).How it Works: Similar to octal, the compiler converts the 
    hex digits into the character's numerical value.Stop Condition: The compiler stops reading digits when 
    it encounters a character that is not a valid hex digit. There is generally no limit on the number of 
    hex digits, but the value is constrained by the size of the char type (usually 8 bits, max value 255).
    Example: The Tab (\t)The ASCII code for the Horizontal Tab character (\t) is 9 (in decimal).
    Hexadecimal representation of 9 (decimal) is 09.The C escape sequence is \x09*/

    printf("horizontal\x09tab\n");
    printf("letter Z:\x5A\n");
    
    
    
    
    return 0;
}