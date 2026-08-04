// Type: UI.CharacterPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterPopup.cs
// --------------------------------

// UI.CharacterPopup.<>c__DisplayClass16_0$$.ctor
// il2cpp: void UI_CharacterPopup___c__DisplayClass16_0___ctor (UI_CharacterPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x43a4950

void UI_CharacterPopup___c__DisplayClass16_0___ctor
               (UI_CharacterPopup___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterPopup.<>c__DisplayClass16_0$$<SetupTopButtons>b__0
// il2cpp: void UI_CharacterPopup___c__DisplayClass16_0___SetupTopButtons_b__0 (UI_CharacterPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x43a4fe0

void UI_CharacterPopup___c__DisplayClass16_0___SetupTopButtons_b__0
               (UI_CharacterPopup___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  int *piVar1;
  uint uVar2;
  Il2CppMethodPointer vtableDispatch;
  long lVar3;
  long lVar4;
  Settings_TypedSetting_T__o *pSVar5;
  long lVar6;
  long lVar7;
  Settings_BaseSetting_o *pSVar8;
  UnityEngine_Transform_o *parent;
  bool_conflict bVar9;
  System_String_o *pSVar10;
  UI_CharacterPopup_o *__this_00;
  Il2CppObject *pIVar11;
  System_String_array *pSVar12;
  UI_CharacterPopup_o *__this_01;
  UI_CharacterPopup_o *__this_02;
  System_Nullable_float__Fields SStack_68;
  long lStack_60;
  UI_ElementStyle_o *pUStack_58;
  UI_CharacterPopup_o *pUStack_50;
  System_String_o *pSStack_48;
  System_String_o *pSStack_40;
  
  __this_01 = (__this->fields).__4__this;
  if (__this_01 != (UI_CharacterPopup_o *)0x0) {
    vtableDispatch = (__this_01->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtableDispatch)
              (__this_01,(__this->fields).buttonName,(__this_01->klass->vtable)._28_SetCategoryPanel.method,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae330 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Eren");
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Team");
    il2cpp_runtime_helper_023445d0(&"Character");
    il2cpp_runtime_helper_023445d0(&"Annie");
    il2cpp_runtime_helper_023445d0(&"CharacterPopup");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae330 = '\x01';
  }
  __this_02 = __this_01;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this_01,(UI_BasePanel_o *)method,(MethodInfo *)0x0);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if ((lVar3 != 0) && (lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70), lVar4 != 0)) {
    pSStack_40 = "CharacterPopup";
    pSStack_48 = "General";
    lVar3 = *(long *)(lVar3 + 0x58);
    pSVar5 = *(Settings_TypedSetting_T__o **)(lVar4 + 0x28);
    __this_02 = TypeInfo_PlayerCharacter;
    if (*(int *)((long)&TypeInfo_PlayerCharacter[1].fields.DoublePanelLeft + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pSVar5 != (Settings_TypedSetting_T__o *)0x0) {
      Settings_TypedSetting_object___set_Value
                (pSVar5,(Il2CppObject *)((TypeInfo_PlayerCharacter[1].klass)->_1).name,MethodInfo_Void_set_Value);
      pSVar10 = (System_String_o *)
                (*(__this_01->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this_01,(__this_01->klass->vtable)._4_get_ThemePanel.method);
      pUStack_58 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
      UI_ElementStyle___ctor(pUStack_58,0x18,200.0,20.0,pSVar10,(MethodInfo *)0x0);
      __this_00 = (UI_CharacterPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      __this_02 = __this_00;
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
      pIVar11 = "Annie";
      lVar7 = MethodInfo_Void_Add;
      if (__this_00 != (UI_CharacterPopup_o *)0x0) {
        piVar1 = (int *)((long)&(__this_00->fields).m_CancellationTokenSource + 4);
        *piVar1 = *piVar1 + 1;
        lVar6 = (__this_00->fields).m_CachedPtr;
        if (lVar6 != 0) {
          uVar2 = *(uint *)&(__this_00->fields).m_CancellationTokenSource;
          if (uVar2 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)&(__this_00->fields).m_CancellationTokenSource = uVar2 + 1;
            __this_02 = (UI_CharacterPopup_o *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
            *(Il2CppObject **)(lVar6 + 0x20 + (long)(int)uVar2 * 8) = pIVar11;
            il2cpp_runtime_helper_022b4080();
          }
          else {
            __this_02 = __this_00;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,pIVar11,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          pIVar11 = "Eren";
          lVar6 = MethodInfo_Void_Add;
          piVar1 = (int *)((long)&(__this_00->fields).m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          lVar7 = (__this_00->fields).m_CachedPtr;
          if (lVar7 != 0) {
            uVar2 = *(uint *)&(__this_00->fields).m_CancellationTokenSource;
            if (uVar2 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)&(__this_00->fields).m_CancellationTokenSource = uVar2 + 1;
              __this_02 = (UI_CharacterPopup_o *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
              *(Il2CppObject **)(lVar7 + 0x20 + (long)(int)uVar2 * 8) = pIVar11;
              il2cpp_runtime_helper_022b4080();
              lVar7 = *(long *)(lVar4 + 0x30);
            }
            else {
              __this_02 = __this_00;
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,pIVar11,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              lVar7 = *(long *)(lVar4 + 0x30);
            }
            lStack_60 = lVar4;
            if (lVar7 != 0) {
              pUStack_50 = __this_01;
              bVar9 = System_Collections_Generic_List_object___Contains
                                ((System_Collections_Generic_List_object__o *)__this_00,
                                 *(Il2CppObject **)(lVar7 + 0x18),MethodInfo_Boolean_Contains);
              if ((char)bVar9 == '\0') {
                pSVar5 = *(Settings_TypedSetting_T__o **)(lStack_60 + 0x30);
                __this_02 = __this_00;
                pIVar11 = System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)__this_00,0,MethodInfo_String_get_Item);
                if (pSVar5 == (Settings_TypedSetting_T__o *)0x0) goto label_043a55cd;
                Settings_TypedSetting_object___set_Value(pSVar5,pIVar11,MethodInfo_Void_set_Value);
              }
              __this_02 = (UI_CharacterPopup_o *)(pUStack_50->fields).DoublePanelLeft;
              pSVar8 = *(Settings_BaseSetting_o **)(lStack_60 + 0x30);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar10 = UI_UIManager__GetLocale
                                  (pSStack_40,pSStack_48,"Character","","",
                                   (MethodInfo *)0x0);
              pSVar12 = (System_String_array *)
                        System_Collections_Generic_List_object___ToArray
                                  ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_String_ToArray);
              SStack_68.hasValue = 0;
              SStack_68.value = 0.0;
              System_Nullable_float____ctor((System_Nullable_float__o)&SStack_68,180.0,MethodInfo_Nullable_1_Single);
              UI_ElementFactory__CreateDropdownSetting
                        ((UnityEngine_Transform_o *)__this_02,pUStack_58,pSVar8,pSVar10,pSVar12,"",
                         180.0,40.0,300.0,(System_Nullable_float__o)SStack_68,
                         (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
              if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
                if (*(int *)(lVar3 + 0x14) != 2) {
                  return;
                }
                parent = (pUStack_50->fields).DoublePanelRight;
                pSVar8 = *(Settings_BaseSetting_o **)(lStack_60 + 0x50);
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar10 = UI_UIManager__GetLocaleCommon("Team",(MethodInfo *)0x0);
                pSVar12 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
                if (*(int *)((long)&TypeInfo_TeamInfo[1].fields.DoublePanelLeft + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                __this_02 = TypeInfo_TeamInfo;
                if (pSVar12 != (System_String_array *)0x0) {
                  if ((int)pSVar12->max_length != 0) {
                    __this_02 = (UI_CharacterPopup_o *)pSVar12->m_Items;
                    pSVar12->m_Items[0] = ((TypeInfo_TeamInfo[1].klass)->_1).image;
                    il2cpp_runtime_helper_022b4080();
                    if (1 < (uint)pSVar12->max_length) {
                      pSVar12->m_Items[1] = ((TypeInfo_TeamInfo[1].klass)->_1).gc_desc;
                      il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 1);
                      SStack_68.hasValue = 0;
                      SStack_68.value = 0.0;
                      System_Nullable_float____ctor((System_Nullable_float__o)&SStack_68,180.0,MethodInfo_Nullable_1_Single);
                      UI_ElementFactory__CreateDropdownSetting
                                (parent,pUStack_58,pSVar8,pSVar10,pSVar12,"",180.0,40.0,300.0,
                                 (System_Nullable_float__o)SStack_68,(UnityEngine_Events_UnityAction_o *)0x0,
                                 (MethodInfo *)0x0);
                      return;
                    }
                  }
                  goto label_043a55d2;
                }
              }
            }
          }
        }
      }
    }
  }
label_043a55cd:
  il2cpp_runtime_helper_022b2c90();
label_043a55d2:
  il2cpp_runtime_helper_022b2ca0();
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this_02,(MethodInfo *)0x0);
  return;
}


// UI.CharacterPopup$$get_Title
// il2cpp: System_String_o* UI_CharacterPopup__get_Title (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x43a40e0

System_String_o * UI_CharacterPopup__get_Title(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.CharacterPopup$$get_Width
// il2cpp: float UI_CharacterPopup__get_Width (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x43a4100

float UI_CharacterPopup__get_Width(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  return 1000.0;
}


// UI.CharacterPopup$$get_Height
// il2cpp: float UI_CharacterPopup__get_Height (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x43a4110

float UI_CharacterPopup__get_Height(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  return 470.0;
}


// UI.CharacterPopup$$get_CategoryPanel
// il2cpp: bool UI_CharacterPopup__get_CategoryPanel (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x43a4120

bool_conflict UI_CharacterPopup__get_CategoryPanel(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CharacterPopup$$get_CategoryButtons
// il2cpp: bool UI_CharacterPopup__get_CategoryButtons (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x43a4130

bool_conflict UI_CharacterPopup__get_CategoryButtons(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CharacterPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_CharacterPopup__get_DefaultCategoryPanel (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x43a4140

System_String_o * UI_CharacterPopup__get_DefaultCategoryPanel(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae325 == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae325 = '\x01';
  }
  return "";
}


// UI.CharacterPopup$$Setup
// il2cpp: void UI_CharacterPopup__Setup (UI_CharacterPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43a4170

void UI_CharacterPopup__Setup(UI_CharacterPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  long lVar2;
  System_Object_array *pSVar3;
  MethodInfo *pMVar4;
  UnityEngine_Transform_o *parent_00;
  Il2CppClass *pIVar5;
  System_Collections_Generic_List_object__c *__this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  long lVar6;
  bool_conflict bVar7;
  _union_249689 _Var8;
  System_String_o *pSVar9;
  System_Type_o *t;
  UI_ElementStyle_o *__this_07;
  Il2CppObject *pIVar10;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *__this_08;
  long *plVar11;
  MethodInfo *extraout_RDX;
  Il2CppObject *pIVar12;
  _union_249689 _Var13;
  Il2CppObject **__this_09;
  undefined1 auVar14 [12];
  undefined8 in_stack_ffffffffffffff48;
  System_Collections_Generic_List_Enumerator_T__c *pSVar15;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  Il2CppRGCTXData *pIStack_70;
  _union_249689 _Stack_68;
  long *plStack_60;
  _union_249689 _Stack_58;
  System_Collections_Generic_List_string__o *pSStack_50;
  
  if (g_data_057ae326 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae326 = '\x01';
    method = extraout_RDX;
  }
  (*(__this->klass->vtable)._59_SetAllowedCategories.methodPtr)
            (__this,(__this->klass->vtable)._59_SetAllowedCategories.method,method);
  __this_00 = (__this->fields)._allowedCategories;
  _Var8.genericMethod = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  _Var13.genericMethod = _Var8.genericMethod;
  pSVar9 = UI_UIManager__GetLastcategory(_Var8.genericMethod,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    bVar7 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar9,
                       MethodInfo_Boolean_Contains);
    if ((char)bVar7 != '\0') {
label_043a426b:
      UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._60_SetupBottomButtons.methodPtr)
                (__this,(__this->klass->vtable)._60_SetupBottomButtons.method);
      return;
    }
    t = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._allowedCategories;
    _Var13.genericMethod = (UI_HeadedPanel_o *)0x0;
    if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar9 = (System_String_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_01,0,MethodInfo_String_get_Item);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UI_UIManager__SetLastCategory(t,pSVar9,(MethodInfo *)0x0);
      goto label_043a426b;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_09 = (Il2CppObject **)_Var13;
  if (g_data_057ae327 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"Titan");
    __this_09 = &"Shifter";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae327 = '\x01';
  }
  pIVar10 = "Human";
  lVar6 = MethodInfo_Void_Add;
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar2 != 0) &&
      (__this = *(UI_CharacterPopup_o **)(lVar2 + 0x58), (Il2CppRGCTXData *)__this != (Il2CppRGCTXData *)0x0))
     && ((UI_BasePanel_o *)((Il2CppRGCTXData *)((long)__this + 0x60))->method != (UI_BasePanel_o *)0x0)) {
    if (*(char *)((long)&(((UI_BasePanel_o *)((Il2CppRGCTXData *)((long)__this + 0x60))->method)->fields).
                         m_CachedPtr + 1) == '\0') {
      if ((UnityEngine_UI_RawImage_o *)((Il2CppRGCTXData *)((long)__this + 0x58))->method !=
          (UnityEngine_UI_RawImage_o *)0x0) {
        if (*(char *)((long)&(((UnityEngine_UI_RawImage_o *)((Il2CppRGCTXData *)((long)__this + 0x58))->method
                              )->fields).m_CachedPtr + 1) != '\0') goto label_043a4382;
        if (((Il2CppRGCTXData *)((long)__this + 0x70))->method == (MethodInfo *)0x0) goto label_043a4593;
        if (*(char *)((long)&((UnityEngine_Transform_Fields *)
                             &((Il2CppRGCTXData *)((long)__this + 0x70))->method->invoker_method)->m_CachedPtr
                     + 1) != '\0') goto label_043a4382;
        if (((Il2CppRGCTXData *)((long)__this + 0x68))->method == (MethodInfo *)0x0) goto label_043a4593;
        if (*(char *)((long)&((UnityEngine_Transform_Fields *)
                             &((Il2CppRGCTXData *)((long)__this + 0x68))->method->invoker_method)->m_CachedPtr
                     + 1) != '\0') goto label_043a4382;
label_043a43fa:
        pMVar4 = ((Il2CppRGCTXData *)((long)__this + 0x78))->method;
        lVar2 = MethodInfo_Void_Add;
        pIVar10 = "Titan";
joined_r0x043a43df:
        MethodInfo_Void_Add = lVar2;
        "Titan" = pIVar10;
        if (pMVar4 != (MethodInfo *)0x0) {
          if (*(char *)((long)&((System_Collections_Generic_Dictionary_string__Button__Fields *)
                               &pMVar4->invoker_method)->_buckets + 1) == '\0') {
label_043a4488:
            pMVar4 = ((Il2CppRGCTXData *)((long)__this + 0x88))->method;
            lVar2 = MethodInfo_Void_Add;
            pIVar10 = "Shifter";
joined_r0x043a4492:
            MethodInfo_Void_Add = lVar2;
            "Shifter" = pIVar10;
            if (pMVar4 != (MethodInfo *)0x0) {
              if (*(char *)((long)&((System_Collections_Generic_HashSet_Transform__Fields *)
                                   &pMVar4->invoker_method)->_buckets + 1) == '\0') {
label_043a4519:
                __this_09 = ((_union_249689 *)((long)_Var13.genericMethod + 0xb0))->genericMethod;
                lVar2 = MethodInfo_Void_Add;
                pIVar10 = "Human";
joined_r0x043a4523:
                MethodInfo_Void_Add = lVar2;
                "Human" = pIVar10;
                if ((UI_HeadedPanel_o *)__this_09 != (UI_HeadedPanel_o *)0x0) {
                  if (*(int *)((long)__this_09 + 0x18) != 0) {
                    return;
                  }
                  *(int32_t *)((long)__this_09 + 0x1c) = *(int32_t *)((long)__this_09 + 0x1c) + 1;
                  pSVar3 = (System_Object_array *)
                           ((UI_HeadedPanel_Fields *)((long)__this_09 + 0x10))->m_CachedPtr;
                  if (pSVar3 != (System_Object_array *)0x0) {
                    if ((int)pSVar3->max_length == 0) {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_09,pIVar10,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                      return;
                    }
                    *(int32_t *)((long)__this_09 + 0x18) = 1;
                    pSVar3->m_Items[0] = pIVar10;
                    il2cpp_runtime_helper_022b4080(pSVar3->m_Items);
                    return;
                  }
                }
              }
              else {
                __this_09 = ((_union_249689 *)((long)_Var13.genericMethod + 0xb0))->genericMethod;
                if ((UI_HeadedPanel_o *)__this_09 != (UI_HeadedPanel_o *)0x0) {
                  *(int32_t *)((long)__this_09 + 0x1c) = *(int32_t *)((long)__this_09 + 0x1c) + 1;
                  pSVar3 = (System_Object_array *)
                           ((UI_HeadedPanel_Fields *)((long)__this_09 + 0x10))->m_CachedPtr;
                  if (pSVar3 != (System_Object_array *)0x0) {
                    uVar1 = *(uint *)((long)__this_09 + 0x18);
                    if ((uint)pSVar3->max_length <= uVar1) {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_09,pIVar10,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                      goto label_043a4519;
                    }
                    *(uint *)((long)__this_09 + 0x18) = uVar1 + 1;
                    pSVar3->m_Items[(int)uVar1] = pIVar10;
                    il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar1);
                    __this_09 = ((_union_249689 *)((long)_Var13.genericMethod + 0xb0))->genericMethod;
                    lVar2 = MethodInfo_Void_Add;
                    pIVar10 = "Human";
                    goto joined_r0x043a4523;
                  }
                }
              }
            }
          }
          else {
            __this_09 = ((_union_249689 *)((long)_Var13.genericMethod + 0xb0))->genericMethod;
            if ((UI_HeadedPanel_o *)__this_09 != (UI_HeadedPanel_o *)0x0) {
              *(int32_t *)((long)__this_09 + 0x1c) = *(int32_t *)((long)__this_09 + 0x1c) + 1;
              pSVar3 = (System_Object_array *)((UI_HeadedPanel_Fields *)((long)__this_09 + 0x10))->m_CachedPtr
              ;
              if (pSVar3 != (System_Object_array *)0x0) {
                uVar1 = *(uint *)((long)__this_09 + 0x18);
                if ((uint)pSVar3->max_length <= uVar1) {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_09,pIVar10,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                  goto label_043a4488;
                }
                *(uint *)((long)__this_09 + 0x18) = uVar1 + 1;
                __this_09 = pSVar3->m_Items + (int)uVar1;
                pSVar3->m_Items[(int)uVar1] = pIVar10;
                il2cpp_runtime_helper_022b4080();
                pMVar4 = ((Il2CppRGCTXData *)((long)__this + 0x88))->method;
                lVar2 = MethodInfo_Void_Add;
                pIVar10 = "Shifter";
                goto joined_r0x043a4492;
              }
            }
          }
        }
      }
    }
    else {
label_043a4382:
      __this_09 = ((_union_249689 *)((long)_Var13.genericMethod + 0xb0))->genericMethod;
      if ((UI_HeadedPanel_o *)__this_09 != (UI_HeadedPanel_o *)0x0) {
        *(int32_t *)((long)__this_09 + 0x1c) = *(int32_t *)((long)__this_09 + 0x1c) + 1;
        pSVar3 = (System_Object_array *)((UI_HeadedPanel_Fields *)((long)__this_09 + 0x10))->m_CachedPtr;
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar1 = *(uint *)((long)__this_09 + 0x18);
          if ((uint)pSVar3->max_length <= uVar1) {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_09,pIVar10,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            goto label_043a43fa;
          }
          *(uint *)((long)__this_09 + 0x18) = uVar1 + 1;
          __this_09 = pSVar3->m_Items + (int)uVar1;
          pSVar3->m_Items[(int)uVar1] = pIVar10;
          il2cpp_runtime_helper_022b4080();
          pMVar4 = ((Il2CppRGCTXData *)((long)__this + 0x78))->method;
          lVar2 = MethodInfo_Void_Add;
          pIVar10 = "Titan";
          goto joined_r0x043a43df;
        }
      }
    }
  }
label_043a4593:
  il2cpp_runtime_helper_022b2c90();
  plStack_60 = &TypeInfo_UIManager;
  pIStack_70 = (Il2CppRGCTXData *)__this;
  _Stack_68.genericMethod = _Var8.genericMethod;
  _Stack_58 = _Var13;
  pSStack_50 = __this_00;
  if (g_data_057ae328 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass16_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    g_data_057ae328 = '\x01';
  }
  pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  _Var8 = (_union_249689)__this_09;
  pSVar9 = (System_String_o *)(*(*__this_09)[0x17].monitor)(__this_09,(*__this_09)[0x18].klass);
  __this_07 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_07,0x1c,120.0,20.0,pSVar9,(MethodInfo *)0x0);
  pSVar3 = ((System_Collections_Generic_List_object__Fields *)((long)__this_09 + 0xb0))->_items;
  if (pSVar3 == (System_Object_array *)0x0) {
label_043a484e:
    auVar14 = il2cpp_runtime_helper_022b2c90();
    if (auVar14._8_4_ == 1) {
      plVar11 = (long *)__cxa_begin_catch(auVar14._0_8_);
      lVar2 = *plVar11;
      __cxa_end_catch();
      __this_05.fields._8_8_ = _Var8.genericMethod;
      __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
      __this_05.fields._current = (Il2CppObject *)pSVar15;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
      if (lVar2 == 0) goto label_043a4824;
      il2cpp_runtime_helper_022fefe0(lVar2);
    }
    __this_06.fields._8_8_ = _Var8.genericMethod;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
    __this_06.fields._current = (Il2CppObject *)pSVar15;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
    _Unwind_Resume(auVar14._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
  pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)local_88.fields._list;
  while (__this_03.fields._8_8_ = _Var8.genericMethod,
        __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48,
        __this_03.fields._current = (Il2CppObject *)pSVar15,
        bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff58), (char)bVar7 != '\0') {
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass16_0);
    System_Object___ctor(pIVar10,(MethodInfo *)0x0);
    if (pIVar10 == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_043a4844:
      il2cpp_runtime_helper_022b2c90();
label_043a4849:
      il2cpp_runtime_helper_022b2c90();
      goto label_043a484e;
    }
    pIVar10[1].monitor = (void *)_Var8;
    il2cpp_runtime_helper_022b4080(&pIVar10[1].monitor);
    pIVar12 = pIVar10 + 1;
    pIVar10[1].klass = (Il2CppClass *)local_88.fields._current;
    il2cpp_runtime_helper_022b4080(pIVar12);
    parent_00 = *(UnityEngine_Transform_o **)((long)_Var8.genericMethod + 0x70);
    pIVar5 = pIVar12->klass;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = UI_UIManager__GetLocaleCommon((System_String_o *)pIVar5,(MethodInfo *)0x0);
    onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    __this_08 = UI_ElementFactory__CreateCategoryButton(parent_00,__this_07,pSVar9,onClick,(MethodInfo *)0x0);
    if (__this_08 == (UnityEngine_GameObject_o *)0x0) goto label_043a4844;
    __this_02 = ((System_Collections_Generic_List_object__o *)((long)_Var8.genericMethod + 0x78))->klass;
    pIVar5 = pIVar12->klass;
    pIVar10 = UnityEngine_GameObject__GetComponent_object_(__this_08,MethodInfo_Button_GetComponent_Button);
    if (__this_02 == (System_Collections_Generic_List_object__c *)0x0) goto label_043a4849;
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,(Il2CppObject *)pIVar5,
               pIVar10,MethodInfo_Void_Add);
  }
  __this_04.fields._8_8_ = _Var8.genericMethod;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48;
  __this_04.fields._current = (Il2CppObject *)pSVar15;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
label_043a4824:
  UI_HeadedPanel__SetupTopButtons(_Var8.genericMethod,(MethodInfo *)0x0);
  return;
}


// UI.CharacterPopup$$SetAllowedCategories
// il2cpp: void UI_CharacterPopup__SetAllowedCategories (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x43a42a0

void UI_CharacterPopup__SetAllowedCategories(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  System_Object_array *pSVar4;
  MethodInfo *pMVar5;
  System_Collections_Generic_List_string__o *__this_00;
  UnityEngine_Transform_o *parent;
  Il2CppClass *pIVar6;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  long lVar7;
  bool_conflict bVar8;
  System_String_o *pSVar9;
  UI_ElementStyle_o *__this_06;
  Il2CppObject *pIVar10;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *__this_07;
  long *plVar11;
  Il2CppRGCTXData *unaff_RBX;
  Il2CppObject *pIVar12;
  Il2CppObject **__this_08;
  undefined1 auVar13 [12];
  undefined8 in_stack_ffffffffffffff70;
  UI_CharacterPopup_o *__this_09;
  System_Collections_Generic_List_Enumerator_T__c *pSVar14;
  System_Collections_Generic_List_Enumerator_T__o SStack_60;
  Il2CppRGCTXData *pIStack_48;
  
  __this_08 = (Il2CppObject **)__this;
  if (g_data_057ae327 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"Titan");
    __this_08 = &"Shifter";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae327 = '\x01';
  }
  pIVar10 = "Human";
  lVar7 = MethodInfo_Void_Add;
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar3 != 0) && (unaff_RBX = *(Il2CppRGCTXData **)(lVar3 + 0x58), unaff_RBX != (Il2CppRGCTXData *)0x0))
     && (unaff_RBX[0xc].method != (MethodInfo *)0x0)) {
    if (*(char *)((long)&(unaff_RBX[0xc].method)->invoker_method + 1) == '\0') {
      if (unaff_RBX[0xb].method != (MethodInfo *)0x0) {
        if (*(char *)((long)&(unaff_RBX[0xb].method)->invoker_method + 1) != '\0') goto label_043a4382;
        if (unaff_RBX[0xe].method == (MethodInfo *)0x0) goto label_043a4593;
        if (*(char *)((long)&(unaff_RBX[0xe].method)->invoker_method + 1) != '\0') goto label_043a4382;
        if (unaff_RBX[0xd].method == (MethodInfo *)0x0) goto label_043a4593;
        if (*(char *)((long)&(unaff_RBX[0xd].method)->invoker_method + 1) != '\0') goto label_043a4382;
label_043a43fa:
        pMVar5 = unaff_RBX[0xf].method;
        lVar3 = MethodInfo_Void_Add;
        pIVar10 = "Titan";
joined_r0x043a43df:
        MethodInfo_Void_Add = lVar3;
        "Titan" = pIVar10;
        if (pMVar5 != (MethodInfo *)0x0) {
          if (*(char *)((long)&pMVar5->invoker_method + 1) == '\0') {
label_043a4488:
            pMVar5 = unaff_RBX[0x11].method;
            lVar3 = MethodInfo_Void_Add;
            pIVar10 = "Shifter";
joined_r0x043a4492:
            MethodInfo_Void_Add = lVar3;
            "Shifter" = pIVar10;
            if (pMVar5 != (MethodInfo *)0x0) {
              if (*(char *)((long)&pMVar5->invoker_method + 1) == '\0') {
label_043a4519:
                __this_08 = (Il2CppObject **)(__this->fields)._allowedCategories;
                lVar3 = MethodInfo_Void_Add;
                pIVar10 = "Human";
joined_r0x043a4523:
                MethodInfo_Void_Add = lVar3;
                "Human" = pIVar10;
                if ((UI_CharacterPopup_o *)__this_08 != (UI_CharacterPopup_o *)0x0) {
                  if (*(int *)&(((UI_CharacterPopup_o *)__this_08)->fields).m_CancellationTokenSource != 0) {
                    return;
                  }
                  piVar1 = (int32_t *)
                           ((long)&(((UI_CharacterPopup_o *)__this_08)->fields).m_CancellationTokenSource + 4)
                  ;
                  *piVar1 = *piVar1 + 1;
                  pSVar4 = (System_Object_array *)(((UI_CharacterPopup_o *)__this_08)->fields).m_CachedPtr;
                  if (pSVar4 != (System_Object_array *)0x0) {
                    if ((int)pSVar4->max_length == 0) {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_08,pIVar10,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                      return;
                    }
                    *(int32_t *)&(((UI_CharacterPopup_o *)__this_08)->fields).m_CancellationTokenSource = 1;
                    pSVar4->m_Items[0] = pIVar10;
                    il2cpp_runtime_helper_022b4080(pSVar4->m_Items);
                    return;
                  }
                }
              }
              else {
                __this_08 = (Il2CppObject **)(__this->fields)._allowedCategories;
                if ((UI_CharacterPopup_o *)__this_08 != (UI_CharacterPopup_o *)0x0) {
                  piVar1 = (int32_t *)
                           ((long)&(((UI_CharacterPopup_o *)__this_08)->fields).m_CancellationTokenSource + 4)
                  ;
                  *piVar1 = *piVar1 + 1;
                  pSVar4 = (System_Object_array *)(((UI_CharacterPopup_o *)__this_08)->fields).m_CachedPtr;
                  if (pSVar4 != (System_Object_array *)0x0) {
                    uVar2 = *(uint *)&(((UI_CharacterPopup_o *)__this_08)->fields).m_CancellationTokenSource;
                    if ((uint)pSVar4->max_length <= uVar2) {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_08,pIVar10,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                      goto label_043a4519;
                    }
                    *(uint *)&(((UI_CharacterPopup_o *)__this_08)->fields).m_CancellationTokenSource =
                         uVar2 + 1;
                    pSVar4->m_Items[(int)uVar2] = pIVar10;
                    il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2);
                    __this_08 = (Il2CppObject **)(__this->fields)._allowedCategories;
                    lVar3 = MethodInfo_Void_Add;
                    pIVar10 = "Human";
                    goto joined_r0x043a4523;
                  }
                }
              }
            }
          }
          else {
            __this_08 = (Il2CppObject **)(__this->fields)._allowedCategories;
            if ((UI_CharacterPopup_o *)__this_08 != (UI_CharacterPopup_o *)0x0) {
              piVar1 = (int32_t *)
                       ((long)&(((UI_CharacterPopup_o *)__this_08)->fields).m_CancellationTokenSource + 4);
              *piVar1 = *piVar1 + 1;
              pSVar4 = (System_Object_array *)(((UI_CharacterPopup_o *)__this_08)->fields).m_CachedPtr;
              if (pSVar4 != (System_Object_array *)0x0) {
                uVar2 = *(uint *)&(((UI_CharacterPopup_o *)__this_08)->fields).m_CancellationTokenSource;
                if ((uint)pSVar4->max_length <= uVar2) {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_08,pIVar10,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                  goto label_043a4488;
                }
                *(uint *)&(((UI_CharacterPopup_o *)__this_08)->fields).m_CancellationTokenSource = uVar2 + 1;
                __this_08 = pSVar4->m_Items + (int)uVar2;
                pSVar4->m_Items[(int)uVar2] = pIVar10;
                il2cpp_runtime_helper_022b4080();
                pMVar5 = unaff_RBX[0x11].method;
                lVar3 = MethodInfo_Void_Add;
                pIVar10 = "Shifter";
                goto joined_r0x043a4492;
              }
            }
          }
        }
      }
    }
    else {
label_043a4382:
      __this_08 = (Il2CppObject **)(__this->fields)._allowedCategories;
      if ((UI_CharacterPopup_o *)__this_08 != (UI_CharacterPopup_o *)0x0) {
        piVar1 = (int32_t *)
                 ((long)&(((UI_CharacterPopup_o *)__this_08)->fields).m_CancellationTokenSource + 4);
        *piVar1 = *piVar1 + 1;
        pSVar4 = (System_Object_array *)(((UI_CharacterPopup_o *)__this_08)->fields).m_CachedPtr;
        if (pSVar4 != (System_Object_array *)0x0) {
          uVar2 = *(uint *)&(((UI_CharacterPopup_o *)__this_08)->fields).m_CancellationTokenSource;
          if ((uint)pSVar4->max_length <= uVar2) {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_08,pIVar10,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            goto label_043a43fa;
          }
          *(uint *)&(((UI_CharacterPopup_o *)__this_08)->fields).m_CancellationTokenSource = uVar2 + 1;
          __this_08 = pSVar4->m_Items + (int)uVar2;
          pSVar4->m_Items[(int)uVar2] = pIVar10;
          il2cpp_runtime_helper_022b4080();
          pMVar5 = unaff_RBX[0xf].method;
          lVar3 = MethodInfo_Void_Add;
          pIVar10 = "Titan";
          goto joined_r0x043a43df;
        }
      }
    }
  }
label_043a4593:
  il2cpp_runtime_helper_022b2c90();
  pIStack_48 = unaff_RBX;
  if (g_data_057ae328 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass16_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    g_data_057ae328 = '\x01';
  }
  pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  __this_09 = (UI_CharacterPopup_o *)__this_08;
  pSVar9 = (System_String_o *)
           (*(((UI_CharacterPopup_o *)__this_08)->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this_08,(((UI_CharacterPopup_o *)__this_08)->klass->vtable)._4_get_ThemePanel.method);
  __this_06 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_06,0x1c,120.0,20.0,pSVar9,(MethodInfo *)0x0);
  __this_00 = (((UI_CharacterPopup_o *)__this_08)->fields)._allowedCategories;
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
label_043a484e:
    auVar13 = il2cpp_runtime_helper_022b2c90();
    if (auVar13._8_4_ == 1) {
      plVar11 = (long *)__cxa_begin_catch(auVar13._0_8_);
      lVar3 = *plVar11;
      __cxa_end_catch();
      __this_04.fields._8_8_ = __this_09;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff70;
      __this_04.fields._current = (Il2CppObject *)pSVar14;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
      if (lVar3 == 0) goto label_043a4824;
      il2cpp_runtime_helper_022fefe0(lVar3);
    }
    __this_05.fields._8_8_ = __this_09;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff70;
    __this_05.fields._current = (Il2CppObject *)pSVar14;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
    _Unwind_Resume(auVar13._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&SStack_60,(System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
  pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_60.fields._list;
  while (__this_02.fields._8_8_ = __this_09,
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff70,
        __this_02.fields._current = (Il2CppObject *)pSVar14,
        bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80), (char)bVar8 != '\0') {
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass16_0);
    System_Object___ctor(pIVar10,(MethodInfo *)0x0);
    if (pIVar10 == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_043a4844:
      il2cpp_runtime_helper_022b2c90();
label_043a4849:
      il2cpp_runtime_helper_022b2c90();
      goto label_043a484e;
    }
    pIVar10[1].monitor = __this_09;
    il2cpp_runtime_helper_022b4080(&pIVar10[1].monitor);
    pIVar12 = pIVar10 + 1;
    pIVar10[1].klass = (Il2CppClass *)SStack_60.fields._current;
    il2cpp_runtime_helper_022b4080(pIVar12);
    parent = (__this_09->fields).TopBar;
    pIVar6 = pIVar12->klass;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = UI_UIManager__GetLocaleCommon((System_String_o *)pIVar6,(MethodInfo *)0x0);
    onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    __this_07 = UI_ElementFactory__CreateCategoryButton(parent,__this_06,pSVar9,onClick,(MethodInfo *)0x0);
    if (__this_07 == (UnityEngine_GameObject_o *)0x0) goto label_043a4844;
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_09->fields)._topButtons;
    pIVar6 = pIVar12->klass;
    pIVar10 = UnityEngine_GameObject__GetComponent_object_(__this_07,MethodInfo_Button_GetComponent_Button);
    if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043a4849;
    System_Collections_Generic_Dictionary_object__object___Add
              (__this_01,(Il2CppObject *)pIVar6,pIVar10,MethodInfo_Void_Add);
  }
  __this_03.fields._8_8_ = __this_09;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff70;
  __this_03.fields._current = (Il2CppObject *)pSVar14;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
label_043a4824:
  UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this_09,(MethodInfo *)0x0);
  return;
}


// UI.CharacterPopup$$SetupTopButtons
// il2cpp: void UI_CharacterPopup__SetupTopButtons (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x43a45a0

void UI_CharacterPopup__SetupTopButtons(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  UnityEngine_Transform_o *parent;
  Il2CppClass *pIVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  UI_ElementStyle_o *__this_06;
  Il2CppObject *pIVar5;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *__this_07;
  long *plVar6;
  Il2CppObject *pIVar7;
  undefined1 auVar8 [12];
  undefined8 in_stack_ffffffffffffff88;
  UI_CharacterPopup_o *__this_08;
  System_Collections_Generic_List_Enumerator_T__c *pSVar9;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  
  if (g_data_057ae328 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass16_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    g_data_057ae328 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  __this_08 = __this;
  pSVar4 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_06 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_06,0x1c,120.0,20.0,pSVar4,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._allowedCategories;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&SStack_48,(System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_48.fields._list;
    while (__this_02.fields._8_8_ = __this_08,
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88,
          __this_02.fields._current = (Il2CppObject *)pSVar9,
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98), (char)bVar3 != '\0') {
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass16_0);
      System_Object___ctor(pIVar5,(MethodInfo *)0x0);
      if (pIVar5 == (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_022b2c90();
label_043a4844:
        il2cpp_runtime_helper_022b2c90();
label_043a4849:
        il2cpp_runtime_helper_022b2c90();
        goto label_043a484e;
      }
      pIVar5[1].monitor = __this_08;
      il2cpp_runtime_helper_022b4080(&pIVar5[1].monitor);
      pIVar7 = pIVar5 + 1;
      pIVar5[1].klass = (Il2CppClass *)SStack_48.fields._current;
      il2cpp_runtime_helper_022b4080(pIVar7);
      parent = (__this_08->fields).TopBar;
      pIVar1 = pIVar7->klass;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = UI_UIManager__GetLocaleCommon((System_String_o *)pIVar1,(MethodInfo *)0x0);
      onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      __this_07 = UI_ElementFactory__CreateCategoryButton(parent,__this_06,pSVar4,onClick,(MethodInfo *)0x0);
      if (__this_07 == (UnityEngine_GameObject_o *)0x0) goto label_043a4844;
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_08->fields)._topButtons;
      pIVar1 = pIVar7->klass;
      pIVar5 = UnityEngine_GameObject__GetComponent_object_(__this_07,MethodInfo_Button_GetComponent_Button);
      if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043a4849;
      System_Collections_Generic_Dictionary_object__object___Add
                (__this_01,(Il2CppObject *)pIVar1,pIVar5,MethodInfo_Void_Add);
    }
    __this_03.fields._8_8_ = __this_08;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
    __this_03.fields._current = (Il2CppObject *)pSVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
label_043a4824:
    UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this_08,(MethodInfo *)0x0);
    return;
  }
label_043a484e:
  auVar8 = il2cpp_runtime_helper_022b2c90();
  if (auVar8._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar2 = *plVar6;
    __cxa_end_catch();
    __this_04.fields._8_8_ = __this_08;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
    __this_04.fields._current = (Il2CppObject *)pSVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar2 == 0) goto label_043a4824;
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_05.fields._8_8_ = __this_08;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
  __this_05.fields._current = (Il2CppObject *)pSVar9;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar8._0_8_);
}


// UI.CharacterPopup$$RegisterCategoryPanels
// il2cpp: void UI_CharacterPopup__RegisterCategoryPanels (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x43a4960

void UI_CharacterPopup__RegisterCategoryPanels(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  UnityEngine_Transform_o *pUVar2;
  int32_t fontSize;
  System_Type_o *pSVar3;
  System_String_o *pSVar4;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar5;
  System_RuntimeTypeHandle_o handle;
  
  if (g_data_057ae329 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CharacterHumanPanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_CharacterShifterPanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_CharacterTitanPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"Shifter");
    g_data_057ae329 = '\x01';
  }
  handle.fields.value = TypeRef_CharacterHumanPanel.fields.value;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar1,"Human",(Il2CppObject *)pSVar3,MethodInfo_Void_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
    handle.fields.value = TypeRef_CharacterTitanPanel.fields.value;
    pSVar3 = System_Type__GetTypeFromHandle(TypeRef_CharacterTitanPanel,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,"Titan",(Il2CppObject *)pSVar3,MethodInfo_Void_Add);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes
      ;
      handle.fields.value = TypeRef_CharacterShifterPanel.fields.value;
      pSVar3 = System_Type__GetTypeFromHandle(TypeRef_CharacterShifterPanel,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar1,"Shifter",(Il2CppObject *)pSVar3,MethodInfo_Void_Add);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae32a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__18_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__18_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"SpectateButton");
    il2cpp_runtime_helper_023445d0(&"Join");
    il2cpp_runtime_helper_023445d0(&"Bottom");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae32a = '\x01';
  }
  fontSize = (**(code **)(*(long *)handle.fields.value + 0x3c8))
                       (handle.fields.value,*(undefined8 *)(*(long *)handle.fields.value + 0x3d0));
  pSVar4 = (System_String_o *)
           (**(code **)(*(long *)handle.fields.value + 0x178))
                     (handle.fields.value,*(undefined8 *)(*(long *)handle.fields.value + 0x180));
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar4,(MethodInfo *)0x0);
  pUVar2 = *(UnityEngine_Transform_o **)((long)handle.fields.value + 0x68);
  pSVar4 = *(System_String_o **)((long)handle.fields.value + 0xa8);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = UI_UIManager__GetLocale
                     (pSVar4,"Bottom","SpectateButton","","",(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar2,__this_00,pSVar4,0.0,pUVar5,(MethodInfo *)0x0);
  pUVar2 = *(UnityEngine_Transform_o **)((long)handle.fields.value + 0x68);
  pSVar4 = UI_UIManager__GetLocaleCommon("Join",(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar2,__this_00,pSVar4,0.0,pUVar5,(MethodInfo *)0x0);
  return;
}


// UI.CharacterPopup$$SetupBottomButtons
// il2cpp: void UI_CharacterPopup__SetupBottomButtons (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x43a4aa0

void UI_CharacterPopup__SetupBottomButtons(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  
  if (g_data_057ae32a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__18_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__18_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"SpectateButton");
    il2cpp_runtime_helper_023445d0(&"Join");
    il2cpp_runtime_helper_023445d0(&"Bottom");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae32a = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = (__this->fields).LocaleCategory;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = UI_UIManager__GetLocale
                     (pSVar2,"Bottom","SpectateButton","","",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Join",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  return;
}


// UI.CharacterPopup$$OnBottomBarButtonClick
// il2cpp: void UI_CharacterPopup__OnBottomBarButtonClick (UI_CharacterPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x43a4c80

void UI_CharacterPopup__OnBottomBarButtonClick
               (UI_CharacterPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  Settings_TypedSetting_int__o *pSVar6;
  long lVar7;
  bool_conflict bVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar9;
  UI_CharacterPopup_o *pUVar10;
  
  if (g_data_057ae32b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"Spectate");
    il2cpp_runtime_helper_023445d0(&"Join");
    g_data_057ae32b = '\x01';
  }
  pUVar10 = *(UI_CharacterPopup_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pUVar10 != (UI_CharacterPopup_o *)0x0) {
    bVar3 = (TypeInfo_InGameManager->_2).naturalAligment;
    if (((pUVar10->klass->_2).naturalAligment < bVar3) ||
       ((pUVar10->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_InGameManager)) goto label_043a4f52;
  }
  bVar8 = System_String__op_Equality(name,"Spectate",(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    bVar8 = System_String__op_Equality(name,"Join",(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return;
    }
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
    if ((lVar5 != 0) &&
       (pSVar6 = *(Settings_TypedSetting_int__o **)(lVar5 + 0x20),
       pSVar6 != (Settings_TypedSetting_int__o *)0x0)) {
      pMVar9 = (MethodInfo *)0x2;
      Settings_TypedSetting_int___set_Value(pSVar6,2,MethodInfo_Void_set_Value);
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        if ((char)bVar8 == '\0') goto label_043a4e56;
label_043a4ee2:
        if (pUVar10 == (UI_CharacterPopup_o *)0x0) goto label_043a4f4d;
        if (*(char *)((long)&(pUVar10->fields)._topButtons + 1) != '\0') goto label_043a4eee;
        pMVar9 = (MethodInfo *)0x0;
        GameManagers_InGameManager__SpawnPlayer((GameManagers_InGameManager_o *)pUVar10,0,(MethodInfo *)0x0);
        iVar4 = *(int *)&(TypeInfo_InGameManager->_2).field_0x1c;
      }
      else {
        bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        if ((char)bVar8 != '\0') goto label_043a4ee2;
label_043a4e56:
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar5 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if ((((lVar5 == 0) || (lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50), lVar7 == 0)) ||
            (lVar7 = *(long *)(lVar7 + 0x58), lVar7 == 0)) || (lVar7 = *(long *)(lVar7 + 0x38), lVar7 == 0))
        goto label_043a4f4d;
        fVar2 = *(float *)(lVar7 + 0x14);
        pfVar1 = (float *)(lVar5 + 0x20);
        if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) goto label_043a4ee2;
label_043a4eee:
        iVar4 = *(int *)&(TypeInfo_InGameManager->_2).field_0x1c;
      }
      if (iVar4 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)0x0);
      pUVar10 = (UI_CharacterPopup_o *)0x0;
      GameManagers_InGameManager__OnCharacterChosen((MethodInfo *)0x0);
      UI_CharacterPopup__SaveLastCharacter(pUVar10,pMVar9);
label_043a4f13:
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
  }
  else {
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
    if ((lVar5 != 0) &&
       (pSVar6 = *(Settings_TypedSetting_int__o **)(lVar5 + 0x20),
       pSVar6 != (Settings_TypedSetting_int__o *)0x0)) {
      Settings_TypedSetting_int___set_Value(pSVar6,1,MethodInfo_Void_set_Value);
      if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      GameManagers_InGameManager__UpdatePlayerName((MethodInfo *)0x0);
      GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)0x0);
      goto label_043a4f13;
    }
  }
label_043a4f4d:
  il2cpp_runtime_helper_022b2c90();
label_043a4f52:
  il2cpp_runtime_helper_022b2fd0();
  pMVar9 = extraout_RDX;
  if (g_data_057ae32e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Spectate");
    g_data_057ae32e = '\x01';
    pMVar9 = extraout_RDX_00;
  }
  UI_CharacterPopup__OnBottomBarButtonClick(pUVar10,"Spectate",pMVar9);
  return;
}


// UI.CharacterPopup$$SaveLastCharacter
// il2cpp: void UI_CharacterPopup__SaveLastCharacter (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x439bfb0

void UI_CharacterPopup__SaveLastCharacter(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  long lVar1;
  long *plVar2;
  bool_conflict bVar3;
  long lVar4;
  System_Collections_Generic_List_object__o *__this_00;
  UI_TooltipPopup_o *pUVar5;
  Settings_TypedSetting_T__o *__this_01;
  
  if (g_data_057ae32c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    __this = (UI_CharacterPopup_o *)&MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae32c = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
  if (((lVar1 == 0) || (lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70), lVar4 == 0)) ||
     (*(long *)(lVar4 + 0x28) == 0)) goto label_0439c27c;
  lVar1 = *(long *)(lVar1 + 0x28);
  __this = *(UI_CharacterPopup_o **)(*(long *)(lVar4 + 0x28) + 0x18);
  if (*(int *)((long)&TypeInfo_PlayerCharacter[1].fields.m_CancellationTokenSource + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_String__op_Equality
                    ((System_String_o *)__this,(System_String_o *)((TypeInfo_PlayerCharacter->fields).Caller)->klass,
                     (MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (*(long *)(lVar4 + 0x28) == 0) goto label_0439c27c;
    __this = *(UI_CharacterPopup_o **)(*(long *)(lVar4 + 0x28) + 0x18);
    if (*(int *)((long)&TypeInfo_PlayerCharacter[1].fields.m_CancellationTokenSource + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = System_String__op_Equality
                      ((System_String_o *)__this,((TypeInfo_PlayerCharacter->fields).Caller)->monitor,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    if (lVar1 == 0) goto label_0439c27c;
    pUVar5 = *(UI_TooltipPopup_o **)(lVar1 + 0x28);
    __this = (UI_CharacterPopup_o *)TypeInfo_PlayerCharacter;
    if (*(int *)((long)&TypeInfo_PlayerCharacter[1].fields.m_CancellationTokenSource + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pUVar5 == (UI_TooltipPopup_o *)0x0) goto label_0439c27c;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pUVar5,((TypeInfo_PlayerCharacter->fields).Caller)->monitor,MethodInfo_Void_set_Value);
    __this = (UI_CharacterPopup_o *)pUVar5;
    if ((*(long *)(lVar4 + 0x40) == 0) ||
       (__this = *(UI_CharacterPopup_o **)(lVar1 + 0x40),
       (UI_TooltipPopup_o *)__this == (UI_TooltipPopup_o *)0x0)) goto label_0439c27c;
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)__this,*(int32_t *)(*(long *)(lVar4 + 0x40) + 0x14),
               MethodInfo_Void_set_Value);
    lVar4 = *(long *)(lVar4 + 0x30);
    if ((lVar4 == 0) ||
       (__this_01 = *(Settings_TypedSetting_T__o **)(lVar1 + 0x30), __this = (UI_CharacterPopup_o *)0x0,
       __this_01 == (Settings_TypedSetting_T__o *)0x0)) goto label_0439c27c;
  }
  else {
    if (lVar1 == 0) goto label_0439c27c;
    pUVar5 = *(UI_TooltipPopup_o **)(lVar1 + 0x28);
    __this = (UI_CharacterPopup_o *)TypeInfo_PlayerCharacter;
    if (*(int *)((long)&TypeInfo_PlayerCharacter[1].fields.m_CancellationTokenSource + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pUVar5 == (UI_TooltipPopup_o *)0x0) goto label_0439c27c;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pUVar5,(Il2CppObject *)((TypeInfo_PlayerCharacter->fields).Caller)->klass,
               MethodInfo_Void_set_Value);
    __this = (UI_CharacterPopup_o *)pUVar5;
    if ((*(long *)(lVar4 + 0x48) == 0) ||
       (__this = *(UI_CharacterPopup_o **)(lVar1 + 0x48),
       (UI_TooltipPopup_o *)__this == (UI_TooltipPopup_o *)0x0)) goto label_0439c27c;
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)__this,*(int32_t *)(*(long *)(lVar4 + 0x48) + 0x14),
               MethodInfo_Void_set_Value);
    if ((*(long *)(lVar4 + 0x40) == 0) ||
       (__this = *(UI_CharacterPopup_o **)(lVar1 + 0x40),
       (UI_TooltipPopup_o *)__this == (UI_TooltipPopup_o *)0x0)) goto label_0439c27c;
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)__this,*(int32_t *)(*(long *)(lVar4 + 0x40) + 0x14),
               MethodInfo_Void_set_Value);
    if ((*(long *)(lVar4 + 0x30) == 0) ||
       (__this = *(UI_CharacterPopup_o **)(lVar1 + 0x30),
       (UI_TooltipPopup_o *)__this == (UI_TooltipPopup_o *)0x0)) goto label_0439c27c;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this,*(Il2CppObject **)(*(long *)(lVar4 + 0x30) + 0x18),
               MethodInfo_Void_set_Value);
    lVar4 = *(long *)(lVar4 + 0x38);
    if (lVar4 == 0) goto label_0439c27c;
    __this_01 = *(Settings_TypedSetting_T__o **)(lVar1 + 0x38);
    if (__this_01 == (Settings_TypedSetting_T__o *)0x0) {
      __this = (UI_CharacterPopup_o *)(UI_TooltipPopup_o *)0x0;
      goto label_0439c27c;
    }
  }
  Settings_TypedSetting_object___set_Value(__this_01,*(Il2CppObject **)(lVar4 + 0x18),MethodInfo_Void_set_Value);
  plVar2 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
  __this = (UI_CharacterPopup_o *)(UI_TooltipPopup_o *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
    return;
  }
label_0439c27c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae32d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"CharacterPopup");
    g_data_057ae32d = '\x01';
  }
  (((UI_TooltipPopup_o *)__this)->fields)._label = "CharacterPopup";
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)__this)->fields)._label);
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
  (((UI_TooltipPopup_o *)__this)->fields)._panel = (UnityEngine_RectTransform_o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)__this)->fields)._panel);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterPopup$$.ctor
// il2cpp: void UI_CharacterPopup___ctor (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x439c2a0

void UI_CharacterPopup___ctor(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (g_data_057ae32d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"CharacterPopup");
    g_data_057ae32d = '\x01';
  }
  (__this->fields).LocaleCategory = "CharacterPopup";
  il2cpp_runtime_helper_022b4080(&(__this->fields).LocaleCategory);
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  (__this->fields)._allowedCategories = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._allowedCategories);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterPopup$$<SetupBottomButtons>b__18_0
// il2cpp: void UI_CharacterPopup___SetupBottomButtons_b__18_0 (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x43a4f60

void UI_CharacterPopup___SetupBottomButtons_b__18_0(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae32e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Spectate");
    g_data_057ae32e = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterPopup__OnBottomBarButtonClick(__this,"Spectate",in_RDX);
  return;
}


// UI.CharacterPopup$$<SetupBottomButtons>b__18_1
// il2cpp: void UI_CharacterPopup___SetupBottomButtons_b__18_1 (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x43a4fa0

void UI_CharacterPopup___SetupBottomButtons_b__18_1(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae32f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Join");
    g_data_057ae32f = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterPopup__OnBottomBarButtonClick(__this,"Join",in_RDX);
  return;
}


