//
//  XPINSLocalBindings.h
//  XPINS
//
//  Created by Robbie Markwick on 3/27/14.
//
//

#ifndef __XPINS__XPINSLocalBindings__
#define __XPINS__XPINSLocalBindings__

#include <iostream>
#include"XPINS.h"

/*include necessary header files*/

class XPINSLocalBindings : public XPINSBindings
{
public:
	virtual void BindFunction(int,XPINSParser::XPINSScriptSpace&,void*);
	/*Define your custom parameters here*/
	
private:
	/*Declare your custom functions here*/
	
};


#endif /* defined(__XPINS__XPINSLocalBindings__) */