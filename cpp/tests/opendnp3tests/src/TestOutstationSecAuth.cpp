/**
 * Licensed to Green Energy Corp (www.greenenergycorp.com) under one or
 * more contributor license agreements. See the NOTICE file distributed
 * with this work for additional information regarding copyright ownership.
 * Green Energy Corp licenses this file to you under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except in
 * compliance with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * This project was forked on 01/01/2013 by Automatak, LLC and modifications
 * may have been made to this file. Automatak, LLC licenses these modifications
 * to you under the terms of the License.
 */
#include <catch.hpp>

#include "OutstationTestObject.h"

#include <testlib/HexConversions.h>
#include <secauthv5/outstation/OutstationAuthFactory.h>
#include <secauthv5/SimpleUserDatabase.h>

#include "MockUTCTimeSource.h"
#include "MockCryptoProvider.h"

using namespace std;
using namespace opendnp3;
using namespace secauthv5;
using namespace openpal;
using namespace testlib;

#define SUITE(name) "OutstationSecAuthTestSuite - " name

TEST_CASE(SUITE("InitialState"))
{
	OutstationAuthSettings settings;
	MockUTCTimeSource utc;
	SimpleUserDatabase users;
	MockCryptoProvider crypto;
	
	OutstationAuthFactory factory(
		settings,
		utc,
		users,
		crypto
	);
	
	OutstationTestObject test(OutstationConfig(), factory);


}