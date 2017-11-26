/**
@file FPGA_common.h
@author Lime Microsystems
@brief Common functions used to work with FPGA
*/

#ifndef FPGA_MINI_H
#define FPGA_MINI_H
#include "FPGA_common.h"


namespace lime
{
    
class FPGA_Mini : public FPGA
{
public:  
    FPGA_Mini(IConnection* conn);
    virtual ~FPGA_Mini(){};
    int SetIntetfaceFreq(double f_Tx_Hz, double f_Rx_Hz, double txPhase, double rxPhase, int ch = 0)override;
    int SetIntetfaceFreq(double f_Tx_Hz, double f_Rx_Hz, int ch = 0)override;
private:
    int ReadRawStreamData(char* buffer, unsigned length, int epIndex, int timeout_ms)override;
    IConnection* connection;
};


}
#endif // FPGA_COMMON_H
