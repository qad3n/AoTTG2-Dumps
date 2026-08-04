// Type: UI.EditProfileStatsPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/EditProfileStatsPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/EditProfileStatsPanel.cs
// --------------------------------

// UI.EditProfileStatsPanel$$get_DoublePanel
// il2cpp: bool UI_EditProfileStatsPanel__get_DoublePanel (UI_EditProfileStatsPanel_o* __this, const MethodInfo* method);
// 0x4400410

bool_conflict UI_EditProfileStatsPanel__get_DoublePanel(UI_EditProfileStatsPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.EditProfileStatsPanel$$get_DoublePanelDivider
// il2cpp: bool UI_EditProfileStatsPanel__get_DoublePanelDivider (UI_EditProfileStatsPanel_o* __this, const MethodInfo* method);
// 0x4400420

bool_conflict
UI_EditProfileStatsPanel__get_DoublePanelDivider(UI_EditProfileStatsPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.EditProfileStatsPanel$$get_ScrollBar
// il2cpp: bool UI_EditProfileStatsPanel__get_ScrollBar (UI_EditProfileStatsPanel_o* __this, const MethodInfo* method);
// 0x4400430

bool_conflict UI_EditProfileStatsPanel__get_ScrollBar(UI_EditProfileStatsPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.EditProfileStatsPanel$$get_VerticalSpacing
// il2cpp: float UI_EditProfileStatsPanel__get_VerticalSpacing (UI_EditProfileStatsPanel_o* __this, const MethodInfo* method);
// 0x4400440

float UI_EditProfileStatsPanel__get_VerticalSpacing(UI_EditProfileStatsPanel_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.EditProfileStatsPanel$$Setup
// il2cpp: void UI_EditProfileStatsPanel__Setup (UI_EditProfileStatsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4400450

void UI_EditProfileStatsPanel__Setup
               (UI_EditProfileStatsPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  UnityEngine_Transform_o *pUVar6;
  System_Collections_Generic_IEnumerable_ValueTuple_string__string___c *pSVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  System_String_c *pSVar9;
  int iVar10;
  UI_EditProfileStatsPanel_o *pUVar11;
  char cVar12;
  GameProgress_AchievementCount_o *pGVar13;
  System_String_o *pSVar14;
  UnityEngine_GameObject_o *pUVar15;
  System_String_o *pSVar16;
  System_TimeSpan_o ts;
  System_Collections_Generic_IEnumerable_ValueTuple_string__string___o *pSVar17;
  VirtualInvokeData *pVVar18;
  long *plVar19;
  long *str2;
  long lVar20;
  long lVar21;
  long lVar22;
  float fVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  int32_t iStack_4c;
  UI_EditProfileStatsPanel_o *pUStack_48;
  UI_ElementStyle_o *pUStack_40;
  long lStack_38;
  
  pUStack_48 = __this;
  if (g_data_057ae587 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_ValueTuple_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_ValueTuple_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Silver");
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Damage");
    il2cpp_runtime_helper_023445d0(&"Blade");
    il2cpp_runtime_helper_023445d0(&"Exp");
    il2cpp_runtime_helper_023445d0(&"Other");
    il2cpp_runtime_helper_023445d0(&"Total");
    il2cpp_runtime_helper_023445d0(&"Bronze");
    il2cpp_runtime_helper_023445d0(&"Achievements");
    il2cpp_runtime_helper_023445d0(&"Humans Killed");
    il2cpp_runtime_helper_023445d0(&"Gold");
    il2cpp_runtime_helper_023445d0(&"Highest speed");
    il2cpp_runtime_helper_023445d0(&"Playtime");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"APG");
    il2cpp_runtime_helper_023445d0(&"Titans Killed");
    il2cpp_runtime_helper_023445d0(&"Level");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    il2cpp_runtime_helper_023445d0(&"Thunder spear");
    g_data_057ae587 = '\x01';
  }
  iStack_4c = 0;
  UI_BasePanel__Setup((UI_BasePanel_o *)pUStack_48,parent,(MethodInfo *)0x0);
  str2 = &TypeInfo_GameProgressManager;
  if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar20 = *(long *)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
  if (lVar20 == 0) goto label_04401954;
  if (*(GameProgress_AchievementContainer_o **)(lVar20 + 0x20) == (GameProgress_AchievementContainer_o *)0x0)
  goto label_04401954;
  lVar22 = *(long *)(lVar20 + 0x30);
  pGVar13 = GameProgress_AchievementContainer__GetAchievementCount
                      (*(GameProgress_AchievementContainer_o **)(lVar20 + 0x20),(MethodInfo *)0x0);
  pUVar11 = pUStack_48;
  pSVar14 = (System_String_o *)
            (*(((UI_BasePanel_c *)pUStack_48->klass)->vtable)._4_get_ThemePanel.methodPtr)
                      (pUStack_48,(((UI_BasePanel_c *)pUStack_48->klass)->vtable)._4_get_ThemePanel.method);
  pUStack_40 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUStack_40,0x18,100.0,20.0,pSVar14,(MethodInfo *)0x0);
  pSVar14 = "General";
  str2 = (long *)((UI_BasePanel_Fields *)&pUVar11->fields)->DoublePanelLeft;
  if (g_data_057ae589 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    g_data_057ae589 = '\x01';
  }
  pUVar15 = UI_ElementFactory__CreateDefaultLabel
                      ((UnityEngine_Transform_o *)str2,pUStack_40,pSVar14,1,3,(MethodInfo *)0x0);
  if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_04401954;
  UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_Text_GetComponent_Text);
  if (lVar22 == 0) goto label_04401954;
  if (*(long *)(lVar22 + 0x20) == 0) goto label_04401954;
  pUVar6 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelLeft;
  iStack_4c = *(int32_t *)(*(long *)(lVar22 + 0x20) + 0x14);
  str2 = (long *)System_Int32__ToString((int32_t)&iStack_4c,(MethodInfo *)0x0);
  pSVar14 = "Level";
  if (g_data_057ae588 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&": ");
    g_data_057ae588 = '\x01';
  }
  pSVar14 = System_String__Concat_3af7150(pSVar14,": ",(System_String_o *)str2,(MethodInfo *)0x0);
  pUVar15 = UI_ElementFactory__CreateDefaultLabel(pUVar6,pUStack_40,pSVar14,0,3,(MethodInfo *)0x0);
  if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_04401954;
  UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_Text_GetComponent_Text);
  if (*(long *)(lVar22 + 0x28) == 0) goto label_04401954;
  pUVar6 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelLeft;
  iStack_4c = *(int32_t *)(*(long *)(lVar22 + 0x28) + 0x14);
  pSVar14 = System_Int32__ToString((int32_t)&iStack_4c,(MethodInfo *)0x0);
  iStack_4c = GameProgress_GameProgressManager__GetExpToNext((MethodInfo *)0x0);
  pSVar16 = System_Int32__ToString((int32_t)&iStack_4c,(MethodInfo *)0x0);
  str2 = (long *)System_String__Concat_3af7150(pSVar14,"/",pSVar16,(MethodInfo *)0x0);
  pSVar14 = "Exp";
  if (g_data_057ae588 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&": ");
    g_data_057ae588 = '\x01';
  }
  pSVar14 = System_String__Concat_3af7150(pSVar14,": ",(System_String_o *)str2,(MethodInfo *)0x0);
  pUVar15 = UI_ElementFactory__CreateDefaultLabel(pUVar6,pUStack_40,pSVar14,0,3,(MethodInfo *)0x0);
  if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_04401954;
  UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_Text_GetComponent_Text);
  if (*(long *)(lVar22 + 0x30) == 0) goto label_04401954;
  pUVar6 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelLeft;
  fVar23 = *(float *)(*(long *)(lVar22 + 0x30) + 0x14);
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    lStack_38 = CONCAT44(lStack_38._4_4_,fVar23);
    il2cpp_runtime_helper_02337ed0();
    fVar23 = (float)lStack_38;
  }
  ts = System_TimeSpan__FromSeconds((double)fVar23,(MethodInfo *)0x0);
  str2 = (long *)Utility_Format__GetReadableTimespan(ts,(MethodInfo *)0x0);
  pSVar14 = "Playtime";
  if (g_data_057ae588 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&": ");
    g_data_057ae588 = '\x01';
  }
  pSVar14 = System_String__Concat_3af7150(pSVar14,": ",(System_String_o *)str2,(MethodInfo *)0x0);
  pUVar15 = UI_ElementFactory__CreateDefaultLabel(pUVar6,pUStack_40,pSVar14,0,3,(MethodInfo *)0x0);
  if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_04401954;
  UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_Text_GetComponent_Text);
  if (*(long *)(lVar22 + 0x38) == 0) goto label_04401954;
  pUVar6 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelLeft;
  iStack_4c = (int32_t)*(float *)(*(long *)(lVar22 + 0x38) + 0x14);
  pSVar14 = System_Int32__ToString((int32_t)&iStack_4c,(MethodInfo *)0x0);
  str2 = (long *)"Highest speed";
  if (g_data_057ae588 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&": ");
    g_data_057ae588 = '\x01';
  }
  pSVar14 = System_String__Concat_3af7150((System_String_o *)str2,": ",pSVar14,(MethodInfo *)0x0);
  pUVar15 = UI_ElementFactory__CreateDefaultLabel(pUVar6,pUStack_40,pSVar14,0,3,(MethodInfo *)0x0);
  if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_04401954;
  UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_Text_GetComponent_Text);
  pUVar11 = pUStack_48;
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)pUStack_48,((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelLeft,1.0,
             (MethodInfo *)0x0);
  pSVar14 = "Achievements";
  str2 = (long *)((UI_BasePanel_Fields *)&pUVar11->fields)->DoublePanelLeft;
  if (g_data_057ae589 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    g_data_057ae589 = '\x01';
  }
  pUVar15 = UI_ElementFactory__CreateDefaultLabel
                      ((UnityEngine_Transform_o *)str2,pUStack_40,pSVar14,1,3,(MethodInfo *)0x0);
  if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_04401954;
  UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_Text_GetComponent_Text);
  if (pGVar13 == (GameProgress_AchievementCount_o *)0x0) goto label_04401954;
  pUVar6 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelLeft;
  iVar10 = (int)pGVar13;
  pSVar14 = System_Int32__ToString(iVar10 + 0x10,(MethodInfo *)0x0);
  pSVar16 = System_Int32__ToString(iVar10 + 0x14,(MethodInfo *)0x0);
  pSVar14 = System_String__Concat_3af7150(pSVar14,"/",pSVar16,(MethodInfo *)0x0);
  str2 = (long *)"Bronze";
  if (g_data_057ae588 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&": ");
    g_data_057ae588 = '\x01';
  }
  pSVar14 = System_String__Concat_3af7150((System_String_o *)str2,": ",pSVar14,(MethodInfo *)0x0);
  pUVar15 = UI_ElementFactory__CreateDefaultLabel(pUVar6,pUStack_40,pSVar14,0,3,(MethodInfo *)0x0);
  if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_04401954;
  UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_Text_GetComponent_Text);
  pUVar6 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelLeft;
  pSVar14 = System_Int32__ToString(iVar10 + 0x18,(MethodInfo *)0x0);
  pSVar16 = System_Int32__ToString(iVar10 + 0x1c,(MethodInfo *)0x0);
  pSVar14 = System_String__Concat_3af7150(pSVar14,"/",pSVar16,(MethodInfo *)0x0);
  str2 = (long *)"Silver";
  if (g_data_057ae588 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&": ");
    g_data_057ae588 = '\x01';
  }
  pSVar14 = System_String__Concat_3af7150((System_String_o *)str2,": ",pSVar14,(MethodInfo *)0x0);
  pUVar15 = UI_ElementFactory__CreateDefaultLabel(pUVar6,pUStack_40,pSVar14,0,3,(MethodInfo *)0x0);
  if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_04401954;
  UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_Text_GetComponent_Text);
  pUVar6 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelLeft;
  pSVar14 = System_Int32__ToString(iVar10 + 0x20,(MethodInfo *)0x0);
  pSVar16 = System_Int32__ToString(iVar10 + 0x24,(MethodInfo *)0x0);
  pSVar14 = System_String__Concat_3af7150(pSVar14,"/",pSVar16,(MethodInfo *)0x0);
  str2 = (long *)"Gold";
  if (g_data_057ae588 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&": ");
    g_data_057ae588 = '\x01';
  }
  pSVar14 = System_String__Concat_3af7150((System_String_o *)str2,": ",pSVar14,(MethodInfo *)0x0);
  pUVar15 = UI_ElementFactory__CreateDefaultLabel(pUVar6,pUStack_40,pSVar14,0,3,(MethodInfo *)0x0);
  if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_04401954;
  UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_Text_GetComponent_Text);
  pUVar11 = pUStack_48;
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)pUStack_48,((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelLeft,1.0,
             (MethodInfo *)0x0);
  pSVar14 = "Damage";
  str2 = (long *)((UI_BasePanel_Fields *)&pUVar11->fields)->DoublePanelLeft;
  if (g_data_057ae589 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    g_data_057ae589 = '\x01';
  }
  pUVar15 = UI_ElementFactory__CreateDefaultLabel
                      ((UnityEngine_Transform_o *)str2,pUStack_40,pSVar14,1,3,(MethodInfo *)0x0);
  if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_04401954;
  UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_Text_GetComponent_Text);
  if (*(GameProgress_DamageSetting_o **)(lVar22 + 0xa8) == (GameProgress_DamageSetting_o *)0x0)
  goto label_04401954;
  pSVar17 = GameProgress_DamageSetting__GetStatLabels
                      (*(GameProgress_DamageSetting_o **)(lVar22 + 0xa8),(MethodInfo *)0x0);
  if (pSVar17 == (System_Collections_Generic_IEnumerable_ValueTuple_string__string___o *)0x0)
  goto label_04401954;
  pSVar7 = pSVar17->klass;
  uVar1._0_1_ = (pSVar7->_2).rank;
  uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar8 = (pSVar7->_1).interfaceOffsets;
    lVar20 = 0;
    do {
      if (*(long *)((long)&pIVar8->interfaceType + lVar20) == TypeInfo_IEnumerable_ValueTuple_string_string) {
        pVVar18 = pSVar7->vtable + *(int *)((long)&pIVar8->offset + lVar20);
        goto label_04400db1;
      }
      lVar20 = lVar20 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar20);
  }
  pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar17,TypeInfo_IEnumerable_ValueTuple_string_string,0);
label_04400db1:
  lStack_38 = lVar22;
  str2 = (long *)(*pVVar18->methodPtr)(pSVar17,pVVar18->method);
  if ((System_String_o *)str2 == (System_String_o *)0x0) goto label_0440195e;
  do {
    pSVar9 = ((System_String_o *)str2)->klass;
    uVar2._0_1_ = (pSVar9->_2).rank;
    uVar2._1_1_ = (pSVar9->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar8 = (pSVar9->_1).interfaceOffsets;
      lVar20 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar20) == TypeInfo_IEnumerator) {
          pVVar18 = &(pSVar9->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar20);
          goto label_04400e33;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar20);
    }
    pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(str2,TypeInfo_IEnumerator,0);
label_04400e33:
    cVar12 = (*pVVar18->methodPtr)(str2,pVVar18->method);
    if (cVar12 == '\0') {
      lVar20 = 0;
      goto label_04400f37;
    }
    pSVar9 = ((System_String_o *)str2)->klass;
    uVar3._0_1_ = (pSVar9->_2).rank;
    uVar3._1_1_ = (pSVar9->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar8 = (pSVar9->_1).interfaceOffsets;
      lVar20 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar20) == TypeInfo_IEnumerator_ValueTuple_string_string) {
          pVVar18 = &(pSVar9->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar20);
          goto label_04400ea3;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar20);
    }
    pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(str2,TypeInfo_IEnumerator_ValueTuple_string_string,0);
label_04400ea3:
    auVar25 = (*pVVar18->methodPtr)(str2,pVVar18->method);
    pUVar6 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelLeft;
    if (g_data_057ae588 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
      il2cpp_runtime_helper_023445d0(&": ");
      g_data_057ae588 = '\x01';
    }
    pSVar14 = System_String__Concat_3af7150(auVar25._0_8_,": ",auVar25._8_8_,(MethodInfo *)0x0);
    pUVar15 = UI_ElementFactory__CreateDefaultLabel(pUVar6,pUStack_40,pSVar14,0,3,(MethodInfo *)0x0);
    if (pUVar15 == (UnityEngine_GameObject_o *)0x0) {
      do {
        il2cpp_runtime_helper_022b2c90();
label_0440195e:
        il2cpp_runtime_helper_022b2c90();
        do {
          auVar24 = il2cpp_runtime_helper_022fefe0();
          if (auVar24._8_4_ != 1) {
            lVar22 = auVar24._0_8_;
            lVar20 = 0;
            goto joined_r0x044019b6;
          }
          plVar19 = (long *)__cxa_begin_catch();
          lVar20 = *plVar19;
          __cxa_end_catch();
label_04400f37:
          lVar22 = lStack_38;
          if ((System_String_o *)str2 != (System_String_o *)0x0) {
            pSVar9 = ((System_String_o *)str2)->klass;
            uVar4._0_1_ = (pSVar9->_2).rank;
            uVar4._1_1_ = (pSVar9->_2).minimumAlignment;
            if ((ulong)uVar4 != 0) {
              pIVar8 = (pSVar9->_1).interfaceOffsets;
              lVar21 = 0;
              do {
                if (*(long *)((long)&pIVar8->interfaceType + lVar21) == TypeInfo_IDisposable) {
                  pVVar18 = &(pSVar9->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar21);
                  goto label_04400f9d;
                }
                lVar21 = lVar21 + 0x10;
              } while ((ulong)uVar4 << 4 != lVar21);
            }
            pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(str2,TypeInfo_IDisposable,0);
label_04400f9d:
            (*pVVar18->methodPtr)(str2,pVVar18->method);
          }
          pSVar14 = "Titans Killed";
        } while (lVar20 != 0);
        str2 = (long *)((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelRight;
        if (g_data_057ae589 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
          g_data_057ae589 = '\x01';
        }
        pUVar15 = UI_ElementFactory__CreateDefaultLabel
                            ((UnityEngine_Transform_o *)str2,pUStack_40,pSVar14,1,3,(MethodInfo *)0x0);
        if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_Text_GetComponent_Text);
          if (*(long *)(lVar22 + 0x40) != 0) {
            pUVar6 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelRight;
            iStack_4c = *(int32_t *)(*(long *)(lVar22 + 0x40) + 0x14);
            pSVar14 = System_Int32__ToString((int32_t)&iStack_4c,(MethodInfo *)0x0);
            str2 = (long *)"Total";
            if (g_data_057ae588 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
              il2cpp_runtime_helper_023445d0(&": ");
              g_data_057ae588 = '\x01';
            }
            pSVar14 = System_String__Concat_3af7150
                                ((System_String_o *)str2,": ",pSVar14,(MethodInfo *)0x0);
            pUVar15 = UI_ElementFactory__CreateDefaultLabel(pUVar6,pUStack_40,pSVar14,0,3,(MethodInfo *)0x0);
            if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_Text_GetComponent_Text);
              if (*(long *)(lVar22 + 0x48) != 0) {
                pUVar6 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelRight;
                iStack_4c = *(int32_t *)(*(long *)(lVar22 + 0x48) + 0x14);
                pSVar14 = System_Int32__ToString((int32_t)&iStack_4c,(MethodInfo *)0x0);
                str2 = (long *)"Blade";
                if (g_data_057ae588 == '\0') {
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
                  il2cpp_runtime_helper_023445d0(&": ");
                  g_data_057ae588 = '\x01';
                }
                pSVar14 = System_String__Concat_3af7150
                                    ((System_String_o *)str2,": ",pSVar14,(MethodInfo *)0x0);
                pUVar15 = UI_ElementFactory__CreateDefaultLabel
                                    (pUVar6,pUStack_40,pSVar14,0,3,(MethodInfo *)0x0);
                if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
                  UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_Text_GetComponent_Text);
                  if (*(long *)(lVar22 + 0x50) != 0) {
                    pUVar6 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelRight;
                    iStack_4c = *(int32_t *)(*(long *)(lVar22 + 0x50) + 0x14);
                    pSVar14 = System_Int32__ToString((int32_t)&iStack_4c,(MethodInfo *)0x0);
                    str2 = (long *)"AHSS";
                    if (g_data_057ae588 == '\0') {
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
                      il2cpp_runtime_helper_023445d0(&": ");
                      g_data_057ae588 = '\x01';
                    }
                    pSVar14 = System_String__Concat_3af7150
                                        ((System_String_o *)str2,": ",pSVar14,(MethodInfo *)0x0);
                    pUVar15 = UI_ElementFactory__CreateDefaultLabel
                                        (pUVar6,pUStack_40,pSVar14,0,3,(MethodInfo *)0x0);
                    if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
                      UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_Text_GetComponent_Text);
                      if (*(long *)(lVar22 + 0x60) != 0) {
                        pUVar6 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelRight;
                        iStack_4c = *(int32_t *)(*(long *)(lVar22 + 0x60) + 0x14);
                        pSVar14 = System_Int32__ToString((int32_t)&iStack_4c,(MethodInfo *)0x0);
                        str2 = (long *)"APG";
                        if (g_data_057ae588 == '\0') {
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
                          il2cpp_runtime_helper_023445d0(&": ");
                          g_data_057ae588 = '\x01';
                        }
                        pSVar14 = System_String__Concat_3af7150
                                            ((System_String_o *)str2,": ",pSVar14,(MethodInfo *)0x0);
                        pUVar15 = UI_ElementFactory__CreateDefaultLabel
                                            (pUVar6,pUStack_40,pSVar14,0,3,(MethodInfo *)0x0);
                        if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
                          UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_Text_GetComponent_Text);
                          if (*(long *)(lVar22 + 0x58) != 0) {
                            pUVar6 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelRight;
                            iStack_4c = *(int32_t *)(*(long *)(lVar22 + 0x58) + 0x14);
                            pSVar14 = System_Int32__ToString((int32_t)&iStack_4c,(MethodInfo *)0x0);
                            str2 = (long *)"Thunder spear";
                            if (g_data_057ae588 == '\0') {
                              il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
                              il2cpp_runtime_helper_023445d0(&": ");
                              g_data_057ae588 = '\x01';
                            }
                            pSVar14 = System_String__Concat_3af7150
                                                ((System_String_o *)str2,": ",pSVar14,
                                                 (MethodInfo *)0x0);
                            pUVar15 = UI_ElementFactory__CreateDefaultLabel
                                                (pUVar6,pUStack_40,pSVar14,0,3,(MethodInfo *)0x0);
                            if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
                              UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_Text_GetComponent_Text);
                              if (*(long *)(lVar22 + 0x68) != 0) {
                                pUVar6 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelRight;
                                iStack_4c = *(int32_t *)(*(long *)(lVar22 + 0x68) + 0x14);
                                pSVar14 = System_Int32__ToString((int32_t)&iStack_4c,(MethodInfo *)0x0);
                                str2 = (long *)"Other";
                                if (g_data_057ae588 == '\0') {
                                  il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
                                  il2cpp_runtime_helper_023445d0(&": ");
                                  g_data_057ae588 = '\x01';
                                }
                                pSVar14 = System_String__Concat_3af7150
                                                    ((System_String_o *)str2,": ",pSVar14,
                                                     (MethodInfo *)0x0);
                                pUVar15 = UI_ElementFactory__CreateDefaultLabel
                                                    (pUVar6,pUStack_40,pSVar14,0,3,(MethodInfo *)0x0);
                                if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
                                  UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_Text_GetComponent_Text);
                                  pUVar11 = pUStack_48;
                                  UI_BasePanel__CreateHorizontalDivider
                                            ((UI_BasePanel_o *)pUStack_48,
                                             ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelRight,
                                             1.0,(MethodInfo *)0x0);
                                  pSVar14 = "Humans Killed";
                                  str2 = (long *)((UI_BasePanel_Fields *)&pUVar11->fields)->DoublePanelRight;
                                  if (g_data_057ae589 == '\0') {
                                    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
                                    g_data_057ae589 = '\x01';
                                  }
                                  pUVar15 = UI_ElementFactory__CreateDefaultLabel
                                                      ((UnityEngine_Transform_o *)str2,pUStack_40,pSVar14,1,3,
                                                       (MethodInfo *)0x0);
                                  if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
                                    UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_Text_GetComponent_Text);
                                    if (*(long *)(lVar22 + 0x70) != 0) {
                                      pUVar6 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelRight;
                                      iStack_4c = *(int32_t *)(*(long *)(lVar22 + 0x70) + 0x14);
                                      pSVar14 = System_Int32__ToString((int32_t)&iStack_4c,(MethodInfo *)0x0);
                                      str2 = (long *)"Total";
                                      if (g_data_057ae588 == '\0') {
                                        il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
                                        il2cpp_runtime_helper_023445d0(&": ");
                                        g_data_057ae588 = '\x01';
                                      }
                                      pSVar14 = System_String__Concat_3af7150
                                                          ((System_String_o *)str2,": ",pSVar14,
                                                           (MethodInfo *)0x0);
                                      pUVar15 = UI_ElementFactory__CreateDefaultLabel
                                                          (pUVar6,pUStack_40,pSVar14,0,3,(MethodInfo *)0x0);
                                      if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
                                        UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_Text_GetComponent_Text);
                                        if (*(long *)(lVar22 + 0x78) != 0) {
                                          pUVar6 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->
                                                   DoublePanelRight;
                                          iStack_4c = *(int32_t *)(*(long *)(lVar22 + 0x78) + 0x14);
                                          pSVar14 = System_Int32__ToString
                                                              ((int32_t)&iStack_4c,(MethodInfo *)0x0);
                                          str2 = (long *)"Blade";
                                          if (g_data_057ae588 == '\0') {
                                            il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
                                            il2cpp_runtime_helper_023445d0(&": ");
                                            g_data_057ae588 = '\x01';
                                          }
                                          pSVar14 = System_String__Concat_3af7150
                                                              ((System_String_o *)str2,": ",pSVar14,
                                                               (MethodInfo *)0x0);
                                          pUVar15 = UI_ElementFactory__CreateDefaultLabel
                                                              (pUVar6,pUStack_40,pSVar14,0,3,(MethodInfo *)0x0
                                                              );
                                          if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
                                            UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_Text_GetComponent_Text)
                                            ;
                                            if (*(long *)(lVar22 + 0x80) != 0) {
                                              pUVar6 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->
                                                       DoublePanelRight;
                                              iStack_4c = *(int32_t *)(*(long *)(lVar22 + 0x80) + 0x14);
                                              pSVar14 = System_Int32__ToString
                                                                  ((int32_t)&iStack_4c,(MethodInfo *)0x0);
                                              str2 = (long *)"AHSS";
                                              if (g_data_057ae588 == '\0') {
                                                il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
                                                il2cpp_runtime_helper_023445d0(&": ");
                                                g_data_057ae588 = '\x01';
                                              }
                                              pSVar14 = System_String__Concat_3af7150
                                                                  ((System_String_o *)str2,": ",
                                                                   pSVar14,(MethodInfo *)0x0);
                                              pUVar15 = UI_ElementFactory__CreateDefaultLabel
                                                                  (pUVar6,pUStack_40,pSVar14,0,3,
                                                                   (MethodInfo *)0x0);
                                              if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
                                                UnityEngine_GameObject__GetComponent_object_
                                                          (pUVar15,MethodInfo_Text_GetComponent_Text);
                                                if (*(long *)(lVar22 + 0x90) != 0) {
                                                  pUVar6 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->
                                                           DoublePanelRight;
                                                  iStack_4c = *(int32_t *)(*(long *)(lVar22 + 0x90) + 0x14);
                                                  pSVar14 = System_Int32__ToString
                                                                      ((int32_t)&iStack_4c,(MethodInfo *)0x0);
                                                  str2 = (long *)"APG";
                                                  if (g_data_057ae588 == '\0') {
                                                    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
                                                    il2cpp_runtime_helper_023445d0(&": ");
                                                    g_data_057ae588 = '\x01';
                                                  }
                                                  pSVar14 = System_String__Concat_3af7150
                                                                      ((System_String_o *)str2,": ",
                                                                       pSVar14,(MethodInfo *)0x0);
                                                  pUVar15 = UI_ElementFactory__CreateDefaultLabel
                                                                      (pUVar6,pUStack_40,pSVar14,0,3,
                                                                       (MethodInfo *)0x0);
                                                  if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
                                                    UnityEngine_GameObject__GetComponent_object_
                                                              (pUVar15,MethodInfo_Text_GetComponent_Text);
                                                    if (*(long *)(lVar22 + 0x88) != 0) {
                                                      pUVar6 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->
                                                               DoublePanelRight;
                                                      iStack_4c = *(int32_t *)
                                                                   (*(long *)(lVar22 + 0x88) + 0x14);
                                                      pSVar14 = System_Int32__ToString
                                                                          ((int32_t)&iStack_4c,
                                                                           (MethodInfo *)0x0);
                                                      str2 = (long *)"Thunder spear";
                                                      if (g_data_057ae588 == '\0') {
                                                        il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
                                                        il2cpp_runtime_helper_023445d0(&": ");
                                                        g_data_057ae588 = '\x01';
                                                      }
                                                      pSVar14 = System_String__Concat_3af7150
                                                                          ((System_String_o *)str2,
                                                                           ": ",pSVar14,
                                                                           (MethodInfo *)0x0);
                                                      pUVar15 = UI_ElementFactory__CreateDefaultLabel
                                                                          (pUVar6,pUStack_40,pSVar14,0,3,
                                                                           (MethodInfo *)0x0);
                                                      if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
                                                        UnityEngine_GameObject__GetComponent_object_
                                                                  (pUVar15,MethodInfo_Text_GetComponent_Text);
                                                        if (*(long *)(lVar22 + 0x98) != 0) {
                                                          pUVar6 = ((UI_BasePanel_Fields *)&pUStack_48->fields
                                                                   )->DoublePanelRight;
                                                          iStack_4c = *(int32_t *)
                                                                       (*(long *)(lVar22 + 0x98) + 0x14);
                                                          pSVar14 = System_Int32__ToString
                                                                              ((int32_t)&iStack_4c,
                                                                               (MethodInfo *)0x0);
                                                          str2 = (long *)"Titan";
                                                          if (g_data_057ae588 == '\0') {
                                                            il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
                                                            il2cpp_runtime_helper_023445d0(&": ");
                                                            g_data_057ae588 = '\x01';
                                                          }
                                                          pSVar14 = System_String__Concat_3af7150
                                                                              ((System_String_o *)str2,
                                                                               ": ",pSVar14,
                                                                               (MethodInfo *)0x0);
                                                          pUVar15 = UI_ElementFactory__CreateDefaultLabel
                                                                              (pUVar6,pUStack_40,pSVar14,0,3,
                                                                               (MethodInfo *)0x0);
                                                          if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
                                                            UnityEngine_GameObject__GetComponent_object_
                                                                      (pUVar15,MethodInfo_Text_GetComponent_Text);
                                                            if (*(long *)(lVar22 + 0xa0) != 0) {
                                                              pUVar6 = ((UI_BasePanel_Fields *)
                                                                       &pUStack_48->fields)->DoublePanelRight;
                                                              iStack_4c = *(int32_t *)
                                                                           (*(long *)(lVar22 + 0xa0) + 0x14);
                                                              pSVar14 = System_Int32__ToString
                                                                                  ((int32_t)&iStack_4c,
                                                                                   (MethodInfo *)0x0);
                                                              str2 = (long *)"Other";
                                                              if (g_data_057ae588 == '\0') {
                                                                il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
                                                                il2cpp_runtime_helper_023445d0(&": ");
                                                                g_data_057ae588 = '\x01';
                                                              }
                                                              pSVar14 = System_String__Concat_3af7150
                                                                                  ((System_String_o *)str2,
                                                                                   ": ",pSVar14,
                                                                                   (MethodInfo *)0x0);
                                                              pUVar15 = UI_ElementFactory__CreateDefaultLabel
                                                                                  (pUVar6,pUStack_40,pSVar14,0
                                                                                   ,3,(MethodInfo *)0x0);
                                                              if (pUVar15 != (UnityEngine_GameObject_o *)0x0)
                                                              {
                                                                UnityEngine_GameObject__GetComponent_object_
                                                                          (pUVar15,MethodInfo_Text_GetComponent_Text);
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
              }
            }
          }
        }
label_04401954:
        il2cpp_runtime_helper_022b2c90();
      } while( true );
    }
    UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_Text_GetComponent_Text);
  } while( true );
joined_r0x044019b6:
  lVar21 = lVar22;
  if ((System_String_o *)str2 != (System_String_o *)0x0) {
    pSVar9 = ((System_String_o *)str2)->klass;
    uVar5._0_1_ = (pSVar9->_2).rank;
    uVar5._1_1_ = (pSVar9->_2).minimumAlignment;
    if ((ulong)uVar5 != 0) {
      pIVar8 = (pSVar9->_1).interfaceOffsets;
      lVar22 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar22) == TypeInfo_IDisposable) {
          pVVar18 = &(pSVar9->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar22);
          goto label_04401a0d;
        }
        lVar22 = lVar22 + 0x10;
      } while ((ulong)uVar5 << 4 != lVar22);
    }
    pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(str2,TypeInfo_IDisposable,0);
label_04401a0d:
    (*pVVar18->methodPtr)(str2,pVVar18->method);
  }
  if (lVar20 == 0) {
    _Unwind_Resume(lVar21);
  }
  lVar22 = il2cpp_runtime_helper_022fefe0();
  lVar20 = lVar21;
  goto joined_r0x044019b6;
}


// UI.EditProfileStatsPanel$$CreateStatLabel
// il2cpp: void UI_EditProfileStatsPanel__CreateStatLabel (UI_EditProfileStatsPanel_o* __this, UnityEngine_Transform_o* panel, UI_ElementStyle_o* style, System_String_o* title, System_String_o* value, const MethodInfo* method);
// 0x4401ac0

void UI_EditProfileStatsPanel__CreateStatLabel
               (UI_EditProfileStatsPanel_o *__this,UnityEngine_Transform_o *panel,UI_ElementStyle_o *style,
               System_String_o *title,System_String_o *value,MethodInfo *method)

{
  System_String_o *title_00;
  UnityEngine_GameObject_o *__this_00;
  
  if (g_data_057ae588 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&": ");
    g_data_057ae588 = '\x01';
  }
  title_00 = System_String__Concat_3af7150(title,": ",value,(MethodInfo *)0x0);
  __this_00 = UI_ElementFactory__CreateDefaultLabel(panel,style,title_00,0,3,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_Text_GetComponent_Text);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)panel,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileStatsPanel$$CreateTitleLabel
// il2cpp: void UI_EditProfileStatsPanel__CreateTitleLabel (UI_EditProfileStatsPanel_o* __this, UnityEngine_Transform_o* panel, UI_ElementStyle_o* style, System_String_o* title, const MethodInfo* method);
// 0x4401a50

void UI_EditProfileStatsPanel__CreateTitleLabel
               (UI_EditProfileStatsPanel_o *__this,UnityEngine_Transform_o *panel,UI_ElementStyle_o *style,
               System_String_o *title,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  System_String_o *pSVar2;
  UI_ElementStyle_o *style_00;
  System_String_o *str2;
  
  if (g_data_057ae589 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    g_data_057ae589 = '\x01';
  }
  pSVar2 = (System_String_o *)0x1;
  str2 = (System_String_o *)0x3;
  pUVar1 = UI_ElementFactory__CreateDefaultLabel(panel,style,title,1,3,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__GetComponent_object_(pUVar1,MethodInfo_Text_GetComponent_Text);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae588 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&": ");
    g_data_057ae588 = '\x01';
  }
  pSVar2 = System_String__Concat_3af7150(pSVar2,": ",str2,(MethodInfo *)0x0);
  pUVar1 = UI_ElementFactory__CreateDefaultLabel
                     ((UnityEngine_Transform_o *)style,style_00,pSVar2,0,3,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__GetComponent_object_(pUVar1,MethodInfo_Text_GetComponent_Text);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)style,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileStatsPanel$$.ctor
// il2cpp: void UI_EditProfileStatsPanel___ctor (UI_EditProfileStatsPanel_o* __this, const MethodInfo* method);
// 0x4401b60

void UI_EditProfileStatsPanel___ctor(UI_EditProfileStatsPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


