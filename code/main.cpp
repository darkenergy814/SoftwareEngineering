#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cstring>

#include "file/File.h"
#include "repository/Repository.h"
#include "boundary/AddMemberUI.h"
#include "boundary/LoginUI.h"
#include "boundary/LogoutUI.h"
#include "boundary/AddbikeUI.h"
#include "boundary/RentBikeUI.h"
#include "boundary/BikeRentInfoUI.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void doTask();

int main() {
    File::open();

    doTask();
    
    File::close();

    return 0;
}

void doTask() {
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;
    std::string currentId;
    
    Repository* repository = new Repository();

    while (!is_program_exit) {
        File::in() >> menu_level_1 >> menu_level_2;

        switch (menu_level_1) {
        case 1:
            switch (menu_level_2) {
            case 1: // 회원가입
                AddMember control;
                control.startInterface(File::out());

                AddMemberUI addmember_ui;
                addmember_ui.addMember(File::in(), File::out(), repository);
                break;
            }
            break;
        case 2:
            switch (menu_level_2) {
            case 1:{ // 로그인
                Login login_control;
                login_control.startInterface(File::out());

                LoginUI login_ui;
                std::string id = login_ui.login(File::in(), File::out(), repository);
                currentId = id;
                break;
            }
            break;
            case 2: // 로그아웃
                Logout logout_control;
                logout_control.startInterface(File::out());

                LogoutUI logout_ui;
                logout_ui.logout(currentId, File::out());

                currentId.clear();
                break;
            }
            break;
        case 3:
            switch (menu_level_2) {
            case 1: // 자전거 등록
                AddBike addbike_control;
                addbike_control.startInterface(File::out());

                AddBikeUI addbike_ui;
                addbike_ui.addBike(File::in(), File::out(), repository);
                break;
            }
            break;
        case 4:
            switch (menu_level_2) {
            case 1: // 자전거 대여
                RentBike rentbike_control;
                rentbike_control.startInterface(File::out());

                RentBikeUI rentbike_ui;
                rentbike_ui.rentBike(File::in(), currentId, File::out(), repository);
                break;
            }
            break;
        case 5:
            switch (menu_level_2) {
            case 1: // 자전거 대여 리스트
                BikeRentInfo bikerentinfo_control;
                bikerentinfo_control.startInterface(File::out());

                BikeRentInfoUI bikerentinfo_ui;
                bikerentinfo_ui.getBikeRentInfo(currentId, File::out(), repository);
                break;
            }
            break;
        case 6:
            switch (menu_level_2) {
            case 1: // 종료
                File::out() << "6.1. 종료\n";
                is_program_exit = 1;
                break;
            }
            break;
        }
    }
}
