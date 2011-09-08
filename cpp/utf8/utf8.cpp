/*********************************************************************************
** UTF8
** Valid UTF8:
** 
** UTF8 is a multi-byte character encoding designed to support Unicode.
** Each "rune" (Unicode character) is encoded in 1, 2, 3, or 4 bytes.
** There can zero or more runes in a UTF8 string.
** 
** The number of bytes used to encode each Rune is determined by the
** number of leading (most significant) one bits in the first byte:
** 0 : single byte
** 2 : two bytes
** 3 : three bytes
** 4 : four bytes
** Any subsequent bytes in the sequence must start with a single
** leading one bit.
** 
** Any other number of leading one bits are illegal, as is a partial
** sequence.
** 
** Legal UTF8 encodings for a single rune (x is "don't care"):
** 0xxxxxxx
** 110xxxxx 10xxxxxx
** 1110xxxx 10xxxxxx 10xxxxxx
** 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx
** 
** Invalid UTF8:
** 11111xxx
** 10xxxxxx
** 110xxxxx (end of string)
** 110xxxxx 0xxxxxxx
** 110xxxxx 110xxxxx
** 
** Given:
** int NumLeadingOnes(char b);
** implement:
**********************************************************************************/

#include <iostream>
#include <string.h>
using namespace std;

int NumLeadingOnes(char b)
{
  int nbrOfLeadingOnes = 0;
  if (b & 0x80) {
    ++nbrOfLeadingOnes;
    if (b & 0x40) {
      ++nbrOfLeadingOnes;
      if (b & 0x20) {
        ++nbrOfLeadingOnes;
        if (b & 0x10) {
          ++nbrOfLeadingOnes;
        }
      }
    }
  }
  // cout << "nbrOfLeadingOnes: " << nbrOfLeadingOnes << endl;
  return nbrOfLeadingOnes;
}
  
enum State 
{
  kStart, kCont
};

// Is 's' a string of zero or more UTF8 encoded runes?
bool IsValidUTF8(const char* s)
{
  State state = kStart;
  int byteCount = 0;
  int runeByteCount = 0;
  int expectedRuneCount = 0;
  int nbrOfLeadingOnes = 0;
  const char *p = s;
  while (*p != '\0') 
  {
    switch (state)
    {
     case kStart:
      nbrOfLeadingOnes = NumLeadingOnes(*p);
      expectedRuneCount = (nbrOfLeadingOnes ? nbrOfLeadingOnes : 1);
      // cout << "expectedRuneCount: " << expectedRuneCount << endl;
      // cout << "runeByteCount: " << runeByteCount << endl;
      switch (nbrOfLeadingOnes)
      {
       case 0:
        runeByteCount = 0;
        expectedRuneCount = 0;
        // cout << "kStart: runeByteCount: " << runeByteCount << endl;
        break;
       case 2:
       case 3:
       case 4:
        ++runeByteCount;
        // cout << "kStart2: runeByteCount: " << runeByteCount << endl;
        state = kCont;
        break;
       default:
        return false;   
      }
      break;
     case kCont:
      if (runeByteCount > 4)
        return false;
      switch (NumLeadingOnes(*p))
      {
       case 1:
        ++runeByteCount;
        // cout << "kCont: runeByteCount: " << runeByteCount << endl;
        break;
       case 0:
       case 2:
       case 3:
       case 4:
        if (runeByteCount != expectedRuneCount) {
          // cout << "in while loop\n";
          return false;
        }
        runeByteCount = 0;
        expectedRuneCount = 0;
        --p;
        state = kStart;
        break;
       default:
        return false;
      }
    }   
    ++p;
  }
  // cout << "Out of while loop\n";
  if (runeByteCount != expectedRuneCount)
    return false;
  else 
    return true;
}


char testP01[] = {0x41, 0x42, 0x43, 0x00};
char testF02[] = {0x41, 0x80, 0x43, 0x00};
char testP03[] = {0xC0, 0x80, 0x00};
char testF04[] = {0xC0, 0x00};
char testP05[] = {0xE0, 0x80, 0x80, 0x00};
char testF06[] = {0xE0, 0x80, 0x00};
char testP07[] = {0xF0, 0x80, 0x80, 0x80, 0x00};
char testF08[] = {0xF0, 0x80, 0x80, 0x00};
char testP09[] = {0x41, 0x42, 0x43, 0xC0, 0x80, 0xE0, 0x80, 0x80, 0xF0, 0x80, 0x80, 0x80, 0x00};

int main()
{
  bool isValid;
#if  1
  if(IsValidUTF8(testP01)) {cout <<"Pass\n";}else{cout <<"Fail\n";}
  if(IsValidUTF8(testF02)) {cout <<"Fail\n";}else{cout <<"Pass\n";}
  if(IsValidUTF8(testP03)) {cout <<"Pass\n";}else{cout <<"Fail\n";}
  if(IsValidUTF8(testF04)) {cout <<"Fail\n";}else{cout <<"Pass\n";}
  if(IsValidUTF8(testP05)) {cout <<"Pass\n";}else{cout <<"Fail\n";}
  if(IsValidUTF8(testF06)) {cout <<"Fail\n";}else{cout <<"Pass\n";}
  if(IsValidUTF8(testP07)) {cout <<"Pass\n";}else{cout <<"Fail\n";}
  if(IsValidUTF8(testF08)) {cout <<"Fail\n";}else{cout <<"Pass\n";}
#endif

  if(IsValidUTF8(testP09)) {cout <<"Pass\n";}else{cout <<"Fail\n";}
  return 0;
}

