#ifndef CONTROLS_H
#define CONTROLS_H

//Qt framework
#include <QTimer>
#include <QWidget>

//Driver
#include "DAQDriver.h"
#include "SocketConnector/ClientSocketConnector.h"
#include <google/protobuf/reflection.h>
#include "DataFormat.pb.h"

namespace Ui {
class Controls;
}

class Controls : public QWidget
{
    Q_OBJECT

public:
    explicit Controls(QWidget *parent = nullptr);
    ~Controls();

    std::shared_ptr<DAQDriver> daqDriver();

signals:
    void connected();

private:
    void populateSampleRateComboBox();

private slots:
    void processDeviceStatus();

    void devicePicked(QString ip);

    void on_btn_resetDevice_pressed();

    void on_cmb_sampleRates_activated(int index);

    void on_cmb_sampleRates_currentIndexChanged(int index);

    void onTimesynced(int64_t difference);
    void uiTimerTimeout();
    void processTimerTimeout();
    void on_chk_StreamEnabled_clicked(bool checked);

    void on_btn_Aux1IEPE_clicked(bool checked);

    void on_btn_Aux2IEPE_clicked(bool checked);

    void on_btn_setinputRange_clicked();

    void on_cmb_input_Channel_currentIndexChanged(int index);

    void on_btn_refreshDeviceInfo_pressed();

    void on_btn_connect_pressed();

private:
    std::shared_ptr<DAQDriver> m_daqDriver;
    QTimer m_processTimer;
    QTimer m_uiTimer;
    Ui::Controls *ui;
};

#endif // CONTROLS_H
