// Type: UI.PlayerKDRRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/PlayerKDRRow.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/PlayerKDRRow.cs  [CHANGED since prior version]
// --------------------------------

// UI.PlayerKDRRow$$Setup
// il2cpp: void UI_PlayerKDRRow__Setup (UI_PlayerKDRRow_o* __this, UI_ElementStyle_o* style, Photon_Realtime_Player_o* player, UI_KDRPanel_o* panel, const MethodInfo* method);
// 0x40c5aa0

void UI_PlayerKDRRow__Setup
               (UI_PlayerKDRRow_o *__this,UI_ElementStyle_o *style,Photon_Realtime_Player_o *player,
               UI_KDRPanel_o *panel,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_UI_RawImage_o *pUVar5;
  
  if (DAT_057046d2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&"Icons/Game/BladeIcon");
    DAT_057046d2 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar3 = UI_ElementFactory__CreateWhiteLabel
                     (pUVar2,style,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),0,3,
                      (MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = (UnityEngine_UI_Text_o *)
             UnityEngine_GameObject__GetComponent<object>(pUVar3,MethodInfo_Text_GetComponent_Text);
    (__this->fields).id = pUVar4;
    il2cpp_runtime_glue(&(__this->fields).id);
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar3 = UI_ElementFactory__CreateRawImage
                       (pUVar2,style,"Icons/Game/BladeIcon",24.0,24.0,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      pUVar5 = (UnityEngine_UI_RawImage_o *)
               UnityEngine_GameObject__GetComponent<object>(pUVar3,MethodInfo_RawImage_GetComponent_RawImage);
      (__this->fields).weapon = pUVar5;
      il2cpp_runtime_glue(&(__this->fields).weapon);
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar3 = UI_ElementFactory__CreateWhiteLabel
                         (pUVar2,style,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),0,3
                          ,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        pUVar4 = (UnityEngine_UI_Text_o *)
                 UnityEngine_GameObject__GetComponent<object>(pUVar3,MethodInfo_Text_GetComponent_Text);
        (__this->fields).playerName = pUVar4;
        il2cpp_runtime_glue(&(__this->fields).playerName);
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar3 = UI_ElementFactory__CreateWhiteLabel
                           (pUVar2,style,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),0
                            ,4,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          pUVar4 = (UnityEngine_UI_Text_o *)
                   UnityEngine_GameObject__GetComponent<object>(pUVar3,MethodInfo_Text_GetComponent_Text);
          (__this->fields).score = pUVar4;
          il2cpp_runtime_glue(&(__this->fields).score);
          if (player != (Photon_Realtime_Player_o *)0x0) {
            bVar1 = Photon_Realtime_Player__get_IsMasterClient(player,(MethodInfo *)0x0);
            *(char *)((long)&(__this->fields).isSet + 1) = (char)bVar1;
            (__this->fields).isMasterClient = (player->fields).actorNumber;
            *(undefined8 *)&(__this->fields).actorNumber = **(undefined8 **)(DAT_057110b0 + 0xb8);
            il2cpp_runtime_glue(&(__this->fields).actorNumber);
            (__this->fields).status = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
            il2cpp_runtime_glue(&(__this->fields).status);
            (__this->fields).character = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
            il2cpp_runtime_glue(&(__this->fields).character);
            (__this->fields).loadout = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
            il2cpp_runtime_glue(&(__this->fields).loadout);
            *(undefined1 *)&(__this->fields).isSet = 0;
            (__this->fields).player = player;
            il2cpp_runtime_glue(&(__this->fields).player,player);
            (__this->fields)._scoreBuilder = (System_Text_StringBuilder_o *)panel;
            il2cpp_runtime_glue(&(__this->fields)._scoreBuilder);
            UI_PlayerKDRRow__UpdateRow(__this,(MethodInfo *)panel);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.PlayerKDRRow$$StatsChanged
// il2cpp: bool UI_PlayerKDRRow__StatsChanged (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x40c6470

bool_conflict UI_PlayerKDRRow__StatsChanged(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  uint3 uVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  int32_t iVar5;
  bool_conflict bVar6;
  
  if (DAT_057046d3 == '\0') {
    il2cpp_init_method_metadata(&"Kills");
    il2cpp_init_method_metadata(&"Deaths");
    il2cpp_init_method_metadata(&"TotalDamage");
    il2cpp_init_method_metadata(&"HighestDamage");
    DAT_057046d3 = '\x01';
  }
  iVar2 = PhotonExtensions__GetIntProperty((__this->fields).player,"Kills",0,(MethodInfo *)0x0)
  ;
  iVar3 = PhotonExtensions__GetIntProperty((__this->fields).player,"Deaths",0,(MethodInfo *)0x0)
  ;
  iVar4 = PhotonExtensions__GetIntProperty((__this->fields).player,"HighestDamage",0,(MethodInfo *)0x0)
  ;
  iVar5 = PhotonExtensions__GetIntProperty((__this->fields).player,"TotalDamage",0,(MethodInfo *)0x0)
  ;
  uVar1 = (uint3)((uint)iVar5 >> 8);
  bVar6 = (bool_conflict)CONCAT71((uint7)uVar1,1);
  if (((*(int *)&(__this->fields).team == iVar2) &&
      (*(int *)((long)&(__this->fields).team + 4) == iVar3)) && ((__this->fields).kills == iVar4)) {
    bVar6 = CONCAT31(uVar1,(__this->fields).deaths != iVar5);
  }
  return bVar6;
}


// UI.PlayerKDRRow$$StatsChanged
// il2cpp: bool UI_PlayerKDRRow__StatsChanged (UI_PlayerKDRRow_o* __this, int32_t kills, int32_t deaths, int32_t maxDamage, int32_t totalDamage, const MethodInfo* method);
// 0x40c6550

bool_conflict
UI_PlayerKDRRow__StatsChanged
          (UI_PlayerKDRRow_o *__this,int32_t kills,int32_t deaths,int32_t maxDamage,
          int32_t totalDamage,MethodInfo *method)

{
  undefined4 in_EAX;
  bool_conflict bVar1;
  undefined3 uVar2;
  
  uVar2 = (undefined3)((uint)in_EAX >> 8);
  bVar1 = CONCAT31(uVar2,1);
  if (((*(int *)&(__this->fields).team == kills) &&
      (*(int *)((long)&(__this->fields).team + 4) == deaths)) &&
     ((__this->fields).kills == maxDamage)) {
    bVar1 = CONCAT31(uVar2,(__this->fields).deaths != totalDamage);
  }
  return bVar1;
}


// UI.PlayerKDRRow$$GetKillDiff
// il2cpp: int32_t UI_PlayerKDRRow__GetKillDiff (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x40c6570

int32_t UI_PlayerKDRRow__GetKillDiff(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  if (DAT_057046d4 == '\0') {
    il2cpp_init_method_metadata(&"Kills");
    DAT_057046d4 = '\x01';
  }
  iVar1 = PhotonExtensions__GetIntProperty((__this->fields).player,"Kills",0,(MethodInfo *)0x0)
  ;
  return iVar1 - *(int *)&(__this->fields).team;
}


// UI.PlayerKDRRow$$GetDeathDiff
// il2cpp: int32_t UI_PlayerKDRRow__GetDeathDiff (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x40c65b0

int32_t UI_PlayerKDRRow__GetDeathDiff(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  if (DAT_057046d5 == '\0') {
    il2cpp_init_method_metadata(&"Deaths");
    DAT_057046d5 = '\x01';
  }
  iVar1 = PhotonExtensions__GetIntProperty((__this->fields).player,"Deaths",0,(MethodInfo *)0x0)
  ;
  return iVar1 - *(int *)((long)&(__this->fields).team + 4);
}


// UI.PlayerKDRRow$$GetMaxDamageDiff
// il2cpp: int32_t UI_PlayerKDRRow__GetMaxDamageDiff (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x40c65f0

int32_t UI_PlayerKDRRow__GetMaxDamageDiff(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  if (DAT_057046d6 == '\0') {
    il2cpp_init_method_metadata(&"HighestDamage");
    DAT_057046d6 = '\x01';
  }
  iVar1 = PhotonExtensions__GetIntProperty((__this->fields).player,"HighestDamage",0,(MethodInfo *)0x0)
  ;
  return iVar1 - (__this->fields).kills;
}


// UI.PlayerKDRRow$$GetTotalDamageDiff
// il2cpp: int32_t UI_PlayerKDRRow__GetTotalDamageDiff (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x40c6630

int32_t UI_PlayerKDRRow__GetTotalDamageDiff(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  if (DAT_057046d7 == '\0') {
    il2cpp_init_method_metadata(&"TotalDamage");
    DAT_057046d7 = '\x01';
  }
  iVar1 = PhotonExtensions__GetIntProperty((__this->fields).player,"TotalDamage",0,(MethodInfo *)0x0)
  ;
  return iVar1 - (__this->fields).deaths;
}


// UI.PlayerKDRRow$$UpdateRow
// il2cpp: void UI_PlayerKDRRow__UpdateRow (UI_PlayerKDRRow_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x40c6670

void UI_PlayerKDRRow__UpdateRow
               (UI_PlayerKDRRow_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  (__this->fields).player = player;
  il2cpp_runtime_glue(&(__this->fields).player);
  UI_PlayerKDRRow__UpdateRow(__this,(MethodInfo *)player);
  return;
}


// UI.PlayerKDRRow$$UpdateRow
// il2cpp: void UI_PlayerKDRRow__UpdateRow (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x40c5d30

void UI_PlayerKDRRow__UpdateRow(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  byte bVar2;
  Photon_Realtime_Player_o *pPVar3;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_UI_RawImage_o *__this_00;
  System_String_array *pSVar5;
  Il2CppClass *pIVar6;
  System_String_o *loadout;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  bool_conflict bVar10;
  int32_t iVar11;
  int32_t iVar12;
  int32_t iVar13;
  int32_t iVar14;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  MethodInfo *pMVar17;
  UnityEngine_Texture_o *value;
  Il2CppObject *pIVar18;
  long lVar19;
  undefined8 uVar20;
  UnityEngine_UI_Text_c *method_00;
  MethodInfo *method_01;
  void *in_R8;
  ulong uVar21;
  int32_t local_54;
  System_String_o *local_50;
  System_String_o *local_48;
  System_String_o *local_40;
  int32_t local_34;
  
  if (DAT_057046d8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&": ");
    il2cpp_init_method_metadata(&"Kills");
    il2cpp_init_method_metadata(&"Deaths");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"TotalDamage");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"HighestDamage");
    DAT_057046d8 = '\x01';
  }
  local_54 = 0;
  pPVar3 = (__this->fields).player;
  if (pPVar3 == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar15 = PhotonExtensions__GetStringProperty
                      (pPVar3,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),""
                       ,(MethodInfo *)0x0);
  local_40 = PhotonExtensions__GetStringProperty
                       ((__this->fields).player,
                        *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x18),"",
                        (MethodInfo *)0x0);
  pSVar16 = PhotonExtensions__GetStringProperty
                      ((__this->fields).player,
                       *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x28),"",
                       (MethodInfo *)0x0);
  method_00 = (UnityEngine_UI_Text_c *)0x0;
  local_50 = PhotonExtensions__GetStringProperty
                       ((__this->fields).player,
                        *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),"",
                        (MethodInfo *)0x0);
  pPVar3 = (__this->fields).player;
  if (pPVar3 == (Photon_Realtime_Player_o *)0x0) goto LAB_040c645e;
  bVar2 = *(byte *)((long)&(__this->fields).isSet + 1);
  uVar9 = Photon_Realtime_Player__get_IsMasterClient(pPVar3,(MethodInfo *)0x0);
  pPVar3 = (__this->fields).player;
  if ((uint)bVar2 == (uVar9 & 0xff)) {
    if (pPVar3 == (Photon_Realtime_Player_o *)0x0) goto LAB_040c645e;
    if (((__this->fields).isMasterClient != (pPVar3->fields).actorNumber) ||
       ((char)(__this->fields).isSet == '\0')) goto LAB_040c5ec8;
  }
  else {
    if (pPVar3 == (Photon_Realtime_Player_o *)0x0) goto LAB_040c645e;
LAB_040c5ec8:
    local_48 = pSVar15;
    bVar10 = Photon_Realtime_Player__get_IsMasterClient(pPVar3,(MethodInfo *)0x0);
    *(char *)((long)&(__this->fields).isSet + 1) = (char)bVar10;
    pPVar3 = (__this->fields).player;
    if (pPVar3 == (Photon_Realtime_Player_o *)0x0) goto LAB_040c645e;
    iVar11 = (pPVar3->fields).actorNumber;
    (__this->fields).isMasterClient = iVar11;
    *(undefined1 *)&(__this->fields).isSet = 1;
    pUVar4 = (__this->fields).id;
    uVar9 = Photon_Realtime_Player__get_IsMasterClient(pPVar3,(MethodInfo *)0x0);
    pPVar3 = (__this->fields).player;
    if (pPVar3 == (Photon_Realtime_Player_o *)0x0) goto LAB_040c645e;
    bVar10 = (pPVar3->fields).IsLocal;
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar17 = (MethodInfo *)
              GameManagers_ChatManager__GetIDString
                        (iVar11,uVar9 & 0xff,(uint)(byte)bVar10,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040c645e;
    method_00 = pUVar4->klass;
    (*(method_00->vtable)._75_set_text.methodPtr)
              ((Il2CppMethodPointer)pUVar4,pMVar17,(method_00->vtable)._75_set_text.method,
               (void **)method_00,in_R8);
    pSVar15 = local_48;
  }
  bVar10 = System_String__op_Inequality(pSVar16,(__this->fields).status,(MethodInfo *)0x0);
  if (((char)bVar10 != '\0') ||
     (bVar10 = System_String__op_Inequality(local_50,(__this->fields).character,(MethodInfo *)0x0),
     (char)bVar10 != '\0')) {
    (__this->fields).status = pSVar16;
    il2cpp_runtime_glue(&(__this->fields).status,pSVar16);
    loadout = local_50;
    (__this->fields).character = local_50;
    il2cpp_runtime_glue(&(__this->fields).character,local_50);
    __this_00 = (__this->fields).weapon;
    value = UI_PlayerKDRRow__GetPlayerIcon(__this,pSVar16,loadout,(MethodInfo *)method_00);
    if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) goto LAB_040c645e;
    UnityEngine_UI_RawImage__set_texture(__this_00,value,(MethodInfo *)0x0);
  }
  pUVar4 = (__this->fields).playerName;
  if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
    pSVar16 = (System_String_o *)
              (*(pUVar4->klass->vtable)._74_get_text.methodPtr)
                        (pUVar4,(pUVar4->klass->vtable)._74_get_text.method);
    bVar10 = System_String__op_Inequality(pSVar15,pSVar16,(MethodInfo *)0x0);
    pSVar16 = local_40;
    if (((char)bVar10 != '\0') ||
       (bVar10 = System_String__op_Inequality
                           (local_40,*(System_String_o **)&(__this->fields).actorNumber,
                            (MethodInfo *)0x0), (char)bVar10 != '\0')) {
      *(System_String_o **)&(__this->fields).actorNumber = pSVar16;
      il2cpp_runtime_glue(&(__this->fields).actorNumber,pSVar16);
      pSVar16 = UI_PlayerKDRRow__GetPlayerStatus(__this,pSVar16,method_01);
      pUVar4 = (__this->fields).playerName;
      pSVar15 = System_String__Concat(pSVar16,pSVar15,": ",(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040c645e;
      (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                (pUVar4,pSVar15,(pUVar4->klass->vtable)._75_set_text.method);
    }
    pPVar3 = (__this->fields).player;
    pSVar15 = (__this->fields).loadout;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar16 = PhotonExtensions__GetStringProperty
                        (pPVar3,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),
                         "",(MethodInfo *)0x0);
    bVar10 = System_String__op_Inequality(pSVar15,pSVar16,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      ppSVar1 = &(__this->fields).loadout;
      pPVar3 = (__this->fields).player;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar15 = PhotonExtensions__GetStringProperty
                          (pPVar3,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),
                           "",(MethodInfo *)0x0);
      *ppSVar1 = pSVar15;
      il2cpp_runtime_glue(ppSVar1,pSVar15);
    }
    iVar11 = PhotonExtensions__GetIntProperty
                       ((__this->fields).player,"Kills",0,(MethodInfo *)0x0);
    iVar12 = PhotonExtensions__GetIntProperty
                       ((__this->fields).player,"Deaths",0,(MethodInfo *)0x0);
    iVar13 = PhotonExtensions__GetIntProperty
                       ((__this->fields).player,"HighestDamage",0,(MethodInfo *)0x0);
    iVar14 = PhotonExtensions__GetIntProperty
                       ((__this->fields).player,"TotalDamage",0,(MethodInfo *)0x0);
    local_50 = (System_String_o *)CONCAT44(local_50._4_4_,iVar14);
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar19 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    else {
      lVar19 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    if (lVar19 != 0) {
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
        lVar19 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (lVar19 == 0) goto LAB_040c645e;
      }
      bVar10 = System_String__op_Inequality
                         (*(System_String_o **)(lVar19 + 0x78),
                          (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                          (MethodInfo *)0x0);
      if ((char)bVar10 != '\0') {
        pSVar15 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
        pPVar3 = (__this->fields).player;
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar19 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (lVar19 != 0) {
          pIVar18 = PhotonExtensions__GetCustomProperty
                              (pPVar3,*(System_String_o **)(lVar19 + 0x78),(MethodInfo *)0x0);
          if (pIVar18 != (Il2CppObject *)0x0) {
            pSVar15 = (System_String_o *)
                      (*pIVar18->klass->vtable[3].methodPtr)
                                (pIVar18,pIVar18->klass->vtable[3].method);
          }
          pUVar4 = (__this->fields).score;
          if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
            pSVar16 = (System_String_o *)
                      (*(pUVar4->klass->vtable)._74_get_text.methodPtr)
                                (pUVar4,(pUVar4->klass->vtable)._74_get_text.method);
            bVar10 = System_String__op_Inequality(pSVar15,pSVar16,(MethodInfo *)0x0);
            if ((char)bVar10 == '\0') {
              return;
            }
            pUVar4 = (__this->fields).score;
            if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
              (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                        (pUVar4,pSVar15,(pUVar4->klass->vtable)._75_set_text.method);
              return;
            }
          }
        }
        goto LAB_040c645e;
      }
    }
    local_48 = (System_String_o *)CONCAT44(local_48._4_4_,iVar12);
    local_40 = (System_String_o *)CONCAT44(local_40._4_4_,iVar11);
    pSVar5 = (__this->fields).trackedProperties;
    local_34 = iVar13;
    if (pSVar5 != (System_String_array *)0x0) {
      System_Text_StringBuilder__Clear((System_Text_StringBuilder_o *)pSVar5,(MethodInfo *)0x0);
      lVar19 = *(long *)&(__this->fields).maxDamage;
      if (lVar19 != 0) {
        uVar21 = 0;
        uVar9 = *(uint *)(lVar19 + 0x18);
        if (0 < (int)uVar9) {
          do {
            if (uVar9 <= uVar21) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            local_54 = PhotonExtensions__GetIntProperty
                                 ((__this->fields).player,
                                  *(System_String_o **)(lVar19 + 0x20 + uVar21 * 8),0,
                                  (MethodInfo *)0x0);
            pSVar5 = (__this->fields).trackedProperties;
            pSVar15 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
            if (pSVar5 == (System_String_array *)0x0) goto LAB_040c645e;
            System_Text_StringBuilder__Append
                      ((System_Text_StringBuilder_o *)pSVar5,pSVar15,(MethodInfo *)0x0);
            lVar19 = *(long *)&(__this->fields).maxDamage;
            if (lVar19 == 0) goto LAB_040c645e;
            if ((long)uVar21 < (*(long *)(lVar19 + 0x18) << 0x20) + -0x100000000 >> 0x20) {
              pSVar5 = (__this->fields).trackedProperties;
              if (pSVar5 == (System_String_array *)0x0) goto LAB_040c645e;
              System_Text_StringBuilder__Append
                        ((System_Text_StringBuilder_o *)pSVar5,"/",(MethodInfo *)0x0);
              lVar19._0_4_ = (__this->fields).maxDamage;
              lVar19._4_4_ = (__this->fields).totalDamage;
            }
            uVar21 = uVar21 + 1;
            if (lVar19 == 0) goto LAB_040c645e;
            uVar9 = *(uint *)(lVar19 + 0x18);
          } while ((long)uVar21 < (long)(int)uVar9);
        }
        pSVar5 = (__this->fields).trackedProperties;
        if (pSVar5 != (System_String_array *)0x0) {
          pUVar4 = (__this->fields).score;
          pIVar6 = (pSVar5->obj).klass;
          uVar20 = (*pIVar6->vtable[3].methodPtr)(pSVar5,pIVar6->vtable[3].method);
          iVar11 = local_34;
          uVar8 = local_40._0_4_;
          uVar7 = local_48._0_4_;
          if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                      (pUVar4,uVar20,(pUVar4->klass->vtable)._75_set_text.method);
            *(undefined4 *)&(__this->fields).team = uVar8;
            *(undefined4 *)((long)&(__this->fields).team + 4) = uVar7;
            (__this->fields).kills = iVar11;
            (__this->fields).deaths = (int32_t)local_50;
            return;
          }
        }
      }
    }
  }
LAB_040c645e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.PlayerKDRRow$$GetPlayerStatus
// il2cpp: System_String_o* UI_PlayerKDRRow__GetPlayerStatus (UI_PlayerKDRRow_o* __this, System_String_o* status, const MethodInfo* method);
// 0x40c6b10

System_String_o *
UI_PlayerKDRRow__GetPlayerStatus
          (UI_PlayerKDRRow_o *__this,System_String_o *status,MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  bool_conflict bVar2;
  undefined8 *puVar3;
  
  if (DAT_057046d9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerStatus);
    il2cpp_init_method_metadata(&" <color=red>*dead*</color> ");
    DAT_057046d9 = '\x01';
  }
  pSVar1 = (__this->fields)._scoreBuilder;
  if (pSVar1 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(char *)((long)&pSVar1[1].fields.m_ChunkLength + 1) != '\0') {
    if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = System_String__op_Equality
                      (status,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 8),
                       (MethodInfo *)0x0);
    puVar3 = &" <color=red>*dead*</color> ";
    if ((char)bVar2 != '\0') goto LAB_040c6bd6;
    if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = System_String__op_Equality
                      (status,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10),
                       (MethodInfo *)0x0);
    if ((char)bVar2 != '\0') goto LAB_040c6bd6;
  }
  puVar3 = *(undefined8 **)(DAT_057110b0 + 0xb8);
LAB_040c6bd6:
  return (System_String_o *)*puVar3;
}


// UI.PlayerKDRRow$$GetPlayerIcon
// il2cpp: UnityEngine_Texture_o* UI_PlayerKDRRow__GetPlayerIcon (UI_PlayerKDRRow_o* __this, System_String_o* character, System_String_o* loadout, const MethodInfo* method);
// 0x40c6690

UnityEngine_Texture_o *
UI_PlayerKDRRow__GetPlayerIcon
          (UI_PlayerKDRRow_o *__this,System_String_o *character,System_String_o *loadout,
          MethodInfo *method)

{
  byte bVar1;
  System_Text_StringBuilder_o *pSVar2;
  bool_conflict bVar3;
  undefined8 *puVar4;
  UnityEngine_Texture_o *pUVar5;
  System_String_o *path;
  UnityEngine_Texture_o *pUVar6;
  
  if (DAT_057046da == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    il2cpp_init_method_metadata(&TypeInfo_PlayerCharacter);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture);
    il2cpp_init_method_metadata(&"Icons/Game/ShifterIcon");
    il2cpp_init_method_metadata(&"Icons/Game/ThunderSpearIcon");
    il2cpp_init_method_metadata(&"Icons/Game/APGIcon");
    il2cpp_init_method_metadata(&"Icons/Game/BladeIcon");
    il2cpp_init_method_metadata(&"Icons/Specials/NoneSpecialIcon");
    il2cpp_init_method_metadata(&"Icons/Game/AHSSIcon");
    il2cpp_init_method_metadata(&"Icons/Game/TitanIcon");
    DAT_057046da = '\x01';
  }
  pSVar2 = (__this->fields)._scoreBuilder;
  if (pSVar2 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((char)pSVar2[1].fields.m_ChunkLength == '\0') {
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    puVar4 = &"Icons/Specials/NoneSpecialIcon";
    goto LAB_040c6aaa;
  }
  if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = System_String__op_Equality
                    (character,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = System_String__op_Equality
                      (character,*(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8),
                       (MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      puVar4 = &"Icons/Game/TitanIcon";
      goto LAB_040c6aaa;
    }
    if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = System_String__op_Equality
                      (character,*(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 0x10),
                       (MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      puVar4 = &"Icons/Game/ShifterIcon";
      goto LAB_040c6aaa;
    }
  }
  else {
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = System_String__op_Equality
                      (loadout,(System_String_o *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8),
                       (MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = System_String__op_Equality
                        (loadout,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8),
                         (MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
          il2cpp_init_class();
        }
        path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        puVar4 = &"Icons/Game/AHSSIcon";
        goto LAB_040c6aaa;
      }
      if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = System_String__op_Equality
                        (loadout,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18),
                         (MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
          il2cpp_init_class();
        }
        path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        puVar4 = &"Icons/Game/APGIcon";
        goto LAB_040c6aaa;
      }
      if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = System_String__op_Equality
                        (loadout,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10),
                         (MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
          il2cpp_init_class();
        }
        path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        puVar4 = &"Icons/Game/ThunderSpearIcon";
        goto LAB_040c6aaa;
      }
    }
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  puVar4 = &"Icons/Game/BladeIcon";
LAB_040c6aaa:
  pUVar5 = (UnityEngine_Texture_o *)
           ApplicationManagers_ResourceManager__LoadAsset
                     (path,(System_String_o *)*puVar4,1,(MethodInfo *)0x0);
  pUVar6 = (UnityEngine_Texture_o *)0x0;
  if (pUVar5 != (UnityEngine_Texture_o *)0x0) {
    bVar1 = (TypeInfo_Texture->_2).naturalAligment;
    if (((pUVar5->klass->_2).naturalAligment < bVar1) ||
       (pUVar6 = pUVar5, (pUVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Texture)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pUVar5);
    }
  }
  return pUVar6;
}


// UI.PlayerKDRRow$$GetPlayerIconFull
// il2cpp: UnityEngine_Texture_o* UI_PlayerKDRRow__GetPlayerIconFull (UI_PlayerKDRRow_o* __this, System_String_o* character, System_String_o* loadout, System_String_o* status, const MethodInfo* method);
// 0x40c6bf0

UnityEngine_Texture_o *
UI_PlayerKDRRow__GetPlayerIconFull
          (UI_PlayerKDRRow_o *__this,System_String_o *character,System_String_o *loadout,
          System_String_o *status,MethodInfo *method)

{
  byte bVar1;
  bool_conflict bVar2;
  undefined8 *puVar3;
  UnityEngine_Texture_o *pUVar4;
  MethodInfo *method_00;
  System_String_o *path;
  
  method_00 = (MethodInfo *)status;
  if (DAT_057046db == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerStatus);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture);
    il2cpp_init_method_metadata(&"Icons/Game/SpectatingIcon");
    il2cpp_init_method_metadata(&"Icons/Quests/Skull1Icon");
    DAT_057046db = '\x01';
  }
  if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = System_String__op_Equality
                    (status,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 8),
                     (MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = System_String__op_Equality
                      (status,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10),
                       (MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pUVar4 = UI_PlayerKDRRow__GetPlayerIcon(__this,character,loadout,method_00);
      return pUVar4;
    }
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    puVar3 = &"Icons/Game/SpectatingIcon";
  }
  else {
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    puVar3 = &"Icons/Quests/Skull1Icon";
  }
  pUVar4 = (UnityEngine_Texture_o *)
           ApplicationManagers_ResourceManager__LoadAsset
                     (path,(System_String_o *)*puVar3,1,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_Texture_o *)0x0) {
    bVar1 = (TypeInfo_Texture->_2).naturalAligment;
    if (((pUVar4->klass->_2).naturalAligment < bVar1) ||
       ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Texture)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pUVar4);
    }
  }
  return pUVar4;
}


// UI.PlayerKDRRow$$.ctor
// il2cpp: void UI_PlayerKDRRow___ctor (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x40c6dc0

void UI_PlayerKDRRow___ctor(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  long lVar1;
  System_String_array *__this_00;
  
  if (DAT_057046dc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringBuilder);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"Kills");
    il2cpp_init_method_metadata(&"Deaths");
    il2cpp_init_method_metadata(&"TotalDamage");
    il2cpp_init_method_metadata(&"HighestDamage");
    DAT_057046dc = '\x01';
  }
  lVar1 = il2cpp_glue_02274930(TypeInfo_string,4);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x20) = "Kills";
      il2cpp_runtime_glue(lVar1 + 0x20);
      if (1 < *(uint *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x28) = "Deaths";
        il2cpp_runtime_glue(lVar1 + 0x28);
        if (2 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x30) = "HighestDamage";
          il2cpp_runtime_glue(lVar1 + 0x30);
          if (3 < *(uint *)(lVar1 + 0x18)) {
            *(undefined8 *)(lVar1 + 0x38) = "TotalDamage";
            il2cpp_runtime_glue(lVar1 + 0x38);
            (__this->fields).maxDamage = (int)lVar1;
            (__this->fields).totalDamage = (int)((ulong)lVar1 >> 0x20);
            il2cpp_runtime_glue(&(__this->fields).maxDamage);
            __this_00 = (System_String_array *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
            System_Text_StringBuilder___ctor
                      ((System_Text_StringBuilder_o *)__this_00,(MethodInfo *)0x0);
            (__this->fields).trackedProperties = __this_00;
            il2cpp_runtime_glue(&(__this->fields).trackedProperties);
            UnityEngine_MonoBehaviour___ctor
                      ((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


