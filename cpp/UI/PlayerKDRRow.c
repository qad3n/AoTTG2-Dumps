// Type: UI.PlayerKDRRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/PlayerKDRRow.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/PlayerKDRRow.cs
// --------------------------------

// UI.PlayerKDRRow$$Setup
// il2cpp: void UI_PlayerKDRRow__Setup (UI_PlayerKDRRow_o* __this, UI_ElementStyle_o* style, Photon_Realtime_Player_o* player, UI_KDRPanel_o* panel, const MethodInfo* method);
// 0x5d3a4f0

void UI_PlayerKDRRow__Setup
               (UI_PlayerKDRRow_o *__this,UI_ElementStyle_o *style,Photon_Realtime_Player_o *player,
               UI_KDRPanel_o *panel,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_UI_RawImage_o *pUVar5;
  
  if (Il2CppMethodInitialized_07547e65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/BladeIcon");
    Il2CppMethodInitialized_07547e65 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar3 = UI_ElementFactory__CreateWhiteLabel
                     (pUVar2,style,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),0,3,
                      (MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar3,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    (__this->fields).id = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar3 = UI_ElementFactory__CreateRawImage(pUVar2,style,"Icons/Game/BladeIcon",24.0,24.0,(MethodInfo *)0x0)
    ;
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      pUVar5 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar3,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage
                         );
      (__this->fields).weapon = pUVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields).weapon);
      pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar3 = UI_ElementFactory__CreateWhiteLabel
                         (pUVar2,style,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),0,3,
                          (MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        pUVar4 = UnityEngine_GameObject__GetComponent_object_
                           (pUVar3,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
        (__this->fields).playerName = pUVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields).playerName);
        pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar3 = UI_ElementFactory__CreateWhiteLabel
                           (pUVar2,style,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),0,4,
                            (MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          pUVar4 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar3,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text
                             );
          (__this->fields).score = pUVar4;
          Il2CppCodeGenWriteBarrier(&(__this->fields).score);
          if (player != (Photon_Realtime_Player_o *)0x0) {
            bVar1 = Photon_Realtime_Player__get_IsMasterClient(player,(MethodInfo *)0x0);
            (__this->fields).isMasterClient = bVar1;
            (__this->fields).actorNumber = (player->fields).actorNumber;
            (__this->fields).status = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
            Il2CppCodeGenWriteBarrier(&(__this->fields).status);
            (__this->fields).character = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
            Il2CppCodeGenWriteBarrier(&(__this->fields).character);
            (__this->fields).loadout = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
            Il2CppCodeGenWriteBarrier(&(__this->fields).loadout);
            (__this->fields).team = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
            Il2CppCodeGenWriteBarrier(&(__this->fields).team);
            (__this->fields).isSet = false;
            (__this->fields).player = player;
            Il2CppCodeGenWriteBarrier(&(__this->fields).player);
            (__this->fields)._kdrPanel = panel;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._kdrPanel);
            UI_PlayerKDRRow__UpdateRow_5c3a780(__this,(MethodInfo *)panel);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.PlayerKDRRow$$StatsChanged
// il2cpp: bool UI_PlayerKDRRow__StatsChanged (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x5d3aea0

bool UI_PlayerKDRRow__StatsChanged(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_07547e66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Kills");
    il2cpp_codegen_initialize_runtime_metadata(&"Deaths");
    il2cpp_codegen_initialize_runtime_metadata(&"TotalDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"HighestDamage");
    Il2CppMethodInitialized_07547e66 = '\x01';
  }
  iVar1 = PhotonExtensions__GetIntProperty((__this->fields).player,"Kills",0,(MethodInfo *)0x0);
  iVar2 = PhotonExtensions__GetIntProperty((__this->fields).player,"Deaths",0,(MethodInfo *)0x0);
  iVar3 = PhotonExtensions__GetIntProperty((__this->fields).player,"HighestDamage",0,(MethodInfo *)0x0);
  iVar4 = PhotonExtensions__GetIntProperty((__this->fields).player,"TotalDamage",0,(MethodInfo *)0x0);
  bVar5 = true;
  if ((((__this->fields).kills == iVar1) && ((__this->fields).deaths == iVar2)) &&
     ((__this->fields).maxDamage == iVar3)) {
    bVar5 = (__this->fields).totalDamage != iVar4;
  }
  return bVar5;
}


// UI.PlayerKDRRow$$StatsChanged
// il2cpp: bool UI_PlayerKDRRow__StatsChanged (UI_PlayerKDRRow_o* __this, int32_t kills, int32_t deaths, int32_t maxDamage, int32_t totalDamage, const MethodInfo* method);
// 0x5d3af80

bool UI_PlayerKDRRow__StatsChanged_5c3af80
               (UI_PlayerKDRRow_o *__this,int32_t kills,int32_t deaths,int32_t maxDamage,int32_t totalDamage,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = true;
  if ((((__this->fields).kills == kills) && ((__this->fields).deaths == deaths)) &&
     ((__this->fields).maxDamage == maxDamage)) {
    bVar1 = (__this->fields).totalDamage != totalDamage;
  }
  return bVar1;
}


// UI.PlayerKDRRow$$GetKillDiff
// il2cpp: int32_t UI_PlayerKDRRow__GetKillDiff (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x5d3afa0

int32_t UI_PlayerKDRRow__GetKillDiff(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_07547e67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Kills");
    Il2CppMethodInitialized_07547e67 = '\x01';
  }
  iVar1 = PhotonExtensions__GetIntProperty((__this->fields).player,"Kills",0,(MethodInfo *)0x0);
  return iVar1 - (__this->fields).kills;
}


// UI.PlayerKDRRow$$GetDeathDiff
// il2cpp: int32_t UI_PlayerKDRRow__GetDeathDiff (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x5d3afe0

int32_t UI_PlayerKDRRow__GetDeathDiff(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_07547e68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Deaths");
    Il2CppMethodInitialized_07547e68 = '\x01';
  }
  iVar1 = PhotonExtensions__GetIntProperty((__this->fields).player,"Deaths",0,(MethodInfo *)0x0);
  return iVar1 - (__this->fields).deaths;
}


// UI.PlayerKDRRow$$GetMaxDamageDiff
// il2cpp: int32_t UI_PlayerKDRRow__GetMaxDamageDiff (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x5d3b020

int32_t UI_PlayerKDRRow__GetMaxDamageDiff(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_07547e69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"HighestDamage");
    Il2CppMethodInitialized_07547e69 = '\x01';
  }
  iVar1 = PhotonExtensions__GetIntProperty((__this->fields).player,"HighestDamage",0,(MethodInfo *)0x0);
  return iVar1 - (__this->fields).maxDamage;
}


// UI.PlayerKDRRow$$GetTotalDamageDiff
// il2cpp: int32_t UI_PlayerKDRRow__GetTotalDamageDiff (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x5d3b060

int32_t UI_PlayerKDRRow__GetTotalDamageDiff(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_07547e6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TotalDamage");
    Il2CppMethodInitialized_07547e6a = '\x01';
  }
  iVar1 = PhotonExtensions__GetIntProperty((__this->fields).player,"TotalDamage",0,(MethodInfo *)0x0);
  return iVar1 - (__this->fields).totalDamage;
}


// UI.PlayerKDRRow$$UpdateRow
// il2cpp: void UI_PlayerKDRRow__UpdateRow (UI_PlayerKDRRow_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5d3b0a0

void UI_PlayerKDRRow__UpdateRow(UI_PlayerKDRRow_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  (__this->fields).player = player;
  Il2CppCodeGenWriteBarrier(&(__this->fields).player);
  UI_PlayerKDRRow__UpdateRow_5c3a780(__this,(MethodInfo *)player);
  return;
}


// UI.PlayerKDRRow$$UpdateRow
// il2cpp: void UI_PlayerKDRRow__UpdateRow (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x5d3a780
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d3a91b: jmp 0x5d3a926
// asm:   0x5d3ac02: jmp 0x5d3ad40

void UI_PlayerKDRRow__UpdateRow_5c3a780(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  System_String_o **targetAddress;
  uint uVar1;
  Photon_Realtime_Player_o *pPVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_UI_RawImage_o *__this_00;
  System_Text_StringBuilder_o *pSVar4;
  bool bVar5;
  bool bVar6;
  int32_t iVar7;
  int32_t iVar8;
  int32_t iVar9;
  int32_t iVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  MethodInfo *pMVar13;
  UnityEngine_Texture_o *value;
  System_String_o *pSVar14;
  CustomLogic_CustomLogicEvaluator_o *pCVar15;
  Il2CppObject *pIVar16;
  System_String_array *pSVar17;
  UnityEngine_UI_Text_c *method_00;
  MethodInfo *method_01;
  void *in_R8;
  ulong uVar18;
  int32_t iStack_4c;
  System_String_o *pSStack_48;
  System_String_o *pSStack_40;
  System_String_o *pSStack_38;
  
  if (Il2CppMethodInitialized_07547e6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&"Kills");
    il2cpp_codegen_initialize_runtime_metadata(&"Deaths");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"TotalDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"HighestDamage");
    Il2CppMethodInitialized_07547e6b = '\x01';
  }
  iStack_4c = 0;
  pPVar2 = (__this->fields).player;
  if (pPVar2 == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSStack_38 = PhotonExtensions__GetStringProperty
                         (pPVar2,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                          "",(MethodInfo *)0x0);
  pSVar11 = PhotonExtensions__GetStringProperty
                      ((__this->fields).player,TypeInfo_GameManagers_PlayerProperty->static_fields->Status,
                       "",(MethodInfo *)0x0);
  pSVar12 = PhotonExtensions__GetStringProperty
                      ((__this->fields).player,TypeInfo_GameManagers_PlayerProperty->static_fields->Character,
                       "",(MethodInfo *)0x0);
  method_00 = (UnityEngine_UI_Text_c *)0x0;
  pSStack_48 = PhotonExtensions__GetStringProperty
                         ((__this->fields).player,TypeInfo_GameManagers_PlayerProperty->static_fields->Loadout
                          ,"",(MethodInfo *)0x0);
  pPVar2 = (__this->fields).player;
  if (pPVar2 == (Photon_Realtime_Player_o *)0x0) goto label_05d3ae95;
  bVar6 = (__this->fields).isMasterClient;
  bVar5 = Photon_Realtime_Player__get_IsMasterClient(pPVar2,(MethodInfo *)0x0);
  pPVar2 = (__this->fields).player;
  if (bVar6 == bVar5) {
    if (pPVar2 == (Photon_Realtime_Player_o *)0x0) goto label_05d3ae95;
    if (((__this->fields).actorNumber != (pPVar2->fields).actorNumber) || ((__this->fields).isSet == false))
    goto label_05d3a926;
  }
  else {
    if (pPVar2 == (Photon_Realtime_Player_o *)0x0) goto label_05d3ae95;
label_05d3a926:
    pSStack_40 = pSVar11;
    bVar6 = Photon_Realtime_Player__get_IsMasterClient(pPVar2,(MethodInfo *)0x0);
    (__this->fields).isMasterClient = bVar6;
    pPVar2 = (__this->fields).player;
    if (pPVar2 == (Photon_Realtime_Player_o *)0x0) goto label_05d3ae95;
    iVar7 = (pPVar2->fields).actorNumber;
    (__this->fields).actorNumber = iVar7;
    (__this->fields).isSet = true;
    pUVar3 = (__this->fields).id;
    bVar6 = Photon_Realtime_Player__get_IsMasterClient(pPVar2,(MethodInfo *)0x0);
    pPVar2 = (__this->fields).player;
    if (pPVar2 == (Photon_Realtime_Player_o *)0x0) goto label_05d3ae95;
    bVar5 = (pPVar2->fields).IsLocal;
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pMVar13 = (MethodInfo *)GameManagers_ChatManager__GetIDString(iVar7,bVar6,bVar5,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_UI_Text_o *)0x0) goto label_05d3ae95;
    method_00 = pUVar3->klass;
    (*(method_00->vtable)._75_set_text.methodPtr)
              ((Il2CppMethodPointer)pUVar3,pMVar13,(method_00->vtable)._75_set_text.method,(void **)method_00,
               in_R8);
    pSVar11 = pSStack_40;
  }
  bVar6 = System_String__op_Inequality(pSVar12,(__this->fields).character,(MethodInfo *)0x0);
  if ((bVar6) ||
     (bVar6 = System_String__op_Inequality(pSStack_48,(__this->fields).loadout,(MethodInfo *)0x0), bVar6)) {
    (__this->fields).character = pSVar12;
    Il2CppCodeGenWriteBarrier(&(__this->fields).character);
    pSVar14 = pSStack_48;
    (__this->fields).loadout = pSStack_48;
    Il2CppCodeGenWriteBarrier(&(__this->fields).loadout);
    __this_00 = (__this->fields).weapon;
    value = UI_PlayerKDRRow__GetPlayerIcon(__this,pSVar12,pSVar14,(MethodInfo *)method_00);
    if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) goto label_05d3ae95;
    UnityEngine_UI_RawImage__set_texture(__this_00,value,(MethodInfo *)0x0);
  }
  pUVar3 = (__this->fields).playerName;
  if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
    pSVar14 = (*(pUVar3->klass->vtable)._74_get_text.methodPtr)
                        (pUVar3,(pUVar3->klass->vtable)._74_get_text.method);
    pSVar12 = pSStack_38;
    bVar6 = System_String__op_Inequality(pSStack_38,pSVar14,(MethodInfo *)0x0);
    if ((bVar6) ||
       (bVar6 = System_String__op_Inequality(pSVar11,(__this->fields).status,(MethodInfo *)0x0), bVar6)) {
      (__this->fields).status = pSVar11;
      Il2CppCodeGenWriteBarrier(&(__this->fields).status);
      pSVar11 = UI_PlayerKDRRow__GetPlayerStatus(__this,pSVar11,method_01);
      pUVar3 = (__this->fields).playerName;
      pSVar11 = System_String__Concat_5301f10(pSVar11,pSVar12,": ",(MethodInfo *)0x0);
      if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
      }
      UI_LanguageFonts__SetText(pUVar3,pSVar11,(MethodInfo *)0x0);
    }
    pPVar2 = (__this->fields).player;
    pSVar11 = (__this->fields).team;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar12 = PhotonExtensions__GetStringProperty
                        (pPVar2,TypeInfo_GameManagers_PlayerProperty->static_fields->Team,
                         "",(MethodInfo *)0x0);
    bVar6 = System_String__op_Inequality(pSVar11,pSVar12,(MethodInfo *)0x0);
    if (bVar6) {
      targetAddress = &(__this->fields).team;
      pPVar2 = (__this->fields).player;
      if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
      }
      pSVar11 = PhotonExtensions__GetStringProperty
                          (pPVar2,TypeInfo_GameManagers_PlayerProperty->static_fields->Team,
                           "",(MethodInfo *)0x0);
      *targetAddress = pSVar11;
      Il2CppCodeGenWriteBarrier(targetAddress);
    }
    iVar7 = PhotonExtensions__GetIntProperty
                      ((__this->fields).player,"Kills",0,(MethodInfo *)0x0);
    iVar8 = PhotonExtensions__GetIntProperty
                      ((__this->fields).player,"Deaths",0,(MethodInfo *)0x0);
    iVar9 = PhotonExtensions__GetIntProperty
                      ((__this->fields).player,"HighestDamage",0,(MethodInfo *)0x0);
    iVar10 = PhotonExtensions__GetIntProperty
                       ((__this->fields).player,"TotalDamage",0,(MethodInfo *)0x0);
    pSStack_48 = (System_String_o *)CONCAT44(pSStack_48._4_4_,iVar10);
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar15 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    else {
      pCVar15 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    if (pCVar15 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        pCVar15 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if (pCVar15 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05d3ae95;
      }
      bVar6 = System_String__op_Inequality
                        ((pCVar15->fields).ScoreboardProperty,
                         (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
      if (bVar6) {
        pSVar11 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        pPVar2 = (__this->fields).player;
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        pCVar15 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if (pCVar15 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pIVar16 = PhotonExtensions__GetCustomProperty
                              (pPVar2,(pCVar15->fields).ScoreboardProperty,(MethodInfo *)0x0);
          if (pIVar16 != (Il2CppObject *)0x0) {
            pSVar11 = (System_String_o *)
                      (*pIVar16->klass->vtable[3].methodPtr)(pIVar16,pIVar16->klass->vtable[3].method);
          }
          pUVar3 = (__this->fields).score;
          if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
            pSVar12 = (*(pUVar3->klass->vtable)._74_get_text.methodPtr)
                                (pUVar3,(pUVar3->klass->vtable)._74_get_text.method);
            bVar6 = System_String__op_Inequality(pSVar11,pSVar12,(MethodInfo *)0x0);
            if (!bVar6) {
              return;
            }
            pUVar3 = (__this->fields).score;
            if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
              (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                        (pUVar3,pSVar11,(pUVar3->klass->vtable)._75_set_text.method);
              return;
            }
          }
        }
        goto label_05d3ae95;
      }
    }
    pSStack_40 = (System_String_o *)CONCAT44(pSStack_40._4_4_,iVar9);
    pSStack_38 = (System_String_o *)CONCAT44(pSStack_38._4_4_,iVar8);
    pSVar4 = (__this->fields)._scoreBuilder;
    if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Clear(pSVar4,(MethodInfo *)0x0);
      pSVar17 = (__this->fields).trackedProperties;
      if (pSVar17 != (System_String_array *)0x0) {
        uVar18 = 0;
        do {
          uVar1 = (uint)pSVar17->max_length;
          if ((long)(int)uVar1 <= (long)uVar18) {
            pSVar4 = (__this->fields)._scoreBuilder;
            if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
              pUVar3 = (__this->fields).score;
              pSVar11 = (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                                  (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
              if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
                (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                          (pUVar3,pSVar11,(pUVar3->klass->vtable)._75_set_text.method);
                (__this->fields).kills = iVar7;
                (__this->fields).deaths = (int32_t)pSStack_38;
                (__this->fields).maxDamage = (int32_t)pSStack_40;
                (__this->fields).totalDamage = (int32_t)pSStack_48;
                return;
              }
            }
            break;
          }
          if (uVar1 <= uVar18) {
            ThrowIndexOutOfRangeException();
          }
          iStack_4c = PhotonExtensions__GetIntProperty
                                ((__this->fields).player,pSVar17->m_Items[uVar18],0,(MethodInfo *)0x0);
          pSVar4 = (__this->fields)._scoreBuilder;
          pSVar11 = System_Int32__ToString(&iStack_4c,(MethodInfo *)0x0);
          if (pSVar4 == (System_Text_StringBuilder_o *)0x0) break;
          System_Text_StringBuilder__Append_530ed80(pSVar4,pSVar11,(MethodInfo *)0x0);
          pSVar17 = (__this->fields).trackedProperties;
          if (pSVar17 == (System_String_array *)0x0) break;
          if ((long)uVar18 < (long)((int)pSVar17->max_length + -1)) {
            pSVar4 = (__this->fields)._scoreBuilder;
            if (pSVar4 == (System_Text_StringBuilder_o *)0x0) break;
            System_Text_StringBuilder__Append_530ed80(pSVar4,"/",(MethodInfo *)0x0);
            pSVar17 = (__this->fields).trackedProperties;
          }
          uVar18 = uVar18 + 1;
        } while (pSVar17 != (System_String_array *)0x0);
      }
    }
  }
label_05d3ae95:
  ThrowNullReferenceException();
}


// UI.PlayerKDRRow$$GetPlayerStatus
// il2cpp: System_String_o* UI_PlayerKDRRow__GetPlayerStatus (UI_PlayerKDRRow_o* __this, System_String_o* status, const MethodInfo* method);
// 0x5d3b600

System_String_o *
UI_PlayerKDRRow__GetPlayerStatus(UI_PlayerKDRRow_o *__this,System_String_o *status,MethodInfo *method)

{
  UI_KDRPanel_o *pUVar1;
  bool bVar2;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_07547e6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
    il2cpp_codegen_initialize_runtime_metadata(&" <color=red>*dead*</color> ");
    Il2CppMethodInitialized_07547e6c = '\x01';
  }
  pUVar1 = (__this->fields)._kdrPanel;
  if (pUVar1 == (UI_KDRPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pUVar1->fields)._showScoreboardStatus != false) {
    if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
    }
    bVar2 = System_String__op_Equality
                      (status,TypeInfo_GameManagers_PlayerStatus->static_fields->Dead,(MethodInfo *)0x0);
    ppSVar3 = &" <color=red>*dead*</color> ";
    if (bVar2) goto label_05d3b6c6;
    if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
    }
    bVar2 = System_String__op_Equality
                      (status,TypeInfo_GameManagers_PlayerStatus->static_fields->Spectating,(MethodInfo *)0x0)
    ;
    if (bVar2) goto label_05d3b6c6;
  }
  ppSVar3 = *(System_String_o ***)(g_data_07556758 + 0xb8);
label_05d3b6c6:
  return *ppSVar3;
}


// UI.PlayerKDRRow$$GetPlayerIcon
// il2cpp: UnityEngine_Texture_o* UI_PlayerKDRRow__GetPlayerIcon (UI_PlayerKDRRow_o* __this, System_String_o* character, System_String_o* loadout, const MethodInfo* method);
// 0x5d3b0c0

UnityEngine_Texture_o *
UI_PlayerKDRRow__GetPlayerIcon
          (UI_PlayerKDRRow_o *__this,System_String_o *character,System_String_o *loadout,MethodInfo *method)

{
  byte bVar1;
  UI_KDRPanel_o *pUVar2;
  bool bVar3;
  System_String_o **ppSVar4;
  UnityEngine_Object_o *obj;
  UnityEngine_Texture_o *pUVar5;
  UnityEngine_Texture_o *pUVar6;
  System_String_o *pSVar7;
  
  if (Il2CppMethodInitialized_07547e6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture);
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/ShifterIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/ThunderSpearIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/APGIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/BladeIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Specials/NoneSpecialIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/AHSSIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/TitanIcon");
    Il2CppMethodInitialized_07547e6d = '\x01';
  }
  pUVar2 = (__this->fields)._kdrPanel;
  if (pUVar2 == (UI_KDRPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pUVar2->fields)._showScoreboardLoadout == false) {
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    ppSVar4 = &"Icons/Specials/NoneSpecialIcon";
    goto label_05d3b599;
  }
  if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
  }
  bVar3 = System_String__op_Equality
                    (character,TypeInfo_GameManagers_PlayerCharacter->static_fields->Human,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    bVar3 = System_String__op_Equality
                      (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->Blade,(MethodInfo *)0x0);
    if (!bVar3) {
      if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
      }
      bVar3 = System_String__op_Equality
                        (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->AHSS,(MethodInfo *)0x0);
      if (bVar3) {
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        ppSVar4 = &"Icons/Game/AHSSIcon";
        goto label_05d3b599;
      }
      if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
      }
      bVar3 = System_String__op_Equality
                        (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->APG,(MethodInfo *)0x0);
      if (bVar3) {
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        ppSVar4 = &"Icons/Game/APGIcon";
        goto label_05d3b599;
      }
      if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
      }
      bVar3 = System_String__op_Equality
                        (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->Thunderspear,
                         (MethodInfo *)0x0);
      if (bVar3) {
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
        ppSVar4 = &"Icons/Game/ThunderSpearIcon";
        goto label_05d3b51b;
      }
      if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
      }
      bVar3 = System_String__op_Equality
                        (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->Unarmed,(MethodInfo *)0x0)
      ;
      if (!bVar3) {
        if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
        }
        bVar3 = System_String__op_Equality
                          (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->Civilian,
                           (MethodInfo *)0x0);
        if (!bVar3) goto label_05d3b555;
      }
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      ppSVar4 = &"Icons/Specials/NoneSpecialIcon";
label_05d3b51b:
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      obj = ApplicationManagers_ResourceManager__LoadAsset(pSVar7,*ppSVar4,true,false,(MethodInfo *)0x0);
      pUVar5 = (UnityEngine_Texture_o *)
               il2cpp_codegen_is_inst_class((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_UnityEngine_Texture);
      return pUVar5;
    }
  }
  else {
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    }
    bVar3 = System_String__op_Equality
                      (character,TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan,(MethodInfo *)0x0
                      );
    if (bVar3) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      ppSVar4 = &"Icons/Game/TitanIcon";
      goto label_05d3b599;
    }
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    }
    bVar3 = System_String__op_Equality
                      (character,TypeInfo_GameManagers_PlayerCharacter->static_fields->Shifter,
                       (MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      ppSVar4 = &"Icons/Game/ShifterIcon";
      goto label_05d3b599;
    }
  }
label_05d3b555:
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  ppSVar4 = &"Icons/Game/BladeIcon";
label_05d3b599:
  pUVar6 = (UnityEngine_Texture_o *)
           ApplicationManagers_ResourceManager__LoadAsset(pSVar7,*ppSVar4,true,false,(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Texture_o *)0x0;
  if (pUVar6 != (UnityEngine_Texture_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_Texture->_2).typeHierarchyDepth;
    if (((pUVar6->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_Texture)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar6);
    }
    pUVar5 = pUVar6;
  }
  return pUVar5;
}


// UI.PlayerKDRRow$$GetPlayerIconFull
// il2cpp: UnityEngine_Texture_o* UI_PlayerKDRRow__GetPlayerIconFull (UI_PlayerKDRRow_o* __this, System_String_o* character, System_String_o* loadout, System_String_o* status, const MethodInfo* method);
// 0x5d3b6e0

UnityEngine_Texture_o *
UI_PlayerKDRRow__GetPlayerIconFull
          (UI_PlayerKDRRow_o *__this,System_String_o *character,System_String_o *loadout,
          System_String_o *status,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_String_o **ppSVar3;
  UnityEngine_Texture_o *pUVar4;
  UnityEngine_Texture_o *pUVar5;
  MethodInfo *method_00;
  System_String_o *path;
  
  method_00 = (MethodInfo *)status;
  if (Il2CppMethodInitialized_07547e6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture);
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/SpectatingIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Quests/Skull1Icon");
    Il2CppMethodInitialized_07547e6e = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
  }
  bVar2 = System_String__op_Equality
                    (status,TypeInfo_GameManagers_PlayerStatus->static_fields->Dead,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    ppSVar3 = &"Icons/Quests/Skull1Icon";
  }
  else {
    if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
    }
    bVar2 = System_String__op_Equality
                      (status,TypeInfo_GameManagers_PlayerStatus->static_fields->Spectating,(MethodInfo *)0x0)
    ;
    if (!bVar2) {
      pUVar5 = UI_PlayerKDRRow__GetPlayerIcon(__this,character,loadout,method_00);
      return pUVar5;
    }
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    ppSVar3 = &"Icons/Game/SpectatingIcon";
  }
  pUVar4 = (UnityEngine_Texture_o *)
           ApplicationManagers_ResourceManager__LoadAsset(path,*ppSVar3,true,false,(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Texture_o *)0x0;
  if (pUVar4 != (UnityEngine_Texture_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_Texture->_2).typeHierarchyDepth;
    if (((pUVar4->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_Texture)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar4);
    }
    pUVar5 = pUVar4;
  }
  return pUVar5;
}


// UI.PlayerKDRRow$$.ctor
// il2cpp: void UI_PlayerKDRRow___ctor (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x5d3b8c0

void UI_PlayerKDRRow___ctor(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_Text_StringBuilder_o *__this_00;
  
  if (Il2CppMethodInitialized_07547e6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Kills");
    il2cpp_codegen_initialize_runtime_metadata(&"Deaths");
    il2cpp_codegen_initialize_runtime_metadata(&"TotalDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"HighestDamage");
    Il2CppMethodInitialized_07547e6f = '\x01';
  }
  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  if (pSVar1 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = "Kills";
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    if ((pSVar1->max_length & 0xfffffffe) != 0) {
      pSVar1->m_Items[1] = "Deaths";
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
      if (2 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[2] = "HighestDamage";
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2);
        if ((pSVar1->max_length & 0xfffffffc) != 0) {
          pSVar1->m_Items[3] = "TotalDamage";
          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 3);
          (__this->fields).trackedProperties = pSVar1;
          Il2CppCodeGenWriteBarrier(&(__this->fields).trackedProperties);
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
          System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
          (__this->fields)._scoreBuilder = __this_00;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._scoreBuilder);
          UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


