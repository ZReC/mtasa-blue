/*****************************************************************************
 *
 *  PROJECT:     Multi Theft Auto v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CElementDeleter.h
 *  PURPOSE:     Header for element deleter class
 *
 *  Multi Theft Auto is available from http://www.multitheftauto.com/
 *
 *****************************************************************************/

#ifndef __CELEMENTDELETER_H
#define __CELEMENTDELETER_H

#include <list>

class CElementDeleter
{
public:
    CElementDeleter(void);
    ~CElementDeleter(void) { DoDeleteAll(); };

    void Delete(class CClientEntity* pElement);
    void DeleteRecursive(class CClientEntity* pElement);

    void DoDeleteAll(void);

    bool IsBeingDeleted(class CClientEntity* pElement);

    void Unreference(class CClientEntity* pElement);

    void CleanUpForVM(CLuaMain* pLuaMain);

private:
    CMappedList<class CClientEntity*> m_List;
    bool                              m_bAllowUnreference;
};

#endif
