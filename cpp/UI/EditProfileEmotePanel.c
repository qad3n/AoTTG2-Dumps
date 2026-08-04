// Type: UI.EditProfileEmotePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/EditProfileEmotePanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/EditProfileEmotePanel.cs
// --------------------------------

// UI.EditProfileEmotePanel$$get_ScrollBar
// il2cpp: bool UI_EditProfileEmotePanel__get_ScrollBar (UI_EditProfileEmotePanel_o* __this, const MethodInfo* method);
// 0x43fb330

bool_conflict UI_EditProfileEmotePanel__get_ScrollBar(UI_EditProfileEmotePanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.EditProfileEmotePanel$$get_VerticalSpacing
// il2cpp: float UI_EditProfileEmotePanel__get_VerticalSpacing (UI_EditProfileEmotePanel_o* __this, const MethodInfo* method);
// 0x43fb340

float UI_EditProfileEmotePanel__get_VerticalSpacing(UI_EditProfileEmotePanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.EditProfileEmotePanel$$Setup
// il2cpp: void UI_EditProfileEmotePanel__Setup (UI_EditProfileEmotePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43fb350

void UI_EditProfileEmotePanel__Setup
               (UI_EditProfileEmotePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  Settings_ListSetting_T__o *__this_00;
  System_Collections_Generic_List_object__o *pSVar2;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  bool_conflict bVar4;
  long *plVar5;
  UI_EditProfileEmotePanel_o *__this_09;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  UnityEngine_Transform_o *parent_00;
  _union_249689 setting;
  System_Collections_Generic_List_object__o *__this_10;
  long *plVar8;
  MethodInfo *method_00;
  uint uVar9;
  Il2CppRGCTXData *pIVar10;
  long *unaff_RBP;
  MethodInfo *method_01;
  long lVar11;
  System_String_o **unaff_R13;
  undefined1 auVar12 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar13;
  Il2CppType *pIVar14;
  undefined1 auStack_d0 [16];
  System_String_o *pSStack_c0;
  Il2CppRGCTXData *pIStack_b8;
  _union_249689 _Stack_b0;
  UI_EditProfileEmotePanel_o *pUStack_a8;
  System_String_o *pSStack_a0;
  UnityEngine_Transform_o *pUStack_98;
  System_String_o *pSStack_90;
  uint uStack_54;
  UI_EditProfileEmotePanel_o *pUStack_50;
  UnityEngine_Transform_o *pUStack_48;
  System_String_array *pSStack_40;
  System_String_array *pSStack_38;
  
  if (g_data_057ae565 == '\0') {
    pSStack_90 = (System_String_o *)0x43fb379;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    pSStack_90 = (System_String_o *)0x43fb385;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_GetItemAt);
    pSStack_90 = (System_String_o *)0x43fb391;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pSStack_90 = (System_String_o *)0x43fb39d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pSStack_90 = (System_String_o *)0x43fb3a9;
    il2cpp_runtime_helper_023445d0(&"Text");
    pSStack_90 = (System_String_o *)0x43fb3b5;
    il2cpp_runtime_helper_023445d0(&" ");
    pSStack_90 = (System_String_o *)0x43fb3c1;
    il2cpp_runtime_helper_023445d0(&"Emoji");
    pSStack_90 = (System_String_o *)0x43fb3cd;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae565 = '\x01';
  }
  uStack_54 = 0;
  pIVar10 = (Il2CppRGCTXData *)0x0;
  pSStack_90 = (System_String_o *)0x43fb3eb;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  parent_00 = *(UnityEngine_Transform_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
  pSStack_90 = (System_String_o *)0x43fb417;
  plVar5 = (long *)(*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                             (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pSStack_90 = (System_String_o *)0x43fb429;
  __this_09 = (UI_EditProfileEmotePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  method_01 = (MethodInfo *)&g_data_00000018;
  pSStack_90 = (System_String_o *)0x43fb450;
  pUStack_50 = __this_09;
  UI_ElementStyle___ctor
            ((UI_ElementStyle_o *)__this_09,0x18,100.0,20.0,(System_String_o *)plVar5,(MethodInfo *)0x0);
  pSStack_90 = (System_String_o *)0x43fb455;
  pSStack_38 = UI_EditProfileEmotePanel__GetAvailableEmotes(__this_09,method_01);
  pSStack_90 = (System_String_o *)0x43fb462;
  pSStack_40 = UI_EditProfileEmotePanel__GetEmotePaths(__this_09,pSStack_38,method_00);
  setting = (_union_249689)__this;
  pUStack_48 = parent_00;
  if (parent_00 != (UnityEngine_Transform_o *)0x0) {
    plVar5 = (long *)(__this->fields).SinglePanel;
    do {
      unaff_RBP = &TypeInfo_UIManager;
      if (pUStack_48[1].monitor == (Settings_ListSetting_T__o *)0x0) goto label_043fb680;
      pSStack_90 = (System_String_o *)0x43fb53c;
      parent_00 = (UnityEngine_Transform_o *)
                  Settings_ListSetting_object___GetItemAt(pUStack_48[1].monitor,(int)pIVar10,MethodInfo_BaseSetting_GetItemAt);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        pSStack_90 = (System_String_o *)0x43fb555;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_90 = (System_String_o *)0x43fb491;
      pSVar6 = UI_UIManager__GetLocaleCommon("Text",(MethodInfo *)0x0);
      uVar9 = (int)pIVar10 + 1;
      pIVar10 = (Il2CppRGCTXData *)(ulong)uVar9;
      pSStack_90 = (System_String_o *)0x43fb4a7;
      uStack_54 = uVar9;
      pSVar7 = System_Int32__ToString((int32_t)&uStack_54,(MethodInfo *)0x0);
      pSStack_90 = (System_String_o *)0x43fb4be;
      pSVar6 = System_String__Concat_3af7150(pSVar6," ",pSVar7,(MethodInfo *)0x0);
      pSStack_90 = (System_String_o *)0x43fb503;
      UI_ElementFactory__CreateInputSetting
                ((UnityEngine_Transform_o *)plVar5,(UI_ElementStyle_o *)pUStack_50,
                 (Settings_BaseSetting_o *)parent_00,pSVar6,"",260.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      plVar5 = (long *)(__this->fields).SinglePanel;
      unaff_R13 = (System_String_o **)__this;
    } while (uVar9 != 8);
    pIVar10 = (Il2CppRGCTXData *)0x0;
    pSStack_90 = (System_String_o *)0x43fb571;
    UI_BasePanel__CreateHorizontalDivider
              ((UI_BasePanel_o *)__this,(UnityEngine_Transform_o *)plVar5,1.0,(MethodInfo *)0x0);
    while (__this_00 = (Settings_ListSetting_T__o *)pUStack_48[1].fields.m_CachedPtr,
          setting = (_union_249689)__this, __this_00 != (Settings_ListSetting_T__o *)0x0) {
      parent_00 = (__this->fields).SinglePanel;
      pSStack_90 = (System_String_o *)0x43fb5a8;
      setting.genericMethod = Settings_ListSetting_object___GetItemAt(__this_00,(int)pIVar10,MethodInfo_BaseSetting_GetItemAt);
      plVar5 = &TypeInfo_UIManager;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        pSStack_90 = (System_String_o *)0x43fb5c3;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_90 = (System_String_o *)0x43fb5d4;
      unaff_RBP = (long *)UI_UIManager__GetLocaleCommon("Emoji",(MethodInfo *)0x0);
      uVar9 = (int)pIVar10 + 1;
      pIVar10 = (Il2CppRGCTXData *)(ulong)uVar9;
      pSStack_90 = (System_String_o *)0x43fb5ea;
      uStack_54 = uVar9;
      pSVar6 = System_Int32__ToString((int32_t)&uStack_54,(MethodInfo *)0x0);
      pSStack_90 = (System_String_o *)0x43fb601;
      pSVar6 = System_String__Concat_3af7150
                         ((System_String_o *)unaff_RBP," ",pSVar6,(MethodInfo *)0x0);
      lVar11 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (lVar11 == 0) break;
      pSStack_90 = (System_String_o *)0x43fb665;
      UI_ElementFactory__CreateIconPickSetting
                (parent_00,(UI_ElementStyle_o *)pUStack_50,setting.genericMethod,pSVar6,pSStack_38,pSStack_40,
                 *(UI_IconPickPopup_o **)(lVar11 + 0x50),"",(System_String_array *)0x0,180.0,40.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
      if (uVar9 == 8) {
        return;
      }
    }
  }
label_043fb680:
  pSStack_90 = (System_String_o *)0x43fb685;
  il2cpp_runtime_helper_022b2c90();
  pIStack_b8 = pIVar10;
  _Stack_b0 = setting;
  pUStack_a8 = (UI_EditProfileEmotePanel_o *)unaff_R13;
  pSStack_a0 = (System_String_o *)plVar5;
  pUStack_98 = parent_00;
  pSStack_90 = (System_String_o *)unaff_RBP;
  if (g_data_057ae566 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Emoji");
    g_data_057ae566 = '\x01';
  }
  pSVar13 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar14 = (Il2CppType *)0x0;
  pSVar6 = (System_String_o *)0x0;
  __this_10 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_10,MethodInfo_List_1_System_String);
  plVar5 = &TypeInfo_UIManager;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x48);
  if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) goto label_043fb9f4;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_d0,pSVar2,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
  pSVar13 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_d0._0_8_;
  pIVar14 = (Il2CppType *)auStack_d0._8_8_;
  pSVar6 = pSStack_c0;
  unaff_R13 = (System_String_o **)&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator;
  if (__this_10 == (System_Collections_Generic_List_object__o *)0x0) {
    __this_02.fields._index = auStack_d0._8_4_;
    __this_02.fields._version = auStack_d0._12_4_;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)auStack_d0._0_8_;
    __this_02.fields._current = (Il2CppObject *)pSStack_c0;
    bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff10);
    if ((char)bVar4 != '\0') goto label_043fb9f9;
  }
  else {
    while (__this_01.fields._8_8_ = pIVar14,
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar13,
          __this_01.fields._current = (Il2CppObject *)pSVar6,
          bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff10), lVar11 = MethodInfo_Void_Add,
          (char)bVar4 != '\0') {
      piVar1 = &(__this_10->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_10->fields)._items;
      pSVar7 = pSVar6;
      if (pSVar3 == (System_Object_array *)0x0) goto label_043fb9ea;
      uVar9 = (__this_10->fields)._size;
      if (uVar9 < (uint)pSVar3->max_length) {
        (__this_10->fields)._size = uVar9 + 1;
        pSVar3->m_Items[(int)uVar9] = (Il2CppObject *)pSVar6;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar9);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_10,(Il2CppObject *)pSVar6,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  __this_03.fields._8_8_ = pIVar14;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar13;
  __this_03.fields._current = (Il2CppObject *)pSVar6;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff10);
label_043fb865:
  lVar11 = *plVar5;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar11 = *plVar5;
  }
  pSVar2 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar11 + 0xb8) + 0x40);
  if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_d0,pSVar2,
               (MethodInfo_362CEB0 *)((UI_EditProfileEmotePanel_o *)unaff_R13)->klass);
    pSVar13 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_d0._0_8_;
    pIVar14 = (Il2CppType *)auStack_d0._8_8_;
    pSVar6 = pSStack_c0;
    if (__this_10 == (System_Collections_Generic_List_object__o *)0x0) {
      do {
        __this_05.fields._8_8_ = pIVar14;
        __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar13;
        __this_05.fields._current = (Il2CppObject *)pSVar6;
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff10);
        if ((char)bVar4 == '\0') goto label_043fb9ad;
        if (pSVar6 == (System_String_o *)0x0) goto label_043fb9e5;
        bVar4 = System_String__StartsWith(pSVar6,"Emoji",(MethodInfo *)0x0);
      } while ((char)bVar4 != '\0');
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      plVar5 = &MethodInfo_Boolean_MoveNext;
      unaff_R13 = &"Emoji";
      pSVar7 = pSStack_c0;
      while (pSVar6 = pSVar7, __this_04.fields._8_8_ = pIVar14,
            __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar13,
            __this_04.fields._current = (Il2CppObject *)pSVar6,
            bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffff10), (char)bVar4 != '\0')
      {
        if (pSVar6 == (System_String_o *)0x0) goto label_043fb9e5;
        pSVar7 = pSVar6;
        bVar4 = System_String__StartsWith(pSVar6,"Emoji",(MethodInfo *)0x0);
        lVar11 = MethodInfo_Void_Add;
        if ((char)bVar4 == '\0') {
          piVar1 = &(__this_10->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_10->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto label_043fb9ef;
          uVar9 = (__this_10->fields)._size;
          if (uVar9 < (uint)pSVar3->max_length) {
            (__this_10->fields)._size = uVar9 + 1;
            pSVar3->m_Items[(int)uVar9] = (Il2CppObject *)pSVar6;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar9,pSVar6);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_10,(Il2CppObject *)pSVar6,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
label_043fb9ad:
    __this_06.fields._8_8_ = pIVar14;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar13;
    __this_06.fields._current = (Il2CppObject *)pSVar6;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff10);
    if (__this_10 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___ToArray(__this_10,MethodInfo_String_ToArray);
      return;
    }
  }
  goto label_043fb9f4;
label_043fb9e5:
  il2cpp_runtime_helper_022b2c90();
  pSVar7 = pSVar6;
label_043fb9ea:
  il2cpp_runtime_helper_022b2c90();
label_043fb9ef:
  il2cpp_runtime_helper_022b2c90();
  pSVar6 = pSVar7;
label_043fb9f4:
  il2cpp_runtime_helper_022b2c90();
label_043fb9f9:
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ != 1) goto label_043fbb0c;
  plVar8 = (long *)__cxa_begin_catch(auVar12._0_8_);
  lVar11 = *plVar8;
  __cxa_end_catch();
  __this_07.fields._8_8_ = pIVar14;
  __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar13;
  __this_07.fields._current = (Il2CppObject *)pSVar6;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff10);
  if (lVar11 != 0) {
    il2cpp_runtime_helper_022fefe0(lVar11);
label_043fbb0c:
    __this_08.fields._8_8_ = pIVar14;
    __this_08.fields._list = (System_Collections_Generic_List_T__o *)pSVar13;
    __this_08.fields._current = (Il2CppObject *)pSVar6;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff10);
    _Unwind_Resume(auVar12._0_8_);
  }
  goto label_043fb865;
}


// UI.EditProfileEmotePanel$$GetAvailableEmotes
// il2cpp: System_String_array* UI_EditProfileEmotePanel__GetAvailableEmotes (UI_EditProfileEmotePanel_o* __this, const MethodInfo* method);
// 0x43fb690

System_String_array *
UI_EditProfileEmotePanel__GetAvailableEmotes(UI_EditProfileEmotePanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Object_array *pSVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this_08;
  System_String_array *pSVar6;
  long *plVar7;
  long lVar8;
  undefined8 *unaff_R13;
  long *plVar9;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar11;
  Il2CppType *pIVar12;
  System_String_o *__this_09;
  System_String_o *pSVar13;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (g_data_057ae566 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Emoji");
    g_data_057ae566 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar12 = (Il2CppType *)0x0;
  __this_09 = (System_String_o *)0x0;
  __this_08 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_08,MethodInfo_List_1_System_String);
  plVar9 = &TypeInfo_UIManager;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x48);
  if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto label_043fb9f4;
  unaff_R13 = &MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,pSVar3,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
  pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
  pIVar12 = (Il2CppType *)local_48._8_8_;
  __this_09 = local_38;
  if (__this_08 == (System_Collections_Generic_List_object__o *)0x0) {
    __this_01.fields._index = local_48._8_4_;
    __this_01.fields._version = local_48._12_4_;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
    __this_01.fields._current = (Il2CppObject *)local_38;
    bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
    if ((char)bVar5 != '\0') goto label_043fb9f9;
  }
  else {
    while (__this_00.fields._8_8_ = pIVar12,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar11,
          __this_00.fields._current = (Il2CppObject *)__this_09,
          bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98), lVar8 = MethodInfo_Void_Add,
          (char)bVar5 != '\0') {
      piVar1 = &(__this_08->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (__this_08->fields)._items;
      pSVar13 = __this_09;
      if (pSVar4 == (System_Object_array *)0x0) goto label_043fb9ea;
      uVar2 = (__this_08->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (__this_08->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_09;
        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_08,(Il2CppObject *)__this_09,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  __this_02.fields._8_8_ = pIVar12;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
  __this_02.fields._current = (Il2CppObject *)__this_09;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
label_043fb865:
  lVar8 = *plVar9;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar8 = *plVar9;
  }
  pSVar3 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar8 + 0xb8) + 0x40);
  if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,pSVar3,
               (MethodInfo_362CEB0 *)*unaff_R13);
    pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar12 = (Il2CppType *)local_48._8_8_;
    __this_09 = local_38;
    if (__this_08 == (System_Collections_Generic_List_object__o *)0x0) {
      do {
        __this_04.fields._8_8_ = pIVar12;
        __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
        __this_04.fields._current = (Il2CppObject *)__this_09;
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
        if ((char)bVar5 == '\0') goto label_043fb9ad;
        if (__this_09 == (System_String_o *)0x0) goto label_043fb9e5;
        bVar5 = System_String__StartsWith(__this_09,"Emoji",(MethodInfo *)0x0);
      } while ((char)bVar5 != '\0');
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      plVar9 = &MethodInfo_Boolean_MoveNext;
      unaff_R13 = &"Emoji";
      pSVar13 = local_38;
      while (__this_09 = pSVar13, __this_03.fields._8_8_ = pIVar12,
            __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar11,
            __this_03.fields._current = (Il2CppObject *)__this_09,
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98), (char)bVar5 != '\0')
      {
        if (__this_09 == (System_String_o *)0x0) goto label_043fb9e5;
        pSVar13 = __this_09;
        bVar5 = System_String__StartsWith(__this_09,"Emoji",(MethodInfo *)0x0);
        lVar8 = MethodInfo_Void_Add;
        if ((char)bVar5 == '\0') {
          piVar1 = &(__this_08->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_08->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) goto label_043fb9ef;
          uVar2 = (__this_08->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (__this_08->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_09;
            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,__this_09);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_08,(Il2CppObject *)__this_09,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
label_043fb9ad:
    __this_05.fields._8_8_ = pIVar12;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
    __this_05.fields._current = (Il2CppObject *)__this_09;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (__this_08 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar6 = (System_String_array *)System_Collections_Generic_List_object___ToArray(__this_08,MethodInfo_String_ToArray)
      ;
      return pSVar6;
    }
  }
  goto label_043fb9f4;
label_043fb9e5:
  il2cpp_runtime_helper_022b2c90();
  pSVar13 = __this_09;
label_043fb9ea:
  il2cpp_runtime_helper_022b2c90();
label_043fb9ef:
  il2cpp_runtime_helper_022b2c90();
  __this_09 = pSVar13;
label_043fb9f4:
  il2cpp_runtime_helper_022b2c90();
label_043fb9f9:
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ != 1) goto label_043fbb0c;
  plVar7 = (long *)__cxa_begin_catch(auVar10._0_8_);
  lVar8 = *plVar7;
  __cxa_end_catch();
  __this_06.fields._8_8_ = pIVar12;
  __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
  __this_06.fields._current = (Il2CppObject *)__this_09;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  if (lVar8 != 0) {
    il2cpp_runtime_helper_022fefe0(lVar8);
label_043fbb0c:
    __this_07.fields._8_8_ = pIVar12;
    __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
    __this_07.fields._current = (Il2CppObject *)__this_09;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    _Unwind_Resume(auVar10._0_8_);
  }
  goto label_043fb865;
}


// UI.EditProfileEmotePanel$$GetEmotePaths
// il2cpp: System_String_array* UI_EditProfileEmotePanel__GetEmotePaths (UI_EditProfileEmotePanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x43fbb50

System_String_array *
UI_EditProfileEmotePanel__GetEmotePaths
          (UI_EditProfileEmotePanel_o *__this,System_String_array *options,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Object_array *pSVar2;
  long lVar3;
  uint uVar4;
  bool_conflict bVar5;
  UI_CategoryPanel_o *__this_01;
  undefined8 *puVar6;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  System_String_array *extraout_RAX;
  uint uVar9;
  System_String_o *str1;
  UI_CategoryPanel_o *__this_02;
  
  if (g_data_057ae567 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Emoji");
    il2cpp_runtime_helper_023445d0(&"/Icons/Emotes/");
    il2cpp_runtime_helper_023445d0(&"_0");
    il2cpp_runtime_helper_023445d0(&"Icon");
    il2cpp_runtime_helper_023445d0(&"/Icons/Profile/");
    g_data_057ae567 = '\x01';
  }
  __this_01 = (UI_CategoryPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  __this_02 = __this_01;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_System_String);
  if (options != (System_String_array *)0x0) {
    uVar4 = (uint)options->max_length;
    if (0 < (int)uVar4) {
      uVar9 = 0;
label_043fbc79:
      do {
        if (uVar4 <= uVar9) goto label_043fbe29;
        pSVar7 = options->m_Items[(int)uVar9];
        if (pSVar7 == (System_String_o *)0x0) goto label_043fbe24;
        bVar5 = System_String__StartsWith(pSVar7,"Emoji",(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_02 = (UI_CategoryPanel_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
          puVar6 = &"Icon";
          str1 = "/Icons/Profile/";
label_043fbd7d:
          pSVar7 = System_String__Concat_3af7470
                             ((System_String_o *)__this_02,str1,pSVar7,(System_String_o *)*puVar6,
                              (MethodInfo *)0x0);
          lVar3 = MethodInfo_Void_Add;
        }
        else {
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_00 = *(System_Collections_Generic_HashSet_object__o **)
                       (*(long *)(TypeInfo_UIManager + 0xb8) + 0x50);
          __this_02 = (UI_CategoryPanel_o *)0x0;
          if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_043fbe24;
          bVar5 = System_Collections_Generic_HashSet_object___Contains
                            (__this_00,(Il2CppObject *)pSVar7,MethodInfo_Boolean_Contains);
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_02 = (UI_CategoryPanel_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
          if ((char)bVar5 != '\0') {
            puVar6 = &"_0";
            str1 = "/Icons/Emotes/";
            goto label_043fbd7d;
          }
          pSVar7 = System_String__Concat_3af7150
                             ((System_String_o *)__this_02,"/Icons/Emotes/",pSVar7,(MethodInfo *)0x0);
          lVar3 = MethodInfo_Void_Add;
        }
        MethodInfo_Void_Add = lVar3;
        if (__this_01 == (UI_CategoryPanel_o *)0x0) goto label_043fbe24;
        piVar1 = (int32_t *)((long)&(__this_01->fields).m_CancellationTokenSource + 4);
        *piVar1 = *piVar1 + 1;
        pSVar2 = (System_Object_array *)(__this_01->fields).m_CachedPtr;
        if (pSVar2 == (System_Object_array *)0x0) goto label_043fbe24;
        uVar4 = *(uint *)&(__this_01->fields).m_CancellationTokenSource;
        if (uVar4 < (uint)pSVar2->max_length) {
          *(uint *)&(__this_01->fields).m_CancellationTokenSource = uVar4 + 1;
          __this_02 = (UI_CategoryPanel_o *)(pSVar2->m_Items + (int)uVar4);
          pSVar2->m_Items[(int)uVar4] = (Il2CppObject *)pSVar7;
          il2cpp_runtime_helper_022b4080();
          uVar9 = uVar9 + 1;
          uVar4 = (uint)options->max_length;
          if ((int)uVar4 <= (int)uVar9) break;
          goto label_043fbc79;
        }
        __this_02 = __this_01;
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar7,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        uVar9 = uVar9 + 1;
        uVar4 = (uint)options->max_length;
      } while ((int)uVar9 < (int)uVar4);
    }
    if (__this_01 != (UI_CategoryPanel_o *)0x0) {
      pSVar8 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_String_ToArray);
      return pSVar8;
    }
  }
label_043fbe24:
  il2cpp_runtime_helper_022b2c90();
label_043fbe29:
  il2cpp_runtime_helper_022b2ca0();
  UI_CategoryPanel___ctor(__this_02,(MethodInfo *)0x0);
  return extraout_RAX;
}


// UI.EditProfileEmotePanel$$.ctor
// il2cpp: void UI_EditProfileEmotePanel___ctor (UI_EditProfileEmotePanel_o* __this, const MethodInfo* method);
// 0x43fbe30

void UI_EditProfileEmotePanel___ctor(UI_EditProfileEmotePanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


