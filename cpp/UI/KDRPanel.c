// Type: UI.KDRPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/KDRPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/KDRPanel.cs
// --------------------------------

// UI.KDRPanel.<>c$$.cctor
// il2cpp: void UI_KDRPanel___c___cctor (const MethodInfo* method);
// 0x43cff10

void UI_KDRPanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ae425 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae425 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.KDRPanel.<>c$$.ctor
// il2cpp: void UI_KDRPanel___c___ctor (UI_KDRPanel___c_o* __this, const MethodInfo* method);
// 0x43cff80

void UI_KDRPanel___c___ctor(UI_KDRPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.KDRPanel.<>c$$<ReorganizeLayout>b__14_0
// il2cpp: System_String_o* UI_KDRPanel___c___ReorganizeLayout_b__14_0 (UI_KDRPanel___c_o* __this, System_Collections_Generic_KeyValuePair_string__TeamKDRRow__o x, const MethodInfo* method);
// 0x43cff90

System_String_o *
UI_KDRPanel___c___ReorganizeLayout_b__14_0
          (UI_KDRPanel___c_o *__this,System_Collections_Generic_KeyValuePair_string__TeamKDRRow__o x,
          MethodInfo *method)

{
  if (g_data_057ae426 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key,x.fields.key,x.fields.value);
    g_data_057ae426 = '\x01';
  }
  return x.fields.key;
}


// UI.KDRPanel.<>c$$<ReorganizeLayout>b__14_2
// il2cpp: int32_t UI_KDRPanel___c___ReorganizeLayout_b__14_2 (UI_KDRPanel___c_o* __this, System_Collections_Generic_KeyValuePair_int__PlayerKDRRow__o x, const MethodInfo* method);
// 0x43cffc0

int32_t UI_KDRPanel___c___ReorganizeLayout_b__14_2
                  (UI_KDRPanel___c_o *__this,System_Collections_Generic_KeyValuePair_int__PlayerKDRRow__o x,
                  MethodInfo *method)

{
  if (g_data_057ae427 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Key,x.fields._0_8_,x.fields.value);
    g_data_057ae427 = '\x01';
  }
  return x.fields.key;
}


// UI.KDRPanel$$Setup
// il2cpp: void UI_KDRPanel__Setup (UI_KDRPanel_o* __this, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x43ce400

void UI_KDRPanel__Setup(UI_KDRPanel_o *__this,UI_ElementStyle_o *style,MethodInfo *method)

{
  float fVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 extraout_RAX;
  undefined8 uVar5;
  long lVar6;
  undefined8 extraout_RAX_00;
  char cVar7;
  undefined8 unaff_RBX;
  undefined1 *puVar8;
  UI_KDRPanel_o *pUVar9;
  undefined8 *unaff_R14;
  float fVar10;
  
  (__this->fields)._style = style;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._style);
  UI_KDRPanel__DestroyAndRecreate(__this,(MethodInfo *)style);
  uVar5 = extraout_RAX;
  puVar8 = (undefined1 *)register0x00000020;
  do {
    *(undefined8 **)(puVar8 + -8) = unaff_R14;
    *(undefined8 *)(puVar8 + -0x10) = unaff_RBX;
    *(undefined8 *)(puVar8 + -0x18) = uVar5;
    pUVar9 = __this;
    if (g_data_057ae418 == '\0') {
      *(undefined8 *)(puVar8 + -0x20) = 0x43ce95c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      *(undefined8 *)(puVar8 + -0x20) = 0x43ce968;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      pUVar9 = (UI_KDRPanel_o *)&MethodInfo_Int32_get_Value;
      *(undefined8 *)(puVar8 + -0x20) = 0x43ce974;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae418 = '\x01';
    }
    unaff_R14 = &TypeInfo_SettingsManager;
    lVar6 = *(long *)(TypeInfo_SettingsManager + 0xb8);
    if ((*(long *)(lVar6 + 0x28) != 0) && (lVar4 = *(long *)(*(long *)(lVar6 + 0x28) + 0xb0), lVar4 != 0)) {
      iVar3 = *(int *)(lVar4 + 0x14);
      if (iVar3 != (__this->fields)._kdrMode) {
        (__this->fields)._kdrMode = iVar3;
        *(undefined8 *)(puVar8 + -0x20) = 0x43ce9bc;
        pUVar9 = __this;
        UI_KDRPanel__DestroyAndRecreate(__this,(MethodInfo *)style);
        lVar6 = *(long *)(TypeInfo_SettingsManager + 0xb8);
      }
      if (((*(long *)(lVar6 + 0x50) != 0) && (lVar6 = *(long *)(*(long *)(lVar6 + 0x50) + 0x58), lVar6 != 0))
         && (lVar6 = *(long *)(lVar6 + 0x20), lVar6 != 0)) {
        iVar3 = *(int *)(lVar6 + 0x14);
        if (iVar3 == (__this->fields)._pvpMode) {
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_043cea08;
label_043cea4e:
          *(undefined8 *)(puVar8 + -0x20) = 0x43cea53;
          il2cpp_runtime_helper_02337ed0();
          lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        else {
          (__this->fields)._pvpMode = iVar3;
          *(undefined8 *)(puVar8 + -0x20) = 0x43cea3b;
          UI_KDRPanel__DestroyAndRecreate(__this,(MethodInfo *)style);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_043cea4e;
label_043cea08:
          lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        if (lVar6 != 0) {
          cVar2 = *(char *)(lVar6 + 0x84);
          if (*(char *)((long)&(__this->fields)._showScoreboardLoadout + 1) == cVar2) {
            cVar7 = *(char *)(lVar6 + 0x83);
            if ((char)(__this->fields)._showScoreboardLoadout == cVar7) goto label_043cea7c;
          }
          else {
            cVar7 = *(char *)(lVar6 + 0x83);
          }
          *(char *)&(__this->fields)._showScoreboardLoadout = cVar7;
          *(char *)((long)&(__this->fields)._showScoreboardLoadout + 1) = cVar2;
          *(undefined8 *)(puVar8 + -0x20) = 0x43cea7c;
          UI_KDRPanel__DestroyAndRecreate(__this,(MethodInfo *)style);
        }
label_043cea7c:
        (__this->fields)._currentSyncDelay = 0.2;
        return;
      }
    }
    *(code **)(puVar8 + -0x20) = UI_KDRPanel__Update;
    il2cpp_runtime_helper_022b2c90();
    *(UI_KDRPanel_o **)(puVar8 + -0x20) = __this;
    *(float *)(puVar8 + -0x24) = (pUVar9->fields)._currentSyncDelay;
    *(undefined8 *)(puVar8 + -0x38) = 0x43ceaaa;
    fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar1 = *(float *)(puVar8 + -0x24);
    (pUVar9->fields)._currentSyncDelay = fVar1 - fVar10;
    if (0.0 < fVar1 - fVar10) {
      return;
    }
    unaff_RBX = *(undefined8 *)(puVar8 + -0x20);
    uVar5 = extraout_RAX_00;
    puVar8 = puVar8 + -0x18;
    __this = pUVar9;
  } while( true );
}


// UI.KDRPanel$$Update
// il2cpp: void UI_KDRPanel__Update (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x43cea90

void UI_KDRPanel__Update(UI_KDRPanel_o *__this,MethodInfo *method)

{
  float fVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 extraout_RAX;
  char cVar7;
  UI_KDRPanel_o *unaff_RBX;
  UI_KDRPanel_o *pUVar8;
  undefined8 *unaff_R14;
  float fVar9;
  
  do {
    *(UI_KDRPanel_o **)((long)register0x00000020 + -8) = unaff_RBX;
    *(float *)((long)register0x00000020 + -0xc) = (__this->fields)._currentSyncDelay;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43ceaaa;
    fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar1 = *(float *)((long)register0x00000020 + -0xc);
    (__this->fields)._currentSyncDelay = fVar1 - fVar9;
    if (0.0 < fVar1 - fVar9) {
      return;
    }
    uVar5 = *(undefined8 *)((long)register0x00000020 + -8);
    *(undefined8 **)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = uVar5;
    *(undefined8 *)((long)register0x00000020 + -0x18) = extraout_RAX;
    pUVar8 = __this;
    if (g_data_057ae418 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43ce95c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43ce968;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      pUVar8 = (UI_KDRPanel_o *)&MethodInfo_Int32_get_Value;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43ce974;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae418 = '\x01';
    }
    unaff_R14 = &TypeInfo_SettingsManager;
    lVar6 = *(long *)(TypeInfo_SettingsManager + 0xb8);
    if ((*(long *)(lVar6 + 0x28) != 0) && (lVar4 = *(long *)(*(long *)(lVar6 + 0x28) + 0xb0), lVar4 != 0)) {
      iVar3 = *(int *)(lVar4 + 0x14);
      if (iVar3 != (__this->fields)._kdrMode) {
        (__this->fields)._kdrMode = iVar3;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43ce9bc;
        pUVar8 = __this;
        UI_KDRPanel__DestroyAndRecreate(__this,method);
        lVar6 = *(long *)(TypeInfo_SettingsManager + 0xb8);
      }
      if (((*(long *)(lVar6 + 0x50) != 0) && (lVar6 = *(long *)(*(long *)(lVar6 + 0x50) + 0x58), lVar6 != 0))
         && (lVar6 = *(long *)(lVar6 + 0x20), lVar6 != 0)) {
        iVar3 = *(int *)(lVar6 + 0x14);
        if (iVar3 == (__this->fields)._pvpMode) {
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_043cea08;
label_043cea4e:
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43cea53;
          il2cpp_runtime_helper_02337ed0();
          lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        else {
          (__this->fields)._pvpMode = iVar3;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43cea3b;
          UI_KDRPanel__DestroyAndRecreate(__this,method);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_043cea4e;
label_043cea08:
          lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        if (lVar6 != 0) {
          cVar2 = *(char *)(lVar6 + 0x84);
          if (*(char *)((long)&(__this->fields)._showScoreboardLoadout + 1) == cVar2) {
            cVar7 = *(char *)(lVar6 + 0x83);
            if ((char)(__this->fields)._showScoreboardLoadout == cVar7) goto label_043cea7c;
          }
          else {
            cVar7 = *(char *)(lVar6 + 0x83);
          }
          *(char *)&(__this->fields)._showScoreboardLoadout = cVar7;
          *(char *)((long)&(__this->fields)._showScoreboardLoadout + 1) = cVar2;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43cea7c;
          UI_KDRPanel__DestroyAndRecreate(__this,method);
        }
label_043cea7c:
        (__this->fields)._currentSyncDelay = 0.2;
        return;
      }
    }
    *(code **)((long)register0x00000020 + -0x20) = UI_KDRPanel__Update;
    il2cpp_runtime_helper_022b2c90();
    unaff_RBX = __this;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    __this = pUVar8;
  } while( true );
}


// UI.KDRPanel$$Sync
// il2cpp: void UI_KDRPanel__Sync (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x43ce940

void UI_KDRPanel__Sync(UI_KDRPanel_o *__this,MethodInfo *method)

{
  float fVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 in_RAX;
  long lVar5;
  undefined8 extraout_RAX;
  char cVar6;
  undefined8 unaff_RBX;
  UI_KDRPanel_o *pUVar7;
  undefined8 *unaff_R14;
  float fVar8;
  
  do {
    *(undefined8 **)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    pUVar7 = __this;
    if (g_data_057ae418 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43ce95c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43ce968;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      pUVar7 = (UI_KDRPanel_o *)&MethodInfo_Int32_get_Value;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43ce974;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae418 = '\x01';
    }
    unaff_R14 = &TypeInfo_SettingsManager;
    lVar5 = *(long *)(TypeInfo_SettingsManager + 0xb8);
    if ((*(long *)(lVar5 + 0x28) != 0) && (lVar4 = *(long *)(*(long *)(lVar5 + 0x28) + 0xb0), lVar4 != 0)) {
      iVar3 = *(int *)(lVar4 + 0x14);
      if (iVar3 != (__this->fields)._kdrMode) {
        (__this->fields)._kdrMode = iVar3;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43ce9bc;
        pUVar7 = __this;
        UI_KDRPanel__DestroyAndRecreate(__this,method);
        lVar5 = *(long *)(TypeInfo_SettingsManager + 0xb8);
      }
      if (((*(long *)(lVar5 + 0x50) != 0) && (lVar5 = *(long *)(*(long *)(lVar5 + 0x50) + 0x58), lVar5 != 0))
         && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) {
        iVar3 = *(int *)(lVar5 + 0x14);
        if (iVar3 == (__this->fields)._pvpMode) {
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_043cea08;
label_043cea4e:
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43cea53;
          il2cpp_runtime_helper_02337ed0();
          lVar5 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        else {
          (__this->fields)._pvpMode = iVar3;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43cea3b;
          UI_KDRPanel__DestroyAndRecreate(__this,method);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_043cea4e;
label_043cea08:
          lVar5 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        if (lVar5 != 0) {
          cVar2 = *(char *)(lVar5 + 0x84);
          if (*(char *)((long)&(__this->fields)._showScoreboardLoadout + 1) == cVar2) {
            cVar6 = *(char *)(lVar5 + 0x83);
            if ((char)(__this->fields)._showScoreboardLoadout == cVar6) goto label_043cea7c;
          }
          else {
            cVar6 = *(char *)(lVar5 + 0x83);
          }
          *(char *)&(__this->fields)._showScoreboardLoadout = cVar6;
          *(char *)((long)&(__this->fields)._showScoreboardLoadout + 1) = cVar2;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43cea7c;
          UI_KDRPanel__DestroyAndRecreate(__this,method);
        }
label_043cea7c:
        (__this->fields)._currentSyncDelay = 0.2;
        return;
      }
    }
    *(code **)((long)register0x00000020 + -0x20) = UI_KDRPanel__Update;
    il2cpp_runtime_helper_022b2c90();
    *(UI_KDRPanel_o **)((long)register0x00000020 + -0x20) = __this;
    *(float *)((long)register0x00000020 + -0x24) = (pUVar7->fields)._currentSyncDelay;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x43ceaaa;
    fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar1 = *(float *)((long)register0x00000020 + -0x24);
    (pUVar7->fields)._currentSyncDelay = fVar1 - fVar8;
    if (0.0 < fVar1 - fVar8) {
      return;
    }
    unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0x20);
    in_RAX = extraout_RAX;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    __this = pUVar7;
  } while( true );
}


// UI.KDRPanel$$GetPlayerTeam
// il2cpp: System_String_o* UI_KDRPanel__GetPlayerTeam (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x43ceae0

System_String_o *
UI_KDRPanel__GetPlayerTeam(UI_KDRPanel_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_string__TeamKDRRow__o *source;
  System_Collections_Generic_Dictionary_int__PlayerKDRRow__o *source_00;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  System_Collections_Generic_List_Enumerator_T__o __this_04;
  System_Collections_Generic_List_Enumerator_T__o __this_05;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_Func_TSource__TKey__o *pSVar4;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar5;
  System_Collections_Generic_List_TSource__o *pSVar6;
  System_Collections_Generic_List_KeyValuePair_int__object___o *__this_06;
  UnityEngine_Transform_o *pUVar7;
  System_String_o *extraout_RAX;
  long *plVar8;
  System_String_o *extraout_RAX_00;
  MethodInfo *method_00;
  int index;
  UI_KDRPanel_o *__this_07;
  System_Collections_Generic_List_TSource__o *b;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined8 in_stack_ffffffffffffff30;
  System_Collections_Generic_List_T__o *pSVar11;
  System_Collections_Generic_List_T__o *pSStack_90;
  Il2CppRGCTXData *pIStack_88;
  _union_249567 _Stack_80;
  _union_249561 _Stack_78;
  undefined1 auStack_68 [16];
  _union_249567 _Stack_58;
  _union_249561 _Stack_50;
  Photon_Realtime_Player_o *pPStack_48;
  
  __this_07 = __this;
  if (g_data_057ae419 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_07 = (UI_KDRPanel_o *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae419 = '\x01';
  }
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x58), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x14) != 2) {
      return (__this->fields)._defaultTeam;
    }
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = PhotonExtensions__GetStringProperty
                       (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),
                        (__this->fields)._defaultTeam,(MethodInfo *)0x0);
    return pSVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pPStack_48 = player;
  if (g_data_057ae41a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_System_Collections_Generic_KeyValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_System_Collections_Generic_KeyValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_System_Collections_Generic_KeyValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_KeyValuePair_2_System_Int32_UI_PlayerKDRRow_ToLis);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_KeyValuePair_2_System_String_UI_TeamKDRRow_ToList);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_Int32_UI_PlayerKDRRow_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_UI_TeamKDRRow_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_int_PlayerKDRRow_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_int_PlayerKDRRow_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_TeamKDRRow_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ReorganizeLayout_b__14_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TeamKDRRow_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerKDRRow_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_KeyValuePair_2_System_String_UI_Team);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_KeyValuePair_2_System_Int32_UI_Playe);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ReorganizeLayout_b__14_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ReorganizeLayout_b__14_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae41a = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_80.genericMethod = (Il2CppRGCTXData *)0x0;
  _Stack_78.genericMethod = (char *)0x0;
  pSStack_90 = (System_Collections_Generic_List_T__o *)0x0;
  pIStack_88 = (Il2CppRGCTXData *)0x0;
  source = (__this_07->fields)._teamHeaders;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar4 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar4 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar4 == (System_Func_TSource__TKey__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_TeamKDRRow_string);
    System_Func_KeyValuePair_object__object___object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TKey__o **)(lVar1 + 8) = pSVar4;
    il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar4);
  }
  pSVar5 = System_Linq_Enumerable__OrderBy_KeyValuePair_object__object___object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,pSVar4,MethodInfo_IOrderedEnumerable_1_System_Collections_Generic_KeyValue);
  pSVar6 = System_Linq_Enumerable__ToList_KeyValuePair_object__object__
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,MethodInfo_List_1_KeyValuePair_2_System_String_UI_TeamKDRRow_ToList);
  source_00 = (__this_07->fields)._players;
  pSVar4 = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_int_PlayerKDRRow_string);
  System_Func_KeyValuePair_int__object___object____ctor();
  pSVar5 = System_Linq_Enumerable__OrderBy_KeyValuePair_int__object___object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,pSVar4,MethodInfo_IOrderedEnumerable_1_System_Collections_Generic_KeyValue);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar4 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    pSVar4 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (pSVar4 == (System_Func_TSource__TKey__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_int_PlayerKDRRow_int);
    System_Func_KeyValuePair_int__object___int____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TKey__o **)(lVar1 + 0x10) = pSVar4;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar4);
  }
  pSVar5 = System_Linq_Enumerable__ThenBy_KeyValuePair_int__object___int_(pSVar5,pSVar4,MethodInfo_IOrderedEnumerable_1_System_Collections_Generic_KeyValue);
  __this_06 = (System_Collections_Generic_List_KeyValuePair_int__object___o *)
              System_Linq_Enumerable__ToList_KeyValuePair_int__object__
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,MethodInfo_List_1_KeyValuePair_2_System_Int32_UI_PlayerKDRRow_ToLis);
  if (pSVar6 != (System_Collections_Generic_List_TSource__o *)0x0) {
    System_Collections_Generic_List_KeyValuePair_object__object____GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_68,
               (System_Collections_Generic_List_T__o *)pSVar6,MethodInfo_List_1_T_Enumerator_KeyValuePair_2_System_String_UI_Team);
    index = 0;
    pSVar11 = (System_Collections_Generic_List_T__o *)auStack_68._0_8_;
label_043cef40:
    __this_00.fields._8_8_ = __this_07;
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff30;
    __this_00.fields._current = (Il2CppObject *)pSVar11;
    bVar2 = System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____MoveNext
                      (__this_00,(MethodInfo_31F77D0 *)&stack0xffffffffffffff40);
    if ((char)bVar2 == '\0') {
      __this_03.fields._8_8_ = __this_07;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff30;
      __this_03.fields._current = (Il2CppObject *)pSVar11;
      System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
                (__this_03,(MethodInfo_31F77C0 *)&stack0xffffffffffffff40);
      return extraout_RAX;
    }
    auVar9 = il2cpp_runtime_helper_03f08300(&stack0xffffffffffffff40);
    b = auVar9._0_8_;
    if (auVar9._8_8_ == (UnityEngine_Component_o *)0x0) goto label_043cf13a;
    pUVar7 = UnityEngine_Component__get_transform(auVar9._8_8_,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_043cf13f;
    UnityEngine_Transform__SetSiblingIndex(pUVar7,index,(MethodInfo *)0x0);
    if (__this_06 != (System_Collections_Generic_List_KeyValuePair_int__object___o *)0x0)
    goto code_r0x043cefa9;
    goto label_043cf144;
  }
label_043cf151:
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar1 = *plVar8;
    __cxa_end_catch();
    __this_04.fields._8_8_ = __this_07;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff30;
    __this_04.fields._current = (Il2CppObject *)pSVar11;
    System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
              (__this_04,(MethodInfo_31F77C0 *)&stack0xffffffffffffff40);
    if (lVar1 == 0) {
      return extraout_RAX_00;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_05.fields._8_8_ = __this_07;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff30;
  __this_05.fields._current = (Il2CppObject *)pSVar11;
  System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
            (__this_05,(MethodInfo_31F77C0 *)&stack0xffffffffffffff40);
  _Unwind_Resume(auVar10._0_8_);
code_r0x043cefa9:
  System_Collections_Generic_List_KeyValuePair_int__object____GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_68,__this_06,MethodInfo_List_1_T_Enumerator_KeyValuePair_2_System_Int32_UI_Playe);
  _Stack_80 = _Stack_58;
  _Stack_78 = _Stack_50;
  pSStack_90 = (System_Collections_Generic_List_T__o *)auStack_68._0_8_;
  pIStack_88 = (Il2CppRGCTXData *)auStack_68._8_8_;
  while( true ) {
    index = index + 1;
    do {
      __this_01.fields._8_8_ = __this_07;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff30;
      __this_01.fields._current = (Il2CppObject *)pSVar11;
      bVar2 = System_Collections_Generic_List_Enumerator_KeyValuePair_int__object____MoveNext
                        (__this_01,(MethodInfo_31F70F0 *)&pSStack_90);
      if ((char)bVar2 == '\0') {
        pSVar6 = (System_Collections_Generic_List_TSource__o *)0x0;
        __this_02.fields._8_8_ = __this_07;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff30;
        __this_02.fields._current = (Il2CppObject *)pSVar11;
        System_Collections_Generic_List_Enumerator_KeyValuePair_int__object____Dispose
                  (__this_02,(MethodInfo_31F70E0 *)&pSStack_90);
        goto label_043cef40;
      }
      il2cpp_runtime_helper_043e7100((MethodInfo_31F70F0 *)&pSStack_90,MethodInfo_KeyValuePair_2_System_Int32_UI_PlayerKDRRow_get_Current);
      pSVar6 = b;
      if (method_00 == (MethodInfo *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_043cf13a;
      }
      pSVar3 = UI_KDRPanel__GetPlayerTeam(__this_07,(Photon_Realtime_Player_o *)method_00->klass,method_00);
      bVar2 = System_String__op_Equality(pSVar3,(System_String_o *)b,(MethodInfo *)0x0);
    } while ((char)bVar2 == '\0');
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)method_00,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) break;
    UnityEngine_Transform__SetSiblingIndex(pUVar7,index,(MethodInfo *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
label_043cf13a:
  b = pSVar6;
  il2cpp_runtime_helper_022b2c90();
label_043cf13f:
  il2cpp_runtime_helper_022b2c90();
label_043cf144:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0(b);
  goto label_043cf151;
}


// UI.KDRPanel$$ReorganizeLayout
// il2cpp: void UI_KDRPanel__ReorganizeLayout (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x43cebc0

void UI_KDRPanel__ReorganizeLayout(UI_KDRPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__TeamKDRRow__o *source;
  long lVar1;
  System_Collections_Generic_Dictionary_int__PlayerKDRRow__o *source_00;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  System_Collections_Generic_List_Enumerator_T__o __this_04;
  System_Collections_Generic_List_Enumerator_T__o __this_05;
  bool_conflict bVar2;
  System_Func_TSource__TKey__o *pSVar3;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar4;
  System_Collections_Generic_List_TSource__o *pSVar5;
  System_Collections_Generic_List_KeyValuePair_int__object___o *__this_06;
  UnityEngine_Transform_o *pUVar6;
  System_String_o *a;
  long *plVar7;
  MethodInfo *method_00;
  int index;
  System_Collections_Generic_List_TSource__o *b;
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined8 in_stack_ffffffffffffff48;
  System_Collections_Generic_List_T__o *pSVar10;
  System_Collections_Generic_List_T__o *local_78;
  Il2CppRGCTXData *pIStack_70;
  _union_249567 local_68;
  _union_249561 _Stack_60;
  undefined1 local_50 [16];
  _union_249567 local_40;
  _union_249561 _Stack_38;
  
  if (g_data_057ae41a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_System_Collections_Generic_KeyValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_System_Collections_Generic_KeyValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_System_Collections_Generic_KeyValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_KeyValuePair_2_System_Int32_UI_PlayerKDRRow_ToLis);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_KeyValuePair_2_System_String_UI_TeamKDRRow_ToList);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_Int32_UI_PlayerKDRRow_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_UI_TeamKDRRow_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_int_PlayerKDRRow_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_int_PlayerKDRRow_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_TeamKDRRow_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ReorganizeLayout_b__14_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TeamKDRRow_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerKDRRow_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_KeyValuePair_2_System_String_UI_Team);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_KeyValuePair_2_System_Int32_UI_Playe);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ReorganizeLayout_b__14_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ReorganizeLayout_b__14_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae41a = '\x01';
  }
  pSVar10 = (System_Collections_Generic_List_T__o *)0x0;
  local_68.genericMethod = (Il2CppRGCTXData *)0x0;
  _Stack_60.genericMethod = (char *)0x0;
  local_78 = (System_Collections_Generic_List_T__o *)0x0;
  pIStack_70 = (Il2CppRGCTXData *)0x0;
  source = (__this->fields)._teamHeaders;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar3 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar3 == (System_Func_TSource__TKey__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_TeamKDRRow_string);
    System_Func_KeyValuePair_object__object___object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TKey__o **)(lVar1 + 8) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar3);
  }
  pSVar4 = System_Linq_Enumerable__OrderBy_KeyValuePair_object__object___object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,pSVar3,MethodInfo_IOrderedEnumerable_1_System_Collections_Generic_KeyValue);
  pSVar5 = System_Linq_Enumerable__ToList_KeyValuePair_object__object__
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,MethodInfo_List_1_KeyValuePair_2_System_String_UI_TeamKDRRow_ToList);
  source_00 = (__this->fields)._players;
  pSVar3 = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_int_PlayerKDRRow_string);
  System_Func_KeyValuePair_int__object___object____ctor();
  pSVar4 = System_Linq_Enumerable__OrderBy_KeyValuePair_int__object___object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,pSVar3,MethodInfo_IOrderedEnumerable_1_System_Collections_Generic_KeyValue);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    pSVar3 = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (pSVar3 == (System_Func_TSource__TKey__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_int_PlayerKDRRow_int);
    System_Func_KeyValuePair_int__object___int____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TKey__o **)(lVar1 + 0x10) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar3);
  }
  pSVar4 = System_Linq_Enumerable__ThenBy_KeyValuePair_int__object___int_(pSVar4,pSVar3,MethodInfo_IOrderedEnumerable_1_System_Collections_Generic_KeyValue);
  __this_06 = (System_Collections_Generic_List_KeyValuePair_int__object___o *)
              System_Linq_Enumerable__ToList_KeyValuePair_int__object__
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,MethodInfo_List_1_KeyValuePair_2_System_Int32_UI_PlayerKDRRow_ToLis);
  if (pSVar5 != (System_Collections_Generic_List_TSource__o *)0x0) {
    System_Collections_Generic_List_KeyValuePair_object__object____GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
               (System_Collections_Generic_List_T__o *)pSVar5,MethodInfo_List_1_T_Enumerator_KeyValuePair_2_System_String_UI_Team);
    index = 0;
    pSVar10 = (System_Collections_Generic_List_T__o *)local_50._0_8_;
label_043cef40:
    __this_00.fields._8_8_ = __this;
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
    __this_00.fields._current = (Il2CppObject *)pSVar10;
    bVar2 = System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____MoveNext
                      (__this_00,(MethodInfo_31F77D0 *)&stack0xffffffffffffff58);
    if ((char)bVar2 == '\0') {
      __this_03.fields._8_8_ = __this;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
      __this_03.fields._current = (Il2CppObject *)pSVar10;
      System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
                (__this_03,(MethodInfo_31F77C0 *)&stack0xffffffffffffff58);
      return;
    }
    auVar8 = il2cpp_runtime_helper_03f08300(&stack0xffffffffffffff58);
    b = auVar8._0_8_;
    if (auVar8._8_8_ == (UnityEngine_Component_o *)0x0) goto label_043cf13a;
    pUVar6 = UnityEngine_Component__get_transform(auVar8._8_8_,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_043cf13f;
    UnityEngine_Transform__SetSiblingIndex(pUVar6,index,(MethodInfo *)0x0);
    if (__this_06 != (System_Collections_Generic_List_KeyValuePair_int__object___o *)0x0)
    goto code_r0x043cefa9;
    goto label_043cf144;
  }
label_043cf151:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar1 = *plVar7;
    __cxa_end_catch();
    __this_04.fields._8_8_ = __this;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
    __this_04.fields._current = (Il2CppObject *)pSVar10;
    System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
              (__this_04,(MethodInfo_31F77C0 *)&stack0xffffffffffffff58);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_05.fields._8_8_ = __this;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
  __this_05.fields._current = (Il2CppObject *)pSVar10;
  System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
            (__this_05,(MethodInfo_31F77C0 *)&stack0xffffffffffffff58);
  _Unwind_Resume(auVar9._0_8_);
code_r0x043cefa9:
  System_Collections_Generic_List_KeyValuePair_int__object____GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_50,__this_06,MethodInfo_List_1_T_Enumerator_KeyValuePair_2_System_Int32_UI_Playe);
  local_68 = local_40;
  _Stack_60 = _Stack_38;
  local_78 = (System_Collections_Generic_List_T__o *)local_50._0_8_;
  pIStack_70 = (Il2CppRGCTXData *)local_50._8_8_;
  while( true ) {
    index = index + 1;
    do {
      __this_01.fields._8_8_ = __this;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
      __this_01.fields._current = (Il2CppObject *)pSVar10;
      bVar2 = System_Collections_Generic_List_Enumerator_KeyValuePair_int__object____MoveNext
                        (__this_01,(MethodInfo_31F70F0 *)&local_78);
      if ((char)bVar2 == '\0') {
        pSVar5 = (System_Collections_Generic_List_TSource__o *)0x0;
        __this_02.fields._8_8_ = __this;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
        __this_02.fields._current = (Il2CppObject *)pSVar10;
        System_Collections_Generic_List_Enumerator_KeyValuePair_int__object____Dispose
                  (__this_02,(MethodInfo_31F70E0 *)&local_78);
        goto label_043cef40;
      }
      il2cpp_runtime_helper_043e7100((MethodInfo_31F70F0 *)&local_78,MethodInfo_KeyValuePair_2_System_Int32_UI_PlayerKDRRow_get_Current);
      pSVar5 = b;
      if (method_00 == (MethodInfo *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_043cf13a;
      }
      a = UI_KDRPanel__GetPlayerTeam(__this,(Photon_Realtime_Player_o *)method_00->klass,method_00);
      bVar2 = System_String__op_Equality(a,(System_String_o *)b,(MethodInfo *)0x0);
    } while ((char)bVar2 == '\0');
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)method_00,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) break;
    UnityEngine_Transform__SetSiblingIndex(pUVar6,index,(MethodInfo *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
label_043cf13a:
  b = pSVar5;
  il2cpp_runtime_helper_022b2c90();
label_043cf13f:
  il2cpp_runtime_helper_022b2c90();
label_043cf144:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0(b);
  goto label_043cf151;
}


// UI.KDRPanel$$AddPlayer
// il2cpp: void UI_KDRPanel__AddPlayer (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* player, bool redoLayout, bool isVisible, const MethodInfo* method);
// 0x43cf1f0

void UI_KDRPanel__AddPlayer
               (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *player,bool_conflict redoLayout,
               bool_conflict isVisible,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  long lVar5;
  bool_conflict bVar6;
  UnityEngine_UI_Text_o *pUVar7;
  UnityEngine_UI_Text_o *pUVar8;
  UnityEngine_GameObject_o *__this_00;
  UI_PlayerKDRRow_o *pUVar9;
  UI_PlayerKDRRow_o *pUVar10;
  UI_TeamKDRRow_o *pUVar11;
  Il2CppObject *pIVar12;
  UI_PlayerKDRRow_o *pUVar13;
  UnityEngine_Component_o *__this_01;
  undefined8 uVar14;
  UI_PlayerKDRRow_o *pUVar15;
  UI_PlayerKDRRow_o *pUVar16;
  UI_PlayerKDRRow_o *player_00;
  MethodInfo *pMVar17;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined1 *puVar18;
  UnityEngine_UI_Text_o *pUVar19;
  UI_PlayerKDRRow_o *unaff_R13;
  ulong uVar20;
  UnityEngine_UI_Text_o *unaff_R15;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_38 [8];
  
  puVar18 = auStack_38;
  pUVar10 = (UI_PlayerKDRRow_o *)(ulong)(uint)isVisible;
  uVar20 = (ulong)(uint)redoLayout;
  pUVar15 = (UI_PlayerKDRRow_o *)player;
  if (g_data_057ae41b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TeamKDRRow_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerKDRRow_GetComponent_PlayerKDRRow);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TeamKDRRow_GetComponent_TeamKDRRow);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae41b = '\x01';
  }
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
  pUVar7 = (UnityEngine_UI_Text_o *)0x0;
  if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar3,(player->fields).actorNumber,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar6 != '\0') {
      return;
    }
    pUVar7 = (UnityEngine_UI_Text_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar15 = (UI_PlayerKDRRow_o *)(__this->fields)._style;
    pUVar8 = (UnityEngine_UI_Text_o *)
             UI_ElementFactory__CreatePlayerKDRRow
                       ((UnityEngine_Transform_o *)pUVar7,(UI_ElementStyle_o *)pUVar15,player,
                        (MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar15 = MethodInfo_PlayerKDRRow_GetComponent_PlayerKDRRow;
      unaff_R15 = (UnityEngine_UI_Text_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pUVar8,(MethodInfo_255A0F0 *)MethodInfo_PlayerKDRRow_GetComponent_PlayerKDRRow);
      if ((char)isVisible == '\0') {
        pUVar7 = pUVar8;
        if (unaff_R15 == (UnityEngine_UI_Text_o *)0x0) goto label_043cf47a;
        pUVar15 = (UI_PlayerKDRRow_o *)0x0;
        pUVar7 = unaff_R15;
        __this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)unaff_R15,(MethodInfo *)0x0);
        if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_043cf47a;
        pUVar15 = (UI_PlayerKDRRow_o *)0x0;
        UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
      pUVar7 = (UnityEngine_UI_Text_o *)0x0;
      if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        System_Collections_Generic_Dictionary_int__object___Add
                  (pSVar3,(player->fields).actorNumber,(Il2CppObject *)unaff_R15,MethodInfo_Void_Add);
        if ((__this->fields)._pvpMode != 2) {
          return;
        }
        pUVar15 = (UI_PlayerKDRRow_o *)player;
        pUVar9 = (UI_PlayerKDRRow_o *)UI_KDRPanel__GetPlayerTeam(__this,player,method_00);
        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._teamHeaders;
        pUVar7 = (UnityEngine_UI_Text_o *)0x0;
        if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pUVar15 = pUVar9;
          bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            (pSVar4,(Il2CppObject *)pUVar9,MethodInfo_Boolean_ContainsKey);
          unaff_R13 = pUVar9;
          if ((char)bVar6 == '\0') {
            pUVar7 = (UnityEngine_UI_Text_o *)
                     UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            pUVar15 = (UI_PlayerKDRRow_o *)(__this->fields)._style;
            pUVar8 = (UnityEngine_UI_Text_o *)
                     UI_ElementFactory__CreateTeamKDRRow
                               ((UnityEngine_Transform_o *)pUVar7,(UI_ElementStyle_o *)pUVar15,
                                (System_String_o *)pUVar9,(MethodInfo *)0x0);
            if (pUVar8 == (UnityEngine_UI_Text_o *)0x0) goto label_043cf47a;
            pUVar15 = MethodInfo_TeamKDRRow_GetComponent_TeamKDRRow;
            pUVar7 = pUVar8;
            pUVar10 = (UI_PlayerKDRRow_o *)
                      UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)pUVar8,(MethodInfo_255A0F0 *)MethodInfo_TeamKDRRow_GetComponent_TeamKDRRow);
            lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
            player = (Photon_Realtime_Player_o *)pUVar8;
            if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0xb0), lVar5 == 0)) goto label_043cf47a;
            bVar21 = *(int *)(lVar5 + 0x14) != 0;
            pUVar15 = (UI_PlayerKDRRow_o *)(ulong)bVar21;
            UnityEngine_GameObject__SetActive
                      ((UnityEngine_GameObject_o *)pUVar8,(uint)bVar21,(MethodInfo *)0x0);
            pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._teamHeaders;
            pUVar7 = (UnityEngine_UI_Text_o *)0x0;
            if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043cf47a;
            pUVar15 = pUVar9;
            System_Collections_Generic_Dictionary_object__object___Add
                      (pSVar4,(Il2CppObject *)pUVar9,(Il2CppObject *)pUVar10,MethodInfo_Void_Add);
          }
          pUVar7 = (UnityEngine_UI_Text_o *)(__this->fields)._teamHeaders;
          if ((pUVar7 != (UnityEngine_UI_Text_o *)0x0) &&
             (pUVar15 = pUVar9,
             pUVar11 = (UI_TeamKDRRow_o *)
                       System_Collections_Generic_Dictionary_object__object___get_Item
                                 ((System_Collections_Generic_Dictionary_object__object__o *)pUVar7,
                                  (Il2CppObject *)pUVar9,MethodInfo_TeamKDRRow_get_Item), pUVar11 != (UI_TeamKDRRow_o *)0x0)) {
            UI_TeamKDRRow__AddPlayerStats(pUVar11,(UI_PlayerKDRRow_o *)unaff_R15,(MethodInfo *)0x0);
            pMVar17 = (MethodInfo *)0x0;
            UI_TeamKDRRow__UpdateRow(pUVar11,(MethodInfo *)0x0);
            if ((char)redoLayout == '\0') {
              return;
            }
            UI_KDRPanel__ReorganizeLayout(__this,pMVar17);
            return;
          }
        }
      }
    }
  }
label_043cf47a:
  auVar22 = il2cpp_runtime_helper_022b2c90();
  do {
    *(Photon_Realtime_Player_o **)(puVar18 + -8) = player;
    *(UnityEngine_UI_Text_o **)(puVar18 + -0x10) = unaff_R15;
    *(ulong *)(puVar18 + -0x18) = uVar20;
    *(UI_PlayerKDRRow_o **)(puVar18 + -0x20) = unaff_R13;
    *(UI_PlayerKDRRow_o **)(puVar18 + -0x28) = pUVar10;
    *(UI_KDRPanel_o **)(puVar18 + -0x30) = __this;
    *(long *)(puVar18 + -0x38) = auVar22._0_8_;
    unaff_R15 = (UnityEngine_UI_Text_o *)(auVar22._8_8_ & 0xffffffff);
    pUVar9 = pUVar15;
    if (g_data_057ae41c == '\0') {
      *(undefined8 *)(puVar18 + -0x40) = 0x43cf4a9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      *(undefined8 *)(puVar18 + -0x40) = 0x43cf4b5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      *(undefined8 *)(puVar18 + -0x40) = 0x43cf4c1;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      *(undefined8 *)(puVar18 + -0x40) = 0x43cf4cd;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      *(undefined8 *)(puVar18 + -0x40) = 0x43cf4d9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerKDRRow_get_Item);
      *(undefined8 *)(puVar18 + -0x40) = 0x43cf4e5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_TeamKDRRow_get_Item);
      *(undefined8 *)(puVar18 + -0x40) = 0x43cf4f1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae41c = '\x01';
    }
    if (pUVar15 == (UI_PlayerKDRRow_o *)0x0) {
      return;
    }
    pUVar8 = *(UnityEngine_UI_Text_o **)&(pUVar7->fields).m_Color.fields;
    pUVar19 = (UnityEngine_UI_Text_o *)0x0;
    if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
      uVar1 = *(uint *)&(pUVar15->fields).m_CancellationTokenSource;
      pUVar9 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
      *(undefined8 *)(puVar18 + -0x40) = 0x43cf521;
      bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_int__object__o *)pUVar8,uVar1,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar6 == '\0') {
        return;
      }
      if ((pUVar7->fields).m_RaycastTarget == 2) {
        pUVar19 = *(UnityEngine_UI_Text_o **)&(pUVar7->fields).m_Color.fields;
        if (pUVar19 != (UnityEngine_UI_Text_o *)0x0) {
          uVar1 = *(uint *)&(pUVar15->fields).m_CancellationTokenSource;
          pUVar9 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
          unaff_R13 = (UI_PlayerKDRRow_o *)&MethodInfo_PlayerKDRRow_get_Item;
          *(undefined8 *)(puVar18 + -0x40) = 0x43cf554;
          pIVar12 = System_Collections_Generic_Dictionary_int__object___get_Item
                              ((System_Collections_Generic_Dictionary_int__object__o *)pUVar19,uVar1,
                               MethodInfo_PlayerKDRRow_get_Item);
          if (pIVar12 != (Il2CppObject *)0x0) {
            pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                      &(pUVar7->fields).m_Color.fields.b;
            pUVar19 = (UnityEngine_UI_Text_o *)0x0;
            if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              pUVar10 = pIVar12[6].monitor;
              player = (Photon_Realtime_Player_o *)&MethodInfo_Boolean_ContainsKey;
              *(undefined8 *)(puVar18 + -0x40) = 0x43cf581;
              pUVar9 = pUVar10;
              bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                (pSVar4,(Il2CppObject *)pUVar10,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar6 == '\0') {
                pUVar10 = *(UI_PlayerKDRRow_o **)&(pUVar7->fields).m_RaycastPadding.fields;
              }
              pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                        &(pUVar7->fields).m_Color.fields.b;
              pUVar19 = (UnityEngine_UI_Text_o *)0x0;
              if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                *(undefined8 *)(puVar18 + -0x40) = 0x43cf5a2;
                pUVar9 = pUVar10;
                bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                  (pSVar4,(Il2CppObject *)pUVar10,MethodInfo_Boolean_ContainsKey);
                if ((char)bVar6 == '\0') {
label_043cf65c:
                  if ((char)unaff_R15 != '\0') {
label_043cf661:
                    *(undefined8 *)(puVar18 + -0x40) = 0x43cf669;
                    UI_KDRPanel__ReorganizeLayout((UI_KDRPanel_o *)pUVar7,(MethodInfo *)pUVar9);
                  }
                  goto label_043cf669;
                }
                pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                          &(pUVar7->fields).m_Color.fields.b;
                pUVar19 = (UnityEngine_UI_Text_o *)0x0;
                if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  *(undefined8 *)(puVar18 + -0x40) = 0x43cf5c9;
                  pUVar9 = pUVar10;
                  pUVar8 = (UnityEngine_UI_Text_o *)
                           System_Collections_Generic_Dictionary_object__object___get_Item
                                     (pSVar4,(Il2CppObject *)pUVar10,MethodInfo_TeamKDRRow_get_Item);
                  pUVar19 = *(UnityEngine_UI_Text_o **)&(pUVar7->fields).m_Color.fields;
                  if (pUVar19 != (UnityEngine_UI_Text_o *)0x0) {
                    uVar1 = *(uint *)&(pUVar15->fields).m_CancellationTokenSource;
                    pUVar9 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
                    *(undefined8 *)(puVar18 + -0x40) = 0x43cf5e6;
                    pUVar13 = (UI_PlayerKDRRow_o *)
                              System_Collections_Generic_Dictionary_int__object___get_Item
                                        ((System_Collections_Generic_Dictionary_int__object__o *)pUVar19,uVar1
                                         ,MethodInfo_PlayerKDRRow_get_Item);
                    player = (Photon_Realtime_Player_o *)pUVar8;
                    if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
                      *(undefined8 *)(puVar18 + -0x40) = 0x43cf5fc;
                      UI_TeamKDRRow__RemovePlayerStats((UI_TeamKDRRow_o *)pUVar8,pUVar13,(MethodInfo *)0x0);
                      pUVar19 = *(UnityEngine_UI_Text_o **)&(pUVar7->fields).m_Color.fields.b;
                      unaff_R13 = (UI_PlayerKDRRow_o *)&MethodInfo_TeamKDRRow_get_Item;
                      pUVar9 = pUVar13;
                      if (pUVar19 != (UnityEngine_UI_Text_o *)0x0) {
                        *(undefined8 *)(puVar18 + -0x40) = 0x43cf61c;
                        pUVar9 = pUVar10;
                        pIVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                                            ((System_Collections_Generic_Dictionary_object__object__o *)
                                             pUVar19,(Il2CppObject *)pUVar10,MethodInfo_TeamKDRRow_get_Item);
                        if ((pIVar12 != (Il2CppObject *)0x0) &&
                           (pUVar19 = *(UnityEngine_UI_Text_o **)&(pUVar7->fields).m_Color.fields.b,
                           pUVar19 != (UnityEngine_UI_Text_o *)0x0)) {
                          uVar1 = *(uint *)&pIVar12[4].monitor;
                          player = (Photon_Realtime_Player_o *)(ulong)uVar1;
                          *(undefined8 *)(puVar18 + -0x40) = 0x43cf641;
                          pUVar9 = pUVar10;
                          pUVar11 = (UI_TeamKDRRow_o *)
                                    System_Collections_Generic_Dictionary_object__object___get_Item
                                              ((System_Collections_Generic_Dictionary_object__object__o *)
                                               pUVar19,(Il2CppObject *)pUVar10,MethodInfo_TeamKDRRow_get_Item);
                          if (pUVar11 != (UI_TeamKDRRow_o *)0x0) {
                            pUVar9 = (UI_PlayerKDRRow_o *)0x0;
                            if (0 < (int)uVar1) {
                              *(undefined8 *)(puVar18 + -0x40) = 0x43cf65c;
                              UI_TeamKDRRow__UpdateRow(pUVar11,(MethodInfo *)0x0);
                              goto label_043cf65c;
                            }
                            *(undefined8 *)(puVar18 + -0x40) = 0x43cf703;
                            player = (Photon_Realtime_Player_o *)
                                     UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
                            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                              *(undefined8 *)(puVar18 + -0x40) = 0x43cf71e;
                              il2cpp_runtime_helper_02337ed0();
                            }
                            pUVar9 = (UI_PlayerKDRRow_o *)0x0;
                            *(undefined8 *)(puVar18 + -0x40) = 0x43cf728;
                            UnityEngine_Object__Destroy_4e01c60
                                      ((UnityEngine_Object_o *)player,(MethodInfo *)0x0);
                            pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                      &(pUVar7->fields).m_Color.fields.b;
                            pUVar19 = (UnityEngine_UI_Text_o *)0x0;
                            if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                              *(undefined8 *)(puVar18 + -0x40) = 0x43cf743;
                              pUVar9 = pUVar10;
                              System_Collections_Generic_Dictionary_object__object___Remove
                                        (pSVar4,(Il2CppObject *)pUVar10,MethodInfo_Boolean_Remove);
                              if ((char)unaff_R15 == '\0') goto label_043cf669;
                              goto label_043cf661;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
label_043cf669:
        pUVar19 = *(UnityEngine_UI_Text_o **)&(pUVar7->fields).m_Color.fields;
        if (pUVar19 != (UnityEngine_UI_Text_o *)0x0) {
          uVar1 = *(uint *)&(pUVar15->fields).m_CancellationTokenSource;
          pUVar9 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
          *(undefined8 *)(puVar18 + -0x40) = 0x43cf689;
          __this_01 = (UnityEngine_Component_o *)
                      System_Collections_Generic_Dictionary_int__object___get_Item
                                ((System_Collections_Generic_Dictionary_int__object__o *)pUVar19,uVar1,
                                 MethodInfo_PlayerKDRRow_get_Item);
          if (__this_01 != (UnityEngine_Component_o *)0x0) {
            *(undefined8 *)(puVar18 + -0x40) = 0x43cf69c;
            player = (Photon_Realtime_Player_o *)
                     UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              *(undefined8 *)(puVar18 + -0x40) = 0x43cf6b7;
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar9 = (UI_PlayerKDRRow_o *)0x0;
            *(undefined8 *)(puVar18 + -0x40) = 0x43cf6c1;
            UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)player,(MethodInfo *)0x0);
            pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)
                      &(pUVar7->fields).m_Color.fields;
            pUVar19 = (UnityEngine_UI_Text_o *)0x0;
            if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              System_Collections_Generic_Dictionary_int__object___Remove
                        (pSVar3,*(int32_t *)&(pUVar15->fields).m_CancellationTokenSource,MethodInfo_Boolean_Remove);
              return;
            }
          }
        }
      }
    }
    *(undefined8 *)(puVar18 + -0x40) = 0x43cf756;
    uVar14 = il2cpp_runtime_helper_022b2c90();
    *(UI_PlayerKDRRow_o **)(puVar18 + -0x40) = pUVar15;
    *(UnityEngine_UI_Text_o **)(puVar18 + -0x48) = pUVar7;
    *(undefined8 *)(puVar18 + -0x50) = uVar14;
    pUVar15 = pUVar9;
    pUVar7 = pUVar19;
    if (g_data_057ae41e == '\0') {
      *(undefined8 *)(puVar18 + -0x58) = 0x43cf77f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      pUVar7 = (UnityEngine_UI_Text_o *)&MethodInfo_Int32_get_Value;
      *(undefined8 *)(puVar18 + -0x58) = 0x43cf78b;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae41e = '\x01';
    }
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0xb0), lVar5 != 0)) {
      UI_KDRPanel__AddPlayer
                ((UI_KDRPanel_o *)pUVar19,(Photon_Realtime_Player_o *)pUVar9,1,
                 (uint)(pUVar9 != (UI_PlayerKDRRow_o *)0x0 && *(int *)(lVar5 + 0x14) == 2),method);
      return;
    }
    *(undefined8 *)(puVar18 + -0x58) = 0x43cf7e6;
    uVar14 = il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_UI_Text_o **)(puVar18 + -0x58) = pUVar19;
    *(UI_PlayerKDRRow_o **)(puVar18 + -0x60) = pUVar9;
    *(undefined8 *)(puVar18 + -0x68) = uVar14;
    pUVar9 = pUVar15;
    pUVar8 = pUVar7;
    if (g_data_057ae41f == '\0') {
      *(undefined8 *)(puVar18 + -0x70) = 0x43cf80f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      pUVar8 = (UnityEngine_UI_Text_o *)&MethodInfo_Int32_get_Value;
      *(undefined8 *)(puVar18 + -0x70) = 0x43cf81b;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae41f = '\x01';
    }
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0xb0), lVar5 == 0)) {
      *(undefined8 *)(puVar18 + -0x70) = 0x43cf877;
      auVar22 = il2cpp_runtime_helper_022b2c90();
      pUVar19 = auVar22._8_8_;
      *(Photon_Realtime_Player_o **)(puVar18 + -0x70) = player;
      *(UnityEngine_UI_Text_o **)(puVar18 + -0x78) = unaff_R15;
      *(UnityEngine_UI_Text_o **)(puVar18 + -0x80) = pUVar7;
      *(UI_PlayerKDRRow_o **)(puVar18 + -0x88) = unaff_R13;
      *(UI_PlayerKDRRow_o **)(puVar18 + -0x90) = pUVar10;
      *(UI_PlayerKDRRow_o **)(puVar18 + -0x98) = pUVar15;
      *(long *)(puVar18 + -0xa0) = auVar22._0_8_;
      pUVar10 = pUVar9;
      pUVar7 = pUVar8;
      if (g_data_057ae420 == '\0') {
        *(undefined8 *)(puVar18 + -0xa8) = 0x43cf8a9;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        *(undefined8 *)(puVar18 + -0xa8) = 0x43cf8b5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        *(undefined8 *)(puVar18 + -0xa8) = 0x43cf8c1;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
        *(undefined8 *)(puVar18 + -0xa8) = 0x43cf8cd;
        il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerKDRRow_get_Item);
        *(undefined8 *)(puVar18 + -0xa8) = 0x43cf8d9;
        il2cpp_runtime_helper_023445d0(&MethodInfo_TeamKDRRow_get_Item);
        *(undefined8 *)(puVar18 + -0xa8) = 0x43cf8e5;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
        *(undefined8 *)(puVar18 + -0xa8) = 0x43cf8f1;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        *(undefined8 *)(puVar18 + -0xa8) = 0x43cf8fd;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        pUVar7 = (UnityEngine_UI_Text_o *)&MethodInfo_Int32_get_Value;
        *(undefined8 *)(puVar18 + -0xa8) = 0x43cf909;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae420 = '\x01';
      }
      *(undefined8 *)(puVar18 + -0xa0) = 0;
      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0xb0), lVar5 != 0)) {
        iVar2 = *(int *)(lVar5 + 0x14);
        pUVar7 = TypeInfo_PlayerProperty;
        if (iVar2 == 0) {
          bVar21 = false;
          iVar2 = *(int *)((long)&(TypeInfo_PlayerProperty->fields).m_Corners + 4);
        }
        else if (iVar2 == 1) {
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            *(undefined8 *)(puVar18 + -0xa8) = 0x43cf96e;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar18 + -0xa8) = 0x43cf975;
          pUVar15 = (UI_PlayerKDRRow_o *)Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
          bVar21 = pUVar15 == pUVar9;
          iVar2 = *(int *)((long)&(TypeInfo_PlayerProperty->fields).m_Corners + 4);
          pUVar7 = TypeInfo_PlayerProperty;
        }
        else {
          bVar21 = true;
          iVar2 = *(int *)((long)&(TypeInfo_PlayerProperty->fields).m_Corners + 4);
        }
        TypeInfo_PlayerProperty = pUVar7;
        if (iVar2 == 0) {
          *(undefined8 *)(puVar18 + -0xa8) = 0x43cf9ab;
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar15 = (UI_PlayerKDRRow_o *)&TypeInfo_PlayerProperty;
        if (pUVar19 != (UnityEngine_UI_Text_o *)0x0) {
          pUVar10 = *(UI_PlayerKDRRow_o **)
                     &(((TypeInfo_PlayerProperty->fields).m_ParentMask)->fields).m_ShouldRecalculateClipRects;
          *(undefined8 *)(puVar18 + -0xa8) = 0x43cf9d7;
          pMVar17 = MethodInfo_Boolean_TryGetValue;
          System_Collections_Generic_Dictionary_object__object___TryGetValue
                    ((System_Collections_Generic_Dictionary_object__object__o *)pUVar19,
                     (Il2CppObject *)pUVar10,(Il2CppObject **)(puVar18 + -0xa0),
                     (MethodInfo_3106990 *)MethodInfo_Boolean_TryGetValue);
          if (*(long *)(puVar18 + -0xa0) != 0) {
            *(undefined8 *)(puVar18 + -0xa8) = 0x43cf9eb;
            UI_KDRPanel__RemovePlayer((UI_KDRPanel_o *)pUVar8,(Photon_Realtime_Player_o *)pUVar9,0,pMVar17);
            *(undefined8 *)(puVar18 + -0xa8) = 0x43cf9ff;
            UI_KDRPanel__AddPlayer
                      ((UI_KDRPanel_o *)pUVar8,(Photon_Realtime_Player_o *)pUVar9,1,(uint)bVar21,method);
            return;
          }
          pUVar7 = pUVar19;
          if (pUVar9 != (UI_PlayerKDRRow_o *)0x0) {
            if (*(char *)((long)&(pUVar9->fields).m_CancellationTokenSource + 4) == '\0') {
              lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0xb0), lVar5 == 0)) goto label_043cfc2c;
              if (*(int *)(lVar5 + 0x14) != 2) {
                return;
              }
            }
            pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)
                      &(pUVar8->fields).m_Color.fields;
            pUVar7 = (UnityEngine_UI_Text_o *)0x0;
            if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              uVar1 = *(uint *)&(pUVar9->fields).m_CancellationTokenSource;
              pUVar10 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
              *(undefined8 *)(puVar18 + -0xa8) = 0x43cfa6d;
              bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                (pSVar3,uVar1,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar6 == '\0') {
                return;
              }
              if ((pUVar8->fields).m_RaycastTarget == 2) {
                *(undefined8 *)(puVar18 + -0xa8) = 0x43cfa87;
                pUVar10 = pUVar9;
                pUVar13 = (UI_PlayerKDRRow_o *)
                          UI_KDRPanel__GetPlayerTeam
                                    ((UI_KDRPanel_o *)pUVar8,(Photon_Realtime_Player_o *)pUVar9,method_01);
                pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                          &(pUVar8->fields).m_Color.fields.b;
                pUVar7 = (UnityEngine_UI_Text_o *)0x0;
                if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  *(undefined8 *)(puVar18 + -0xa8) = 0x43cfaa9;
                  pUVar10 = pUVar13;
                  bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                    (pSVar4,(Il2CppObject *)pUVar13,MethodInfo_Boolean_ContainsKey);
                  if ((char)bVar6 == '\0') {
                    return;
                  }
                  pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                            &(pUVar8->fields).m_Color.fields.b;
                  pUVar7 = (UnityEngine_UI_Text_o *)0x0;
                  if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    *(undefined8 *)(puVar18 + -0xa8) = 0x43cfad1;
                    pUVar10 = pUVar13;
                    pUVar16 = (UI_PlayerKDRRow_o *)
                              System_Collections_Generic_Dictionary_object__object___get_Item
                                        (pSVar4,(Il2CppObject *)pUVar13,MethodInfo_TeamKDRRow_get_Item);
                    pUVar7 = *(UnityEngine_UI_Text_o **)&(pUVar8->fields).m_Color.fields;
                    if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
                      uVar1 = *(uint *)&(pUVar9->fields).m_CancellationTokenSource;
                      pUVar10 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
                      *(undefined8 *)(puVar18 + -0xa8) = 0x43cfaf6;
                      player_00 = (UI_PlayerKDRRow_o *)
                                  System_Collections_Generic_Dictionary_int__object___get_Item
                                            ((System_Collections_Generic_Dictionary_int__object__o *)pUVar7,
                                             uVar1,MethodInfo_PlayerKDRRow_get_Item);
                      pUVar15 = pUVar16;
                      if (pUVar16 != (UI_PlayerKDRRow_o *)0x0) {
                        *(undefined8 *)(puVar18 + -0xa8) = 0x43cfb0c;
                        UI_TeamKDRRow__RemovePlayerStats
                                  ((UI_TeamKDRRow_o *)pUVar16,player_00,(MethodInfo *)0x0);
                        pUVar7 = *(UnityEngine_UI_Text_o **)&(pUVar8->fields).m_Color.fields;
                        pUVar10 = player_00;
                        if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
                          uVar1 = *(uint *)&(pUVar9->fields).m_CancellationTokenSource;
                          pUVar10 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
                          *(undefined8 *)(puVar18 + -0xa8) = 0x43cfb27;
                          pUVar16 = (UI_PlayerKDRRow_o *)
                                    System_Collections_Generic_Dictionary_int__object___get_Item
                                              ((System_Collections_Generic_Dictionary_int__object__o *)pUVar7,
                                               uVar1,MethodInfo_PlayerKDRRow_get_Item);
                          if (pUVar16 != (UI_PlayerKDRRow_o *)0x0) {
                            (pUVar16->fields).player = (Photon_Realtime_Player_o *)pUVar9;
                            *(undefined8 *)(puVar18 + -0xa8) = 0x43cfb46;
                            pUVar10 = pUVar9;
                            il2cpp_runtime_helper_022b4080(&(pUVar16->fields).player);
                            *(undefined8 *)(puVar18 + -0xa8) = 0x43cfb4e;
                            UI_PlayerKDRRow__UpdateRow_42d8220(pUVar16,(MethodInfo *)pUVar10);
                            pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                      &(pUVar8->fields).m_Color.fields.b;
                            pUVar7 = (UnityEngine_UI_Text_o *)0x0;
                            pUVar15 = pUVar16;
                            if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                              *(undefined8 *)(puVar18 + -0xa8) = 0x43cfb67;
                              pUVar10 = pUVar13;
                              pUVar16 = (UI_PlayerKDRRow_o *)
                                        System_Collections_Generic_Dictionary_object__object___get_Item
                                                  (pSVar4,(Il2CppObject *)pUVar13,MethodInfo_TeamKDRRow_get_Item);
                              pUVar7 = *(UnityEngine_UI_Text_o **)&(pUVar8->fields).m_Color.fields;
                              if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
                                uVar1 = *(uint *)&(pUVar9->fields).m_CancellationTokenSource;
                                pUVar10 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
                                *(undefined8 *)(puVar18 + -0xa8) = 0x43cfb85;
                                pUVar9 = (UI_PlayerKDRRow_o *)
                                         System_Collections_Generic_Dictionary_int__object___get_Item
                                                   ((System_Collections_Generic_Dictionary_int__object__o *)
                                                    pUVar7,uVar1,MethodInfo_PlayerKDRRow_get_Item);
                                pUVar15 = pUVar16;
                                if (pUVar16 != (UI_PlayerKDRRow_o *)0x0) {
                                  *(undefined8 *)(puVar18 + -0xa8) = 0x43cfb9b;
                                  UI_TeamKDRRow__AddPlayerStats
                                            ((UI_TeamKDRRow_o *)pUVar16,pUVar9,(MethodInfo *)0x0);
                                  pUVar7 = *(UnityEngine_UI_Text_o **)&(pUVar8->fields).m_Color.fields.b;
                                  pUVar10 = pUVar9;
                                  if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
                                    *(undefined8 *)(puVar18 + -0xa8) = 0x43cfbb4;
                                    pUVar11 = (UI_TeamKDRRow_o *)
                                              System_Collections_Generic_Dictionary_object__object___get_Item
                                                        ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pUVar7,(Il2CppObject *)pUVar13,MethodInfo_TeamKDRRow_get_Item);
                                    pUVar10 = pUVar13;
                                    if (pUVar11 != (UI_TeamKDRRow_o *)0x0) {
                                      *(undefined8 *)(puVar18 + -0xa8) = 0x43cfbc3;
                                      UI_TeamKDRRow__UpdateRow(pUVar11,(MethodInfo *)0x0);
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                pUVar7 = *(UnityEngine_UI_Text_o **)&(pUVar8->fields).m_Color.fields;
                if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
                  uVar1 = *(uint *)&(pUVar9->fields).m_CancellationTokenSource;
                  pUVar10 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
                  *(undefined8 *)(puVar18 + -0xa8) = 0x43cfc04;
                  pUVar13 = (UI_PlayerKDRRow_o *)
                            System_Collections_Generic_Dictionary_int__object___get_Item
                                      ((System_Collections_Generic_Dictionary_int__object__o *)pUVar7,uVar1,
                                       MethodInfo_PlayerKDRRow_get_Item);
                  if (pUVar13 != (UI_PlayerKDRRow_o *)0x0) {
                    (pUVar13->fields).player = (Photon_Realtime_Player_o *)pUVar9;
                    *(undefined8 *)(puVar18 + -0xa8) = 0x43cfc1f;
                    il2cpp_runtime_helper_022b4080(&(pUVar13->fields).player);
                    *(undefined8 *)(puVar18 + -0xa8) = 0x43cfc27;
                    UI_PlayerKDRRow__UpdateRow_42d8220(pUVar13,(MethodInfo *)pUVar9);
                    return;
                  }
                }
              }
            }
          }
        }
      }
label_043cfc2c:
      *(undefined8 *)(puVar18 + -0xa8) = 0x43cfc31;
      il2cpp_runtime_helper_022b2c90();
      *(UI_PlayerKDRRow_o **)(puVar18 + -0xa8) = pUVar15;
      (pUVar7->fields).m_Material = (UnityEngine_Material_o *)pUVar10;
      *(undefined8 *)(puVar18 + -0xb0) = 0x43cfc51;
      il2cpp_runtime_helper_022b4080(&(pUVar7->fields).m_Material);
      UI_PlayerKDRRow__UpdateRow_42d8220((UI_PlayerKDRRow_o *)pUVar7,(MethodInfo *)pUVar10);
      return;
    }
    if ((pUVar15 == (UI_PlayerKDRRow_o *)0x0) || (*(int *)(lVar5 + 0x14) != 2)) {
      return;
    }
    auVar22._8_8_ = 1;
    auVar22._0_8_ = lVar5;
    __this = *(UI_KDRPanel_o **)(puVar18 + -0x60);
    uVar20 = *(ulong *)(puVar18 + -0x58);
    puVar18 = puVar18 + -0x50;
  } while( true );
}


// UI.KDRPanel$$RemovePlayer
// il2cpp: void UI_KDRPanel__RemovePlayer (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* player, bool redoLayout, const MethodInfo* method);
// 0x43cf480

void UI_KDRPanel__RemovePlayer
               (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *player,bool_conflict redoLayout,
               MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  UnityEngine_UI_RawImage_o *pUVar3;
  long lVar4;
  ulong uVar5;
  bool_conflict bVar6;
  long in_RAX;
  Il2CppObject *pIVar7;
  UI_TeamKDRRow_o *pUVar8;
  UI_PlayerKDRRow_o *pUVar9;
  UnityEngine_Component_o *__this_00;
  undefined8 uVar10;
  UI_PlayerKDRRow_o *pUVar11;
  UI_PlayerKDRRow_o *pUVar12;
  UI_PlayerKDRRow_o *player_00;
  UI_PlayerKDRRow_o *pUVar13;
  MethodInfo *method_00;
  ulong uVar14;
  MethodInfo *method_01;
  undefined8 unaff_RBX;
  UI_TeamKDRRow_o *unaff_RBP;
  UnityEngine_UI_Text_o *pUVar15;
  UnityEngine_UI_Text_o *pUVar16;
  UnityEngine_UI_Text_o *pUVar17;
  MethodInfo *in_R8;
  UI_PlayerKDRRow_o *unaff_R12;
  undefined8 *unaff_R13;
  undefined8 unaff_R14;
  ulong unaff_R15;
  bool bVar18;
  undefined1 auVar19 [16];
  
  uVar5 = (ulong)(uint)redoLayout;
  do {
    uVar14 = uVar5;
    *(UI_TeamKDRRow_o **)((long)register0x00000020 + -8) = unaff_RBP;
    *(ulong *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(UI_PlayerKDRRow_o **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBX;
    *(long *)((long)register0x00000020 + -0x38) = in_RAX;
    pUVar13 = (UI_PlayerKDRRow_o *)player;
    if (g_data_057ae41c == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf4a9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf4b5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf4c1;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf4cd;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf4d9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerKDRRow_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf4e5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_TeamKDRRow_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf4f1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae41c = '\x01';
    }
    if ((UI_PlayerKDRRow_o *)player == (UI_PlayerKDRRow_o *)0x0) {
      return;
    }
    pUVar15 = (((UI_PlayerKDRRow_o *)__this)->fields).id;
    pUVar16 = (UnityEngine_UI_Text_o *)0x0;
    if (pUVar15 != (UnityEngine_UI_Text_o *)0x0) {
      uVar1 = *(uint *)&(((UI_PlayerKDRRow_o *)player)->fields).m_CancellationTokenSource;
      pUVar13 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf521;
      bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_int__object__o *)pUVar15,uVar1,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar6 == '\0') {
        return;
      }
      if (*(int *)&(((UI_PlayerKDRRow_o *)__this)->fields).score == 2) {
        pUVar16 = (((UI_PlayerKDRRow_o *)__this)->fields).id;
        if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
          uVar1 = *(uint *)&(((UI_PlayerKDRRow_o *)player)->fields).m_CancellationTokenSource;
          pUVar13 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
          unaff_R13 = &MethodInfo_PlayerKDRRow_get_Item;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf554;
          pIVar7 = System_Collections_Generic_Dictionary_int__object___get_Item
                             ((System_Collections_Generic_Dictionary_int__object__o *)pUVar16,uVar1,
                              MethodInfo_PlayerKDRRow_get_Item);
          if (pIVar7 != (Il2CppObject *)0x0) {
            pUVar3 = (((UI_PlayerKDRRow_o *)__this)->fields).weapon;
            pUVar16 = (UnityEngine_UI_Text_o *)0x0;
            if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
              unaff_R12 = pIVar7[6].monitor;
              unaff_RBP = (UI_TeamKDRRow_o *)&MethodInfo_Boolean_ContainsKey;
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf581;
              pUVar13 = unaff_R12;
              bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                ((System_Collections_Generic_Dictionary_object__object__o *)pUVar3,
                                 (Il2CppObject *)unaff_R12,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar6 == '\0') {
                unaff_R12 = *(UI_PlayerKDRRow_o **)&(((UI_PlayerKDRRow_o *)__this)->fields).isSet;
              }
              pUVar3 = (((UI_PlayerKDRRow_o *)__this)->fields).weapon;
              pUVar16 = (UnityEngine_UI_Text_o *)0x0;
              if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf5a2;
                pUVar13 = unaff_R12;
                bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                  ((System_Collections_Generic_Dictionary_object__object__o *)pUVar3,
                                   (Il2CppObject *)unaff_R12,MethodInfo_Boolean_ContainsKey);
                if ((char)bVar6 == '\0') {
label_043cf65c:
                  if ((char)uVar14 != '\0') {
label_043cf661:
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf669;
                    UI_KDRPanel__ReorganizeLayout(__this,(MethodInfo *)pUVar13);
                  }
                  goto label_043cf669;
                }
                pUVar3 = (((UI_PlayerKDRRow_o *)__this)->fields).weapon;
                pUVar16 = (UnityEngine_UI_Text_o *)0x0;
                if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf5c9;
                  pUVar13 = unaff_R12;
                  pUVar8 = (UI_TeamKDRRow_o *)
                           System_Collections_Generic_Dictionary_object__object___get_Item
                                     ((System_Collections_Generic_Dictionary_object__object__o *)pUVar3,
                                      (Il2CppObject *)unaff_R12,MethodInfo_TeamKDRRow_get_Item);
                  pUVar16 = (((UI_PlayerKDRRow_o *)__this)->fields).id;
                  if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
                    uVar1 = *(uint *)&(((UI_PlayerKDRRow_o *)player)->fields).m_CancellationTokenSource;
                    pUVar13 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf5e6;
                    pUVar9 = (UI_PlayerKDRRow_o *)
                             System_Collections_Generic_Dictionary_int__object___get_Item
                                       ((System_Collections_Generic_Dictionary_int__object__o *)pUVar16,uVar1,
                                        MethodInfo_PlayerKDRRow_get_Item);
                    unaff_RBP = pUVar8;
                    if (pUVar8 != (UI_TeamKDRRow_o *)0x0) {
                      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf5fc;
                      UI_TeamKDRRow__RemovePlayerStats(pUVar8,pUVar9,(MethodInfo *)0x0);
                      pUVar16 = (UnityEngine_UI_Text_o *)(((UI_PlayerKDRRow_o *)__this)->fields).weapon;
                      unaff_R13 = &MethodInfo_TeamKDRRow_get_Item;
                      pUVar13 = pUVar9;
                      if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
                        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf61c;
                        pUVar13 = unaff_R12;
                        pIVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                                           ((System_Collections_Generic_Dictionary_object__object__o *)pUVar16
                                            ,(Il2CppObject *)unaff_R12,MethodInfo_TeamKDRRow_get_Item);
                        if ((pIVar7 != (Il2CppObject *)0x0) &&
                           (pUVar16 = (UnityEngine_UI_Text_o *)(((UI_PlayerKDRRow_o *)__this)->fields).weapon,
                           pUVar16 != (UnityEngine_UI_Text_o *)0x0)) {
                          uVar1 = *(uint *)&pIVar7[4].monitor;
                          unaff_RBP = (UI_TeamKDRRow_o *)(ulong)uVar1;
                          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf641;
                          pUVar13 = unaff_R12;
                          pUVar8 = (UI_TeamKDRRow_o *)
                                   System_Collections_Generic_Dictionary_object__object___get_Item
                                             ((System_Collections_Generic_Dictionary_object__object__o *)
                                              pUVar16,(Il2CppObject *)unaff_R12,MethodInfo_TeamKDRRow_get_Item);
                          if (pUVar8 != (UI_TeamKDRRow_o *)0x0) {
                            pUVar13 = (UI_PlayerKDRRow_o *)0x0;
                            if (0 < (int)uVar1) {
                              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf65c;
                              UI_TeamKDRRow__UpdateRow(pUVar8,(MethodInfo *)0x0);
                              goto label_043cf65c;
                            }
                            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf703;
                            unaff_RBP = (UI_TeamKDRRow_o *)
                                        UnityEngine_Component__get_gameObject
                                                  ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
                            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf71e;
                              il2cpp_runtime_helper_02337ed0();
                            }
                            pUVar13 = (UI_PlayerKDRRow_o *)0x0;
                            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf728;
                            UnityEngine_Object__Destroy_4e01c60
                                      ((UnityEngine_Object_o *)unaff_RBP,(MethodInfo *)0x0);
                            pUVar3 = (((UI_PlayerKDRRow_o *)__this)->fields).weapon;
                            pUVar16 = (UnityEngine_UI_Text_o *)0x0;
                            if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
                              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf743;
                              pUVar13 = unaff_R12;
                              System_Collections_Generic_Dictionary_object__object___Remove
                                        ((System_Collections_Generic_Dictionary_object__object__o *)pUVar3,
                                         (Il2CppObject *)unaff_R12,MethodInfo_Boolean_Remove);
                              if ((char)uVar14 == '\0') goto label_043cf669;
                              goto label_043cf661;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
label_043cf669:
        pUVar16 = (((UI_PlayerKDRRow_o *)__this)->fields).id;
        if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
          uVar1 = *(uint *)&(((UI_PlayerKDRRow_o *)player)->fields).m_CancellationTokenSource;
          pUVar13 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf689;
          __this_00 = (UnityEngine_Component_o *)
                      System_Collections_Generic_Dictionary_int__object___get_Item
                                ((System_Collections_Generic_Dictionary_int__object__o *)pUVar16,uVar1,
                                 MethodInfo_PlayerKDRRow_get_Item);
          if (__this_00 != (UnityEngine_Component_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf69c;
            unaff_RBP = (UI_TeamKDRRow_o *)UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf6b7;
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar13 = (UI_PlayerKDRRow_o *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf6c1;
            UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)unaff_RBP,(MethodInfo *)0x0);
            pUVar15 = (((UI_PlayerKDRRow_o *)__this)->fields).id;
            pUVar16 = (UnityEngine_UI_Text_o *)0x0;
            if (pUVar15 != (UnityEngine_UI_Text_o *)0x0) {
              System_Collections_Generic_Dictionary_int__object___Remove
                        ((System_Collections_Generic_Dictionary_int__object__o *)pUVar15,
                         *(int32_t *)&(((UI_PlayerKDRRow_o *)player)->fields).m_CancellationTokenSource,
                         MethodInfo_Boolean_Remove);
              return;
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf756;
    uVar10 = il2cpp_runtime_helper_022b2c90();
    *(Photon_Realtime_Player_o **)((long)register0x00000020 + -0x40) = player;
    *(UI_KDRPanel_o **)((long)register0x00000020 + -0x48) = __this;
    *(undefined8 *)((long)register0x00000020 + -0x50) = uVar10;
    player = (Photon_Realtime_Player_o *)pUVar13;
    __this = (UI_KDRPanel_o *)pUVar16;
    if (g_data_057ae41e == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf77f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      __this = (UI_KDRPanel_o *)&MethodInfo_Int32_get_Value;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf78b;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae41e = '\x01';
    }
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0xb0), lVar4 != 0)) {
      UI_KDRPanel__AddPlayer
                ((UI_KDRPanel_o *)pUVar16,(Photon_Realtime_Player_o *)pUVar13,1,
                 (uint)(pUVar13 != (UI_PlayerKDRRow_o *)0x0 && *(int *)(lVar4 + 0x14) == 2),in_R8);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf7e6;
    uVar10 = il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_UI_Text_o **)((long)register0x00000020 + -0x58) = pUVar16;
    *(UI_PlayerKDRRow_o **)((long)register0x00000020 + -0x60) = pUVar13;
    *(undefined8 *)((long)register0x00000020 + -0x68) = uVar10;
    pUVar13 = (UI_PlayerKDRRow_o *)player;
    pUVar15 = (UnityEngine_UI_Text_o *)__this;
    if (g_data_057ae41f == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cf80f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      pUVar15 = (UnityEngine_UI_Text_o *)&MethodInfo_Int32_get_Value;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cf81b;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae41f = '\x01';
    }
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar4 == 0) || (in_RAX = *(long *)(lVar4 + 0xb0), in_RAX == 0)) {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cf877;
      auVar19 = il2cpp_runtime_helper_022b2c90();
      pUVar17 = auVar19._8_8_;
      *(UI_TeamKDRRow_o **)((long)register0x00000020 + -0x70) = unaff_RBP;
      *(ulong *)((long)register0x00000020 + -0x78) = uVar14;
      *(UI_KDRPanel_o **)((long)register0x00000020 + -0x80) = __this;
      *(undefined8 **)((long)register0x00000020 + -0x88) = unaff_R13;
      *(UI_PlayerKDRRow_o **)((long)register0x00000020 + -0x90) = unaff_R12;
      *(Photon_Realtime_Player_o **)((long)register0x00000020 + -0x98) = player;
      *(long *)((long)register0x00000020 + -0xa0) = auVar19._0_8_;
      pUVar9 = pUVar13;
      pUVar16 = pUVar15;
      if (g_data_057ae420 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cf8a9;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cf8b5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cf8c1;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cf8cd;
        il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerKDRRow_get_Item);
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cf8d9;
        il2cpp_runtime_helper_023445d0(&MethodInfo_TeamKDRRow_get_Item);
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cf8e5;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cf8f1;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cf8fd;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        pUVar16 = (UnityEngine_UI_Text_o *)&MethodInfo_Int32_get_Value;
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cf909;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae420 = '\x01';
      }
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0;
      lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0xb0), lVar4 != 0)) {
        iVar2 = *(int *)(lVar4 + 0x14);
        pUVar16 = TypeInfo_PlayerProperty;
        if (iVar2 == 0) {
          bVar18 = false;
          iVar2 = *(int *)((long)&(TypeInfo_PlayerProperty->fields).m_Corners + 4);
        }
        else if (iVar2 == 1) {
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cf96e;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cf975;
          pUVar11 = (UI_PlayerKDRRow_o *)Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
          bVar18 = pUVar11 == pUVar13;
          iVar2 = *(int *)((long)&(TypeInfo_PlayerProperty->fields).m_Corners + 4);
          pUVar16 = TypeInfo_PlayerProperty;
        }
        else {
          bVar18 = true;
          iVar2 = *(int *)((long)&(TypeInfo_PlayerProperty->fields).m_Corners + 4);
        }
        TypeInfo_PlayerProperty = pUVar16;
        if (iVar2 == 0) {
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cf9ab;
          il2cpp_runtime_helper_02337ed0();
        }
        player = (Photon_Realtime_Player_o *)&TypeInfo_PlayerProperty;
        if (pUVar17 != (UnityEngine_UI_Text_o *)0x0) {
          pUVar9 = *(UI_PlayerKDRRow_o **)
                    &(((TypeInfo_PlayerProperty->fields).m_ParentMask)->fields).m_ShouldRecalculateClipRects;
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cf9d7;
          method_00 = MethodInfo_Boolean_TryGetValue;
          System_Collections_Generic_Dictionary_object__object___TryGetValue
                    ((System_Collections_Generic_Dictionary_object__object__o *)pUVar17,(Il2CppObject *)pUVar9
                     ,(Il2CppObject **)((long)register0x00000020 + -0xa0),(MethodInfo_3106990 *)MethodInfo_Boolean_TryGetValue);
          if (*(long *)((long)register0x00000020 + -0xa0) != 0) {
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cf9eb;
            UI_KDRPanel__RemovePlayer
                      ((UI_KDRPanel_o *)pUVar15,(Photon_Realtime_Player_o *)pUVar13,0,method_00);
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cf9ff;
            UI_KDRPanel__AddPlayer
                      ((UI_KDRPanel_o *)pUVar15,(Photon_Realtime_Player_o *)pUVar13,1,(uint)bVar18,in_R8);
            return;
          }
          pUVar16 = pUVar17;
          if (pUVar13 != (UI_PlayerKDRRow_o *)0x0) {
            if (*(char *)((long)&(pUVar13->fields).m_CancellationTokenSource + 4) == '\0') {
              lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0xb0), lVar4 == 0)) goto label_043cfc2c;
              if (*(int *)(lVar4 + 0x14) != 2) {
                return;
              }
            }
            pUVar17 = *(UnityEngine_UI_Text_o **)&(pUVar15->fields).m_Color.fields;
            pUVar16 = (UnityEngine_UI_Text_o *)0x0;
            if (pUVar17 != (UnityEngine_UI_Text_o *)0x0) {
              uVar1 = *(uint *)&(pUVar13->fields).m_CancellationTokenSource;
              pUVar9 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cfa6d;
              bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                ((System_Collections_Generic_Dictionary_int__object__o *)pUVar17,uVar1,
                                 MethodInfo_Boolean_ContainsKey);
              if ((char)bVar6 == '\0') {
                return;
              }
              if ((pUVar15->fields).m_RaycastTarget == 2) {
                *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cfa87;
                pUVar9 = pUVar13;
                pUVar11 = (UI_PlayerKDRRow_o *)
                          UI_KDRPanel__GetPlayerTeam
                                    ((UI_KDRPanel_o *)pUVar15,(Photon_Realtime_Player_o *)pUVar13,method_01);
                pUVar3 = *(UnityEngine_UI_RawImage_o **)&(pUVar15->fields).m_Color.fields.b;
                pUVar16 = (UnityEngine_UI_Text_o *)0x0;
                if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cfaa9;
                  pUVar9 = pUVar11;
                  bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                    ((System_Collections_Generic_Dictionary_object__object__o *)pUVar3,
                                     (Il2CppObject *)pUVar11,MethodInfo_Boolean_ContainsKey);
                  if ((char)bVar6 == '\0') {
                    return;
                  }
                  pUVar3 = *(UnityEngine_UI_RawImage_o **)&(pUVar15->fields).m_Color.fields.b;
                  pUVar16 = (UnityEngine_UI_Text_o *)0x0;
                  if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cfad1;
                    pUVar9 = pUVar11;
                    pUVar12 = (UI_PlayerKDRRow_o *)
                              System_Collections_Generic_Dictionary_object__object___get_Item
                                        ((System_Collections_Generic_Dictionary_object__object__o *)pUVar3,
                                         (Il2CppObject *)pUVar11,MethodInfo_TeamKDRRow_get_Item);
                    pUVar16 = *(UnityEngine_UI_Text_o **)&(pUVar15->fields).m_Color.fields;
                    if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
                      uVar1 = *(uint *)&(pUVar13->fields).m_CancellationTokenSource;
                      pUVar9 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
                      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cfaf6;
                      player_00 = (UI_PlayerKDRRow_o *)
                                  System_Collections_Generic_Dictionary_int__object___get_Item
                                            ((System_Collections_Generic_Dictionary_int__object__o *)pUVar16,
                                             uVar1,MethodInfo_PlayerKDRRow_get_Item);
                      player = (Photon_Realtime_Player_o *)pUVar12;
                      if (pUVar12 != (UI_PlayerKDRRow_o *)0x0) {
                        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cfb0c;
                        UI_TeamKDRRow__RemovePlayerStats
                                  ((UI_TeamKDRRow_o *)pUVar12,player_00,(MethodInfo *)0x0);
                        pUVar16 = *(UnityEngine_UI_Text_o **)&(pUVar15->fields).m_Color.fields;
                        pUVar9 = player_00;
                        if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
                          uVar1 = *(uint *)&(pUVar13->fields).m_CancellationTokenSource;
                          pUVar9 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
                          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cfb27;
                          pUVar12 = (UI_PlayerKDRRow_o *)
                                    System_Collections_Generic_Dictionary_int__object___get_Item
                                              ((System_Collections_Generic_Dictionary_int__object__o *)pUVar16
                                               ,uVar1,MethodInfo_PlayerKDRRow_get_Item);
                          if (pUVar12 != (UI_PlayerKDRRow_o *)0x0) {
                            (pUVar12->fields).player = (Photon_Realtime_Player_o *)pUVar13;
                            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cfb46;
                            pUVar9 = pUVar13;
                            il2cpp_runtime_helper_022b4080(&(pUVar12->fields).player);
                            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cfb4e;
                            UI_PlayerKDRRow__UpdateRow_42d8220(pUVar12,(MethodInfo *)pUVar9);
                            pUVar3 = *(UnityEngine_UI_RawImage_o **)&(pUVar15->fields).m_Color.fields.b;
                            pUVar16 = (UnityEngine_UI_Text_o *)0x0;
                            player = (Photon_Realtime_Player_o *)pUVar12;
                            if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
                              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cfb67;
                              pUVar9 = pUVar11;
                              pUVar12 = (UI_PlayerKDRRow_o *)
                                        System_Collections_Generic_Dictionary_object__object___get_Item
                                                  ((System_Collections_Generic_Dictionary_object__object__o *)
                                                   pUVar3,(Il2CppObject *)pUVar11,MethodInfo_TeamKDRRow_get_Item);
                              pUVar16 = *(UnityEngine_UI_Text_o **)&(pUVar15->fields).m_Color.fields;
                              if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
                                uVar1 = *(uint *)&(pUVar13->fields).m_CancellationTokenSource;
                                pUVar9 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
                                *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cfb85;
                                pUVar13 = (UI_PlayerKDRRow_o *)
                                          System_Collections_Generic_Dictionary_int__object___get_Item
                                                    ((System_Collections_Generic_Dictionary_int__object__o *)
                                                     pUVar16,uVar1,MethodInfo_PlayerKDRRow_get_Item);
                                player = (Photon_Realtime_Player_o *)pUVar12;
                                if (pUVar12 != (UI_PlayerKDRRow_o *)0x0) {
                                  *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cfb9b;
                                  UI_TeamKDRRow__AddPlayerStats
                                            ((UI_TeamKDRRow_o *)pUVar12,pUVar13,(MethodInfo *)0x0);
                                  pUVar16 = *(UnityEngine_UI_Text_o **)&(pUVar15->fields).m_Color.fields.b;
                                  pUVar9 = pUVar13;
                                  if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
                                    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cfbb4;
                                    pUVar8 = (UI_TeamKDRRow_o *)
                                             System_Collections_Generic_Dictionary_object__object___get_Item
                                                       ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pUVar16,(Il2CppObject *)pUVar11,MethodInfo_TeamKDRRow_get_Item);
                                    pUVar9 = pUVar11;
                                    if (pUVar8 != (UI_TeamKDRRow_o *)0x0) {
                                      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cfbc3;
                                      UI_TeamKDRRow__UpdateRow(pUVar8,(MethodInfo *)0x0);
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                pUVar16 = *(UnityEngine_UI_Text_o **)&(pUVar15->fields).m_Color.fields;
                if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
                  uVar1 = *(uint *)&(pUVar13->fields).m_CancellationTokenSource;
                  pUVar9 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
                  *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cfc04;
                  pUVar11 = (UI_PlayerKDRRow_o *)
                            System_Collections_Generic_Dictionary_int__object___get_Item
                                      ((System_Collections_Generic_Dictionary_int__object__o *)pUVar16,uVar1,
                                       MethodInfo_PlayerKDRRow_get_Item);
                  if (pUVar11 != (UI_PlayerKDRRow_o *)0x0) {
                    (pUVar11->fields).player = (Photon_Realtime_Player_o *)pUVar13;
                    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cfc1f;
                    il2cpp_runtime_helper_022b4080(&(pUVar11->fields).player);
                    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cfc27;
                    UI_PlayerKDRRow__UpdateRow_42d8220(pUVar11,(MethodInfo *)pUVar13);
                    return;
                  }
                }
              }
            }
          }
        }
      }
label_043cfc2c:
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43cfc31;
      il2cpp_runtime_helper_022b2c90();
      *(Photon_Realtime_Player_o **)((long)register0x00000020 + -0xa8) = player;
      (pUVar16->fields).m_Material = (UnityEngine_Material_o *)pUVar9;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x43cfc51;
      il2cpp_runtime_helper_022b4080(&(pUVar16->fields).m_Material);
      UI_PlayerKDRRow__UpdateRow_42d8220((UI_PlayerKDRRow_o *)pUVar16,(MethodInfo *)pUVar9);
      return;
    }
    if (((UI_PlayerKDRRow_o *)player == (UI_PlayerKDRRow_o *)0x0) || (*(int *)(in_RAX + 0x14) != 2)) {
      return;
    }
    unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0x60);
    unaff_R14 = *(undefined8 *)((long)register0x00000020 + -0x58);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x50);
    uVar5 = 1;
    unaff_R15 = uVar14;
  } while( true );
}


// UI.KDRPanel$$DestroyAndRecreate
// il2cpp: void UI_KDRPanel__DestroyAndRecreate (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x43ce430

void UI_KDRPanel__DestroyAndRecreate(UI_KDRPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  long lVar5;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_05;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_06;
  bool_conflict bVar6;
  UnityEngine_Object_o *pUVar7;
  MethodInfo *method_00;
  Photon_Realtime_Player_array *pPVar8;
  ulong uVar9;
  long *plVar10;
  UnityEngine_Component_o *__this_07;
  UnityEngine_Component_o *__this_08;
  ulong uVar11;
  MethodInfo *in_R8;
  uint isVisible;
  undefined1 auVar12 [12];
  Il2CppType **ppIVar13;
  Il2CppRGCTXData *pIVar14;
  _union_231609 _Var15;
  char *pcVar16;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar17;
  undefined1 local_88 [56];
  Il2CppRGCTXData *pIStack_50;
  _union_231609 local_48;
  char *pcStack_40;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *local_38;
  
  if (g_data_057ae41d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_Int32_UI_Play);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_UI_Tea);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_UI_TeamKDRRow_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_Int32_UI_PlayerKDRRow_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TeamKDRRow_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerKDRRow_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae41d = '\x01';
  }
  local_88._16_8_ = (InvokerMethod)0x0;
  local_88._24_8_ = (char *)0x0;
  local_88._0_8_ = (Il2CppType **)0x0;
  local_88._8_8_ = (Il2CppRGCTXData *)0x0;
  local_88._32_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  _Var15.genericMethod = (InvokerMethod)0x0;
  pcVar16 = (char *)0x0;
  ppIVar13 = (Il2CppType **)0x0;
  pIVar14 = (Il2CppRGCTXData *)0x0;
  pSVar17 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
  if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_043ce821;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)(local_88 + 0x30),pSVar3,
             MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_Int32_UI_Play);
  local_88._32_8_ = local_38;
  local_88._16_8_ = local_48;
  local_88._24_8_ = pcStack_40;
  local_88._0_8_ = local_88._48_8_;
  local_88._8_8_ = pIStack_50;
  do {
    __this_00.fields._8_8_ = pIVar14;
    __this_00.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)ppIVar13;
    __this_00.fields._current.fields.key = _Var15.genericMethod;
    __this_00.fields._current.fields.value = (Il2CppObject *)pcVar16;
    __this_00.fields._32_8_ = pSVar17;
    bVar6 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext
                      (__this_00,(MethodInfo_3243CF0 *)local_88);
    if ((char)bVar6 == '\0') {
      __this_01.fields._8_8_ = pIVar14;
      __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)ppIVar13;
      __this_01.fields._current.fields.key = _Var15.genericMethod;
      __this_01.fields._current.fields.value = (Il2CppObject *)pcVar16;
      __this_01.fields._32_8_ = pSVar17;
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
                (__this_01,(MethodInfo_3243E00 *)local_88);
      pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
      if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_043ce821;
      System_Collections_Generic_Dictionary_int__object___Clear(pSVar3,MethodInfo_Void_Clear);
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._teamHeaders;
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043ce821;
      System_Collections_Generic_Dictionary_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)(local_88 + 0x30),pSVar4,
                 MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_UI_Tea);
      ppIVar13 = (Il2CppType **)local_88._48_8_;
      pIVar14 = pIStack_50;
      _Var15 = local_48;
      pcVar16 = pcStack_40;
      pSVar17 = local_38;
      while( true ) {
        __this_02.fields._8_8_ = pIVar14;
        __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)ppIVar13;
        __this_02.fields._current.fields.key = _Var15.genericMethod;
        __this_02.fields._current.fields.value = (Il2CppObject *)pcVar16;
        __this_02.fields._32_8_ = pSVar17;
        bVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                          (__this_02,(MethodInfo_3251160 *)&stack0xffffffffffffff48);
        if ((char)bVar6 == '\0') {
          __this_03.fields._8_8_ = pIVar14;
          __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)ppIVar13;
          __this_03.fields._current.fields.key = _Var15.genericMethod;
          __this_03.fields._current.fields.value = (Il2CppObject *)pcVar16;
          __this_03.fields._32_8_ = pSVar17;
          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                    (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff48);
          goto label_043ce6e1;
        }
        il2cpp_runtime_helper_03343020(&stack0xffffffffffffff48);
        if (__this_08 == (UnityEngine_Component_o *)0x0) break;
        pUVar7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_08,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__Destroy_4e01c60(pUVar7,(MethodInfo *)0x0);
      }
label_043ce817:
      il2cpp_runtime_helper_022b2c90();
      do {
        il2cpp_runtime_helper_022b2ca0();
label_043ce821:
        do {
          do {
            do {
              auVar12 = il2cpp_runtime_helper_022b2c90();
              if (auVar12._8_4_ != 1) {
                __this_05.fields._8_8_ = pIVar14;
                __this_05.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)ppIVar13;
                __this_05.fields._current.fields.key = _Var15.genericMethod;
                __this_05.fields._current.fields.value = (Il2CppObject *)pcVar16;
                __this_05.fields._32_8_ = pSVar17;
                System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                          (__this_05,(MethodInfo_3251280 *)&stack0xffffffffffffff48);
label_043ce927:
                _Unwind_Resume(auVar12._0_8_);
              }
              plVar10 = (long *)__cxa_begin_catch(auVar12._0_8_);
              lVar5 = *plVar10;
              __cxa_end_catch();
              __this_04.fields._8_8_ = pIVar14;
              __this_04.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)ppIVar13
              ;
              __this_04.fields._current.fields.key = _Var15.genericMethod;
              __this_04.fields._current.fields.value = (Il2CppObject *)pcVar16;
              __this_04.fields._32_8_ = pSVar17;
              System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                        (__this_04,(MethodInfo_3251280 *)&stack0xffffffffffffff48);
              if (lVar5 != 0) {
                il2cpp_runtime_helper_022fefe0(lVar5);
                __this_06.fields._8_8_ = pIVar14;
                __this_06.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)ppIVar13;
                __this_06.fields._current.fields.key = _Var15.genericMethod;
                __this_06.fields._current.fields.value = (Il2CppObject *)pcVar16;
                __this_06.fields._32_8_ = pSVar17;
                System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
                          (__this_06,(MethodInfo_3243E00 *)local_88);
                goto label_043ce927;
              }
label_043ce6e1:
              pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._teamHeaders;
            } while (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0);
            System_Collections_Generic_Dictionary_object__object___Clear(pSVar4,MethodInfo_Void_Clear);
            lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
          } while ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0xb0), lVar5 == 0));
          iVar1 = *(int *)(lVar5 + 0x14);
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          isVisible = 0;
          method_00 = (MethodInfo *)Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
          UI_KDRPanel__AddPlayer(__this,(Photon_Realtime_Player_o *)method_00,0,(uint)(iVar1 != 0),in_R8);
          if (iVar1 != 0) {
            lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
            if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0xb0), lVar5 == 0)) goto label_043ce821;
            isVisible = (uint)(*(int *)(lVar5 + 0x14) != 1);
          }
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pPVar8 = Photon_Pun_PhotonNetwork__get_PlayerListOthers((MethodInfo *)0x0);
        } while (pPVar8 == (Photon_Realtime_Player_array *)0x0);
        if ((int)pPVar8->max_length < 1) {
label_043ce7f8:
          UI_KDRPanel__ReorganizeLayout(__this,method_00);
          return;
        }
        uVar9 = pPVar8->max_length & 0xffffffff;
        uVar11 = 0;
        while (uVar11 < uVar9) {
          method_00 = (MethodInfo *)pPVar8->m_Items[uVar11];
          UI_KDRPanel__AddPlayer(__this,(Photon_Realtime_Player_o *)method_00,0,isVisible,in_R8);
          uVar11 = uVar11 + 1;
          uVar2 = (uint)pPVar8->max_length;
          uVar9 = (ulong)uVar2;
          if ((long)(int)uVar2 <= (long)uVar11) goto label_043ce7f8;
        }
      } while( true );
    }
    il2cpp_runtime_helper_02776c30((MethodInfo_3243CF0 *)local_88);
    if (__this_07 == (UnityEngine_Component_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      goto label_043ce817;
    }
    pUVar7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_07,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar7,(MethodInfo *)0x0);
  } while( true );
}


// UI.KDRPanel$$OnPlayerEnteredRoom
// il2cpp: void UI_KDRPanel__OnPlayerEnteredRoom (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* newPlayer, const MethodInfo* method);
// 0x43cf760

void UI_KDRPanel__OnPlayerEnteredRoom
               (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *newPlayer,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  long lVar4;
  UnityEngine_UI_RawImage_o *pUVar5;
  undefined8 uVar6;
  bool_conflict bVar7;
  Il2CppObject *pIVar8;
  UI_TeamKDRRow_o *pUVar9;
  UI_PlayerKDRRow_o *pUVar10;
  UnityEngine_Component_o *__this_01;
  undefined8 in_RAX;
  undefined8 uVar11;
  UI_PlayerKDRRow_o *pUVar12;
  UI_PlayerKDRRow_o *pUVar13;
  UI_PlayerKDRRow_o *player;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_UI_Text_o *unaff_RBX;
  UI_TeamKDRRow_o *unaff_RBP;
  UI_PlayerKDRRow_o *method_02;
  UnityEngine_UI_Text_o *pUVar14;
  UnityEngine_UI_Text_o *pUVar15;
  UnityEngine_UI_Text_o *pUVar16;
  MethodInfo *in_R8;
  UI_PlayerKDRRow_o *unaff_R12;
  undefined8 *unaff_R13;
  UI_PlayerKDRRow_o *unaff_R14;
  undefined8 unaff_R15;
  bool bVar17;
  undefined1 auVar18 [16];
  
  do {
    *(UI_PlayerKDRRow_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(UnityEngine_UI_Text_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    unaff_R14 = (UI_PlayerKDRRow_o *)newPlayer;
    unaff_RBX = (UnityEngine_UI_Text_o *)__this;
    if (g_data_057ae41e == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43cf77f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      unaff_RBX = (UnityEngine_UI_Text_o *)&MethodInfo_Int32_get_Value;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43cf78b;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae41e = '\x01';
    }
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0xb0), lVar4 != 0)) {
      UI_KDRPanel__AddPlayer
                (__this,newPlayer,1,
                 (uint)((UI_PlayerKDRRow_o *)newPlayer != (UI_PlayerKDRRow_o *)0x0 &&
                       *(int *)(lVar4 + 0x14) == 2),in_R8);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43cf7e6;
    uVar11 = il2cpp_runtime_helper_022b2c90();
    *(UI_KDRPanel_o **)((long)register0x00000020 + -0x20) = __this;
    *(Photon_Realtime_Player_o **)((long)register0x00000020 + -0x28) = newPlayer;
    *(undefined8 *)((long)register0x00000020 + -0x30) = uVar11;
    pUVar10 = unaff_R14;
    pUVar14 = unaff_RBX;
    if (g_data_057ae41f == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x43cf80f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      pUVar14 = (UnityEngine_UI_Text_o *)&MethodInfo_Int32_get_Value;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x43cf81b;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae41f = '\x01';
    }
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0xb0), lVar4 == 0)) {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x43cf877;
      auVar18 = il2cpp_runtime_helper_022b2c90();
      pUVar16 = auVar18._8_8_;
      *(UI_TeamKDRRow_o **)((long)register0x00000020 + -0x38) = unaff_RBP;
      *(undefined8 *)((long)register0x00000020 + -0x40) = unaff_R15;
      *(UnityEngine_UI_Text_o **)((long)register0x00000020 + -0x48) = unaff_RBX;
      *(undefined8 **)((long)register0x00000020 + -0x50) = unaff_R13;
      *(UI_PlayerKDRRow_o **)((long)register0x00000020 + -0x58) = unaff_R12;
      *(UI_PlayerKDRRow_o **)((long)register0x00000020 + -0x60) = unaff_R14;
      *(long *)((long)register0x00000020 + -0x68) = auVar18._0_8_;
      method_02 = pUVar10;
      pUVar15 = pUVar14;
      if (g_data_057ae420 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cf8a9;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cf8b5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cf8c1;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cf8cd;
        il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerKDRRow_get_Item);
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cf8d9;
        il2cpp_runtime_helper_023445d0(&MethodInfo_TeamKDRRow_get_Item);
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cf8e5;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cf8f1;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cf8fd;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        pUVar15 = (UnityEngine_UI_Text_o *)&MethodInfo_Int32_get_Value;
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cf909;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae420 = '\x01';
      }
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
      lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0xb0), lVar4 != 0)) {
        iVar2 = *(int *)(lVar4 + 0x14);
        pUVar15 = TypeInfo_PlayerProperty;
        if (iVar2 == 0) {
          bVar17 = false;
          iVar2 = *(int *)((long)&(TypeInfo_PlayerProperty->fields).m_Corners + 4);
        }
        else if (iVar2 == 1) {
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cf96e;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cf975;
          pUVar12 = (UI_PlayerKDRRow_o *)Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
          bVar17 = pUVar12 == pUVar10;
          iVar2 = *(int *)((long)&(TypeInfo_PlayerProperty->fields).m_Corners + 4);
          pUVar15 = TypeInfo_PlayerProperty;
        }
        else {
          bVar17 = true;
          iVar2 = *(int *)((long)&(TypeInfo_PlayerProperty->fields).m_Corners + 4);
        }
        TypeInfo_PlayerProperty = pUVar15;
        if (iVar2 == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cf9ab;
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_R14 = (UI_PlayerKDRRow_o *)&TypeInfo_PlayerProperty;
        if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
          method_02 = *(UI_PlayerKDRRow_o **)
                       &(((TypeInfo_PlayerProperty->fields).m_ParentMask)->fields).m_ShouldRecalculateClipRects;
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cf9d7;
          method_00 = MethodInfo_Boolean_TryGetValue;
          System_Collections_Generic_Dictionary_object__object___TryGetValue
                    ((System_Collections_Generic_Dictionary_object__object__o *)pUVar16,
                     (Il2CppObject *)method_02,(Il2CppObject **)((long)register0x00000020 + -0x68),
                     (MethodInfo_3106990 *)MethodInfo_Boolean_TryGetValue);
          if (*(long *)((long)register0x00000020 + -0x68) != 0) {
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cf9eb;
            UI_KDRPanel__RemovePlayer
                      ((UI_KDRPanel_o *)pUVar14,(Photon_Realtime_Player_o *)pUVar10,0,method_00);
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cf9ff;
            UI_KDRPanel__AddPlayer
                      ((UI_KDRPanel_o *)pUVar14,(Photon_Realtime_Player_o *)pUVar10,1,(uint)bVar17,in_R8);
            return;
          }
          pUVar15 = pUVar16;
          if (pUVar10 != (UI_PlayerKDRRow_o *)0x0) {
            if (*(char *)((long)&(pUVar10->fields).m_CancellationTokenSource + 4) == '\0') {
              lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0xb0), lVar4 == 0)) goto label_043cfc2c;
              if (*(int *)(lVar4 + 0x14) != 2) {
                return;
              }
            }
            pUVar16 = *(UnityEngine_UI_Text_o **)&(pUVar14->fields).m_Color.fields;
            pUVar15 = (UnityEngine_UI_Text_o *)0x0;
            if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
              uVar1 = *(uint *)&(pUVar10->fields).m_CancellationTokenSource;
              method_02 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
              *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cfa6d;
              bVar7 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                ((System_Collections_Generic_Dictionary_int__object__o *)pUVar16,uVar1,
                                 MethodInfo_Boolean_ContainsKey);
              if ((char)bVar7 == '\0') {
                return;
              }
              if ((pUVar14->fields).m_RaycastTarget == 2) {
                *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cfa87;
                method_02 = pUVar10;
                pUVar12 = (UI_PlayerKDRRow_o *)
                          UI_KDRPanel__GetPlayerTeam
                                    ((UI_KDRPanel_o *)pUVar14,(Photon_Realtime_Player_o *)pUVar10,method_01);
                pUVar5 = *(UnityEngine_UI_RawImage_o **)&(pUVar14->fields).m_Color.fields.b;
                pUVar15 = (UnityEngine_UI_Text_o *)0x0;
                if (pUVar5 != (UnityEngine_UI_RawImage_o *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cfaa9;
                  method_02 = pUVar12;
                  bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                    ((System_Collections_Generic_Dictionary_object__object__o *)pUVar5,
                                     (Il2CppObject *)pUVar12,MethodInfo_Boolean_ContainsKey);
                  if ((char)bVar7 == '\0') {
                    return;
                  }
                  pUVar5 = *(UnityEngine_UI_RawImage_o **)&(pUVar14->fields).m_Color.fields.b;
                  pUVar15 = (UnityEngine_UI_Text_o *)0x0;
                  if (pUVar5 != (UnityEngine_UI_RawImage_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cfad1;
                    method_02 = pUVar12;
                    pUVar13 = (UI_PlayerKDRRow_o *)
                              System_Collections_Generic_Dictionary_object__object___get_Item
                                        ((System_Collections_Generic_Dictionary_object__object__o *)pUVar5,
                                         (Il2CppObject *)pUVar12,MethodInfo_TeamKDRRow_get_Item);
                    pUVar15 = *(UnityEngine_UI_Text_o **)&(pUVar14->fields).m_Color.fields;
                    if (pUVar15 != (UnityEngine_UI_Text_o *)0x0) {
                      uVar1 = *(uint *)&(pUVar10->fields).m_CancellationTokenSource;
                      method_02 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
                      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cfaf6;
                      player = (UI_PlayerKDRRow_o *)
                               System_Collections_Generic_Dictionary_int__object___get_Item
                                         ((System_Collections_Generic_Dictionary_int__object__o *)pUVar15,
                                          uVar1,MethodInfo_PlayerKDRRow_get_Item);
                      unaff_R14 = pUVar13;
                      if (pUVar13 != (UI_PlayerKDRRow_o *)0x0) {
                        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cfb0c;
                        UI_TeamKDRRow__RemovePlayerStats((UI_TeamKDRRow_o *)pUVar13,player,(MethodInfo *)0x0);
                        pUVar15 = *(UnityEngine_UI_Text_o **)&(pUVar14->fields).m_Color.fields;
                        method_02 = player;
                        if (pUVar15 != (UnityEngine_UI_Text_o *)0x0) {
                          uVar1 = *(uint *)&(pUVar10->fields).m_CancellationTokenSource;
                          method_02 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
                          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cfb27;
                          pUVar13 = (UI_PlayerKDRRow_o *)
                                    System_Collections_Generic_Dictionary_int__object___get_Item
                                              ((System_Collections_Generic_Dictionary_int__object__o *)pUVar15
                                               ,uVar1,MethodInfo_PlayerKDRRow_get_Item);
                          if (pUVar13 != (UI_PlayerKDRRow_o *)0x0) {
                            (pUVar13->fields).player = (Photon_Realtime_Player_o *)pUVar10;
                            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cfb46;
                            method_02 = pUVar10;
                            il2cpp_runtime_helper_022b4080(&(pUVar13->fields).player);
                            *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cfb4e;
                            UI_PlayerKDRRow__UpdateRow_42d8220(pUVar13,(MethodInfo *)method_02);
                            pUVar5 = *(UnityEngine_UI_RawImage_o **)&(pUVar14->fields).m_Color.fields.b;
                            pUVar15 = (UnityEngine_UI_Text_o *)0x0;
                            unaff_R14 = pUVar13;
                            if (pUVar5 != (UnityEngine_UI_RawImage_o *)0x0) {
                              *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cfb67;
                              method_02 = pUVar12;
                              pUVar13 = (UI_PlayerKDRRow_o *)
                                        System_Collections_Generic_Dictionary_object__object___get_Item
                                                  ((System_Collections_Generic_Dictionary_object__object__o *)
                                                   pUVar5,(Il2CppObject *)pUVar12,MethodInfo_TeamKDRRow_get_Item);
                              pUVar15 = *(UnityEngine_UI_Text_o **)&(pUVar14->fields).m_Color.fields;
                              if (pUVar15 != (UnityEngine_UI_Text_o *)0x0) {
                                uVar1 = *(uint *)&(pUVar10->fields).m_CancellationTokenSource;
                                method_02 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
                                *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cfb85;
                                pUVar10 = (UI_PlayerKDRRow_o *)
                                          System_Collections_Generic_Dictionary_int__object___get_Item
                                                    ((System_Collections_Generic_Dictionary_int__object__o *)
                                                     pUVar15,uVar1,MethodInfo_PlayerKDRRow_get_Item);
                                unaff_R14 = pUVar13;
                                if (pUVar13 != (UI_PlayerKDRRow_o *)0x0) {
                                  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cfb9b;
                                  UI_TeamKDRRow__AddPlayerStats
                                            ((UI_TeamKDRRow_o *)pUVar13,pUVar10,(MethodInfo *)0x0);
                                  pUVar15 = *(UnityEngine_UI_Text_o **)&(pUVar14->fields).m_Color.fields.b;
                                  method_02 = pUVar10;
                                  if (pUVar15 != (UnityEngine_UI_Text_o *)0x0) {
                                    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cfbb4;
                                    pUVar9 = (UI_TeamKDRRow_o *)
                                             System_Collections_Generic_Dictionary_object__object___get_Item
                                                       ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pUVar15,(Il2CppObject *)pUVar12,MethodInfo_TeamKDRRow_get_Item);
                                    method_02 = pUVar12;
                                    if (pUVar9 != (UI_TeamKDRRow_o *)0x0) {
                                      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cfbc3;
                                      UI_TeamKDRRow__UpdateRow(pUVar9,(MethodInfo *)0x0);
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                pUVar15 = *(UnityEngine_UI_Text_o **)&(pUVar14->fields).m_Color.fields;
                if (pUVar15 != (UnityEngine_UI_Text_o *)0x0) {
                  uVar1 = *(uint *)&(pUVar10->fields).m_CancellationTokenSource;
                  method_02 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
                  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cfc04;
                  pUVar12 = (UI_PlayerKDRRow_o *)
                            System_Collections_Generic_Dictionary_int__object___get_Item
                                      ((System_Collections_Generic_Dictionary_int__object__o *)pUVar15,uVar1,
                                       MethodInfo_PlayerKDRRow_get_Item);
                  if (pUVar12 != (UI_PlayerKDRRow_o *)0x0) {
                    (pUVar12->fields).player = (Photon_Realtime_Player_o *)pUVar10;
                    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cfc1f;
                    il2cpp_runtime_helper_022b4080(&(pUVar12->fields).player);
                    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cfc27;
                    UI_PlayerKDRRow__UpdateRow_42d8220(pUVar12,(MethodInfo *)pUVar10);
                    return;
                  }
                }
              }
            }
          }
        }
      }
label_043cfc2c:
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43cfc31;
      il2cpp_runtime_helper_022b2c90();
      *(UI_PlayerKDRRow_o **)((long)register0x00000020 + -0x70) = unaff_R14;
      (pUVar15->fields).m_Material = (UnityEngine_Material_o *)method_02;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43cfc51;
      il2cpp_runtime_helper_022b4080(&(pUVar15->fields).m_Material);
      UI_PlayerKDRRow__UpdateRow_42d8220((UI_PlayerKDRRow_o *)pUVar15,(MethodInfo *)method_02);
      return;
    }
    if ((unaff_R14 == (UI_PlayerKDRRow_o *)0x0) || (*(int *)(lVar4 + 0x14) != 2)) {
      return;
    }
    uVar11 = *(undefined8 *)((long)register0x00000020 + -0x28);
    uVar6 = *(undefined8 *)((long)register0x00000020 + -0x20);
    *(UI_TeamKDRRow_o **)((long)register0x00000020 + -0x20) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x30) = uVar6;
    *(undefined8 **)((long)register0x00000020 + -0x38) = unaff_R13;
    *(UI_PlayerKDRRow_o **)((long)register0x00000020 + -0x40) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x48) = uVar11;
    *(long *)((long)register0x00000020 + -0x50) = lVar4;
    unaff_R15 = 1;
    newPlayer = (Photon_Realtime_Player_o *)unaff_R14;
    if (g_data_057ae41c == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf4a9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf4b5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf4c1;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf4cd;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf4d9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerKDRRow_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf4e5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_TeamKDRRow_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf4f1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae41c = '\x01';
    }
    if (unaff_R14 == (UI_PlayerKDRRow_o *)0x0) {
      return;
    }
    pUVar14 = ((UI_PlayerKDRRow_Fields *)&unaff_RBX->fields)->id;
    __this = (UI_KDRPanel_o *)0x0;
    if (pUVar14 != (UnityEngine_UI_Text_o *)0x0) {
      uVar1 = *(uint *)&(unaff_R14->fields).m_CancellationTokenSource;
      newPlayer = (Photon_Realtime_Player_o *)(ulong)uVar1;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf521;
      bVar7 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_int__object__o *)pUVar14,uVar1,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar7 == '\0') {
        return;
      }
      if (*(int *)&((UI_PlayerKDRRow_Fields *)&unaff_RBX->fields)->score == 2) {
        __this = (UI_KDRPanel_o *)((UI_PlayerKDRRow_Fields *)&unaff_RBX->fields)->id;
        if ((UnityEngine_UI_Text_o *)__this != (UnityEngine_UI_Text_o *)0x0) {
          uVar1 = *(uint *)&(unaff_R14->fields).m_CancellationTokenSource;
          newPlayer = (Photon_Realtime_Player_o *)(ulong)uVar1;
          unaff_R13 = &MethodInfo_PlayerKDRRow_get_Item;
          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf554;
          pIVar8 = System_Collections_Generic_Dictionary_int__object___get_Item
                             ((System_Collections_Generic_Dictionary_int__object__o *)__this,uVar1,
                              MethodInfo_PlayerKDRRow_get_Item);
          if (pIVar8 != (Il2CppObject *)0x0) {
            pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                      &(unaff_RBX->fields).m_Color.fields.b;
            __this = (UI_KDRPanel_o *)0x0;
            if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              unaff_R12 = pIVar8[6].monitor;
              unaff_RBP = (UI_TeamKDRRow_o *)&MethodInfo_Boolean_ContainsKey;
              *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf581;
              newPlayer = (Photon_Realtime_Player_o *)unaff_R12;
              bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar7 == '\0') {
                unaff_R12 = *(UI_PlayerKDRRow_o **)&(unaff_RBX->fields).m_RaycastPadding.fields;
              }
              pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                        &(unaff_RBX->fields).m_Color.fields.b;
              __this = (UI_KDRPanel_o *)0x0;
              if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf5a2;
                newPlayer = (Photon_Realtime_Player_o *)unaff_R12;
                bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                  (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_ContainsKey);
                if ((char)bVar7 == '\0') goto label_043cf661;
                pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                          &(unaff_RBX->fields).m_Color.fields.b;
                __this = (UI_KDRPanel_o *)0x0;
                if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf5c9;
                  newPlayer = (Photon_Realtime_Player_o *)unaff_R12;
                  pUVar9 = (UI_TeamKDRRow_o *)
                           System_Collections_Generic_Dictionary_object__object___get_Item
                                     (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_TeamKDRRow_get_Item);
                  __this = *(UI_KDRPanel_o **)&(unaff_RBX->fields).m_Color.fields;
                  if ((UnityEngine_UI_Text_o *)__this != (UnityEngine_UI_Text_o *)0x0) {
                    uVar1 = *(uint *)&(unaff_R14->fields).m_CancellationTokenSource;
                    newPlayer = (Photon_Realtime_Player_o *)(ulong)uVar1;
                    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf5e6;
                    pUVar10 = (UI_PlayerKDRRow_o *)
                              System_Collections_Generic_Dictionary_int__object___get_Item
                                        ((System_Collections_Generic_Dictionary_int__object__o *)__this,uVar1,
                                         MethodInfo_PlayerKDRRow_get_Item);
                    unaff_RBP = pUVar9;
                    if (pUVar9 != (UI_TeamKDRRow_o *)0x0) {
                      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf5fc;
                      UI_TeamKDRRow__RemovePlayerStats(pUVar9,pUVar10,(MethodInfo *)0x0);
                      __this = *(UI_KDRPanel_o **)&(unaff_RBX->fields).m_Color.fields.b;
                      unaff_R13 = &MethodInfo_TeamKDRRow_get_Item;
                      newPlayer = (Photon_Realtime_Player_o *)pUVar10;
                      if ((UnityEngine_UI_Text_o *)__this != (UnityEngine_UI_Text_o *)0x0) {
                        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf61c;
                        newPlayer = (Photon_Realtime_Player_o *)unaff_R12;
                        pIVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                                           ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                                            (Il2CppObject *)unaff_R12,MethodInfo_TeamKDRRow_get_Item);
                        if ((pIVar8 != (Il2CppObject *)0x0) &&
                           (__this = *(UI_KDRPanel_o **)&(unaff_RBX->fields).m_Color.fields.b,
                           (UnityEngine_UI_Text_o *)__this != (UnityEngine_UI_Text_o *)0x0)) {
                          uVar1 = *(uint *)&pIVar8[4].monitor;
                          unaff_RBP = (UI_TeamKDRRow_o *)(ulong)uVar1;
                          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf641;
                          newPlayer = (Photon_Realtime_Player_o *)unaff_R12;
                          pUVar9 = (UI_TeamKDRRow_o *)
                                   System_Collections_Generic_Dictionary_object__object___get_Item
                                             ((System_Collections_Generic_Dictionary_object__object__o *)
                                              __this,(Il2CppObject *)unaff_R12,MethodInfo_TeamKDRRow_get_Item);
                          if (pUVar9 != (UI_TeamKDRRow_o *)0x0) {
                            newPlayer = (Photon_Realtime_Player_o *)0x0;
                            if ((int)uVar1 < 1) {
                              *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf703;
                              unaff_RBP = (UI_TeamKDRRow_o *)
                                          UnityEngine_Component__get_gameObject
                                                    ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf71e;
                                il2cpp_runtime_helper_02337ed0();
                              }
                              newPlayer = (Photon_Realtime_Player_o *)0x0;
                              *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf728;
                              UnityEngine_Object__Destroy_4e01c60
                                        ((UnityEngine_Object_o *)unaff_RBP,(MethodInfo *)0x0);
                              pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                        &(unaff_RBX->fields).m_Color.fields.b;
                              __this = (UI_KDRPanel_o *)0x0;
                              if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                              goto label_043cf751;
                              *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf743;
                              newPlayer = (Photon_Realtime_Player_o *)unaff_R12;
                              System_Collections_Generic_Dictionary_object__object___Remove
                                        (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Remove);
                            }
                            else {
                              *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf65c;
                              UI_TeamKDRRow__UpdateRow(pUVar9,(MethodInfo *)0x0);
                            }
label_043cf661:
                            *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf669;
                            UI_KDRPanel__ReorganizeLayout((UI_KDRPanel_o *)unaff_RBX,(MethodInfo *)newPlayer);
                            goto label_043cf669;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
label_043cf669:
        __this = *(UI_KDRPanel_o **)&(unaff_RBX->fields).m_Color.fields;
        if ((UnityEngine_UI_Text_o *)__this != (UnityEngine_UI_Text_o *)0x0) {
          uVar1 = *(uint *)&(unaff_R14->fields).m_CancellationTokenSource;
          newPlayer = (Photon_Realtime_Player_o *)(ulong)uVar1;
          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf689;
          __this_01 = (UnityEngine_Component_o *)
                      System_Collections_Generic_Dictionary_int__object___get_Item
                                ((System_Collections_Generic_Dictionary_int__object__o *)__this,uVar1,
                                 MethodInfo_PlayerKDRRow_get_Item);
          if (__this_01 != (UnityEngine_Component_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf69c;
            unaff_RBP = (UI_TeamKDRRow_o *)UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf6b7;
              il2cpp_runtime_helper_02337ed0();
            }
            newPlayer = (Photon_Realtime_Player_o *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf6c1;
            UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)unaff_RBP,(MethodInfo *)0x0);
            __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                         &(unaff_RBX->fields).m_Color.fields;
            __this = (UI_KDRPanel_o *)0x0;
            if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              System_Collections_Generic_Dictionary_int__object___Remove
                        (__this_00,*(int32_t *)&(unaff_R14->fields).m_CancellationTokenSource,MethodInfo_Boolean_Remove);
              return;
            }
          }
        }
      }
    }
label_043cf751:
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf756;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x50);
  } while( true );
}


// UI.KDRPanel$$OnPlayerLeftRoom
// il2cpp: void UI_KDRPanel__OnPlayerLeftRoom (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* otherPlayer, const MethodInfo* method);
// 0x43cf7f0

void UI_KDRPanel__OnPlayerLeftRoom
               (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *otherPlayer,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  long lVar4;
  UnityEngine_UI_RawImage_o *pUVar5;
  undefined8 uVar6;
  bool_conflict bVar7;
  Il2CppObject *pIVar8;
  UI_TeamKDRRow_o *pUVar9;
  UI_PlayerKDRRow_o *pUVar10;
  UnityEngine_Component_o *__this_01;
  undefined8 uVar11;
  undefined8 in_RAX;
  UI_PlayerKDRRow_o *pUVar12;
  UI_PlayerKDRRow_o *pUVar13;
  UI_PlayerKDRRow_o *player;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UI_PlayerKDRRow_o *unaff_RBX;
  UI_TeamKDRRow_o *unaff_RBP;
  UI_PlayerKDRRow_o *method_02;
  UnityEngine_UI_Text_o *pUVar14;
  UnityEngine_UI_Text_o *pUVar15;
  UnityEngine_UI_Text_o *pUVar16;
  MethodInfo *in_R8;
  UI_PlayerKDRRow_o *unaff_R12;
  undefined8 *unaff_R13;
  UnityEngine_UI_Text_o *unaff_R14;
  undefined8 unaff_R15;
  bool bVar17;
  undefined1 auVar18 [16];
  
  do {
    *(UnityEngine_UI_Text_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(UI_PlayerKDRRow_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    pUVar10 = (UI_PlayerKDRRow_o *)otherPlayer;
    pUVar14 = (UnityEngine_UI_Text_o *)__this;
    if (g_data_057ae41f == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43cf80f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      pUVar14 = (UnityEngine_UI_Text_o *)&MethodInfo_Int32_get_Value;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43cf81b;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae41f = '\x01';
    }
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0xb0), lVar4 == 0)) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43cf877;
      auVar18 = il2cpp_runtime_helper_022b2c90();
      pUVar16 = auVar18._8_8_;
      *(UI_TeamKDRRow_o **)((long)register0x00000020 + -0x20) = unaff_RBP;
      *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R15;
      *(UI_KDRPanel_o **)((long)register0x00000020 + -0x30) = __this;
      *(undefined8 **)((long)register0x00000020 + -0x38) = unaff_R13;
      *(UI_PlayerKDRRow_o **)((long)register0x00000020 + -0x40) = unaff_R12;
      *(Photon_Realtime_Player_o **)((long)register0x00000020 + -0x48) = otherPlayer;
      *(long *)((long)register0x00000020 + -0x50) = auVar18._0_8_;
      method_02 = pUVar10;
      pUVar15 = pUVar14;
      if (g_data_057ae420 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf8a9;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf8b5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf8c1;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf8cd;
        il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerKDRRow_get_Item);
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf8d9;
        il2cpp_runtime_helper_023445d0(&MethodInfo_TeamKDRRow_get_Item);
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf8e5;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf8f1;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf8fd;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        pUVar15 = (UnityEngine_UI_Text_o *)&MethodInfo_Int32_get_Value;
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf909;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae420 = '\x01';
      }
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
      lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0xb0), lVar4 != 0)) {
        iVar2 = *(int *)(lVar4 + 0x14);
        pUVar15 = TypeInfo_PlayerProperty;
        if (iVar2 == 0) {
          bVar17 = false;
          iVar2 = *(int *)((long)&(TypeInfo_PlayerProperty->fields).m_Corners + 4);
        }
        else if (iVar2 == 1) {
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf96e;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf975;
          pUVar12 = (UI_PlayerKDRRow_o *)Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
          bVar17 = pUVar12 == pUVar10;
          iVar2 = *(int *)((long)&(TypeInfo_PlayerProperty->fields).m_Corners + 4);
          pUVar15 = TypeInfo_PlayerProperty;
        }
        else {
          bVar17 = true;
          iVar2 = *(int *)((long)&(TypeInfo_PlayerProperty->fields).m_Corners + 4);
        }
        TypeInfo_PlayerProperty = pUVar15;
        if (iVar2 == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf9ab;
          il2cpp_runtime_helper_02337ed0();
        }
        otherPlayer = (Photon_Realtime_Player_o *)&TypeInfo_PlayerProperty;
        if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
          method_02 = *(UI_PlayerKDRRow_o **)
                       &(((TypeInfo_PlayerProperty->fields).m_ParentMask)->fields).m_ShouldRecalculateClipRects;
          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf9d7;
          method_00 = MethodInfo_Boolean_TryGetValue;
          System_Collections_Generic_Dictionary_object__object___TryGetValue
                    ((System_Collections_Generic_Dictionary_object__object__o *)pUVar16,
                     (Il2CppObject *)method_02,(Il2CppObject **)((long)register0x00000020 + -0x50),
                     (MethodInfo_3106990 *)MethodInfo_Boolean_TryGetValue);
          if (*(long *)((long)register0x00000020 + -0x50) != 0) {
            *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf9eb;
            UI_KDRPanel__RemovePlayer
                      ((UI_KDRPanel_o *)pUVar14,(Photon_Realtime_Player_o *)pUVar10,0,method_00);
            *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf9ff;
            UI_KDRPanel__AddPlayer
                      ((UI_KDRPanel_o *)pUVar14,(Photon_Realtime_Player_o *)pUVar10,1,(uint)bVar17,in_R8);
            return;
          }
          pUVar15 = pUVar16;
          if (pUVar10 != (UI_PlayerKDRRow_o *)0x0) {
            if (*(char *)((long)&(pUVar10->fields).m_CancellationTokenSource + 4) == '\0') {
              lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0xb0), lVar4 == 0)) goto label_043cfc2c;
              if (*(int *)(lVar4 + 0x14) != 2) {
                return;
              }
            }
            pUVar16 = *(UnityEngine_UI_Text_o **)&(pUVar14->fields).m_Color.fields;
            pUVar15 = (UnityEngine_UI_Text_o *)0x0;
            if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
              uVar1 = *(uint *)&(pUVar10->fields).m_CancellationTokenSource;
              method_02 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
              *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cfa6d;
              bVar7 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                ((System_Collections_Generic_Dictionary_int__object__o *)pUVar16,uVar1,
                                 MethodInfo_Boolean_ContainsKey);
              if ((char)bVar7 == '\0') {
                return;
              }
              if ((pUVar14->fields).m_RaycastTarget == 2) {
                *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cfa87;
                method_02 = pUVar10;
                pUVar12 = (UI_PlayerKDRRow_o *)
                          UI_KDRPanel__GetPlayerTeam
                                    ((UI_KDRPanel_o *)pUVar14,(Photon_Realtime_Player_o *)pUVar10,method_01);
                pUVar5 = *(UnityEngine_UI_RawImage_o **)&(pUVar14->fields).m_Color.fields.b;
                pUVar15 = (UnityEngine_UI_Text_o *)0x0;
                if (pUVar5 != (UnityEngine_UI_RawImage_o *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cfaa9;
                  method_02 = pUVar12;
                  bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                    ((System_Collections_Generic_Dictionary_object__object__o *)pUVar5,
                                     (Il2CppObject *)pUVar12,MethodInfo_Boolean_ContainsKey);
                  if ((char)bVar7 == '\0') {
                    return;
                  }
                  pUVar5 = *(UnityEngine_UI_RawImage_o **)&(pUVar14->fields).m_Color.fields.b;
                  pUVar15 = (UnityEngine_UI_Text_o *)0x0;
                  if (pUVar5 != (UnityEngine_UI_RawImage_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cfad1;
                    method_02 = pUVar12;
                    pUVar13 = (UI_PlayerKDRRow_o *)
                              System_Collections_Generic_Dictionary_object__object___get_Item
                                        ((System_Collections_Generic_Dictionary_object__object__o *)pUVar5,
                                         (Il2CppObject *)pUVar12,MethodInfo_TeamKDRRow_get_Item);
                    pUVar15 = *(UnityEngine_UI_Text_o **)&(pUVar14->fields).m_Color.fields;
                    if (pUVar15 != (UnityEngine_UI_Text_o *)0x0) {
                      uVar1 = *(uint *)&(pUVar10->fields).m_CancellationTokenSource;
                      method_02 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
                      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cfaf6;
                      player = (UI_PlayerKDRRow_o *)
                               System_Collections_Generic_Dictionary_int__object___get_Item
                                         ((System_Collections_Generic_Dictionary_int__object__o *)pUVar15,
                                          uVar1,MethodInfo_PlayerKDRRow_get_Item);
                      otherPlayer = (Photon_Realtime_Player_o *)pUVar13;
                      if (pUVar13 != (UI_PlayerKDRRow_o *)0x0) {
                        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cfb0c;
                        UI_TeamKDRRow__RemovePlayerStats((UI_TeamKDRRow_o *)pUVar13,player,(MethodInfo *)0x0);
                        pUVar15 = *(UnityEngine_UI_Text_o **)&(pUVar14->fields).m_Color.fields;
                        method_02 = player;
                        if (pUVar15 != (UnityEngine_UI_Text_o *)0x0) {
                          uVar1 = *(uint *)&(pUVar10->fields).m_CancellationTokenSource;
                          method_02 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
                          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cfb27;
                          pUVar13 = (UI_PlayerKDRRow_o *)
                                    System_Collections_Generic_Dictionary_int__object___get_Item
                                              ((System_Collections_Generic_Dictionary_int__object__o *)pUVar15
                                               ,uVar1,MethodInfo_PlayerKDRRow_get_Item);
                          if (pUVar13 != (UI_PlayerKDRRow_o *)0x0) {
                            (pUVar13->fields).player = (Photon_Realtime_Player_o *)pUVar10;
                            *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cfb46;
                            method_02 = pUVar10;
                            il2cpp_runtime_helper_022b4080(&(pUVar13->fields).player);
                            *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cfb4e;
                            UI_PlayerKDRRow__UpdateRow_42d8220(pUVar13,(MethodInfo *)method_02);
                            pUVar5 = *(UnityEngine_UI_RawImage_o **)&(pUVar14->fields).m_Color.fields.b;
                            pUVar15 = (UnityEngine_UI_Text_o *)0x0;
                            otherPlayer = (Photon_Realtime_Player_o *)pUVar13;
                            if (pUVar5 != (UnityEngine_UI_RawImage_o *)0x0) {
                              *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cfb67;
                              method_02 = pUVar12;
                              pUVar13 = (UI_PlayerKDRRow_o *)
                                        System_Collections_Generic_Dictionary_object__object___get_Item
                                                  ((System_Collections_Generic_Dictionary_object__object__o *)
                                                   pUVar5,(Il2CppObject *)pUVar12,MethodInfo_TeamKDRRow_get_Item);
                              pUVar15 = *(UnityEngine_UI_Text_o **)&(pUVar14->fields).m_Color.fields;
                              if (pUVar15 != (UnityEngine_UI_Text_o *)0x0) {
                                uVar1 = *(uint *)&(pUVar10->fields).m_CancellationTokenSource;
                                method_02 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
                                *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cfb85;
                                pUVar10 = (UI_PlayerKDRRow_o *)
                                          System_Collections_Generic_Dictionary_int__object___get_Item
                                                    ((System_Collections_Generic_Dictionary_int__object__o *)
                                                     pUVar15,uVar1,MethodInfo_PlayerKDRRow_get_Item);
                                otherPlayer = (Photon_Realtime_Player_o *)pUVar13;
                                if (pUVar13 != (UI_PlayerKDRRow_o *)0x0) {
                                  *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cfb9b;
                                  UI_TeamKDRRow__AddPlayerStats
                                            ((UI_TeamKDRRow_o *)pUVar13,pUVar10,(MethodInfo *)0x0);
                                  pUVar15 = *(UnityEngine_UI_Text_o **)&(pUVar14->fields).m_Color.fields.b;
                                  method_02 = pUVar10;
                                  if (pUVar15 != (UnityEngine_UI_Text_o *)0x0) {
                                    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cfbb4;
                                    pUVar9 = (UI_TeamKDRRow_o *)
                                             System_Collections_Generic_Dictionary_object__object___get_Item
                                                       ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pUVar15,(Il2CppObject *)pUVar12,MethodInfo_TeamKDRRow_get_Item);
                                    method_02 = pUVar12;
                                    if (pUVar9 != (UI_TeamKDRRow_o *)0x0) {
                                      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cfbc3;
                                      UI_TeamKDRRow__UpdateRow(pUVar9,(MethodInfo *)0x0);
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                pUVar15 = *(UnityEngine_UI_Text_o **)&(pUVar14->fields).m_Color.fields;
                if (pUVar15 != (UnityEngine_UI_Text_o *)0x0) {
                  uVar1 = *(uint *)&(pUVar10->fields).m_CancellationTokenSource;
                  method_02 = (UI_PlayerKDRRow_o *)(ulong)uVar1;
                  *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cfc04;
                  pUVar12 = (UI_PlayerKDRRow_o *)
                            System_Collections_Generic_Dictionary_int__object___get_Item
                                      ((System_Collections_Generic_Dictionary_int__object__o *)pUVar15,uVar1,
                                       MethodInfo_PlayerKDRRow_get_Item);
                  if (pUVar12 != (UI_PlayerKDRRow_o *)0x0) {
                    (pUVar12->fields).player = (Photon_Realtime_Player_o *)pUVar10;
                    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cfc1f;
                    il2cpp_runtime_helper_022b4080(&(pUVar12->fields).player);
                    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cfc27;
                    UI_PlayerKDRRow__UpdateRow_42d8220(pUVar12,(MethodInfo *)pUVar10);
                    return;
                  }
                }
              }
            }
          }
        }
      }
label_043cfc2c:
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cfc31;
      il2cpp_runtime_helper_022b2c90();
      *(Photon_Realtime_Player_o **)((long)register0x00000020 + -0x58) = otherPlayer;
      (pUVar15->fields).m_Material = (UnityEngine_Material_o *)method_02;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43cfc51;
      il2cpp_runtime_helper_022b4080(&(pUVar15->fields).m_Material);
      UI_PlayerKDRRow__UpdateRow_42d8220((UI_PlayerKDRRow_o *)pUVar15,(MethodInfo *)method_02);
      return;
    }
    if (((UI_PlayerKDRRow_o *)otherPlayer == (UI_PlayerKDRRow_o *)0x0) || (*(int *)(lVar4 + 0x14) != 2)) {
      return;
    }
    uVar11 = *(undefined8 *)((long)register0x00000020 + -0x10);
    uVar6 = *(undefined8 *)((long)register0x00000020 + -8);
    *(UI_TeamKDRRow_o **)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x18) = uVar6;
    *(undefined8 **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(UI_PlayerKDRRow_o **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x30) = uVar11;
    *(long *)((long)register0x00000020 + -0x38) = lVar4;
    unaff_R15 = 1;
    unaff_RBX = (UI_PlayerKDRRow_o *)otherPlayer;
    if (g_data_057ae41c == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf4a9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf4b5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf4c1;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf4cd;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf4d9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerKDRRow_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf4e5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_TeamKDRRow_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf4f1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae41c = '\x01';
    }
    if ((UI_PlayerKDRRow_o *)otherPlayer == (UI_PlayerKDRRow_o *)0x0) {
      return;
    }
    pUVar14 = ((UI_PlayerKDRRow_Fields *)&((UnityEngine_UI_Text_o *)__this)->fields)->id;
    unaff_R14 = (UnityEngine_UI_Text_o *)0x0;
    if (pUVar14 != (UnityEngine_UI_Text_o *)0x0) {
      uVar1 = *(uint *)&(((UI_PlayerKDRRow_o *)otherPlayer)->fields).m_CancellationTokenSource;
      unaff_RBX = (UI_PlayerKDRRow_o *)(ulong)uVar1;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf521;
      bVar7 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_int__object__o *)pUVar14,uVar1,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar7 == '\0') {
        return;
      }
      if (*(int *)&((UI_PlayerKDRRow_Fields *)&((UnityEngine_UI_Text_o *)__this)->fields)->score == 2) {
        unaff_R14 = ((UI_PlayerKDRRow_Fields *)&((UnityEngine_UI_Text_o *)__this)->fields)->id;
        if (unaff_R14 != (UnityEngine_UI_Text_o *)0x0) {
          uVar1 = *(uint *)&(((UI_PlayerKDRRow_o *)otherPlayer)->fields).m_CancellationTokenSource;
          unaff_RBX = (UI_PlayerKDRRow_o *)(ulong)uVar1;
          unaff_R13 = &MethodInfo_PlayerKDRRow_get_Item;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf554;
          pIVar8 = System_Collections_Generic_Dictionary_int__object___get_Item
                             ((System_Collections_Generic_Dictionary_int__object__o *)unaff_R14,uVar1,
                              MethodInfo_PlayerKDRRow_get_Item);
          if (pIVar8 != (Il2CppObject *)0x0) {
            pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                      &(((UnityEngine_UI_Text_o *)__this)->fields).m_Color.fields.b;
            unaff_R14 = (UnityEngine_UI_Text_o *)0x0;
            if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              unaff_R12 = pIVar8[6].monitor;
              unaff_RBP = (UI_TeamKDRRow_o *)&MethodInfo_Boolean_ContainsKey;
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf581;
              unaff_RBX = unaff_R12;
              bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar7 == '\0') {
                unaff_R12 = *(UI_PlayerKDRRow_o **)
                             &(((UnityEngine_UI_Text_o *)__this)->fields).m_RaycastPadding.fields;
              }
              pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                        &(((UnityEngine_UI_Text_o *)__this)->fields).m_Color.fields.b;
              unaff_R14 = (UnityEngine_UI_Text_o *)0x0;
              if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf5a2;
                unaff_RBX = unaff_R12;
                bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                  (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_ContainsKey);
                if ((char)bVar7 == '\0') goto label_043cf661;
                pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                          &(((UnityEngine_UI_Text_o *)__this)->fields).m_Color.fields.b;
                unaff_R14 = (UnityEngine_UI_Text_o *)0x0;
                if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf5c9;
                  unaff_RBX = unaff_R12;
                  pUVar9 = (UI_TeamKDRRow_o *)
                           System_Collections_Generic_Dictionary_object__object___get_Item
                                     (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_TeamKDRRow_get_Item);
                  unaff_R14 = *(UnityEngine_UI_Text_o **)
                               &(((UnityEngine_UI_Text_o *)__this)->fields).m_Color.fields;
                  if (unaff_R14 != (UnityEngine_UI_Text_o *)0x0) {
                    uVar1 = *(uint *)&(((UI_PlayerKDRRow_o *)otherPlayer)->fields).m_CancellationTokenSource;
                    unaff_RBX = (UI_PlayerKDRRow_o *)(ulong)uVar1;
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf5e6;
                    pUVar10 = (UI_PlayerKDRRow_o *)
                              System_Collections_Generic_Dictionary_int__object___get_Item
                                        ((System_Collections_Generic_Dictionary_int__object__o *)unaff_R14,
                                         uVar1,MethodInfo_PlayerKDRRow_get_Item);
                    unaff_RBP = pUVar9;
                    if (pUVar9 != (UI_TeamKDRRow_o *)0x0) {
                      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf5fc;
                      UI_TeamKDRRow__RemovePlayerStats(pUVar9,pUVar10,(MethodInfo *)0x0);
                      unaff_R14 = *(UnityEngine_UI_Text_o **)
                                   &(((UnityEngine_UI_Text_o *)__this)->fields).m_Color.fields.b;
                      unaff_R13 = &MethodInfo_TeamKDRRow_get_Item;
                      unaff_RBX = pUVar10;
                      if (unaff_R14 != (UnityEngine_UI_Text_o *)0x0) {
                        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf61c;
                        unaff_RBX = unaff_R12;
                        pIVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                                           ((System_Collections_Generic_Dictionary_object__object__o *)
                                            unaff_R14,(Il2CppObject *)unaff_R12,MethodInfo_TeamKDRRow_get_Item);
                        if ((pIVar8 != (Il2CppObject *)0x0) &&
                           (unaff_R14 = *(UnityEngine_UI_Text_o **)
                                         &(((UnityEngine_UI_Text_o *)__this)->fields).m_Color.fields.b,
                           unaff_R14 != (UnityEngine_UI_Text_o *)0x0)) {
                          uVar1 = *(uint *)&pIVar8[4].monitor;
                          unaff_RBP = (UI_TeamKDRRow_o *)(ulong)uVar1;
                          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf641;
                          unaff_RBX = unaff_R12;
                          pUVar9 = (UI_TeamKDRRow_o *)
                                   System_Collections_Generic_Dictionary_object__object___get_Item
                                             ((System_Collections_Generic_Dictionary_object__object__o *)
                                              unaff_R14,(Il2CppObject *)unaff_R12,MethodInfo_TeamKDRRow_get_Item);
                          if (pUVar9 != (UI_TeamKDRRow_o *)0x0) {
                            unaff_RBX = (UI_PlayerKDRRow_o *)0x0;
                            if ((int)uVar1 < 1) {
                              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf703;
                              unaff_RBP = (UI_TeamKDRRow_o *)
                                          UnityEngine_Component__get_gameObject
                                                    ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf71e;
                                il2cpp_runtime_helper_02337ed0();
                              }
                              unaff_RBX = (UI_PlayerKDRRow_o *)0x0;
                              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf728;
                              UnityEngine_Object__Destroy_4e01c60
                                        ((UnityEngine_Object_o *)unaff_RBP,(MethodInfo *)0x0);
                              pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                        &(((UnityEngine_UI_Text_o *)__this)->fields).m_Color.fields.b;
                              unaff_R14 = (UnityEngine_UI_Text_o *)0x0;
                              if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                              goto label_043cf751;
                              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf743;
                              unaff_RBX = unaff_R12;
                              System_Collections_Generic_Dictionary_object__object___Remove
                                        (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Remove);
                            }
                            else {
                              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf65c;
                              UI_TeamKDRRow__UpdateRow(pUVar9,(MethodInfo *)0x0);
                            }
label_043cf661:
                            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf669;
                            UI_KDRPanel__ReorganizeLayout(__this,(MethodInfo *)unaff_RBX);
                            goto label_043cf669;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
label_043cf669:
        unaff_R14 = *(UnityEngine_UI_Text_o **)&(((UnityEngine_UI_Text_o *)__this)->fields).m_Color.fields;
        if (unaff_R14 != (UnityEngine_UI_Text_o *)0x0) {
          uVar1 = *(uint *)&(((UI_PlayerKDRRow_o *)otherPlayer)->fields).m_CancellationTokenSource;
          unaff_RBX = (UI_PlayerKDRRow_o *)(ulong)uVar1;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf689;
          __this_01 = (UnityEngine_Component_o *)
                      System_Collections_Generic_Dictionary_int__object___get_Item
                                ((System_Collections_Generic_Dictionary_int__object__o *)unaff_R14,uVar1,
                                 MethodInfo_PlayerKDRRow_get_Item);
          if (__this_01 != (UnityEngine_Component_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf69c;
            unaff_RBP = (UI_TeamKDRRow_o *)UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf6b7;
              il2cpp_runtime_helper_02337ed0();
            }
            unaff_RBX = (UI_PlayerKDRRow_o *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf6c1;
            UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)unaff_RBP,(MethodInfo *)0x0);
            __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                         &(((UnityEngine_UI_Text_o *)__this)->fields).m_Color.fields;
            unaff_R14 = (UnityEngine_UI_Text_o *)0x0;
            if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              System_Collections_Generic_Dictionary_int__object___Remove
                        (__this_00,
                         *(int32_t *)&(((UI_PlayerKDRRow_o *)otherPlayer)->fields).m_CancellationTokenSource,
                         MethodInfo_Boolean_Remove);
              return;
            }
          }
        }
      }
    }
label_043cf751:
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43cf756;
    uVar11 = il2cpp_runtime_helper_022b2c90();
    *(Photon_Realtime_Player_o **)((long)register0x00000020 + -0x40) = otherPlayer;
    *(UI_KDRPanel_o **)((long)register0x00000020 + -0x48) = __this;
    *(undefined8 *)((long)register0x00000020 + -0x50) = uVar11;
    otherPlayer = (Photon_Realtime_Player_o *)unaff_RBX;
    __this = (UI_KDRPanel_o *)unaff_R14;
    if (g_data_057ae41e == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf77f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      __this = (UI_KDRPanel_o *)&MethodInfo_Int32_get_Value;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf78b;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae41e = '\x01';
    }
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0xb0), lVar4 != 0)) {
      UI_KDRPanel__AddPlayer
                ((UI_KDRPanel_o *)unaff_R14,(Photon_Realtime_Player_o *)unaff_RBX,1,
                 (uint)(unaff_RBX != (UI_PlayerKDRRow_o *)0x0 && *(int *)(lVar4 + 0x14) == 2),in_R8);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x43cf7e6;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x50);
  } while( true );
}


// UI.KDRPanel$$OnPlayerPropertiesUpdate
// il2cpp: void UI_KDRPanel__OnPlayerPropertiesUpdate (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* targetPlayer, ExitGames_Client_Photon_Hashtable_o* changedProps, const MethodInfo* method);
// 0x43cf880

void UI_KDRPanel__OnPlayerPropertiesUpdate
               (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *targetPlayer,
               ExitGames_Client_Photon_Hashtable_o *changedProps,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  bool_conflict bVar5;
  Photon_Realtime_Player_o *pPVar6;
  UI_PlayerKDRRow_o *pUVar7;
  UI_TeamKDRRow_o *pUVar8;
  UI_PlayerKDRRow_o *pUVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UI_PlayerKDRRow_o *method_02;
  UI_PlayerKDRRow_o *pUVar10;
  MethodInfo *in_R8;
  bool bVar11;
  Il2CppObject *pIStack_38;
  
  method_02 = (UI_PlayerKDRRow_o *)targetPlayer;
  pUVar10 = (UI_PlayerKDRRow_o *)__this;
  if (g_data_057ae420 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerKDRRow_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TeamKDRRow_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pUVar10 = (UI_PlayerKDRRow_o *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae420 = '\x01';
  }
  pIStack_38 = (Il2CppObject *)0x0;
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0xb0), lVar3 != 0)) {
    iVar1 = *(int *)(lVar3 + 0x14);
    pUVar10 = TypeInfo_PlayerProperty;
    if (iVar1 == 0) {
      bVar11 = false;
      iVar1 = *(int *)((long)&TypeInfo_PlayerProperty[1].fields.score + 4);
    }
    else if (iVar1 == 1) {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar11 = pPVar6 == targetPlayer;
      iVar1 = *(int *)((long)&TypeInfo_PlayerProperty[1].fields.score + 4);
      pUVar10 = TypeInfo_PlayerProperty;
    }
    else {
      bVar11 = true;
      iVar1 = *(int *)((long)&TypeInfo_PlayerProperty[1].fields.score + 4);
    }
    TypeInfo_PlayerProperty = pUVar10;
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (changedProps != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
      method_02 = (UI_PlayerKDRRow_o *)
                  ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  TypeInfo_PlayerProperty[1].fields.m_CancellationTokenSource)->m_Items[1].fields.key;
      method_00 = MethodInfo_Boolean_TryGetValue;
      System_Collections_Generic_Dictionary_object__object___TryGetValue
                ((System_Collections_Generic_Dictionary_object__object__o *)changedProps,
                 (Il2CppObject *)method_02,&pIStack_38,(MethodInfo_3106990 *)MethodInfo_Boolean_TryGetValue);
      if (pIStack_38 != (Il2CppObject *)0x0) {
        UI_KDRPanel__RemovePlayer(__this,targetPlayer,0,method_00);
        UI_KDRPanel__AddPlayer(__this,targetPlayer,1,(uint)bVar11,in_R8);
        return;
      }
      pUVar10 = (UI_PlayerKDRRow_o *)changedProps;
      if (targetPlayer != (Photon_Realtime_Player_o *)0x0) {
        if ((char)(targetPlayer->fields).IsLocal == '\0') {
          lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
          if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0xb0), lVar3 == 0)) goto label_043cfc2c;
          if (*(int *)(lVar3 + 0x14) != 2) {
            return;
          }
        }
        __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
        pUVar10 = (UI_PlayerKDRRow_o *)0x0;
        if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          uVar2 = (targetPlayer->fields).actorNumber;
          method_02 = (UI_PlayerKDRRow_o *)(ulong)uVar2;
          bVar5 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                            (__this_00,uVar2,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar5 == '\0') {
            return;
          }
          if ((__this->fields)._pvpMode == 2) {
            method_02 = (UI_PlayerKDRRow_o *)targetPlayer;
            pUVar7 = (UI_PlayerKDRRow_o *)UI_KDRPanel__GetPlayerTeam(__this,targetPlayer,method_01);
            pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._teamHeaders;
            pUVar10 = (UI_PlayerKDRRow_o *)0x0;
            if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              method_02 = pUVar7;
              bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                (pSVar4,(Il2CppObject *)pUVar7,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar5 == '\0') {
                return;
              }
              pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._teamHeaders;
              pUVar10 = (UI_PlayerKDRRow_o *)0x0;
              if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                method_02 = pUVar7;
                pUVar8 = (UI_TeamKDRRow_o *)
                         System_Collections_Generic_Dictionary_object__object___get_Item
                                   (pSVar4,(Il2CppObject *)pUVar7,MethodInfo_TeamKDRRow_get_Item);
                pUVar10 = (UI_PlayerKDRRow_o *)(__this->fields)._players;
                if (pUVar10 != (UI_PlayerKDRRow_o *)0x0) {
                  uVar2 = (targetPlayer->fields).actorNumber;
                  method_02 = (UI_PlayerKDRRow_o *)(ulong)uVar2;
                  pUVar9 = (UI_PlayerKDRRow_o *)
                           System_Collections_Generic_Dictionary_int__object___get_Item
                                     ((System_Collections_Generic_Dictionary_int__object__o *)pUVar10,uVar2,
                                      MethodInfo_PlayerKDRRow_get_Item);
                  if (pUVar8 != (UI_TeamKDRRow_o *)0x0) {
                    UI_TeamKDRRow__RemovePlayerStats(pUVar8,pUVar9,(MethodInfo *)0x0);
                    pUVar10 = (UI_PlayerKDRRow_o *)(__this->fields)._players;
                    method_02 = pUVar9;
                    if (pUVar10 != (UI_PlayerKDRRow_o *)0x0) {
                      uVar2 = (targetPlayer->fields).actorNumber;
                      method_02 = (UI_PlayerKDRRow_o *)(ulong)uVar2;
                      pUVar9 = (UI_PlayerKDRRow_o *)
                               System_Collections_Generic_Dictionary_int__object___get_Item
                                         ((System_Collections_Generic_Dictionary_int__object__o *)pUVar10,
                                          uVar2,MethodInfo_PlayerKDRRow_get_Item);
                      if (pUVar9 != (UI_PlayerKDRRow_o *)0x0) {
                        (pUVar9->fields).player = targetPlayer;
                        method_02 = (UI_PlayerKDRRow_o *)targetPlayer;
                        il2cpp_runtime_helper_022b4080(&(pUVar9->fields).player);
                        UI_PlayerKDRRow__UpdateRow_42d8220(pUVar9,(MethodInfo *)method_02);
                        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                                 (__this->fields)._teamHeaders;
                        pUVar10 = (UI_PlayerKDRRow_o *)0x0;
                        if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                          method_02 = pUVar7;
                          pUVar8 = (UI_TeamKDRRow_o *)
                                   System_Collections_Generic_Dictionary_object__object___get_Item
                                             (pSVar4,(Il2CppObject *)pUVar7,MethodInfo_TeamKDRRow_get_Item);
                          pUVar10 = (UI_PlayerKDRRow_o *)(__this->fields)._players;
                          if (pUVar10 != (UI_PlayerKDRRow_o *)0x0) {
                            uVar2 = (targetPlayer->fields).actorNumber;
                            method_02 = (UI_PlayerKDRRow_o *)(ulong)uVar2;
                            pUVar9 = (UI_PlayerKDRRow_o *)
                                     System_Collections_Generic_Dictionary_int__object___get_Item
                                               ((System_Collections_Generic_Dictionary_int__object__o *)
                                                pUVar10,uVar2,MethodInfo_PlayerKDRRow_get_Item);
                            if (pUVar8 != (UI_TeamKDRRow_o *)0x0) {
                              UI_TeamKDRRow__AddPlayerStats(pUVar8,pUVar9,(MethodInfo *)0x0);
                              pUVar10 = (UI_PlayerKDRRow_o *)(__this->fields)._teamHeaders;
                              method_02 = pUVar9;
                              if ((pUVar10 != (UI_PlayerKDRRow_o *)0x0) &&
                                 (pUVar8 = (UI_TeamKDRRow_o *)
                                           System_Collections_Generic_Dictionary_object__object___get_Item
                                                     ((System_Collections_Generic_Dictionary_object__object__o
                                                       *)pUVar10,(Il2CppObject *)pUVar7,MethodInfo_TeamKDRRow_get_Item),
                                 method_02 = pUVar7, pUVar8 != (UI_TeamKDRRow_o *)0x0)) {
                                UI_TeamKDRRow__UpdateRow(pUVar8,(MethodInfo *)0x0);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            pUVar10 = (UI_PlayerKDRRow_o *)(__this->fields)._players;
            if (pUVar10 != (UI_PlayerKDRRow_o *)0x0) {
              uVar2 = (targetPlayer->fields).actorNumber;
              method_02 = (UI_PlayerKDRRow_o *)(ulong)uVar2;
              pUVar7 = (UI_PlayerKDRRow_o *)
                       System_Collections_Generic_Dictionary_int__object___get_Item
                                 ((System_Collections_Generic_Dictionary_int__object__o *)pUVar10,uVar2,
                                  MethodInfo_PlayerKDRRow_get_Item);
              if (pUVar7 != (UI_PlayerKDRRow_o *)0x0) {
                (pUVar7->fields).player = targetPlayer;
                il2cpp_runtime_helper_022b4080(&(pUVar7->fields).player);
                UI_PlayerKDRRow__UpdateRow_42d8220(pUVar7,(MethodInfo *)targetPlayer);
                return;
              }
            }
          }
        }
      }
    }
  }
label_043cfc2c:
  il2cpp_runtime_helper_022b2c90();
  (pUVar10->fields).player = (Photon_Realtime_Player_o *)method_02;
  il2cpp_runtime_helper_022b4080(&(pUVar10->fields).player);
  UI_PlayerKDRRow__UpdateRow_42d8220(pUVar10,(MethodInfo *)method_02);
  return;
}


// UI.KDRPanel$$OnJoinedRoom
// il2cpp: void UI_KDRPanel__OnJoinedRoom (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x43cfc60

void UI_KDRPanel__OnJoinedRoom(UI_KDRPanel_o *__this,MethodInfo *method)

{
  UI_KDRPanel__DestroyAndRecreate(__this,method);
  return;
}


// UI.KDRPanel$$OnEnable
// il2cpp: void UI_KDRPanel__OnEnable (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x43cfc70

void UI_KDRPanel__OnEnable(UI_KDRPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae421 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057ae421 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 != 0) {
    Photon_Pun_PhotonNetwork__AddCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  Photon_Pun_PhotonNetwork__AddCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.KDRPanel$$OnDisable
// il2cpp: void UI_KDRPanel__OnDisable (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x43cfce0

void UI_KDRPanel__OnDisable(UI_KDRPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae422 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057ae422 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 != 0) {
    Photon_Pun_PhotonNetwork__RemoveCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  Photon_Pun_PhotonNetwork__RemoveCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.KDRPanel$$OnRoomPropertiesUpdate
// il2cpp: void UI_KDRPanel__OnRoomPropertiesUpdate (UI_KDRPanel_o* __this, ExitGames_Client_Photon_Hashtable_o* propertiesThatChanged, const MethodInfo* method);
// 0x43cfd50

void UI_KDRPanel__OnRoomPropertiesUpdate
               (UI_KDRPanel_o *__this,ExitGames_Client_Photon_Hashtable_o *propertiesThatChanged,
               MethodInfo *method)

{
  return;
}


// UI.KDRPanel$$OnMasterClientSwitched
// il2cpp: void UI_KDRPanel__OnMasterClientSwitched (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* newMasterClient, const MethodInfo* method);
// 0x43cfd60

void UI_KDRPanel__OnMasterClientSwitched
               (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *newMasterClient,MethodInfo *method)

{
  return;
}


// UI.KDRPanel$$OnFriendListUpdate
// il2cpp: void UI_KDRPanel__OnFriendListUpdate (UI_KDRPanel_o* __this, System_Collections_Generic_List_FriendInfo__o* friendList, const MethodInfo* method);
// 0x43cfd70

void UI_KDRPanel__OnFriendListUpdate
               (UI_KDRPanel_o *__this,System_Collections_Generic_List_FriendInfo__o *friendList,
               MethodInfo *method)

{
  return;
}


// UI.KDRPanel$$OnCreatedRoom
// il2cpp: void UI_KDRPanel__OnCreatedRoom (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x43cfd80

void UI_KDRPanel__OnCreatedRoom(UI_KDRPanel_o *__this,MethodInfo *method)

{
  return;
}


// UI.KDRPanel$$OnCreateRoomFailed
// il2cpp: void UI_KDRPanel__OnCreateRoomFailed (UI_KDRPanel_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x43cfd90

void UI_KDRPanel__OnCreateRoomFailed
               (UI_KDRPanel_o *__this,int16_t returnCode,System_String_o *message,MethodInfo *method)

{
  return;
}


// UI.KDRPanel$$OnJoinRoomFailed
// il2cpp: void UI_KDRPanel__OnJoinRoomFailed (UI_KDRPanel_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x43cfda0

void UI_KDRPanel__OnJoinRoomFailed
               (UI_KDRPanel_o *__this,int16_t returnCode,System_String_o *message,MethodInfo *method)

{
  return;
}


// UI.KDRPanel$$OnJoinRandomFailed
// il2cpp: void UI_KDRPanel__OnJoinRandomFailed (UI_KDRPanel_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x43cfdb0

void UI_KDRPanel__OnJoinRandomFailed
               (UI_KDRPanel_o *__this,int16_t returnCode,System_String_o *message,MethodInfo *method)

{
  return;
}


// UI.KDRPanel$$OnLeftRoom
// il2cpp: void UI_KDRPanel__OnLeftRoom (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x43cfdc0

void UI_KDRPanel__OnLeftRoom(UI_KDRPanel_o *__this,MethodInfo *method)

{
  return;
}


// UI.KDRPanel$$.ctor
// il2cpp: void UI_KDRPanel___ctor (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x43cfdd0

void UI_KDRPanel___ctor(UI_KDRPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  
  if (g_data_057ae423 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_UI_PlayerKDRRow);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UI_TeamKDRRow);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_TeamKDRRow);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_PlayerKDRRow);
    il2cpp_runtime_helper_023445d0(&"Individuals");
    g_data_057ae423 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_PlayerKDRRow);
  System_Collections_Generic_Dictionary_int__object____ctor(__this_00,MethodInfo_Dictionary_2_System_Int32_UI_PlayerKDRRow);
  (__this->fields)._players = (System_Collections_Generic_Dictionary_int__PlayerKDRRow__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._players,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_TeamKDRRow);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_01,MethodInfo_Dictionary_2_System_String_UI_TeamKDRRow);
  (__this->fields)._teamHeaders = (System_Collections_Generic_Dictionary_string__TeamKDRRow__o *)__this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._teamHeaders,__this_01);
  (__this->fields)._currentSyncDelay = 1.0;
  (__this->fields)._defaultTeam = "Individuals";
  il2cpp_runtime_helper_022b4080(&(__this->fields)._defaultTeam);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.KDRPanel$$<ReorganizeLayout>b__14_1
// il2cpp: System_String_o* UI_KDRPanel___ReorganizeLayout_b__14_1 (UI_KDRPanel_o* __this, System_Collections_Generic_KeyValuePair_int__PlayerKDRRow__o x, const MethodInfo* method);
// 0x43cfec0

System_String_o *
UI_KDRPanel___ReorganizeLayout_b__14_1
          (UI_KDRPanel_o *__this,System_Collections_Generic_KeyValuePair_int__PlayerKDRRow__o x,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  Il2CppObject *__this_00;
  UI_PlayerKDRRow_o *pUVar2;
  UI_PlayerKDRRow_o *extraout_RDX;
  UI_PlayerKDRRow_o *method_00;
  
  pUVar2 = x.fields.value;
  method_00 = pUVar2;
  if (g_data_057ae424 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerKDRRow_get_Value);
    g_data_057ae424 = '\x01';
    method_00 = extraout_RDX;
  }
  if (pUVar2 != (UI_PlayerKDRRow_o *)0x0) {
    pSVar1 = UI_KDRPanel__GetPlayerTeam
                       (__this,(Photon_Realtime_Player_o *)(pUVar2->fields).player,(MethodInfo *)method_00);
    return pSVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae425 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae425 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  pSVar1 = (System_String_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return pSVar1;
}


