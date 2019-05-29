/*
 Copyright 2019 SoloKeys Developers

 Licensed under the Apache License, Version 2.0, <LICENSE-APACHE or
 http://apache.org/licenses/LICENSE-2.0> or the MIT license <LICENSE-MIT or
 http://opensource.org/licenses/MIT>, at your option. This file may not be
 copied, modified, or distributed except according to those terms.
 */

#ifndef SRC_APDUEXECUTOR_H_
#define SRC_APDUEXECUTOR_H_

#include "util.h"
#include "errors.h"
#include "applets/appletstorage.h"
#include "solofactory.h"

namespace Applet {

class APDUExecutor {
private:
	Factory::SoloFactory &soloFactory;
	void SetResultError(bstr &result, Util::Error error);
public:
	APDUExecutor(Factory::SoloFactory &solo_factory): soloFactory(solo_factory){};
	Util::Error Execute(bstr apdu, bstr &result);
};

} /* namespace OpenPGP */

#endif /* SRC_APDUEXECUTOR_H_ */
