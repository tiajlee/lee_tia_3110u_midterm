#pragma once

#include "CheckItOutPointTimeLogger.h"
#include "plugItInSettings.h"

#ifdef __cplusplus
extern "C"
{
#endif
    PLUGIN_API void ResetLogger();

    PLUGIN_API void SaveCheckpointTime(float RTBC);
    // save most recent time

    PLUGIN_API float GetTotalTime();
    // save total time

    PLUGIN_API float GetCheckpointTime(int index);
    // save time at checkpoint

    PLUGIN_API int GetNumCheckpoint();
    // get the number of the checkpoints that are saved
}

#ifdef __cplusplusplus
}
#endif