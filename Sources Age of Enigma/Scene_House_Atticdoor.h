/*
 *  Scene_House_Atticdoor.h
 *  enigma
 *
 *  Created by Rockford on 20/05/10.
 *  Copyright 2010 Casual Games France. All rights reserved.
 *
 */

#ifndef  _ENIGMA_SCENEATTICDOOR_H
#define  _ENIGMA_SCENEATTICDOOR_H

#include "EScene.h"
#include "KPTK.h"
#include "KSound.h"

class SceneAtticDoor : public EScene {
public:
   SceneAtticDoor(ESceneDirector *lpSceneDirector);
   ~SceneAtticDoor();
   
   void Init ();
   void Close ();
   
   /** 3 steps rendering **/
   void Check ();
   void Logic ();
   void Draw ();
   
   bool ObjectClicked(const char *szObjectName, float x, float y);
   bool ObjectOver(char *szObjectName, float x, float y);
   bool ItemUsed(const char *szItemName, const char *szObjectName);
   void MiniGameDone(const char *szGameName, bool bIsRevolved);
   
   bool IsNeedIHM()
   {
      return true;
   }
private:
   KGraphic *_lpBgGraphic;
   
protected:
   
};

#endif