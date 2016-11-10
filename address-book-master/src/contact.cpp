#include "contact.h"

bool Contact::isValidToAdd() const
{
    /*
    Adding a new contact requires:
    -first name
    -last name
    -phone number
    */

    bool hasNames = !(firstName.empty() || lastName.empty());

    if(hasNames && !phoneNumber.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Contact::isEmpty() const
{
    if(firstName.empty() && 
        lastName.empty() &&
        phoneNumber.empty() && 
        address.empty() && 
        email.empty() &&
        location.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
    
bool Contact::isValidPhone() const
{
    bool length = (phoneNumber.length()== 10);
    int num = 1;
    if (length)
    {

            for (int i=0;i<10;i++)
            {
              if (!isdigit(phoneNumber[i]))
                 num=0;
            }
            if(num==1)
               {
                return true;
               }
            else
            {
                return false;
            }
      }
    else
    {
           return false;
    }
}
