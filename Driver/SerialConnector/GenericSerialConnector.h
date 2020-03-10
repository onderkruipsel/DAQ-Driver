#ifndef GENERICSERIALCONNECTOR_H
#define GENERICSERIALCONNECTOR_H
#ifdef _WIN32
//STD framework
#include <mutex>
#include <string>
#include <iostream>

//Windows headers
#include <tchar.h>
#include <windows.h>
#include <SetupAPI.h>

//Internal headers
#include "AbstractSerialConnector.h"


#pragma once
#pragma comment (lib, "Setupapi.lib")

class GenericSerialConnector : public AbstractSerialConnector
{
public:
    GenericSerialConnector();

    void write(const std::vector<uint8_t> &data) override;
    void priorityWrite(const std::vector<uint8_t> &data) override;

    size_t dataAvailable() override;

    std::vector<uint8_t> read() override;

    bool open(std::string port) override;

    void close() override;

    bool isOpen() override;

    std::vector<std::string> presentVoyagers() override;

    void process() override;

protected:
    bool isHandleValid();
    void refreshDevicesListHandle(HDEVINFO &m_hDevInfo);
    std::string getComPort(HDEVINFO m_hDevInfo, SP_DEVINFO_DATA DeviceInfoData);

private:
    HANDLE m_serialHandle;
    DCB m_serialPortParameters;
    std::mutex m_serialHandleMutex;
    COMMTIMEOUTS m_serialPortTimeout;
};
#endif
#endif // GENERICSERIALCONNECTOR_H
