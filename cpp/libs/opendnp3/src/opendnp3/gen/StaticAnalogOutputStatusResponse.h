//
//  _   _         ______    _ _ _   _             _ _ _
// | \ | |       |  ____|  | (_) | (_)           | | | |
// |  \| | ___   | |__   __| |_| |_ _ _ __   __ _| | | |
// | . ` |/ _ \  |  __| / _` | | __| | '_ \ / _` | | | |
// | |\  | (_) | | |___| (_| | | |_| | | | | (_| |_|_|_|
// |_| \_|\___/  |______\__,_|_|\__|_|_| |_|\__, (_|_|_)
//                                           __/ |
//                                          |___/
// 
// This file is auto-generated. Do not edit manually
// 
// Copyright 2013 Automatak LLC
// 
// Automatak LLC (www.automatak.com) licenses this file
// to you under the the Apache License Version 2.0 (the "License"):
// 
// http://www.apache.org/licenses/LICENSE-2.0.html
//

#ifndef OPENDNP3_STATICANALOGOUTPUTSTATUSRESPONSE_H
#define OPENDNP3_STATICANALOGOUTPUTSTATUSRESPONSE_H

#include <cstdint>

namespace opendnp3 {

enum class StaticAnalogOutputStatusResponse : int
{
  Group40Var1 = 0,
  Group40Var2 = 1,
  Group40Var3 = 2,
  Group40Var4 = 3
};

int StaticAnalogOutputStatusResponseToType(StaticAnalogOutputStatusResponse arg);
StaticAnalogOutputStatusResponse StaticAnalogOutputStatusResponseFromType(int arg);

}

#endif
