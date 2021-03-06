/*
 * \file       trc_pkt_elem_etmv4d.h
 * \brief      OpenCSD : 
 * 
 * \copyright  Copyright (c) 2015, ARM Limited. All Rights Reserved.
 */

/* 
 * Redistribution and use in source and binary forms, with or without modification, 
 * are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice, 
 * this list of conditions and the following disclaimer.
 * 
 * 2. Redistributions in binary form must reproduce the above copyright notice, 
 * this list of conditions and the following disclaimer in the documentation 
 * and/or other materials provided with the distribution. 
 * 
 * 3. Neither the name of the copyright holder nor the names of its contributors 
 * may be used to endorse or promote products derived from this software without 
 * specific prior written permission. 
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 'AS IS' AND 
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. 
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, 
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND 
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS 
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */ 

#ifndef ARM_TRC_PKT_ELEM_ETMV4D_H_INCLUDED
#define ARM_TRC_PKT_ELEM_ETMV4D_H_INCLUDED

#include "trc_pkt_types_etmv4.h"
#include "common/trc_printable_elem.h"
#include "common/trc_pkt_elem_base.h"

/** @addtogroup trc_pkts
@{*/
/*!
 * @class EtmV4DTrcPacket   
 * @brief ETMv4 Data Trace Protocol Packet .
 * 
 *  This class represents a single ETMv4 instruction trace packet, along with intra packet state.
 * 
 */
class EtmV4DTrcPacket :  public TrcPacketBase, public ocsd_etmv4_d_pkt, trcPrintableElem
{
public:
    EtmV4DTrcPacket();
    ~EtmV4DTrcPacket();

    // update interface - set packet values



    // packet status interface - get packet info.


    // printing
    virtual void toString(std::string &str) const;
    virtual void toStringFmt(const uint32_t fmtFlags, std::string &str) const;
};

/** @}*/

#endif // ARM_TRC_PKT_ELEM_ETMV4D_H_INCLUDED

/* End of File trc_pkt_elem_etmv4d.h */
