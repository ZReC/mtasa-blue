/*****************************************************************************
 *
 *  PROJECT:     Multi Theft Auto v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CEntityRemovePacket.h
 *  PURPOSE:     Entity remove packet class
 *
 *  Multi Theft Auto is available from http://www.multitheftauto.com/
 *
 *****************************************************************************/

#ifndef __PACKETS_CENTITYREMOVEPACKET_H
#define __PACKETS_CENTITYREMOVEPACKET_H

#include "CPacket.h"
#include <vector>

class CEntityRemovePacket : public CPacket
{
public:
    ePacketID     GetPacketID(void) const { return PACKET_ID_ENTITY_REMOVE; };
    unsigned long GetFlags(void) const { return PACKET_HIGH_PRIORITY | PACKET_RELIABLE | PACKET_SEQUENCED; };

    bool Write(NetBitStreamInterface& BitStream) const;

    void Add(class CElement* pElement) { m_List.push_back(pElement); };
    void Clear(void) { m_List.clear(); };

private:
    std::vector<class CElement*> m_List;
};

#endif
