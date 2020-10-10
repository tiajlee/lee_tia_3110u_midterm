#include "theWrapper.h"
#include "GameObject.h"
#include "CheckItOutPointTimeLogger.h"

CheckItOutPointTimeLogger checkPoint;

PLUGIN_API void ResetLogger() {
	
	return checkPoint.ResetLogger();

}

PLUGIN_API void SaveCheckpointTime(float RTBC) {

	return checkPoint.SaveCheckpointTime(RTBC);

}

PLUGIN_API float GetTotalTime() {

	return checkPoint.GetTotalTime();

}

PLUGIN_API float GetCheckpointTime(int index) {

	return checkPoint.GetCheckpointTime(index);

}

PLUGIN_API int GetNumCheckpoint() {

	return checkPoint.GetNumCheckpoint();

}