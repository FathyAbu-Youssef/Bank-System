 
 #include "clsLoginScreen.h"
#include "clsUser.h"
#include "clsCurrency.h"

  

int main()
{   
    while (true)
    {
      
        if (!clsLoginScreen::ShowLoginScreen()) 
        {
            break;
        }

    }
 
 
    /*
   clsMainScreen::ShowMainMenue();

  
    cout << "\nPlease Enter UserName: ";
    string   UserName1 = clsInputValidate::ReadString();

    while (clsUser::IsUserExist(UserName1))
    {
        cout << "\nUserName Is Already Used, Choose another one: ";
        UserName1 = clsInputValidate::ReadString();
    }

    clsUser UserA = clsUser::GetAddNewUserObject(UserName1);
    clsAddNewUserScreen::_ReadUserInfo(UserA);


    cout << "\nPlease Enter UserName: ";
    string   UserName2 = clsInputValidate::ReadString();

    while (clsUser::IsUserExist(UserName2))
    {
        cout << "\nUserName Is Already Used, Choose another one: ";
        UserName2 = clsInputValidate::ReadString();
    }

    clsUser UserB = clsUser::GetAddNewUserObject(UserName2);
    clsAddNewUserScreen::_ReadUserInfo(UserB);


    UserA.Save();
    UserB.Save();

*/

 
     



    system("pause>0");
    return 0;
}
