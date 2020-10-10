#include "CheckItOutPointTimeLogger.h"

void CheckItOutPointTimeLogger::ResetLogger()
{
	m_RTBC.clear();
	m_TRT = 0.0f;
}

void CheckItOutPointTimeLogger::SaveCheckpointTime(float RTBC) {

}

float CheckItOutPointTimeLogger::GetTotalTime() {

	return 0.0f;

}

float CheckItOutPointTimeLogger::GetCheckpointTime(int index) {

	return 0.0f;

}

int CheckItOutPointTimeLogger::GetNumCheckpoint() {

	return 0;
}