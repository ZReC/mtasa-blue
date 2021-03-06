/*****************************************************************************
 *
 *  PROJECT:     Multi Theft Auto v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CPickupHideShowPacket.h
 *  PURPOSE:     Pickup hide/show packet class
 *
 *  Multi Theft Auto is available from http://www.multitheftauto.com/
 *
 *****************************************************************************/

#ifndef __PACKETS_CPICKUPHIDESHOWPACKET_H
#define __PACKETS_CPICKUPHIDESHOWPACKET_H

#include "CPacket.h"
#include <vector>

class CPickupHideShowPacket : public CPacket
{
public:
    CPickupHideShowPacket(bool bShow) { m_bShow = bShow; };

    ePacketID     GetPacketID(void) const { return PACKET_ID_PICKUP_HIDESHOW; };
    unsigned long GetFlags(void) const { return PACKET_HIGH_PRIORITY | PACKET_RELIABLE | PACKET_SEQUENCED; };

    bool Write(NetBitStreamInterface& BitStream) const;

    bool GetShow(void) { return m_bShow; };
    void SetShow(bool bShow) { m_bShow = bShow; };

    void         Add(class CPickup* pPickup) { m_List.push_back(pPickup); };
    void         Clear(void) { m_List.clear(); };
    unsigned int Count(void) { return static_cast<unsigned int>(m_List.size()); };

private:
    bool                        m_bShow;
    std::vector<class CPickup*> m_List;
};

#endif
