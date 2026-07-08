// Type: UI.CharacterEditorTitanCostumePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CharacterEditorTitanCostumePanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorTitanCostumePanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.CharacterEditorTitanCostumePanel.<>c$$.cctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c___cctor (const MethodInfo* method);
// 0x405b400

void UI_CharacterEditorTitanCostumePanel_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_0570445c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570445c = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c___ctor (UI_CharacterEditorTitanCostumePanel___c_o* __this, const MethodInfo* method);
// 0x405b470

void UI_CharacterEditorTitanCostumePanel_<>c___ctor
               (UI_CharacterEditorTitanCostumePanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c$$<OnButtonClick>b__25_6
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c___OnButtonClick_b__25_6 (UI_CharacterEditorTitanCostumePanel___c_o* __this, const MethodInfo* method);
// 0x405b480

void UI_CharacterEditorTitanCostumePanel_<>c__<OnButtonClick>b__25_6
               (UI_CharacterEditorTitanCostumePanel___c_o *__this,MethodInfo *method)

{
  long *plVar1;
  
  if (DAT_0570445d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_0570445d = '\x01';
  }
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Utility_CharacterPreviewGenerator__ClearSessionGeneratedPreviews((MethodInfo *)0x0);
  plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x248))();
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass17_0$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0___ctor (UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x4059300

void UI_CharacterEditorTitanCostumePanel_<>c__DisplayClass17_0___ctor
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass17_0$$<Setup>b__9
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0___Setup_b__9 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x405b510

void UI_CharacterEditorTitanCostumePanel_<>c__DisplayClass17_0__<Setup>b__9
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0_o *__this,
               MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnButtonClick(__this_00,(__this->fields).button,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass17_1$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1___ctor (UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1_o* __this, const MethodInfo* method);
// 0x4059310

void UI_CharacterEditorTitanCostumePanel_<>c__DisplayClass17_1___ctor
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass17_1$$<Setup>b__10
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1___Setup_b__10 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1_o* __this, const MethodInfo* method);
// 0x405b530

void UI_CharacterEditorTitanCostumePanel_<>c__DisplayClass17_1__<Setup>b__10
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1_o *__this,
               MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnButtonClick(__this_00,(__this->fields).button,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass25_0$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0___ctor (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x405aaf0

void UI_CharacterEditorTitanCostumePanel_<>c__DisplayClass25_0___ctor
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass25_0$$<OnButtonClick>b__0
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0___OnButtonClick_b__0 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x405b550

void UI_CharacterEditorTitanCostumePanel_<>c__DisplayClass25_0__<OnButtonClick>b__0
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o *__this,
               MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(__this->fields).name,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass25_0$$<OnButtonClick>b__1
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0___OnButtonClick_b__1 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x405b570

void UI_CharacterEditorTitanCostumePanel_<>c__DisplayClass25_0__<OnButtonClick>b__1
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o *__this,
               MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(__this->fields).name,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass25_0$$<OnButtonClick>b__2
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0___OnButtonClick_b__2 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x405b590

void UI_CharacterEditorTitanCostumePanel_<>c__DisplayClass25_0__<OnButtonClick>b__2
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o *__this,
               MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(__this->fields).name,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass25_0$$<OnButtonClick>b__3
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0___OnButtonClick_b__3 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x405b5b0

void UI_CharacterEditorTitanCostumePanel_<>c__DisplayClass25_0__<OnButtonClick>b__3
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o *__this,
               MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(__this->fields).name,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass25_0$$<OnButtonClick>b__4
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0___OnButtonClick_b__4 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x405b5d0

void UI_CharacterEditorTitanCostumePanel_<>c__DisplayClass25_0__<OnButtonClick>b__4
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o *__this,
               MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570445e == '\0') {
    il2cpp_init_method_metadata(&"LoadPreset");
    DAT_0570445e = '\x01';
    in_RDX = extraout_RDX;
  }
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish(__this_00,"LoadPreset",in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass25_0$$<OnButtonClick>b__5
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0___OnButtonClick_b__5 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x405b610

void UI_CharacterEditorTitanCostumePanel_<>c__DisplayClass25_0__<OnButtonClick>b__5
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass25_0_o *__this,
               MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(__this->fields).name,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__22$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22___ctor (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4059dd0

void UI_CharacterEditorTitanCostumePanel_<CapturePreviousTitanProfilePreview>d__22___ctor
               (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o
                *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__22$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22__System_IDisposable_Dispose (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o* __this, const MethodInfo* method);
// 0x405b630

void UI_CharacterEditorTitanCostumePanel_<CapturePreviousTitanProfilePreview>d__22__System_IDisposable_Dispose
               (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o
                *__this,MethodInfo *method)

{
  return;
}


// UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__22$$MoveNext
// il2cpp: bool UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22__MoveNext (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o* __this, const MethodInfo* method);
// 0x405b640

bool_conflict
UI_CharacterEditorTitanCostumePanel_<CapturePreviousTitanProfilePreview>d__22__MoveNext
          (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o *__this,
          MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  Settings_TitanCustomSettings_o *pSVar4;
  Settings_SetSettingsContainer_TitanCustomSet__o *pSVar5;
  Settings_ListSetting_T__o *pSVar6;
  Settings_ListSetting_T__c *pSVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  Settings_StringSetting_o *pSVar9;
  Settings_IntSetting_o *pSVar10;
  Characters_DummyTitan_o *pCVar11;
  Characters_BasicTitanSetup_o *pCVar12;
  Il2CppClass *pIVar13;
  bool_conflict bVar14;
  Il2CppMethodPointer *ppIVar15;
  System_Collections_Generic_List_object__o *__this_00;
  Settings_TitanCustomSet_o *pSVar16;
  Il2CppObject *pIVar17;
  int32_t index;
  long lVar18;
  Settings_TitanCustomSet_o *pSVar19;
  Characters_DummyTitan_o **ppCVar20;
  
  if (DAT_0570445f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&TypeInfo_DummyTitan);
    il2cpp_init_method_metadata(&TypeInfo_IListSetting);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&MethodInfo_IListSetting_GetSets);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TitanCustomSet);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_0570445f = '\x01';
  }
  iVar3 = (__this->fields).__1__state;
  if (iVar3 == 1) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview(0,(MethodInfo *)0x0);
    pSVar4 = (__this->fields)._settings_5__2;
    if (((pSVar4 != (Settings_TitanCustomSettings_o *)0x0) &&
        (pSVar5 = (pSVar4->fields).TitanCustomSets,
        pSVar5 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) &&
       (pSVar10 = (pSVar5->fields).SelectedSetIndex, pSVar10 != (Settings_IntSetting_o *)0x0)) {
      Settings_TypedSetting<int>__set_Value
                ((Settings_TypedSetting_int__o *)pSVar10,(__this->fields)._currentSelectedIndex_5__3
                 ,MethodInfo_Void_set_Value);
      pSVar4 = (__this->fields)._settings_5__2;
      if ((pSVar4 != (Settings_TitanCustomSettings_o *)0x0) &&
         (pSVar5 = (pSVar4->fields).TitanCustomSets,
         pSVar5 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) {
        pSVar16 = (Settings_TitanCustomSet_o *)
                  Settings_SetSettingsContainer<object>__GetSelectedSet
                            ((Settings_SetSettingsContainer_T__o *)pSVar5,MethodInfo_BaseSetSetting_GetSelectedSet);
        if (pSVar16 != (Settings_TitanCustomSet_o *)0x0) {
          bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
          if (((pSVar16->klass->_2).naturalAligment < bVar1) ||
             ((pSVar16->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_TitanCustomSet)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pSVar16);
          }
        }
        pCVar11 = (__this->fields)._character_5__4;
        if ((pCVar11 != (Characters_DummyTitan_o *)0x0) &&
           (pCVar12 = (pCVar11->fields).Setup, pCVar12 != (Characters_BasicTitanSetup_o *)0x0)) {
          ppCVar20 = &(__this->fields)._character_5__4;
          Characters_BasicTitanSetup__Load(pCVar12,pSVar16,(MethodInfo *)0x0);
          if (*ppCVar20 != (Characters_DummyTitan_o *)0x0) {
            Characters_DummyCharacter__Idle
                      ((Characters_DummyCharacter_o *)*ppCVar20,(MethodInfo *)0x0);
            *ppCVar20 = (Characters_DummyTitan_o *)0x0;
            il2cpp_runtime_glue(ppCVar20,0);
            return 0;
          }
        }
      }
    }
  }
  else {
    if (iVar3 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    (__this->fields)._settings_5__2 =
         *(Settings_TitanCustomSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
    il2cpp_runtime_glue();
    pSVar4 = (__this->fields)._settings_5__2;
    if (((pSVar4 != (Settings_TitanCustomSettings_o *)0x0) &&
        (pSVar5 = (pSVar4->fields).TitanCustomSets,
        pSVar5 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) &&
       (pSVar6 = (pSVar5->fields).Sets, pSVar6 != (Settings_ListSetting_T__o *)0x0)) {
      pSVar7 = pSVar6->klass;
      uVar2._0_1_ = (pSVar7->_2).rank;
      uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar8 = (pSVar7->_1).interfaceOffsets;
        lVar18 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar18) == TypeInfo_IListSetting) {
            ppIVar15 = &(&(pSVar7->vtable)._0_Equals)[*(int *)((long)&pIVar8->offset + lVar18) + 2].
                        methodPtr;
            goto LAB_0405b906;
          }
          lVar18 = lVar18 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar18);
      }
      ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pSVar6,TypeInfo_IListSetting,2);
LAB_0405b906:
      __this_00 = (System_Collections_Generic_List_object__o *)
                  (**ppIVar15)(pSVar6,(MethodInfo *)ppIVar15[1]);
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
        index = 0;
        if ((__this_00->fields)._size < 1) {
          return 0;
        }
        while (pSVar16 = (Settings_TitanCustomSet_o *)
                         System_Collections_Generic_List<object>__get_Item
                                   (__this_00,index,MethodInfo_BaseSetting_get_Item),
              pSVar16 != (Settings_TitanCustomSet_o *)0x0) {
          bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
          pSVar19 = pSVar16;
          if (((pSVar16->klass->_2).naturalAligment < bVar1) ||
             ((pSVar16->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_TitanCustomSet)) {
LAB_0405bb34:
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pSVar19);
          }
          pSVar9 = (pSVar16->fields).UniqueId;
          if (pSVar9 == (Settings_StringSetting_o *)0x0) break;
          bVar14 = System_String__op_Equality
                             ((pSVar9->fields)._value,(__this->fields).previousProfileId,
                              (MethodInfo *)0x0);
          if ((char)bVar14 != '\0') {
            pSVar4 = (__this->fields)._settings_5__2;
            if (((pSVar4 != (Settings_TitanCustomSettings_o *)0x0) &&
                (pSVar5 = (pSVar4->fields).TitanCustomSets,
                pSVar5 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) &&
               (pSVar10 = (pSVar5->fields).SelectedSetIndex, pSVar10 != (Settings_IntSetting_o *)0x0
               )) {
              (__this->fields)._currentSelectedIndex_5__3 = (pSVar10->fields)._value;
              Settings_TypedSetting<int>__set_Value
                        ((Settings_TypedSetting_int__o *)pSVar10,index,MethodInfo_Void_set_Value);
              pIVar13 = TypeInfo_DummyTitan;
              pSVar19 = *(Settings_TitanCustomSet_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
              if (pSVar19 != (Settings_TitanCustomSet_o *)0x0) {
                bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
                if (((pSVar19->klass->_2).naturalAligment < bVar1) ||
                   ((pSVar19->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CharacterEditorGameManager))
                goto LAB_0405bb34;
                pCVar11 = (Characters_DummyTitan_o *)(pSVar19->fields).Head;
                if (pCVar11 == (Characters_DummyTitan_o *)0x0) {
                  (__this->fields)._character_5__4 = (Characters_DummyTitan_o *)0x0;
                }
                else {
                  bVar1 = (TypeInfo_DummyTitan->_2).naturalAligment;
                  if (((((Settings_IntSetting_c *)pCVar11->klass)->_2).naturalAligment < bVar1) ||
                     ((((Settings_IntSetting_c *)pCVar11->klass)->_2).typeHierarchy
                      [(ulong)bVar1 - 1] != TypeInfo_DummyTitan)) {
LAB_0405bb41:
                    /* WARNING: Subroutine does not return */
                    il2cpp_unwind_resume(pCVar11,pIVar13);
                  }
                  (__this->fields)._character_5__4 = pCVar11;
                  if (((((Settings_IntSetting_c *)pCVar11->klass)->_2).naturalAligment < bVar1) ||
                     ((((Settings_IntSetting_c *)pCVar11->klass)->_2).typeHierarchy
                      [(ulong)bVar1 - 1] != pIVar13)) goto LAB_0405bb41;
                }
                ppCVar20 = &(__this->fields)._character_5__4;
                il2cpp_runtime_glue(ppCVar20);
                if ((*ppCVar20 != (Characters_DummyTitan_o *)0x0) &&
                   (pCVar12 = ((*ppCVar20)->fields).Setup,
                   pCVar12 != (Characters_BasicTitanSetup_o *)0x0)) {
                  Characters_BasicTitanSetup__Load(pCVar12,pSVar16,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pIVar17 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
                  (__this->fields).__2__current = pIVar17;
                  il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar17);
                  (__this->fields).__1__state = 1;
                  return (bool_conflict)CONCAT71((int7)((ulong)ppCVar20 >> 8),1);
                }
              }
            }
            break;
          }
          index = index + 1;
          if ((__this_00->fields)._size <= index) {
            return 0;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__22$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o* __this, const MethodInfo* method);
// 0x405bb50

Il2CppObject *
UI_CharacterEditorTitanCostumePanel_<CapturePreviousTitanProfilePreview>d__22__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__22$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22__System_Collections_IEnumerator_Reset (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o* __this, const MethodInfo* method);
// 0x405bb60

void UI_CharacterEditorTitanCostumePanel_<CapturePreviousTitanProfilePreview>d__22__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o
                *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__22$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22__System_Collections_IEnumerator_get_Current (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o* __this, const MethodInfo* method);
// 0x405bba0

Il2CppObject *
UI_CharacterEditorTitanCostumePanel_<CapturePreviousTitanProfilePreview>d__22__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__22_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__27$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27___ctor (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x405b220

void UI_CharacterEditorTitanCostumePanel_<SaveQuitCaptureCoroutineInternal>d__27___ctor
               (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o
                *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__27$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27__System_IDisposable_Dispose (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o* __this, const MethodInfo* method);
// 0x405bbb0

void UI_CharacterEditorTitanCostumePanel_<SaveQuitCaptureCoroutineInternal>d__27__System_IDisposable_Dispose
               (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o
                *__this,MethodInfo *method)

{
  return;
}


// UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__27$$MoveNext
// il2cpp: bool UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27__MoveNext (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o* __this, const MethodInfo* method);
// 0x405bbc0

bool_conflict
UI_CharacterEditorTitanCostumePanel_<SaveQuitCaptureCoroutineInternal>d__27__MoveNext
          (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o *__this,
          MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (DAT_05704460 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704460 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      (__this->fields).__1__state = -1;
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pIVar2 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar2;
      il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar2);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
    }
    return 0;
  }
  (__this->fields).__1__state = -1;
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview(0,(MethodInfo *)0x0);
  Utility_CharacterPreviewGenerator__SaveCachedPreviewsToDisk((MethodInfo *)0x0);
  ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
  return 0;
}


// UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__27$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o* __this, const MethodInfo* method);
// 0x405bc90

Il2CppObject *
UI_CharacterEditorTitanCostumePanel_<SaveQuitCaptureCoroutineInternal>d__27__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__27$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27__System_Collections_IEnumerator_Reset (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o* __this, const MethodInfo* method);
// 0x405bca0

void UI_CharacterEditorTitanCostumePanel_<SaveQuitCaptureCoroutineInternal>d__27__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o
                *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__27$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27__System_Collections_IEnumerator_get_Current (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o* __this, const MethodInfo* method);
// 0x405bce0

Il2CppObject *
UI_CharacterEditorTitanCostumePanel_<SaveQuitCaptureCoroutineInternal>d__27__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__27_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorTitanCostumePanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorTitanCostumePanel__get_Title (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x40581f0

System_String_o *
UI_CharacterEditorTitanCostumePanel__get_Title
          (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_0570444f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Title");
    il2cpp_init_method_metadata(&"CharacterEditor");
    il2cpp_init_method_metadata(&"Costume");
    il2cpp_init_method_metadata(&"");
    DAT_0570444f = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("CharacterEditor","Costume","Title","","",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorTitanCostumePanel$$get_Width
// il2cpp: float UI_CharacterEditorTitanCostumePanel__get_Width (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x4058290

float UI_CharacterEditorTitanCostumePanel__get_Width
                (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  return 380.0;
}


// UI.CharacterEditorTitanCostumePanel$$get_Height
// il2cpp: float UI_CharacterEditorTitanCostumePanel__get_Height (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x40582a0

float UI_CharacterEditorTitanCostumePanel__get_Height
                (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  return 1020.0;
}


// UI.CharacterEditorTitanCostumePanel$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorTitanCostumePanel__get_VerticalSpacing (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x40582b0

float UI_CharacterEditorTitanCostumePanel__get_VerticalSpacing
                (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.CharacterEditorTitanCostumePanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorTitanCostumePanel__get_HorizontalPadding (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x40582c0

int32_t UI_CharacterEditorTitanCostumePanel__get_HorizontalPadding
                  (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorTitanCostumePanel$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorTitanCostumePanel__get_VerticalPadding (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x40582d0

int32_t UI_CharacterEditorTitanCostumePanel__get_VerticalPadding
                  (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorTitanCostumePanel$$get_ScrollBar
// il2cpp: bool UI_CharacterEditorTitanCostumePanel__get_ScrollBar (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x40582e0

bool_conflict
UI_CharacterEditorTitanCostumePanel__get_ScrollBar
          (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CharacterEditorTitanCostumePanel$$Setup
// il2cpp: void UI_CharacterEditorTitanCostumePanel__Setup (UI_CharacterEditorTitanCostumePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40582f0

void UI_CharacterEditorTitanCostumePanel__Setup
               (UI_CharacterEditorTitanCostumePanel_o *__this,UI_BasePanel_o *parent,
               MethodInfo *method)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  Settings_SetSettingsContainer_T__o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  Settings_IntSetting_o *setting;
  Il2CppClass *pIVar6;
  Settings_BaseSetSetting_c *setting_00;
  UI_IconPickPopup_o *pUVar7;
  Settings_BaseSetting_o *setting_01;
  System_Collections_Specialized_OrderedDictionary_o *setting_02;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *setting_03;
  UI_ColorPickPopup_o *pUVar8;
  Settings_BoolSetting_o *setting_04;
  UI_CharacterEditorTitanCostumePanel_o *category;
  Settings_BaseSetSetting_o *pSVar9;
  System_String_o *pSVar10;
  MethodInfo *__this_00;
  System_String_o *pSVar11;
  UnityEngine_Events_UnityAction_o *pUVar12;
  System_String_array *pSVar13;
  UnityEngine_GameObject_o *pUVar14;
  long lVar15;
  Il2CppObject *pIVar16;
  UnityEngine_Transform_o *pUVar17;
  System_String_array *pSVar18;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  UI_CharacterEditorMenu_o *pUVar19;
  MethodInfo *method_04;
  UI_CharacterEditorTitanCostumePanel_o *pUVar20;
  UI_CharacterEditorTitanCostumePanel_o *pUVar21;
  ulong uVar22;
  
  if (DAT_05704450 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BasicTitanSetup);
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorMenu);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__17_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__17_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__17_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__17_3);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__17_4);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__17_5);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__17_6);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__17_7);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__17_8);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_IntSetting_GetSelectedSetIndex);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&MethodInfo_String___GetSetNames);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_TitanCustomSet);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__9);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass17_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__10);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass17_1);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Create");
    il2cpp_init_method_metadata(&"SaveQuit");
    il2cpp_init_method_metadata(&"CharacterEditor");
    il2cpp_init_method_metadata(&"Costume");
    il2cpp_init_method_metadata(&"Quit");
    il2cpp_init_method_metadata(&"Copy");
    il2cpp_init_method_metadata(&"Body");
    il2cpp_init_method_metadata(&"Delete");
    il2cpp_init_method_metadata(&"HairColor");
    il2cpp_init_method_metadata(&"Head");
    il2cpp_init_method_metadata(&"Rename");
    il2cpp_init_method_metadata(&"Eye");
    il2cpp_init_method_metadata(&"SkinColor");
    il2cpp_init_method_metadata(&"Import");
    il2cpp_init_method_metadata(&"Custom set");
    il2cpp_init_method_metadata(&"Hair");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Export");
    DAT_05704450 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
    pUVar19 = *(UI_CharacterEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar19 == (UI_CharacterEditorMenu_o *)0x0) goto LAB_040585c9;
LAB_0405854d:
    pIVar6 = TypeInfo_CharacterEditorMenu;
    bVar2 = (TypeInfo_CharacterEditorMenu->_2).naturalAligment;
    if (((pUVar19->klass->_2).naturalAligment < bVar2) ||
       ((pUVar19->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CharacterEditorMenu)) {
LAB_04059257:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pUVar19,pIVar6);
    }
    (__this->fields)._menu = pUVar19;
    if (((pUVar19->klass->_2).naturalAligment < bVar2) ||
       ((pUVar19->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != pIVar6)) goto LAB_04059257;
  }
  else {
    pUVar19 = *(UI_CharacterEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar19 != (UI_CharacterEditorMenu_o *)0x0) goto LAB_0405854d;
LAB_040585c9:
    (__this->fields)._menu = (UI_CharacterEditorMenu_o *)0x0;
  }
  il2cpp_runtime_glue(&(__this->fields)._menu);
  lVar15 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
  if (((lVar15 == 0) ||
      (pSVar4 = *(Settings_SetSettingsContainer_T__o **)(lVar15 + 0x20),
      pSVar4 == (Settings_SetSettingsContainer_T__o *)0x0)) ||
     (pSVar9 = Settings_SetSettingsContainer<object>__GetSelectedSet(pSVar4,MethodInfo_BaseSetSetting_GetSelectedSet),
     pSVar9 == (Settings_BaseSetSetting_o *)0x0)) goto LAB_040592f2;
  bVar2 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
  if (((pSVar9->klass->_2).naturalAligment < bVar2) ||
     ((pSVar9->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_TitanCustomSet)) {
LAB_04059265:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pSVar9);
  }
  pSVar5 = (pSVar9->fields).UniqueId;
  if (pSVar5 == (Settings_StringSetting_o *)0x0) goto LAB_040592f2;
  (__this->fields)._previousProfileId = (pSVar5->fields)._value;
  il2cpp_runtime_glue(&(__this->fields)._previousProfileId);
  pSVar10 = (System_String_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_00,0x18,130.0,20.0,pSVar10,(MethodInfo *)0x0);
  pSVar10 = "Costume";
  category = "CharacterEditor";
  lVar15 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
  pUVar17 = (__this->fields).BottomBar;
  pSVar11 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
  pUVar12 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton
            (pUVar17,(UI_ElementStyle_o *)__this_00,pSVar11,0.0,pUVar12,(MethodInfo *)0x0);
  pUVar17 = (__this->fields).BottomBar;
  pSVar11 = UI_UIManager__GetLocale
                      ((System_String_o *)category,pSVar10,"SaveQuit","","",
                       (MethodInfo *)0x0);
  pUVar12 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton
            (pUVar17,(UI_ElementStyle_o *)__this_00,pSVar11,0.0,pUVar12,(MethodInfo *)0x0);
  if ((lVar15 == 0) ||
     (*(Settings_SetSettingsContainer_T__o **)(lVar15 + 0x20) ==
      (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_040592f2;
  pSVar9 = Settings_SetSettingsContainer<object>__GetSelectedSet
                     (*(Settings_SetSettingsContainer_T__o **)(lVar15 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet);
  if (pSVar9 != (Settings_BaseSetSetting_o *)0x0) {
    bVar2 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
    if (((pSVar9->klass->_2).naturalAligment < bVar2) ||
       ((pSVar9->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_TitanCustomSet)) goto LAB_04059265;
  }
  pSVar4 = *(Settings_SetSettingsContainer_T__o **)(lVar15 + 0x20);
  if (pSVar4 == (Settings_SetSettingsContainer_T__o *)0x0) goto LAB_040592f2;
  pUVar17 = (__this->fields).SinglePanel;
  setting = (pSVar4->fields).SelectedSetIndex;
  pSVar13 = Settings_SetSettingsContainer<object>__GetSetNames(pSVar4,MethodInfo_String___GetSetNames);
  pUVar12 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateDropdownSetting
            (pUVar17,(UI_ElementStyle_o *)__this_00,(Settings_BaseSetting_o *)setting,"Custom set",
             pSVar13,"",170.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar12,
             (MethodInfo *)0x0);
  pUVar14 = UI_ElementFactory__CreateHorizontalGroup
                      ((__this->fields).SinglePanel,10.0,0,(MethodInfo *)0x0);
  lVar15 = il2cpp_glue_02274930(TypeInfo_string,3);
  if (lVar15 == 0) goto LAB_040592f2;
  if (*(int *)(lVar15 + 0x18) == 0) goto LAB_040592a2;
  puVar1 = (undefined8 *)(lVar15 + 0x20);
  *(undefined8 *)(lVar15 + 0x20) = "Create";
  il2cpp_runtime_glue(puVar1);
  if (*(uint *)(lVar15 + 0x18) < 2) goto LAB_040592a2;
  *(undefined8 *)(lVar15 + 0x28) = "Delete";
  il2cpp_runtime_glue(lVar15 + 0x28);
  if (*(uint *)(lVar15 + 0x18) < 3) goto LAB_040592a2;
  *(undefined8 *)(lVar15 + 0x30) = "Copy";
  il2cpp_runtime_glue(lVar15 + 0x30);
  if (*(int *)(lVar15 + 0x18) < 1) {
LAB_04058ab4:
    pUVar14 = UI_ElementFactory__CreateHorizontalGroup
                        ((__this->fields).SinglePanel,10.0,0,(MethodInfo *)0x0);
    lVar15 = il2cpp_glue_02274930(TypeInfo_string,3);
    if (lVar15 == 0) goto LAB_040592f2;
    if (*(int *)(lVar15 + 0x18) == 0) goto LAB_040592a2;
    puVar1 = (undefined8 *)(lVar15 + 0x20);
    *(undefined8 *)(lVar15 + 0x20) = "Rename";
    il2cpp_runtime_glue(puVar1);
    if (*(uint *)(lVar15 + 0x18) < 2) goto LAB_040592a2;
    *(undefined8 *)(lVar15 + 0x28) = "Import";
    il2cpp_runtime_glue(lVar15 + 0x28);
    if (*(uint *)(lVar15 + 0x18) < 3) goto LAB_040592a2;
    *(undefined8 *)(lVar15 + 0x30) = "Export";
    il2cpp_runtime_glue(lVar15 + 0x30);
    if (0 < *(int *)(lVar15 + 0x18)) {
      if (pUVar14 == (UnityEngine_GameObject_o *)0x0) {
        pIVar16 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass17_1);
        System_Object___ctor(pIVar16,(MethodInfo *)0x0);
        if (pIVar16 == (Il2CppObject *)0x0) goto LAB_040592f2;
        pIVar16[1].monitor = __this;
        il2cpp_runtime_glue(&pIVar16[1].monitor,__this);
        iVar3 = *(int *)(lVar15 + 0x18);
        goto joined_r0x040592a0;
      }
      uVar22 = 0;
      do {
        pIVar16 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass17_1);
        System_Object___ctor(pIVar16,(MethodInfo *)0x0);
        if (pIVar16 == (Il2CppObject *)0x0) goto LAB_040592f2;
        pIVar16[1].monitor = __this;
        il2cpp_runtime_glue(&pIVar16[1].monitor,__this);
        if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_040592a2;
        pIVar16[1].klass = *(Il2CppClass **)(lVar15 + 0x20 + uVar22 * 8);
        il2cpp_runtime_glue(pIVar16 + 1);
        pUVar17 = UnityEngine_GameObject__get_transform(pUVar14,(MethodInfo *)0x0);
        pIVar6 = pIVar16[1].klass;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar11 = UI_UIManager__GetLocaleCommon((System_String_o *)pIVar6,(MethodInfo *)0x0);
        pUVar12 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        pSVar13 = (System_String_array *)0x0;
        UI_ElementFactory__CreateDefaultButton
                  (pUVar17,(UI_ElementStyle_o *)__this_00,pSVar11,0.0,0.0,pUVar12,(MethodInfo *)0x0)
        ;
        uVar22 = uVar22 + 1;
      } while ((long)uVar22 < (long)*(int *)(lVar15 + 0x18));
    }
    UI_BasePanel__CreateHorizontalDivider
              ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_BasicTitanSetup[1].fields._currentCategoryPanelName + 4) == 0) {
      il2cpp_init_class();
    }
    pSVar13 = UI_CharacterEditorTitanCostumePanel__GetOptions
                        (TypeInfo_BasicTitanSetup,"Head",
                         *(int32_t *)((long)&(TypeInfo_BasicTitanSetup[1].fields.SinglePanel)->monitor + 4),0,
                         (MethodInfo *)pSVar13);
    if (pSVar9 != (Settings_BaseSetSetting_o *)0x0) {
      pUVar21 = (UI_CharacterEditorTitanCostumePanel_o *)(__this->fields).SinglePanel;
      setting_00 = pSVar9[1].klass;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar20 = category;
      pSVar11 = UI_UIManager__GetLocale
                          ((System_String_o *)category,pSVar10,"Head","",
                           "",(MethodInfo *)0x0);
      pSVar18 = UI_CharacterEditorTitanCostumePanel__GetIcons(pUVar20,pSVar13,method_00);
      lVar15 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (lVar15 != 0) {
        pUVar7 = *(UI_IconPickPopup_o **)(lVar15 + 0x50);
        pUVar12 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateIconPickSetting
                  ((UnityEngine_Transform_o *)pUVar21,(UI_ElementStyle_o *)__this_00,
                   (Settings_BaseSetting_o *)setting_00,pSVar11,pSVar13,pSVar18,pUVar7,"",
                   (System_String_array *)0x0,170.0,40.0,pUVar12,(UI_TooltipPopup_o *)0x0,
                   (MethodInfo *)0x0);
        pSVar13 = UI_CharacterEditorTitanCostumePanel__GetOptions
                            (pUVar21,"Body",
                             *(int32_t *)&(TypeInfo_BasicTitanSetup[1].fields.SinglePanel)->monitor,0,
                             (MethodInfo *)pSVar13);
        pUVar21 = (UI_CharacterEditorTitanCostumePanel_o *)(__this->fields).SinglePanel;
        setting_01 = pSVar9[1].monitor;
        pUVar20 = category;
        pSVar11 = UI_UIManager__GetLocale
                            ((System_String_o *)category,pSVar10,"Body","",
                             "",(MethodInfo *)0x0);
        pSVar18 = UI_CharacterEditorTitanCostumePanel__GetIcons(pUVar20,pSVar13,method_01);
        lVar15 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (lVar15 != 0) {
          pUVar7 = *(UI_IconPickPopup_o **)(lVar15 + 0x50);
          pUVar12 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          UI_ElementFactory__CreateIconPickSetting
                    ((UnityEngine_Transform_o *)pUVar21,(UI_ElementStyle_o *)__this_00,setting_01,
                     pSVar11,pSVar13,pSVar18,pUVar7,"",(System_String_array *)0x0,170.0,
                     40.0,pUVar12,(UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
          pSVar13 = UI_CharacterEditorTitanCostumePanel__GetOptions
                              (pUVar21,"Eye",
                               (int32_t)((TypeInfo_BasicTitanSetup[1].fields.SinglePanel)->fields).m_CachedPtr,0
                               ,(MethodInfo *)pSVar13);
          pUVar21 = (UI_CharacterEditorTitanCostumePanel_o *)(__this->fields).SinglePanel;
          setting_02 = pSVar9[1].fields.Settings;
          pUVar20 = category;
          pSVar11 = UI_UIManager__GetLocale
                              ((System_String_o *)category,pSVar10,"Eye","",
                               "",(MethodInfo *)0x0);
          pSVar18 = UI_CharacterEditorTitanCostumePanel__GetIcons(pUVar20,pSVar13,method_02);
          lVar15 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (lVar15 != 0) {
            pUVar7 = *(UI_IconPickPopup_o **)(lVar15 + 0x50);
            pUVar12 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            method_04 = __this_00;
            UI_ElementFactory__CreateIconPickSetting
                      ((UnityEngine_Transform_o *)pUVar21,(UI_ElementStyle_o *)__this_00,
                       (Settings_BaseSetting_o *)setting_02,pSVar11,pSVar13,pSVar18,pUVar7,
                       "",(System_String_array *)0x0,170.0,40.0,pUVar12,
                       (UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
            pSVar13 = UI_CharacterEditorTitanCostumePanel__GetHairOptions(pUVar21,method_04);
            pUVar17 = (__this->fields).SinglePanel;
            setting_03 = pSVar9[1].fields.TypedSettings;
            pUVar21 = category;
            pSVar11 = UI_UIManager__GetLocale
                                ((System_String_o *)category,pSVar10,"Hair","",
                                 "",(MethodInfo *)0x0);
            pSVar18 = UI_CharacterEditorTitanCostumePanel__GetIcons(pUVar21,pSVar13,method_03);
            lVar15 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (lVar15 != 0) {
              pUVar7 = *(UI_IconPickPopup_o **)(lVar15 + 0x50);
              pUVar12 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              UI_ElementFactory__CreateIconPickSetting
                        (pUVar17,(UI_ElementStyle_o *)__this_00,(Settings_BaseSetting_o *)setting_03
                         ,pSVar11,pSVar13,pSVar18,pUVar7,"",(System_String_array *)0x0,
                         170.0,40.0,pUVar12,(UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
              pUVar17 = (__this->fields).SinglePanel;
              pSVar5 = pSVar9[1].fields.Name;
              pSVar11 = UI_UIManager__GetLocale
                                  ((System_String_o *)category,pSVar10,"SkinColor","",
                                   "",(MethodInfo *)0x0);
              lVar15 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              if (lVar15 != 0) {
                pUVar8 = *(UI_ColorPickPopup_o **)(lVar15 + 0x48);
                pUVar12 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                UI_ElementFactory__CreateColorSetting
                          (pUVar17,(UI_ElementStyle_o *)__this_00,(Settings_BaseSetting_o *)pSVar5,
                           pSVar11,pUVar8,"",90.0,30.0,pUVar12,(MethodInfo *)0x0);
                pUVar17 = (__this->fields).SinglePanel;
                setting_04 = pSVar9[1].fields.Preset;
                pSVar10 = UI_UIManager__GetLocale
                                    ((System_String_o *)category,pSVar10,"HairColor","",
                                     "",(MethodInfo *)0x0);
                lVar15 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                if (lVar15 != 0) {
                  pUVar8 = *(UI_ColorPickPopup_o **)(lVar15 + 0x48);
                  pUVar12 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  UI_ElementFactory__CreateColorSetting
                            (pUVar17,(UI_ElementStyle_o *)__this_00,
                             (Settings_BaseSetting_o *)setting_04,pSVar10,pUVar8,"",90.0,
                             30.0,pUVar12,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
      uVar22 = 0;
      do {
        pIVar16 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass17_0);
        System_Object___ctor(pIVar16,(MethodInfo *)0x0);
        if (pIVar16 == (Il2CppObject *)0x0) goto LAB_040592f2;
        pIVar16[1].monitor = __this;
        il2cpp_runtime_glue(&pIVar16[1].monitor,__this);
        if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_040592a2;
        pIVar16[1].klass = *(Il2CppClass **)(lVar15 + 0x20 + uVar22 * 8);
        il2cpp_runtime_glue(pIVar16 + 1);
        pUVar17 = UnityEngine_GameObject__get_transform(pUVar14,(MethodInfo *)0x0);
        pIVar6 = pIVar16[1].klass;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar11 = UI_UIManager__GetLocaleCommon((System_String_o *)pIVar6,(MethodInfo *)0x0);
        pUVar12 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        pSVar13 = (System_String_array *)0x0;
        UI_ElementFactory__CreateDefaultButton
                  (pUVar17,(UI_ElementStyle_o *)__this_00,pSVar11,0.0,0.0,pUVar12,(MethodInfo *)0x0)
        ;
        uVar22 = uVar22 + 1;
      } while ((long)uVar22 < (long)*(int *)(lVar15 + 0x18));
      goto LAB_04058ab4;
    }
    pIVar16 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass17_0);
    System_Object___ctor(pIVar16,(MethodInfo *)0x0);
    if (pIVar16 == (Il2CppObject *)0x0) goto LAB_040592f2;
    pIVar16[1].monitor = __this;
    il2cpp_runtime_glue(&pIVar16[1].monitor,__this);
    iVar3 = *(int *)(lVar15 + 0x18);
joined_r0x040592a0:
    if (iVar3 == 0) {
LAB_040592a2:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar16[1].klass = (Il2CppClass *)*puVar1;
    il2cpp_runtime_glue(pIVar16 + 1);
  }
LAB_040592f2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCostumePanel$$GetOptions
// il2cpp: System_String_array* UI_CharacterEditorTitanCostumePanel__GetOptions (UI_CharacterEditorTitanCostumePanel_o* __this, System_String_o* prefix, int32_t options, bool includeNone, const MethodInfo* method);
// 0x4059320

System_String_array *
UI_CharacterEditorTitanCostumePanel__GetOptions
          (UI_CharacterEditorTitanCostumePanel_o *__this,System_String_o *prefix,int32_t options,
          bool_conflict includeNone,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  int local_2c;
  
  if (DAT_05704451 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"None");
    DAT_05704451 = '\x01';
  }
  local_2c = 0;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_System_String);
  if ((char)includeNone != '\0') {
    pSVar5 = System_String__Concat(prefix,"None",(MethodInfo *)0x0);
    lVar4 = MethodInfo_Void_Add;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_04059507;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 == (System_Object_array *)0x0) goto LAB_04059507;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar5;
      il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,(Il2CppObject *)pSVar5,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
  }
  if (options < 1) {
    local_2c = 0;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
LAB_04059507:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    local_2c = 0;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
      pSVar5 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
      System_String__Concat(prefix,pSVar5,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    do {
      pSVar5 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat(prefix,pSVar5,(MethodInfo *)0x0);
      lVar4 = MethodInfo_Void_Add;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_00->fields)._items;
      if (pSVar3 == (System_Object_array *)0x0) goto LAB_04059507;
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar5;
        il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)pSVar5,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      local_2c = local_2c + 1;
    } while (local_2c < options);
  }
  pSVar6 = (System_String_array *)
           System_Collections_Generic_List<object>__ToArray(__this_00,MethodInfo_String___ToArray);
  return pSVar6;
}


// UI.CharacterEditorTitanCostumePanel$$GetHairOptions
// il2cpp: System_String_array* UI_CharacterEditorTitanCostumePanel__GetHairOptions (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x4059730

System_String_array *
UI_CharacterEditorTitanCostumePanel__GetHairOptions
          (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 local_38;
  
  if (DAT_05704452 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BasicTitanSetup);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"HairF");
    il2cpp_init_method_metadata(&"HairM");
    DAT_05704452 = '\x01';
  }
  local_38 = 0;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_System_String);
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    iVar8 = 0;
    local_38 = local_38 & 0xffffffff;
    if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) != 0) goto LAB_04059861;
    while (il2cpp_init_class(), iVar8 < *(int *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x14)) {
      while( true ) {
        pSVar5 = System_Int32__ToString((int)&local_38 + 4,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat("HairM",pSVar5,(MethodInfo *)0x0);
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_00->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) goto LAB_04059a37;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar5;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,(Il2CppObject *)pSVar5,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        iVar8 = local_38._4_4_ + 1;
        local_38 = CONCAT44(iVar8,(int)local_38);
        if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) break;
LAB_04059861:
        if (*(int *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x14) <= iVar8) goto LAB_040598c0;
      }
    }
LAB_040598c0:
    iVar8 = 0;
    local_38 = local_38 & 0xffffffff00000000;
    if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) != 0) goto LAB_0405992f;
    while (il2cpp_init_class(), iVar8 < *(int *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x18)) {
      while( true ) {
        pSVar5 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat("HairF",pSVar5,(MethodInfo *)0x0);
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_00->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) goto LAB_04059a37;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar5;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,(Il2CppObject *)pSVar5,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        iVar8 = (int)local_38 + 1;
        local_38 = CONCAT44(local_38._4_4_,iVar8);
        if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) break;
LAB_0405992f:
        if (*(int *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x18) <= iVar8) goto LAB_0405998e;
      }
    }
LAB_0405998e:
    pSVar6 = (System_String_array *)
             System_Collections_Generic_List<object>__ToArray(__this_00,MethodInfo_String___ToArray);
    return pSVar6;
  }
  local_38 = local_38 & 0xffffffff;
  if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (*(int *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x14) < 1) {
    local_38 = local_38 & 0xffffffff00000000;
    if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (*(int *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x18) < 1) goto LAB_04059a37;
    pSVar5 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
    puVar7 = &"HairF";
  }
  else {
    pSVar5 = System_Int32__ToString((int)&local_38 + 4,(MethodInfo *)0x0);
    puVar7 = &"HairM";
  }
  System_String__Concat((System_String_o *)*puVar7,pSVar5,(MethodInfo *)0x0);
LAB_04059a37:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCostumePanel$$GetIcons
// il2cpp: System_String_array* UI_CharacterEditorTitanCostumePanel__GetIcons (UI_CharacterEditorTitanCostumePanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x4059530

System_String_array *
UI_CharacterEditorTitanCostumePanel__GetIcons
          (UI_CharacterEditorTitanCostumePanel_o *__this,System_String_array *options,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  int iVar5;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  ulong uVar8;
  
  if (DAT_05704453 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&"/Titans/Previews/");
    DAT_05704453 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_System_String);
  if (options != (System_String_array *)0x0) {
    iVar5 = (int)options->max_length;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      if (iVar5 < 1) {
LAB_040596b7:
        pSVar7 = (System_String_array *)
                 System_Collections_Generic_List<object>__ToArray(__this_00,MethodInfo_String___ToArray);
        return pSVar7;
      }
      uVar8 = 0;
      if ((options->max_length & 0xffffffff) != 0) {
        do {
          pSVar6 = options->m_Items[uVar8];
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar6 = System_String__Concat
                             (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"/Titans/Previews/"
                              ,pSVar6,(MethodInfo *)0x0);
          lVar4 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_00->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_04059720;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar6);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,(Il2CppObject *)pSVar6,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          uVar8 = uVar8 + 1;
          uVar2 = (uint)options->max_length;
          if ((long)(int)uVar2 <= (long)uVar8) goto LAB_040596b7;
        } while (uVar8 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (0 < iVar5) {
      pSVar6 = options->m_Items[0];
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      System_String__Concat
                (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"/Titans/Previews/",pSVar6,
                 (MethodInfo *)0x0);
    }
  }
LAB_04059720:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCostumePanel$$OnCustomSetSelected
// il2cpp: void UI_CharacterEditorTitanCostumePanel__OnCustomSetSelected (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x4059a40

void UI_CharacterEditorTitanCostumePanel__OnCustomSetSelected
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  byte bVar2;
  long lVar3;
  Settings_SetSettingsContainer_T__o *__this_00;
  Settings_StringSetting_o *pSVar4;
  UI_CharacterEditorMenu_o *pUVar5;
  System_String_o *b;
  System_String_o *a;
  UnityEngine_MonoBehaviour_o *__this_01;
  Il2CppClass *pIVar6;
  UI_CharacterEditorTitanMenu_o *pUVar7;
  bool_conflict bVar8;
  Settings_BaseSetSetting_o *pSVar9;
  Il2CppObject *__this_02;
  UI_CharacterEditorTitanMenu_o *titanMenu;
  
  if (DAT_05704454 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorTitanMenu);
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TitanCustomSet);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704454 = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
  if (((lVar3 == 0) ||
      (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),
      __this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) ||
     (pSVar9 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet),
     pSVar9 == (Settings_BaseSetSetting_o *)0x0)) {
LAB_04059d40:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar2 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
  if (((pSVar9->klass->_2).naturalAligment < bVar2) ||
     ((pSVar9->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_TitanCustomSet)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pSVar9);
  }
  pSVar4 = (pSVar9->fields).UniqueId;
  if ((pSVar4 == (Settings_StringSetting_o *)0x0) ||
     (pUVar5 = (__this->fields)._menu, pUVar5 == (UI_CharacterEditorMenu_o *)0x0))
  goto LAB_04059d40;
  b = (pSVar4->fields)._value;
  (*(pUVar5->klass->vtable)._8_RebuildPanels.methodPtr)
            (pUVar5,1,(pUVar5->klass->vtable)._8_RebuildPanels.method);
  pUVar5 = (__this->fields)._menu;
  if (pUVar5 == (UI_CharacterEditorMenu_o *)0x0) goto LAB_04059d40;
  (*(pUVar5->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar5,1,(pUVar5->klass->vtable)._9_ResetCharacter.method);
  ppSVar1 = &(__this->fields)._previousProfileId;
  a = (__this->fields)._previousProfileId;
  if ((a != (System_String_o *)0x0) &&
     (bVar8 = System_String__op_Inequality(a,b,(MethodInfo *)0x0), (char)bVar8 != '\0')) {
    __this_01 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
      bVar2 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
      if (((__this_01->klass->_2).naturalAligment < bVar2) ||
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CharacterEditorGameManager)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_01);
      }
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      pIVar6 = (Il2CppClass *)*ppSVar1;
      if (DAT_05704455 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CapturePreviousTitanProfilePreview_d__22);
        DAT_05704455 = '\x01';
      }
      __this_02 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_CapturePreviousTitanProfilePreview_d__22);
      System_Object___ctor(__this_02,(MethodInfo *)0x0);
      *(undefined4 *)&__this_02[1].klass = 0;
      if (__this_02 != (Il2CppObject *)0x0) {
        __this_02[2].klass = pIVar6;
        il2cpp_runtime_glue(__this_02 + 2,pIVar6);
        if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
          UnityEngine_MonoBehaviour__StartCoroutine
                    (__this_01,(System_Collections_IEnumerator_o *)__this_02,(MethodInfo *)0x0);
          goto LAB_04059d29;
        }
      }
      goto LAB_04059d40;
    }
    goto LAB_04059d29;
  }
  if ((char)(__this->fields)._shouldGeneratePreviewAfterRebuild == '\0') goto LAB_04059d29;
  *(undefined1 *)&(__this->fields)._shouldGeneratePreviewAfterRebuild = 0;
  pUVar7 = (UI_CharacterEditorTitanMenu_o *)(__this->fields)._menu;
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_init_class();
    if (pUVar7 != (UI_CharacterEditorTitanMenu_o *)0x0) goto LAB_04059ceb;
LAB_04059d07:
    titanMenu = (UI_CharacterEditorTitanMenu_o *)0x0;
  }
  else {
    if (pUVar7 == (UI_CharacterEditorTitanMenu_o *)0x0) goto LAB_04059d07;
LAB_04059ceb:
    bVar2 = (TypeInfo_CharacterEditorTitanMenu->_2).naturalAligment;
    if ((((UI_CharacterEditorMenu_c *)pUVar7->klass)->_2).naturalAligment < bVar2)
    goto LAB_04059d07;
    titanMenu = (UI_CharacterEditorTitanMenu_o *)0x0;
    if ((((UI_CharacterEditorMenu_c *)pUVar7->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] ==
        TypeInfo_CharacterEditorTitanMenu) {
      titanMenu = pUVar7;
    }
  }
  Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet(titanMenu,1,(MethodInfo *)0x0);
LAB_04059d29:
  *ppSVar1 = b;
  il2cpp_runtime_glue(ppSVar1,b);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$CapturePreviousTitanProfilePreview
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview (UI_CharacterEditorTitanCostumePanel_o* __this, System_String_o* previousProfileId, System_String_o* currentProfileId, const MethodInfo* method);
// 0x4059d60

System_Collections_IEnumerator_o *
UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview
          (UI_CharacterEditorTitanCostumePanel_o *__this,System_String_o *previousProfileId,
          System_String_o *currentProfileId,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704455 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CapturePreviousTitanProfilePreview_d__22);
    DAT_05704455 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_CapturePreviousTitanProfilePreview_d__22);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)previousProfileId;
    il2cpp_runtime_glue(__this_00 + 2,previousProfileId);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCostumePanel$$OnCharacterChanged
// il2cpp: void UI_CharacterEditorTitanCostumePanel__OnCharacterChanged (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x4059df0

void UI_CharacterEditorTitanCostumePanel__OnCharacterChanged
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorMenu_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_CharacterEditorMenu_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._9_ResetCharacter.methodPtr;
    (*vtable_dispatch)
              (pUVar1,0,(pUVar1->klass->vtable)._9_ResetCharacter.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCostumePanel$$GeneratePreviewForCurrentSet
// il2cpp: void UI_CharacterEditorTitanCostumePanel__GeneratePreviewForCurrentSet (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x4059e20

void UI_CharacterEditorTitanCostumePanel__GeneratePreviewForCurrentSet
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_CharacterEditorTitanMenu_o *pUVar2;
  UI_CharacterEditorTitanMenu_o *titanMenu;
  
  if (DAT_05704456 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorTitanMenu);
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    DAT_05704456 = '\x01';
  }
  pUVar2 = (UI_CharacterEditorTitanMenu_o *)(__this->fields)._menu;
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (pUVar2 != (UI_CharacterEditorTitanMenu_o *)0x0) {
    bVar1 = (TypeInfo_CharacterEditorTitanMenu->_2).naturalAligment;
    if (bVar1 <= (((UI_CharacterEditorMenu_c *)pUVar2->klass)->_2).naturalAligment) {
      titanMenu = (UI_CharacterEditorTitanMenu_o *)0x0;
      if ((((UI_CharacterEditorMenu_c *)pUVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          TypeInfo_CharacterEditorTitanMenu) {
        titanMenu = pUVar2;
      }
      Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet(titanMenu,0,(MethodInfo *)0x0);
      return;
    }
  }
  Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet
            ((UI_CharacterEditorTitanMenu_o *)0x0,0,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$OnButtonClick
// il2cpp: void UI_CharacterEditorTitanCostumePanel__OnButtonClick (UI_CharacterEditorTitanCostumePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4059ec0

void UI_CharacterEditorTitanCostumePanel__OnButtonClick
               (UI_CharacterEditorTitanCostumePanel_o *__this,System_String_o *name,
               MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  UI_SetNamePopup_o *__this_00;
  UI_ImportPopup_o *__this_01;
  UI_SelectListPopup_o *__this_02;
  Settings_BaseSetSetting_c *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_SetSettingsContainer_T__o *pSVar7;
  Settings_StringSetting_o *pSVar8;
  UI_ExportPopup_o *__this_03;
  char cVar9;
  uint32_t uVar10;
  bool_conflict bVar11;
  Il2CppObject *pIVar12;
  UnityEngine_Events_UnityAction_o *pUVar13;
  System_String_array *collection;
  System_Collections_Generic_List_string__o *items;
  long *plVar14;
  SimpleJSONFixed_JSONNode_o *pSVar15;
  Settings_TitanCustomSet_o *set;
  System_String_o *pSVar16;
  System_String_o *pSVar17;
  Settings_BaseSetSetting_o *pSVar18;
  System_String_o **ppSVar19;
  UI_ConfirmPopup_o *__this_04;
  
  if (DAT_05704457 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_DummyTitan);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_CanDeleteSelectedSet);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&MethodInfo_String___GetSetNames);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TitanCustomSet);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnButtonClick_b__25_6);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnButtonClick_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnButtonClick_b__1);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnButtonClick_b__2);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnButtonClick_b__3);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnButtonClick_b__4);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnButtonClick_b__5);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass25_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"QuitWithoutSaveConfirm");
    il2cpp_init_method_metadata(&"Presets");
    il2cpp_init_method_metadata(&"Create");
    il2cpp_init_method_metadata(&"SaveQuit");
    il2cpp_init_method_metadata(&"Quit");
    il2cpp_init_method_metadata(&"LoadPreset");
    il2cpp_init_method_metadata(&"Copy");
    il2cpp_init_method_metadata(&"Delete");
    il2cpp_init_method_metadata(&"Rename");
    il2cpp_init_method_metadata(&"DeleteWarning");
    il2cpp_init_method_metadata(&"Import");
    il2cpp_init_method_metadata(&"Preset");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Export");
    il2cpp_init_method_metadata(&"New set");
    DAT_05704457 = '\x01';
  }
  pIVar12 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass25_0);
  System_Object___ctor(pIVar12,(MethodInfo *)0x0);
  if (pIVar12 == (Il2CppObject *)0x0) goto LAB_0405aae3;
  pIVar12[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_glue(pIVar12 + 1,__this);
  pIVar12[1].monitor = name;
  il2cpp_runtime_glue(&pIVar12[1].monitor);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (lVar4 == 0) goto LAB_0405aae3;
  __this_00 = *(UI_SetNamePopup_o **)(lVar4 + 0x88);
  pSVar16 = pIVar12[1].monitor;
  uVar10 = <PrivateImplementationDetails>__ComputeStringHash(pSVar16,(MethodInfo *)0x0);
  if (uVar10 < 0x5cb46bab) {
    if (uVar10 < 0x573e0af5) {
      if (uVar10 == 0x547f6497) {
        bVar11 = System_String__op_Equality(pSVar16,"SaveQuit",(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          plVar14 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
          if (plVar14 == (long *)0x0) goto LAB_0405aae3;
          (**(code **)(*plVar14 + 0x238))();
          set = *(Settings_TitanCustomSet_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
          if (set != (Settings_TitanCustomSet_o *)0x0) {
            bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
            if (((((Settings_BaseSetSetting_c *)set->klass)->_2).naturalAligment < bVar1) ||
               ((((Settings_BaseSetSetting_c *)set->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                TypeInfo_CharacterEditorGameManager)) goto LAB_0405aaeb;
            pSVar6 = (set->fields).Head;
            if (pSVar6 != (Settings_IntSetting_o *)0x0) {
              bVar1 = (TypeInfo_DummyTitan->_2).naturalAligment;
              if ((bVar1 <= (pSVar6->klass->_2).naturalAligment) &&
                 ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_DummyTitan)) {
                lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
                if ((lVar3 != 0) &&
                   (pSVar7 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),
                   pSVar7 != (Settings_SetSettingsContainer_T__o *)0x0)) {
                  set = (Settings_TitanCustomSet_o *)
                        Settings_SetSettingsContainer<object>__GetSelectedSet(pSVar7,MethodInfo_BaseSetSetting_GetSelectedSet);
                  if (set != (Settings_TitanCustomSet_o *)0x0) {
                    bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
                    if (((set->klass->_2).naturalAligment < bVar1) ||
                       ((set->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_TitanCustomSet))
                    goto LAB_0405aaeb;
                  }
                  if (*(Characters_BasicTitanSetup_o **)&pSVar6[1].fields !=
                      (Characters_BasicTitanSetup_o *)0x0) {
                    Characters_BasicTitanSetup__Load
                              (*(Characters_BasicTitanSetup_o **)&pSVar6[1].fields,set,
                               (MethodInfo *)0x0);
                    goto LAB_0405a672;
                  }
                }
                goto LAB_0405aae3;
              }
            }
          }
LAB_0405a672:
          if (DAT_05704459 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_SaveQuitCaptureCoroutineInternal_d__27);
            DAT_05704459 = '\x01';
          }
          pIVar12 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_SaveQuitCaptureCoroutineInternal_d__27);
          System_Object___ctor(pIVar12,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar12[1].klass = 0;
          UnityEngine_MonoBehaviour__StartCoroutine
                    ((UnityEngine_MonoBehaviour_o *)__this,
                     (System_Collections_IEnumerator_o *)pIVar12,(MethodInfo *)0x0);
          return;
        }
      }
      else if ((uVar10 == 0x573e0af4) &&
              (bVar11 = System_String__op_Equality(pSVar16,"Import",(MethodInfo *)0x0),
              (char)bVar11 != '\0')) {
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (lVar3 != 0) {
          __this_01 = *(UI_ImportPopup_o **)(lVar3 + 0x70);
          pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          if (__this_01 != (UI_ImportPopup_o *)0x0) {
            UI_ImportPopup__Show(__this_01,pUVar13,1,"",(MethodInfo *)0x0);
            return;
          }
        }
        goto LAB_0405aae3;
      }
      return;
    }
    if (uVar10 != 0x5797ea6a) {
      if (uVar10 != 0x5cb46baa) {
        return;
      }
      bVar11 = System_String__op_Equality(pSVar16,"LoadPreset",(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        return;
      }
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
      if ((lVar3 != 0) &&
         (pSVar7 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),
         pSVar7 != (Settings_SetSettingsContainer_T__o *)0x0)) {
        collection = Settings_SetSettingsContainer<object>__GetSetNames(pSVar7,MethodInfo_String___GetSetNames);
        items = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
        System_Collections_Generic_List<object>___ctor
                  ((System_Collections_Generic_List_object__o *)items,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_System_String);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (lVar3 != 0) {
          __this_02 = *(UI_SelectListPopup_o **)(lVar3 + 0x90);
          pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          if (__this_02 != (UI_SelectListPopup_o *)0x0) {
            UI_SelectListPopup__ShowLoad
                      (__this_02,items,"Presets",pUVar13,(UnityEngine_Events_UnityAction_o *)0x0,
                       (System_Collections_Generic_List_string__o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto LAB_0405aae3;
    }
    bVar11 = System_String__op_Equality(pSVar16,"Delete",(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      return;
    }
    if ((lVar3 == 0) ||
       (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20) ==
        (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_0405aae3;
    bVar11 = Settings_SetSettingsContainer<object>__CanDeleteSelectedSet
                       (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),MethodInfo_Boolean_CanDeleteSelectedSet);
    if ((char)bVar11 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (lVar3 == 0) goto LAB_0405aae3;
    __this_04 = *(UI_ConfirmPopup_o **)(lVar3 + 0x38);
    pSVar16 = UI_UIManager__GetLocaleCommon("DeleteWarning",(MethodInfo *)0x0);
    pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    pSVar17 = UI_UIManager__GetLocaleCommon("Delete",(MethodInfo *)0x0);
    if (__this_04 == (UI_ConfirmPopup_o *)0x0) goto LAB_0405aae3;
    goto LAB_0405a9b0;
  }
  if (uVar10 < 0x990de47e) {
    if (uVar10 == 0x990de47d) {
      ppSVar19 = &"Create";
      bVar11 = System_String__op_Equality(pSVar16,"Create",(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        return;
      }
      pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    }
    else {
      if (uVar10 != 0x658f3664) {
        return;
      }
      ppSVar19 = &"Copy";
      bVar11 = System_String__op_Equality(pSVar16,"Copy",(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        return;
      }
      pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    }
    UnityEngine_Events_UnityAction___ctor();
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar17 = UI_UIManager__GetLocaleCommon(*ppSVar19,(MethodInfo *)0x0);
    pSVar16 = "New set";
joined_r0x0405a736:
    if (__this_00 != (UI_SetNamePopup_o *)0x0) {
      UI_SetNamePopup__Show
                (__this_00,pSVar16,pUVar13,pSVar17,(System_String_o *)0x0,(MethodInfo *)0x0);
      return;
    }
    goto LAB_0405aae3;
  }
  if (uVar10 != 0xc7b3d356) {
    if (uVar10 == 0xc80631f3) {
      bVar11 = System_String__op_Equality(pSVar16,"Rename",(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        return;
      }
      if ((((lVar3 == 0) ||
           (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20) ==
            (Settings_SetSettingsContainer_T__o *)0x0)) ||
          (pSVar18 = Settings_SetSettingsContainer<object>__GetSelectedSet
                               (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet)
          , pSVar18 == (Settings_BaseSetSetting_o *)0x0)) ||
         (pSVar8 = (pSVar18->fields).Name, pSVar8 == (Settings_StringSetting_o *)0x0))
      goto LAB_0405aae3;
      pSVar16 = (pSVar8->fields)._value;
      pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar17 = UI_UIManager__GetLocaleCommon("Rename",(MethodInfo *)0x0);
      goto joined_r0x0405a736;
    }
    if (uVar10 != 0xe86349d3) {
      return;
    }
    bVar11 = System_String__op_Equality(pSVar16,"Export",(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      return;
    }
    if (((lVar3 == 0) ||
        (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20) ==
         (Settings_SetSettingsContainer_T__o *)0x0)) ||
       (set = (Settings_TitanCustomSet_o *)
              Settings_SetSettingsContainer<object>__GetSelectedSet
                        (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet),
       set == (Settings_TitanCustomSet_o *)0x0)) goto LAB_0405aae3;
    bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
    if (((((Settings_BaseSetSetting_c *)set->klass)->_2).naturalAligment < bVar1) ||
       ((((Settings_BaseSetSetting_c *)set->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        TypeInfo_TitanCustomSet)) {
LAB_0405aaeb:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(set);
    }
    pSVar5 = (Settings_BaseSetSetting_c *)set->klass;
    bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
    if (((pSVar5->_2).naturalAligment < bVar1) ||
       ((pSVar5->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_TitanCustomSet)) goto LAB_0405aaeb;
    plVar14 = (long *)(*(pSVar5->vtable)._5_SerializeToJsonObject.methodPtr)
                                (set,(pSVar5->vtable)._5_SerializeToJsonObject.method);
    if (plVar14 == (long *)0x0) goto LAB_0405aae3;
    cVar9 = (**(code **)(*plVar14 + 0x2f8))(plVar14,"Preset",*(undefined8 *)(*plVar14 + 0x300));
    if (cVar9 == '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto LAB_0405a4fe;
LAB_0405a9f1:
      lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    else {
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit(0,(MethodInfo *)0x0);
      (**(code **)(*plVar14 + 0x1b8))
                (plVar14,"Preset",pSVar15,*(undefined8 *)(*plVar14 + 0x1c0));
      if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto LAB_0405a9f1;
LAB_0405a4fe:
      il2cpp_init_class();
      lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    if (lVar3 != 0) {
      __this_03 = *(UI_ExportPopup_o **)(lVar3 + 0x68);
      pSVar16 = (System_String_o *)
                (**(code **)(*plVar14 + 0x318))(plVar14,4,*(undefined8 *)(*plVar14 + 800));
      if (__this_03 != (UI_ExportPopup_o *)0x0) {
        UI_ExportPopup__Show(__this_03,pSVar16,(MethodInfo *)0x0);
        return;
      }
    }
    goto LAB_0405aae3;
  }
  bVar11 = System_String__op_Equality(pSVar16,"Quit",(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (lVar3 == 0) goto LAB_0405aae3;
  __this_04 = *(UI_ConfirmPopup_o **)(lVar3 + 0x38);
  pSVar16 = UI_UIManager__GetLocaleCommon("QuitWithoutSaveConfirm",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    pUVar13 = *(UnityEngine_Events_UnityAction_o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    if (pUVar13 != (UnityEngine_Events_UnityAction_o *)0x0) goto LAB_0405a985;
LAB_0405aa62:
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    lVar3 = *(long *)(TypeInfo_c + 0xb8);
    *(UnityEngine_Events_UnityAction_o **)(lVar3 + 8) = pUVar13;
    il2cpp_runtime_glue(lVar3 + 8);
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    pUVar13 = *(UnityEngine_Events_UnityAction_o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    if (pUVar13 == (UnityEngine_Events_UnityAction_o *)0x0) goto LAB_0405aa62;
LAB_0405a985:
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  pSVar17 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
  if (__this_04 != (UI_ConfirmPopup_o *)0x0) {
LAB_0405a9b0:
    UI_ConfirmPopup__Show(__this_04,pSVar16,pUVar13,pSVar17,(MethodInfo *)0x0);
    return;
  }
LAB_0405aae3:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCostumePanel$$OnCostumeSetOperationFinish
// il2cpp: void UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish (UI_CharacterEditorTitanCostumePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x405ab50

void UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
               (UI_CharacterEditorTitanCostumePanel_o *__this,System_String_o *name,
               MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  Settings_SetSettingsContainer_T__o *__this_00;
  Settings_StringSetting_o *pSVar4;
  long *plVar5;
  System_String_o *value;
  Settings_BoolSetting_o *__this_01;
  bool_conflict bVar6;
  int iVar7;
  VirtualInvokeData *pVVar8;
  Settings_BaseSetSetting_o *pSVar9;
  Settings_ListSetting_T__c *pSVar10;
  Il2CppRuntimeInterfaceOffsetPair *pIVar11;
  Settings_ListSetting_T__o *pSVar12;
  MethodInfo *method_00;
  long lVar13;
  Settings_IntSetting_o *pSVar14;
  
  if (DAT_05704458 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&TypeInfo_IListSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_CopySelectedSet);
    il2cpp_init_method_metadata(&MethodInfo_Void_CreateSet);
    il2cpp_init_method_metadata(&MethodInfo_Void_DeleteSelectedSet);
    il2cpp_init_method_metadata(&MethodInfo_IntSetting_GetSelectedSetIndex);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&MethodInfo_IListSetting_GetSets);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Create");
    il2cpp_init_method_metadata(&"Copy");
    il2cpp_init_method_metadata(&"Delete");
    il2cpp_init_method_metadata(&"Rename");
    il2cpp_init_method_metadata(&"Import");
    DAT_05704458 = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto LAB_0405ac9c;
LAB_0405ab80:
    lVar13 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto LAB_0405ab80;
LAB_0405ac9c:
    il2cpp_init_class();
    lVar13 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if ((lVar13 == 0) || (lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68), lVar3 == 0))
  goto LAB_0405b1d3;
  lVar13 = *(long *)(lVar13 + 0x88);
  __this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20);
  bVar6 = System_String__op_Equality(name,"Create",(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    bVar6 = System_String__op_Equality(name,"Delete",(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if (__this_00 != (Settings_SetSettingsContainer_T__o *)0x0) {
        Settings_SetSettingsContainer<object>__DeleteSelectedSet(__this_00,MethodInfo_Void_DeleteSelectedSet);
        pSVar14 = (__this_00->fields).SelectedSetIndex;
        if (pSVar14 != (Settings_IntSetting_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          Settings_TypedSetting<int>__set_Value
                    ((Settings_TypedSetting_int__o *)pSVar14,0,MethodInfo_Void_set_Value);
          if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
            il2cpp_init_class();
          }
          Utility_CharacterPreviewGenerator__CleanupOrphanedPreviews((MethodInfo *)0x0);
          goto LAB_0405af78;
        }
      }
      goto LAB_0405b1d3;
    }
    bVar6 = System_String__op_Equality(name,"Rename",(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if ((((__this_00 != (Settings_SetSettingsContainer_T__o *)0x0) &&
           (pSVar9 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet),
           pSVar9 != (Settings_BaseSetSetting_o *)0x0)) && (lVar13 != 0)) &&
         ((*(long *)(lVar13 + 0xb8) != 0 &&
          (pSVar4 = (pSVar9->fields).Name, pSVar4 != (Settings_StringSetting_o *)0x0)))) {
        method_00 = *(MethodInfo **)(*(long *)(lVar13 + 0xb8) + 0x18);
        Settings_TypedSetting<object>__set_Value
                  ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)method_00,MethodInfo_Void_set_Value);
        goto LAB_0405af78;
      }
      goto LAB_0405b1d3;
    }
    bVar6 = System_String__op_Equality(name,"Copy",(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      method_00 = "Import";
      bVar6 = System_String__op_Equality(name,(System_String_o *)"Import",(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar13 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (lVar13 == 0) goto LAB_0405b1d3;
        plVar5 = *(long **)(lVar13 + 0x70);
        if (__this_00 == (Settings_SetSettingsContainer_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar9 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
        if (pSVar9 == (Settings_BaseSetSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar4 = (pSVar9->fields).Name;
        if (pSVar4 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        value = (pSVar4->fields)._value;
        pSVar9 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (plVar5[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (pSVar9 == (Settings_BaseSetSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        (*(pSVar9->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
                  (pSVar9,*(undefined8 *)(plVar5[0x19] + 0x18),
                   (pSVar9->klass->vtable)._8_DeserializeFromJsonString.method);
        pSVar9 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
        if (pSVar9 == (Settings_BaseSetSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        __this_01 = (pSVar9->fields).Preset;
        if (__this_01 == (Settings_BoolSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        Settings_TypedSetting<bool>__set_Value
                  ((Settings_TypedSetting_bool__o *)__this_01,0,MethodInfo_Void_set_Value);
        pSVar9 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
        if (pSVar9 == (Settings_BaseSetSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar4 = (pSVar9->fields).Name;
        if (pSVar4 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        Settings_TypedSetting<object>__set_Value
                  ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)value,MethodInfo_Void_set_Value);
        method_00 = *(MethodInfo **)(*plVar5 + 0x2a0);
        (**(code **)(*plVar5 + 0x298))(plVar5);
      }
      goto LAB_0405af78;
    }
    if (((lVar13 == 0) || (*(long *)(lVar13 + 0xb8) == 0)) ||
       (__this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_0405b1d3;
    Settings_SetSettingsContainer<object>__CopySelectedSet
              (__this_00,*(System_String_o **)(*(long *)(lVar13 + 0xb8) + 0x18),MethodInfo_Void_CopySelectedSet);
    pSVar12 = (__this_00->fields).Sets;
    if (pSVar12 == (Settings_ListSetting_T__o *)0x0) goto LAB_0405b1d3;
    pSVar14 = (__this_00->fields).SelectedSetIndex;
    pSVar10 = pSVar12->klass;
    uVar2._0_1_ = (pSVar10->_2).rank;
    uVar2._1_1_ = (pSVar10->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar11 = (pSVar10->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(long *)((long)&pIVar11->interfaceType + lVar13) == TypeInfo_IListSetting) goto LAB_0405af34;
        lVar13 = lVar13 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar13);
    }
  }
  else {
    if (((lVar13 == 0) || (*(long *)(lVar13 + 0xb8) == 0)) ||
       (__this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_0405b1d3;
    Settings_SetSettingsContainer<object>__CreateSet
              (__this_00,*(System_String_o **)(*(long *)(lVar13 + 0xb8) + 0x18),MethodInfo_Void_CreateSet);
    pSVar12 = (__this_00->fields).Sets;
    if (pSVar12 == (Settings_ListSetting_T__o *)0x0) goto LAB_0405b1d3;
    pSVar14 = (__this_00->fields).SelectedSetIndex;
    pSVar10 = pSVar12->klass;
    uVar1._0_1_ = (pSVar10->_2).rank;
    uVar1._1_1_ = (pSVar10->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar11 = (pSVar10->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(long *)((long)&pIVar11->interfaceType + lVar13) == TypeInfo_IListSetting) goto LAB_0405af34;
        lVar13 = lVar13 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar13);
    }
  }
  pVVar8 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar12,TypeInfo_IListSetting,0);
  goto LAB_0405af47;
LAB_0405af34:
  pVVar8 = &(pSVar10->vtable)._0_Equals + *(int *)((long)&pIVar11->offset + lVar13);
LAB_0405af47:
  iVar7 = (*pVVar8->methodPtr)(pSVar12,pVVar8->method);
  if (pSVar14 != (Settings_IntSetting_o *)0x0) {
    method_00 = (MethodInfo *)(ulong)(iVar7 - 1U);
    Settings_TypedSetting<int>__set_Value
              ((Settings_TypedSetting_int__o *)pSVar14,iVar7 - 1U,MethodInfo_Void_set_Value);
    *(undefined1 *)&(__this->fields)._shouldGeneratePreviewAfterRebuild = 1;
LAB_0405af78:
    UI_CharacterEditorTitanCostumePanel__OnCustomSetSelected(__this,method_00);
    return;
  }
LAB_0405b1d3:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCostumePanel$$SaveQuitCaptureCoroutineInternal
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x405ab00

System_Collections_IEnumerator_o *
UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal
          (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704459 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SaveQuitCaptureCoroutineInternal_d__27);
    DAT_05704459 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_SaveQuitCaptureCoroutineInternal_d__27);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorTitanCostumePanel$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel___ctor (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x405b240

void UI_CharacterEditorTitanCostumePanel___ctor
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_0
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_0 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x405b250

void UI_CharacterEditorTitanCostumePanel__<Setup>b__17_0
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570445a == '\0') {
    il2cpp_init_method_metadata(&"Quit");
    DAT_0570445a = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorTitanCostumePanel__OnButtonClick(__this,"Quit",in_RDX);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_1
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_1 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x405b290

void UI_CharacterEditorTitanCostumePanel__<Setup>b__17_1
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570445b == '\0') {
    il2cpp_init_method_metadata(&"SaveQuit");
    DAT_0570445b = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorTitanCostumePanel__OnButtonClick(__this,"SaveQuit",in_RDX);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_2
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_2 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x405b2d0

void UI_CharacterEditorTitanCostumePanel__<Setup>b__17_2
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel__OnCustomSetSelected(__this,method);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_3
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_3 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x405b2e0

void UI_CharacterEditorTitanCostumePanel__<Setup>b__17_3
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorMenu_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_CharacterEditorMenu_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._9_ResetCharacter.methodPtr;
    (*vtable_dispatch)
              (pUVar1,0,(pUVar1->klass->vtable)._9_ResetCharacter.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_4
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_4 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x405b310

void UI_CharacterEditorTitanCostumePanel__<Setup>b__17_4
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorMenu_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_CharacterEditorMenu_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._9_ResetCharacter.methodPtr;
    (*vtable_dispatch)
              (pUVar1,0,(pUVar1->klass->vtable)._9_ResetCharacter.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_5
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_5 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x405b340

void UI_CharacterEditorTitanCostumePanel__<Setup>b__17_5
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorMenu_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_CharacterEditorMenu_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._9_ResetCharacter.methodPtr;
    (*vtable_dispatch)
              (pUVar1,0,(pUVar1->klass->vtable)._9_ResetCharacter.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_6
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_6 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x405b370

void UI_CharacterEditorTitanCostumePanel__<Setup>b__17_6
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorMenu_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_CharacterEditorMenu_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._9_ResetCharacter.methodPtr;
    (*vtable_dispatch)
              (pUVar1,0,(pUVar1->klass->vtable)._9_ResetCharacter.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_7
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_7 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x405b3a0

void UI_CharacterEditorTitanCostumePanel__<Setup>b__17_7
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorMenu_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_CharacterEditorMenu_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._9_ResetCharacter.methodPtr;
    (*vtable_dispatch)
              (pUVar1,0,(pUVar1->klass->vtable)._9_ResetCharacter.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_8
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_8 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x405b3d0

void UI_CharacterEditorTitanCostumePanel__<Setup>b__17_8
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorMenu_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_CharacterEditorMenu_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._9_ResetCharacter.methodPtr;
    (*vtable_dispatch)
              (pUVar1,0,(pUVar1->klass->vtable)._9_ResetCharacter.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


