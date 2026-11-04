// Type: UI.PlayerKDRRow
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/PlayerKDRRow.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/PlayerKDRRow.cs
// --------------------------------

// UI.PlayerKDRRow$$Setup
// il2cpp: void UI_PlayerKDRRow__Setup (UI_PlayerKDRRow_o* __this, UI_ElementStyle_o* style, Photon_Realtime_Player_o* player, UI_KDRPanel_o* panel, const MethodInfo* method);
// 0x18225fa30

void UI_PlayerKDRRow__Setup
               (UI_PlayerKDRRow_o *__this,UI_ElementStyle_o *style,Photon_Realtime_Player_o *player,
               UI_KDRPanel_o *panel,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_UI_RawImage_o *value;
  
  if (Il2CppMethodInitialized_1843472f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/BladeIcon");
    Il2CppMethodInitialized_1843472f4 = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar4 = UI_ElementFactory__CreateWhiteLabel
                     (pUVar3,style,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),0,3,
                      (MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar4,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    (__this->fields).id = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id,pUVar5);
    pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar4 = UI_ElementFactory__CreateRawImage(pUVar3,style,"Icons/Game/BladeIcon",24.0,24.0,(MethodInfo *)0x0)
    ;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      value = UnityEngine_GameObject__GetComponent_object_
                        (pUVar4,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
      (__this->fields).weapon = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields).weapon,value);
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar4 = UI_ElementFactory__CreateWhiteLabel
                         (pUVar3,style,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),0,3,
                          (MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        pUVar5 = UnityEngine_GameObject__GetComponent_object_
                           (pUVar4,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
        (__this->fields).playerName = pUVar5;
        Il2CppCodeGenWriteBarrier(&(__this->fields).playerName,pUVar5);
        pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar4 = UI_ElementFactory__CreateWhiteLabel
                           (pUVar3,style,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),0,4,
                            (MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          pUVar5 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar4,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text)
          ;
          (__this->fields).score = pUVar5;
          Il2CppCodeGenWriteBarrier(&(__this->fields).score,pUVar5);
          if (player != (Photon_Realtime_Player_o *)0x0) {
            bVar2 = Photon_Realtime_Player__get_IsMasterClient(player,(MethodInfo *)0x0);
            (__this->fields).isMasterClient = bVar2;
            (__this->fields).actorNumber = (player->fields).actorNumber;
            pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
            (__this->fields).status = pSVar1;
            Il2CppCodeGenWriteBarrier(&(__this->fields).status,pSVar1);
            pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
            (__this->fields).character = pSVar1;
            Il2CppCodeGenWriteBarrier(&(__this->fields).character,pSVar1);
            pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
            (__this->fields).loadout = pSVar1;
            Il2CppCodeGenWriteBarrier(&(__this->fields).loadout,pSVar1);
            pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
            (__this->fields).team = pSVar1;
            Il2CppCodeGenWriteBarrier(&(__this->fields).team,pSVar1);
            (__this->fields).isSet = false;
            (__this->fields).player = player;
            Il2CppCodeGenWriteBarrier(&(__this->fields).player,player);
            (__this->fields)._kdrPanel = panel;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._kdrPanel,panel);
            UI_PlayerKDRRow__UpdateRow_225fdd0(__this,(MethodInfo *)0x0);
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
// 0x18225fcf0

bool UI_PlayerKDRRow__StatsChanged(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  
  if (Il2CppMethodInitialized_1843472f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Kills");
    il2cpp_codegen_initialize_runtime_metadata(&"Deaths");
    il2cpp_codegen_initialize_runtime_metadata(&"TotalDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"HighestDamage");
    Il2CppMethodInitialized_1843472f5 = '\x01';
  }
  iVar1 = PhotonExtensions__GetIntProperty((__this->fields).player,"Kills",0,(MethodInfo *)0x0);
  iVar2 = PhotonExtensions__GetIntProperty((__this->fields).player,"Deaths",0,(MethodInfo *)0x0);
  iVar3 = PhotonExtensions__GetIntProperty((__this->fields).player,"HighestDamage",0,(MethodInfo *)0x0);
  iVar4 = PhotonExtensions__GetIntProperty((__this->fields).player,"TotalDamage",0,(MethodInfo *)0x0);
  if (((iVar1 == (__this->fields).kills) && (iVar2 == (__this->fields).deaths)) &&
     (iVar3 == (__this->fields).maxDamage)) {
    return iVar4 != (__this->fields).totalDamage;
  }
  return true;
}


// UI.PlayerKDRRow$$StatsChanged
// il2cpp: bool UI_PlayerKDRRow__StatsChanged (UI_PlayerKDRRow_o* __this, int32_t kills, int32_t deaths, int32_t maxDamage, int32_t totalDamage, const MethodInfo* method);
// 0x18225fcd0

bool UI_PlayerKDRRow__StatsChanged_225fcd0
               (UI_PlayerKDRRow_o *__this,int32_t kills,int32_t deaths,int32_t maxDamage,int32_t totalDamage,
               MethodInfo *method)

{
  if (((kills == (__this->fields).kills) && (deaths == (__this->fields).deaths)) &&
     (maxDamage == (__this->fields).maxDamage)) {
    return totalDamage != (__this->fields).totalDamage;
  }
  return true;
}


// UI.PlayerKDRRow$$GetKillDiff
// il2cpp: int32_t UI_PlayerKDRRow__GetKillDiff (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x18225ed30

int32_t UI_PlayerKDRRow__GetKillDiff(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_1843472f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Kills");
    Il2CppMethodInitialized_1843472f6 = '\x01';
  }
  iVar1 = PhotonExtensions__GetIntProperty((__this->fields).player,"Kills",0,(MethodInfo *)0x0);
  return iVar1 - (__this->fields).kills;
}


// UI.PlayerKDRRow$$GetDeathDiff
// il2cpp: int32_t UI_PlayerKDRRow__GetDeathDiff (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x18225ece0

int32_t UI_PlayerKDRRow__GetDeathDiff(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_1843472f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Deaths");
    Il2CppMethodInitialized_1843472f7 = '\x01';
  }
  iVar1 = PhotonExtensions__GetIntProperty((__this->fields).player,"Deaths",0,(MethodInfo *)0x0);
  return iVar1 - (__this->fields).deaths;
}


// UI.PlayerKDRRow$$GetMaxDamageDiff
// il2cpp: int32_t UI_PlayerKDRRow__GetMaxDamageDiff (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x18225ed80

int32_t UI_PlayerKDRRow__GetMaxDamageDiff(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_1843472f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"HighestDamage");
    Il2CppMethodInitialized_1843472f8 = '\x01';
  }
  iVar1 = PhotonExtensions__GetIntProperty((__this->fields).player,"HighestDamage",0,(MethodInfo *)0x0);
  return iVar1 - (__this->fields).maxDamage;
}


// UI.PlayerKDRRow$$GetTotalDamageDiff
// il2cpp: int32_t UI_PlayerKDRRow__GetTotalDamageDiff (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x18225f9e0

int32_t UI_PlayerKDRRow__GetTotalDamageDiff(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_1843472f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TotalDamage");
    Il2CppMethodInitialized_1843472f9 = '\x01';
  }
  iVar1 = PhotonExtensions__GetIntProperty((__this->fields).player,"TotalDamage",0,(MethodInfo *)0x0);
  return iVar1 - (__this->fields).totalDamage;
}


// UI.PlayerKDRRow$$UpdateRow
// il2cpp: void UI_PlayerKDRRow__UpdateRow (UI_PlayerKDRRow_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x1822605c0

void UI_PlayerKDRRow__UpdateRow(UI_PlayerKDRRow_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  (__this->fields).player = player;
  Il2CppCodeGenWriteBarrier(&(__this->fields).player,player);
  UI_PlayerKDRRow__UpdateRow_225fdd0(__this,(MethodInfo *)0x0);
  return;
}


// UI.PlayerKDRRow$$UpdateRow
// il2cpp: void UI_PlayerKDRRow__UpdateRow (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x18225fdd0
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822601ba: mov rcx, qword ptr [rip + 0x1e28f47]  ; " <color=red>*dead*</color> "
// asm:   0x1822601c1: jmp 0x1822601d4
// asm:   0x182260457: mov r13, qword ptr [rsp + 0x30]
// asm:   0x18226045c: mov r12, qword ptr [rsp + 0x38]
// asm:   0x182260461: mov r14, qword ptr [rsp + 0x28]
// asm:   0x182260466: mov rdi, qword ptr [rsp + 0x40]
// asm:   0x18226046b: mov rsi, qword ptr [rsp + 0x48]
// asm:   0x182260470: mov rbp, qword ptr [rsp + 0x68]
// asm:   0x182260475: mov r15, qword ptr [rsp + 0x20]
// asm:   0x1822604ab: nop dword ptr [rax + rax]
// asm:   0x18226055b: jmp 0x1822604b0
// asm:   0x182260585: mov r9, qword ptr [rdi]
// asm:   0x182260588: mov rdx, rax
// asm:   0x18226058b: mov rcx, rdi
// asm:   0x18226058e: mov r8, qword ptr [r9 + 0x5f0]
// asm:   0x182260595: call qword ptr [r9 + 0x5e8]  ; vtable slot 75
// asm:   0x18226059c: mov dword ptr [rbx + 0x70], ebp
// asm:   0x18226059f: mov dword ptr [rbx + 0x74], r14d
// asm:   0x1822605a3: mov dword ptr [rbx + 0x78], r15d
// asm:   0x1822605a7: mov dword ptr [rbx + 0x7c], r12d
// asm:   0x1822605ab: jmp 0x182260457

void UI_PlayerKDRRow__UpdateRow_225fdd0(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  UnityEngine_UI_Text_o *pUVar2;
  UnityEngine_UI_RawImage_o *__this_00;
  UI_KDRPanel_o *pUVar3;
  CustomLogic_CustomLogicEvaluator_o *pCVar4;
  System_Text_StringBuilder_o *pSVar5;
  System_String_array *pSVar6;
  bool bVar7;
  bool bVar8;
  int32_t iVar9;
  int32_t iVar10;
  int32_t iVar11;
  int32_t iVar12;
  System_String_o *pSVar13;
  System_String_o *pSVar14;
  System_String_o *pSVar15;
  System_String_o *a;
  System_String_o *pSVar16;
  UnityEngine_Texture_o *value;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar17;
  Il2CppObject *pIVar18;
  uint uVar19;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843472fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&"Kills");
    il2cpp_codegen_initialize_runtime_metadata(&"Deaths");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"TotalDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"HighestDamage");
    Il2CppMethodInitialized_1843472fa = '\x01';
  }
  local_res8[0] = 0;
  if ((__this->fields).player == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  pPVar1 = (__this->fields).player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar13 = PhotonExtensions__GetStringProperty
                      (pPVar1,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,"",
                       (MethodInfo *)0x0);
  pSVar14 = PhotonExtensions__GetStringProperty
                      ((__this->fields).player,TypeInfo_GameManagers_PlayerProperty->static_fields->Status,
                       "",(MethodInfo *)0x0);
  pSVar15 = PhotonExtensions__GetStringProperty
                      ((__this->fields).player,TypeInfo_GameManagers_PlayerProperty->static_fields->Character,
                       "",(MethodInfo *)0x0);
  a = PhotonExtensions__GetStringProperty
                ((__this->fields).player,TypeInfo_GameManagers_PlayerProperty->static_fields->Loadout,
                 "",(MethodInfo *)0x0);
  pPVar1 = (__this->fields).player;
  if (pPVar1 == (Photon_Realtime_Player_o *)0x0) goto label_1822605b0;
  bVar8 = (__this->fields).isMasterClient;
  bVar7 = Photon_Realtime_Player__get_IsMasterClient(pPVar1,(MethodInfo *)0x0);
  if (bVar8 == bVar7) {
    pPVar1 = (__this->fields).player;
    if (pPVar1 == (Photon_Realtime_Player_o *)0x0) goto label_1822605b0;
    if (((__this->fields).actorNumber != (pPVar1->fields).actorNumber) || ((__this->fields).isSet == false))
    goto label_18225ff92;
  }
  else {
label_18225ff92:
    pPVar1 = (__this->fields).player;
    if (pPVar1 == (Photon_Realtime_Player_o *)0x0) goto label_1822605b0;
    bVar8 = Photon_Realtime_Player__get_IsMasterClient(pPVar1,(MethodInfo *)0x0);
    (__this->fields).isMasterClient = bVar8;
    pPVar1 = (__this->fields).player;
    if (pPVar1 == (Photon_Realtime_Player_o *)0x0) goto label_1822605b0;
    (__this->fields).actorNumber = (pPVar1->fields).actorNumber;
    pPVar1 = (__this->fields).player;
    (__this->fields).isSet = true;
    if (pPVar1 == (Photon_Realtime_Player_o *)0x0) goto label_1822605b0;
    pUVar2 = (__this->fields).id;
    iVar9 = (pPVar1->fields).actorNumber;
    bVar8 = Photon_Realtime_Player__get_IsMasterClient(pPVar1,(MethodInfo *)0x0);
    pPVar1 = (__this->fields).player;
    if (pPVar1 == (Photon_Realtime_Player_o *)0x0) goto label_1822605b0;
    bVar7 = (pPVar1->fields).IsLocal;
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar16 = GameManagers_ChatManager__GetIDString(iVar9,bVar8,bVar7,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_UI_Text_o *)0x0) goto label_1822605b0;
    (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
              (pUVar2,pSVar16,(pUVar2->klass->vtable)._75_set_text.method);
  }
  bVar8 = System_String__op_Inequality(pSVar15,(__this->fields).character,(MethodInfo *)0x0);
  if ((bVar8) || (bVar8 = System_String__op_Inequality(a,(__this->fields).loadout,(MethodInfo *)0x0), bVar8))
  {
    (__this->fields).character = pSVar15;
    Il2CppCodeGenWriteBarrier(&(__this->fields).character,pSVar15);
    (__this->fields).loadout = a;
    Il2CppCodeGenWriteBarrier(&(__this->fields).loadout,a);
    __this_00 = (__this->fields).weapon;
    value = UI_PlayerKDRRow__GetPlayerIcon(__this,pSVar15,a,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) goto label_1822605b0;
    UnityEngine_UI_RawImage__set_texture(__this_00,value,(MethodInfo *)0x0);
  }
  pUVar2 = (__this->fields).playerName;
  if (pUVar2 == (UnityEngine_UI_Text_o *)0x0) goto label_1822605b0;
  GVar17 = (*(pUVar2->klass->vtable)._74_get_text.methodPtr)
                     (pUVar2,(pUVar2->klass->vtable)._74_get_text.method);
  bVar8 = System_String__op_Inequality(pSVar13,(System_String_o *)GVar17.fields,(MethodInfo *)0x0);
  if ((bVar8) ||
     (bVar8 = System_String__op_Inequality(pSVar14,(__this->fields).status,(MethodInfo *)0x0), bVar8)) {
    (__this->fields).status = pSVar14;
    Il2CppCodeGenWriteBarrier(&(__this->fields).status,pSVar14);
    if (Il2CppMethodInitialized_1843472fb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
      il2cpp_codegen_initialize_runtime_metadata(&" <color=red>*dead*</color> ");
      Il2CppMethodInitialized_1843472fb = '\x01';
    }
    pUVar3 = (__this->fields)._kdrPanel;
    if (pUVar3 == (UI_KDRPanel_o *)0x0) goto label_1822605b0;
    if ((pUVar3->fields)._showScoreboardStatus == false) {
label_1822601c3:
      pSVar15 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
      }
      bVar8 = System_String__op_Equality
                        (pSVar14,TypeInfo_GameManagers_PlayerStatus->static_fields->Dead,(MethodInfo *)0x0);
      pSVar15 = " <color=red>*dead*</color> ";
      if (!bVar8) {
        if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
        }
        bVar8 = System_String__op_Equality
                          (pSVar14,TypeInfo_GameManagers_PlayerStatus->static_fields->Spectating,
                           (MethodInfo *)0x0);
        pSVar15 = " <color=red>*dead*</color> ";
        if (!bVar8) goto label_1822601c3;
      }
    }
    pUVar2 = (__this->fields).playerName;
    pSVar13 = System_String__Concat_1969b70(pSVar15,pSVar13,": ",(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_UI_Text_o *)0x0) goto label_1822605b0;
    (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
              (pUVar2,pSVar13,(pUVar2->klass->vtable)._75_set_text.method);
  }
  pSVar13 = (__this->fields).team;
  pPVar1 = (__this->fields).player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar14 = PhotonExtensions__GetStringProperty
                      (pPVar1,TypeInfo_GameManagers_PlayerProperty->static_fields->Team,"",
                       (MethodInfo *)0x0);
  bVar8 = System_String__op_Inequality(pSVar13,pSVar14,(MethodInfo *)0x0);
  if (bVar8) {
    pPVar1 = (__this->fields).player;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar13 = PhotonExtensions__GetStringProperty
                        (pPVar1,TypeInfo_GameManagers_PlayerProperty->static_fields->Team,
                         "",(MethodInfo *)0x0);
    (__this->fields).team = pSVar13;
    Il2CppCodeGenWriteBarrier(&(__this->fields).team,pSVar13);
  }
  iVar9 = PhotonExtensions__GetIntProperty((__this->fields).player,"Kills",0,(MethodInfo *)0x0);
  iVar10 = PhotonExtensions__GetIntProperty((__this->fields).player,"Deaths",0,(MethodInfo *)0x0)
  ;
  iVar11 = PhotonExtensions__GetIntProperty((__this->fields).player,"HighestDamage",0,(MethodInfo *)0x0)
  ;
  iVar12 = PhotonExtensions__GetIntProperty((__this->fields).player,"TotalDamage",0,(MethodInfo *)0x0)
  ;
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator !=
      (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar4 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (pCVar4 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_1822605b0;
    bVar8 = System_String__op_Inequality
                      ((pCVar4->fields).ScoreboardProperty,
                       (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    if (bVar8) {
      pPVar1 = (__this->fields).player;
      pSVar13 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar4 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (pCVar4 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar18 = PhotonExtensions__GetCustomProperty
                            (pPVar1,(pCVar4->fields).ScoreboardProperty,(MethodInfo *)0x0);
        if (pIVar18 != (Il2CppObject *)0x0) {
          pSVar13 = (System_String_o *)
                    (*pIVar18->klass->vtable[3].methodPtr)(pIVar18,pIVar18->klass->vtable[3].method);
        }
        pUVar2 = (__this->fields).score;
        if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
          GVar17 = (*(pUVar2->klass->vtable)._74_get_text.methodPtr)
                             (pUVar2,(pUVar2->klass->vtable)._74_get_text.method);
          bVar8 = System_String__op_Inequality(pSVar13,(System_String_o *)GVar17.fields,(MethodInfo *)0x0);
          if (bVar8) {
            pUVar2 = (__this->fields).score;
            if (pUVar2 == (UnityEngine_UI_Text_o *)0x0) goto label_1822605b0;
            (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                      (pUVar2,pSVar13,(pUVar2->klass->vtable)._75_set_text.method);
          }
          return;
        }
      }
      goto label_1822605b0;
    }
  }
  pSVar5 = (__this->fields)._scoreBuilder;
  if (pSVar5 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Clear(pSVar5,(MethodInfo *)0x0);
    uVar19 = 0;
    pSVar6 = (__this->fields).trackedProperties;
    while (pSVar6 != (System_String_array *)0x0) {
      if ((int)pSVar6->max_length <= (int)uVar19) {
        pSVar5 = (__this->fields)._scoreBuilder;
        if (pSVar5 != (System_Text_StringBuilder_o *)0x0) {
          pUVar2 = (__this->fields).score;
          pSVar13 = (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                              (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
          if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                      (pUVar2,pSVar13,(pUVar2->klass->vtable)._75_set_text.method);
            (__this->fields).kills = iVar9;
            (__this->fields).deaths = iVar10;
            (__this->fields).maxDamage = iVar11;
            (__this->fields).totalDamage = iVar12;
            return;
          }
        }
        break;
      }
      pSVar6 = (__this->fields).trackedProperties;
      if (pSVar6 == (System_String_array *)0x0) break;
      if ((uint)pSVar6->max_length <= uVar19) {
        ThrowIndexOutOfRangeException();
      }
      local_res8[0] =
           PhotonExtensions__GetIntProperty
                     ((__this->fields).player,pSVar6->m_Items[(int)uVar19],0,(MethodInfo *)0x0);
      pSVar5 = (__this->fields)._scoreBuilder;
      pSVar13 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      if (pSVar5 == (System_Text_StringBuilder_o *)0x0) break;
      System_Text_StringBuilder__Append_197dca0(pSVar5,pSVar13,(MethodInfo *)0x0);
      pSVar6 = (__this->fields).trackedProperties;
      if (pSVar6 == (System_String_array *)0x0) break;
      if ((int)uVar19 < (int)pSVar6->max_length + -1) {
        pSVar5 = (__this->fields)._scoreBuilder;
        if (pSVar5 == (System_Text_StringBuilder_o *)0x0) break;
        System_Text_StringBuilder__Append_197dca0(pSVar5,"/",(MethodInfo *)0x0);
      }
      uVar19 = uVar19 + 1;
      pSVar6 = (__this->fields).trackedProperties;
    }
  }
label_1822605b0:
  ThrowNullReferenceException();
}


// UI.PlayerKDRRow$$GetPlayerStatus
// il2cpp: System_String_o* UI_PlayerKDRRow__GetPlayerStatus (UI_PlayerKDRRow_o* __this, System_String_o* status, const MethodInfo* method);
// 0x18225f8e0

System_String_o *
UI_PlayerKDRRow__GetPlayerStatus(UI_PlayerKDRRow_o *__this,System_String_o *status,MethodInfo *method)

{
  UI_KDRPanel_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843472fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
    il2cpp_codegen_initialize_runtime_metadata(&" <color=red>*dead*</color> ");
    Il2CppMethodInitialized_1843472fb = '\x01';
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
    if (!bVar2) {
      if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
      }
      bVar2 = System_String__op_Equality
                        (status,TypeInfo_GameManagers_PlayerStatus->static_fields->Spectating,
                         (MethodInfo *)0x0);
      if (!bVar2) goto label_18225f9b6;
    }
    return " <color=red>*dead*</color> ";
  }
label_18225f9b6:
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.PlayerKDRRow$$GetPlayerIcon
// il2cpp: UnityEngine_Texture_o* UI_PlayerKDRRow__GetPlayerIcon (UI_PlayerKDRRow_o* __this, System_String_o* character, System_String_o* loadout, const MethodInfo* method);
// 0x18225f020
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18225f23e: jmp 0x18225f86d
// asm:   0x18225f2d5: jmp 0x18225f86d
// asm:   0x18225f4d9: jmp 0x18225f86d
// asm:   0x18225f570: jmp 0x18225f86d
// asm:   0x18225f607: jmp 0x18225f86d
// asm:   0x18225f69e: jmp 0x18225f86d
// asm:   0x18225f735: jmp 0x18225f86d
// asm:   0x18225f7cc: jmp 0x18225f86d

UnityEngine_Texture_o *
UI_PlayerKDRRow__GetPlayerIcon
          (UI_PlayerKDRRow_o *__this,System_String_o *character,System_String_o *loadout,MethodInfo *method)

{
  byte bVar1;
  UI_KDRPanel_o *pUVar2;
  System_String_o *pSVar3;
  bool bVar4;
  UnityEngine_Texture_o *pUVar5;
  
  if (Il2CppMethodInitialized_1843472fc == '\0') {
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
    Il2CppMethodInitialized_1843472fc = '\x01';
  }
  pUVar2 = (__this->fields)._kdrPanel;
  if (pUVar2 == (UI_KDRPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pUVar2->fields)._showScoreboardLoadout == false) {
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar5 = (UnityEngine_Texture_o *)
             ApplicationManagers_ResourceManager__LoadAsset
                       (pSVar3,"Icons/Specials/NoneSpecialIcon",true,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Texture_o *)0x0) {
      bVar1 = (TypeInfo_UnityEngine_Texture->_2).typeHierarchyDepth;
      if ((bVar1 <= (pUVar5->klass->_2).typeHierarchyDepth) &&
         ((pUVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_UnityEngine_Texture)) {
        return pUVar5;
      }
      il2cpp_codegen_raise_invalid_cast_exception(pUVar5,TypeInfo_UnityEngine_Texture);
    }
    return (UnityEngine_Texture_o *)0x0;
  }
  if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
  }
  bVar4 = System_String__op_Equality
                    (character,TypeInfo_GameManagers_PlayerCharacter->static_fields->Human,(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    bVar4 = System_String__op_Equality
                      (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->Blade,(MethodInfo *)0x0);
    if (bVar4) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pUVar5 = (UnityEngine_Texture_o *)
               ApplicationManagers_ResourceManager__LoadAsset
                         (pSVar3,"Icons/Game/BladeIcon",true,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Texture_o *)0x0) {
        bVar1 = (TypeInfo_UnityEngine_Texture->_2).typeHierarchyDepth;
        if ((bVar1 <= (pUVar5->klass->_2).typeHierarchyDepth) &&
           ((pUVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_UnityEngine_Texture)) {
          return pUVar5;
        }
        il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
      }
      return (UnityEngine_Texture_o *)0x0;
    }
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    bVar4 = System_String__op_Equality
                      (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->AHSS,(MethodInfo *)0x0);
    if (bVar4) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pUVar5 = (UnityEngine_Texture_o *)
               ApplicationManagers_ResourceManager__LoadAsset
                         (pSVar3,"Icons/Game/AHSSIcon",true,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Texture_o *)0x0) {
        bVar1 = (TypeInfo_UnityEngine_Texture->_2).typeHierarchyDepth;
        if ((bVar1 <= (pUVar5->klass->_2).typeHierarchyDepth) &&
           ((pUVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_UnityEngine_Texture)) {
          return pUVar5;
        }
        il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
      }
      return (UnityEngine_Texture_o *)0x0;
    }
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    bVar4 = System_String__op_Equality
                      (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->APG,(MethodInfo *)0x0);
    if (bVar4) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pUVar5 = (UnityEngine_Texture_o *)
               ApplicationManagers_ResourceManager__LoadAsset
                         (pSVar3,"Icons/Game/APGIcon",true,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Texture_o *)0x0) {
        bVar1 = (TypeInfo_UnityEngine_Texture->_2).typeHierarchyDepth;
        if ((bVar1 <= (pUVar5->klass->_2).typeHierarchyDepth) &&
           ((pUVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_UnityEngine_Texture)) {
          return pUVar5;
        }
        il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
      }
      return (UnityEngine_Texture_o *)0x0;
    }
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    bVar4 = System_String__op_Equality
                      (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->Thunderspear,
                       (MethodInfo *)0x0);
    if (bVar4) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pUVar5 = (UnityEngine_Texture_o *)
               ApplicationManagers_ResourceManager__LoadAsset
                         (pSVar3,"Icons/Game/ThunderSpearIcon",true,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Texture_o *)0x0) {
        bVar1 = (TypeInfo_UnityEngine_Texture->_2).typeHierarchyDepth;
        if ((bVar1 <= (pUVar5->klass->_2).typeHierarchyDepth) &&
           ((pUVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_UnityEngine_Texture)) {
          return pUVar5;
        }
        il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
      }
      return (UnityEngine_Texture_o *)0x0;
    }
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    bVar4 = System_String__op_Equality
                      (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->Unarmed,(MethodInfo *)0x0);
    if (!bVar4) {
      if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
      }
      bVar4 = System_String__op_Equality
                        (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->Civilian,(MethodInfo *)0x0
                        );
      if (!bVar4) goto label_18225f447;
    }
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar5 = (UnityEngine_Texture_o *)
             ApplicationManagers_ResourceManager__LoadAsset
                       (pSVar3,"Icons/Specials/NoneSpecialIcon",true,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Texture_o *)0x0) {
      return (UnityEngine_Texture_o *)0x0;
    }
    bVar1 = (TypeInfo_UnityEngine_Texture->_2).typeHierarchyDepth;
    if (((pUVar5->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_Texture
       )) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
    }
  }
  else {
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    }
    bVar4 = System_String__op_Equality
                      (character,TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan,(MethodInfo *)0x0
                      );
    if (bVar4) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pUVar5 = (UnityEngine_Texture_o *)
               ApplicationManagers_ResourceManager__LoadAsset
                         (pSVar3,"Icons/Game/TitanIcon",true,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Texture_o *)0x0) {
        return (UnityEngine_Texture_o *)0x0;
      }
      bVar1 = (TypeInfo_UnityEngine_Texture->_2).typeHierarchyDepth;
      if ((bVar1 <= (pUVar5->klass->_2).typeHierarchyDepth) &&
         ((pUVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_UnityEngine_Texture)) {
        return pUVar5;
      }
      il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
    }
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    }
    bVar4 = System_String__op_Equality
                      (character,TypeInfo_GameManagers_PlayerCharacter->static_fields->Shifter,
                       (MethodInfo *)0x0);
    if (bVar4) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pUVar5 = (UnityEngine_Texture_o *)
               ApplicationManagers_ResourceManager__LoadAsset
                         (pSVar3,"Icons/Game/ShifterIcon",true,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Texture_o *)0x0) {
        bVar1 = (TypeInfo_UnityEngine_Texture->_2).typeHierarchyDepth;
        if ((bVar1 <= (pUVar5->klass->_2).typeHierarchyDepth) &&
           ((pUVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_UnityEngine_Texture)) {
          return pUVar5;
        }
        il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
      }
      return (UnityEngine_Texture_o *)0x0;
    }
label_18225f447:
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar5 = (UnityEngine_Texture_o *)
             ApplicationManagers_ResourceManager__LoadAsset
                       (pSVar3,"Icons/Game/BladeIcon",true,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Texture_o *)0x0) {
      return (UnityEngine_Texture_o *)0x0;
    }
    bVar1 = (TypeInfo_UnityEngine_Texture->_2).typeHierarchyDepth;
    if (((pUVar5->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_Texture
       )) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
    }
  }
  return pUVar5;
}


// UI.PlayerKDRRow$$GetPlayerIconFull
// il2cpp: UnityEngine_Texture_o* UI_PlayerKDRRow__GetPlayerIconFull (UI_PlayerKDRRow_o* __this, System_String_o* character, System_String_o* loadout, System_String_o* status, const MethodInfo* method);
// 0x18225edd0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18225ef5e: jmp 0x18225eff8

UnityEngine_Texture_o *
UI_PlayerKDRRow__GetPlayerIconFull
          (UI_PlayerKDRRow_o *__this,System_String_o *character,System_String_o *loadout,
          System_String_o *status,MethodInfo *method)

{
  byte bVar1;
  System_String_o *pSVar2;
  bool bVar3;
  UnityEngine_Texture_o *pUVar4;
  
  if (Il2CppMethodInitialized_1843472fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture);
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/SpectatingIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Quests/Skull1Icon");
    Il2CppMethodInitialized_1843472fd = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
  }
  bVar3 = System_String__op_Equality
                    (status,TypeInfo_GameManagers_PlayerStatus->static_fields->Dead,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar4 = (UnityEngine_Texture_o *)
             ApplicationManagers_ResourceManager__LoadAsset
                       (pSVar2,"Icons/Quests/Skull1Icon",true,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Texture_o *)0x0) {
      return (UnityEngine_Texture_o *)0x0;
    }
    bVar1 = (TypeInfo_UnityEngine_Texture->_2).typeHierarchyDepth;
    if (((pUVar4->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_Texture
       )) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar4,TypeInfo_UnityEngine_Texture);
    }
  }
  else {
    if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
    }
    bVar3 = System_String__op_Equality
                      (status,TypeInfo_GameManagers_PlayerStatus->static_fields->Spectating,(MethodInfo *)0x0)
    ;
    if (!bVar3) {
      pUVar4 = UI_PlayerKDRRow__GetPlayerIcon(__this,character,loadout,(MethodInfo *)0x0);
      return pUVar4;
    }
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar4 = (UnityEngine_Texture_o *)
             ApplicationManagers_ResourceManager__LoadAsset
                       (pSVar2,"Icons/Game/SpectatingIcon",true,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Texture_o *)0x0) {
      return (UnityEngine_Texture_o *)0x0;
    }
    bVar1 = (TypeInfo_UnityEngine_Texture->_2).typeHierarchyDepth;
    if (((pUVar4->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_Texture
       )) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar4);
    }
  }
  return pUVar4;
}


// UI.PlayerKDRRow$$.ctor
// il2cpp: void UI_PlayerKDRRow___ctor (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x1822605f0

void UI_PlayerKDRRow___ctor(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *value;
  System_Text_StringBuilder_o *__this_00;
  
  if (Il2CppMethodInitialized_1843472fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Kills");
    il2cpp_codegen_initialize_runtime_metadata(&"Deaths");
    il2cpp_codegen_initialize_runtime_metadata(&"TotalDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"HighestDamage");
    Il2CppMethodInitialized_1843472fe = '\x01';
  }
  value = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  pSVar1 = "Kills";
  if (value != (System_String_array *)0x0) {
    if ((int)value->max_length != 0) {
      value->m_Items[0] = "Kills";
      Il2CppCodeGenWriteBarrier(value->m_Items,pSVar1);
      pSVar1 = "Deaths";
      if (1 < (uint)value->max_length) {
        value->m_Items[1] = "Deaths";
        Il2CppCodeGenWriteBarrier(value->m_Items + 1,pSVar1);
        pSVar1 = "HighestDamage";
        if (2 < (uint)value->max_length) {
          value->m_Items[2] = "HighestDamage";
          Il2CppCodeGenWriteBarrier(value->m_Items + 2,pSVar1);
          pSVar1 = "TotalDamage";
          if (3 < (uint)value->max_length) {
            value->m_Items[3] = "TotalDamage";
            Il2CppCodeGenWriteBarrier(value->m_Items + 3,pSVar1);
            (__this->fields).trackedProperties = value;
            Il2CppCodeGenWriteBarrier(&(__this->fields).trackedProperties,value);
            __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
            System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
            (__this->fields)._scoreBuilder = __this_00;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._scoreBuilder,__this_00);
            UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


