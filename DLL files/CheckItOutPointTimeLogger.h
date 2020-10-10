#pragma once
#include "plugItInSettings.h"

#include <vector>


class CheckItOutPointTimeLogger
{
public:
    void ResetLogger();

    void SaveCheckpointTime(float RTBC);

    float GetTotalTime();
    float GetCheckpointTime(int index);
    int GetNumCheckpoint();

private:
    float m_TRT = 0.0f;
    std::vector<float> m_RTBC;
};