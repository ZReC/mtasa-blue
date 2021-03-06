/*****************************************************************************
 *
 *  PROJECT:     Multi Theft Auto v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CResource.h
 *  PURPOSE:     Header for resource file
 *
 *  Multi Theft Auto is available from http://www.multitheftauto.com/
 *
 *****************************************************************************/

#ifndef CRESOURCEFILE_H
#define CRESOURCEFILE_H

#include "CDownloadableResource.h"

class CResourceFile : public CDownloadableResource
{
public:
    CResourceFile(CResource* pResource, eResourceType resourceType, const char* szShortName, const char* szResourceFileName, uint uiDownloadSize,
                  CChecksum serverChecksum, bool bAutoDownload)
        : CDownloadableResource(pResource, resourceType, szResourceFileName, szShortName, uiDownloadSize, serverChecksum, bAutoDownload)
    {
    }
};

#endif