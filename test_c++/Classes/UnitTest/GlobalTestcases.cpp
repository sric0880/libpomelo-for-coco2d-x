//
//  GlobalTestcases.cpp
//
//  Created by qiong on 14-2-28.
//
//

#include "GlobalTestcases.h"
#include "PomeloClientTest.h"
#include "JsonConvertTest.h"
// C++ 11
#define CL(__className__) [](){ return __className__::create();}
#define CLN(__className__) [](){ auto obj = new __className__(); obj->autorelease(); return obj; }

//add yourself
TestCase tests[2]={
//    {"Example Test", CLN(TestSceneExample)},
    {"PomeloClient Test", CLN(PomeloClientTest)},
    {"Json Convert Test",CLN(JsonConvertTest)},
//    {"Json File Read and Write Test", CLN(JsonFileUtilTest)},
//    {"DataManager Test", CLN(DMTest)}
//    {"Game Demo", CLN(FruitSlotDemo)},
//    {"Http Helper Test", CLN(HttpHelperTest)},
//    {"Device Util Test", CLN(DeviceUtilTest)},
//    {"System Clock Test", CLN(SystemClockTest)},
//    {"Notification Test", CLN(NotificationTest)},
};

size_t size = sizeof tests/ sizeof tests[0];
