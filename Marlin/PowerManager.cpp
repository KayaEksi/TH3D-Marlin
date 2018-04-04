/*
Manager Power Down
created by John.li 3dymy@3dymy.com  @2017.09.05
*/
#include "PowerManager.h"
#include "configuration_store.h"

PowerManager::PowerManager(){
	
}

bool PowerManager::isXD(){
	bool xdFlag=settings.CheckPowerFlag();
	return xdFlag;
}
