// Type: UI.CreateGameGeneralPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CreateGameGeneralPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/CreateGamePopup/CreateGameGeneralPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.CreateGameGeneralPanel.<>c__DisplayClass3_0$$.ctor
// il2cpp: void UI_CreateGameGeneralPanel___c__DisplayClass3_0___ctor (UI_CreateGameGeneralPanel___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x4065ca0

void UI_CreateGameGeneralPanel_<>c__DisplayClass3_0___ctor
               (UI_CreateGameGeneralPanel___c__DisplayClass3_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameGeneralPanel.<>c__DisplayClass3_0$$<Setup>b__0
// il2cpp: void UI_CreateGameGeneralPanel___c__DisplayClass3_0___Setup_b__0 (UI_CreateGameGeneralPanel___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x4066080

void UI_CreateGameGeneralPanel_<>c__DisplayClass3_0__<Setup>b__0
               (UI_CreateGameGeneralPanel___c__DisplayClass3_0_o *__this,MethodInfo *method)

{
  UI_BasePanel_o *__this_00;
  
  __this_00 = (__this->fields).parent;
  if (__this_00 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameGeneralPanel.<>c__DisplayClass3_0$$<Setup>b__1
// il2cpp: void UI_CreateGameGeneralPanel___c__DisplayClass3_0___Setup_b__1 (UI_CreateGameGeneralPanel___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x40660a0

void UI_CreateGameGeneralPanel_<>c__DisplayClass3_0__<Setup>b__1
               (UI_CreateGameGeneralPanel___c__DisplayClass3_0_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_CreateGameGeneralPanel_o *pUVar2;
  UI_CreateGamePopup_o *__this_00;
  UI_BasePanel_o *__this_01;
  
  if (DAT_0570448b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CreateGamePopup);
    DAT_0570448b = '\x01';
  }
  pUVar2 = (__this->fields).__4__this;
  if ((pUVar2 != (UI_CreateGameGeneralPanel_o *)0x0) &&
     (__this_00 = (UI_CreateGamePopup_o *)(pUVar2->fields).Parent,
     __this_00 != (UI_CreateGamePopup_o *)0x0)) {
    bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CreateGamePopup)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    UI_CreateGamePopup__SyncAddonSettings(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields).parent;
    if (__this_01 != (UI_BasePanel_o *)0x0) {
      UI_BasePanel__RebuildCategoryPanel(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameGeneralPanel.<>c__DisplayClass3_1$$.ctor
// il2cpp: void UI_CreateGameGeneralPanel___c__DisplayClass3_1___ctor (UI_CreateGameGeneralPanel___c__DisplayClass3_1_o* __this, const MethodInfo* method);
// 0x4065ed0

void UI_CreateGameGeneralPanel_<>c__DisplayClass3_1___ctor
               (UI_CreateGameGeneralPanel___c__DisplayClass3_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameGeneralPanel.<>c__DisplayClass3_1$$<Setup>b__2
// il2cpp: void UI_CreateGameGeneralPanel___c__DisplayClass3_1___Setup_b__2 (UI_CreateGameGeneralPanel___c__DisplayClass3_1_o* __this, const MethodInfo* method);
// 0x4066120

void UI_CreateGameGeneralPanel_<>c__DisplayClass3_1__<Setup>b__2
               (UI_CreateGameGeneralPanel___c__DisplayClass3_1_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_CreateGameGeneralPanel___c__DisplayClass3_0_o *pUVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameGeneralSettings_o *pSVar4;
  Settings_ListSetting_StringSetting__o *addons;
  System_String_o *addonName;
  UI_CreateGameGeneralPanel_o *pUVar5;
  UI_CreateGamePopup_o *__this_00;
  UI_BasePanel_o *__this_01;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_0570448c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CreateGameGeneralPanel);
    il2cpp_init_method_metadata(&TypeInfo_CreateGamePopup);
    DAT_0570448c = '\x01';
    in_RDX = extraout_RDX;
  }
  pUVar2 = (__this->fields).CS___8__locals1;
  if (((pUVar2 != (UI_CreateGameGeneralPanel___c__DisplayClass3_0_o *)0x0) &&
      (pSVar3 = (pUVar2->fields).settings, pSVar3 != (Settings_InGameSet_o *)0x0)) &&
     (pSVar4 = (pSVar3->fields).General, pSVar4 != (Settings_InGameGeneralSettings_o *)0x0)) {
    addons = (pSVar4->fields).Addons;
    addonName = (__this->fields).addonName;
    if (*(int *)(TypeInfo_CreateGameGeneralPanel + 0xe4) == 0) {
      il2cpp_init_class();
      in_RDX = extraout_RDX_00;
    }
    UI_CreateGameGeneralPanel__RemoveAddon(addons,addonName,in_RDX);
    pUVar2 = (__this->fields).CS___8__locals1;
    if (((pUVar2 != (UI_CreateGameGeneralPanel___c__DisplayClass3_0_o *)0x0) &&
        (pUVar5 = (pUVar2->fields).__4__this, pUVar5 != (UI_CreateGameGeneralPanel_o *)0x0)) &&
       (__this_00 = (UI_CreateGamePopup_o *)(pUVar5->fields).Parent,
       __this_00 != (UI_CreateGamePopup_o *)0x0)) {
      bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
      if (((__this_00->klass->_2).naturalAligment < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CreateGamePopup)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      UI_CreateGamePopup__SyncAddonSettings(__this_00,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).CS___8__locals1;
      if ((pUVar2 != (UI_CreateGameGeneralPanel___c__DisplayClass3_0_o *)0x0) &&
         (__this_01 = (pUVar2->fields).parent, __this_01 != (UI_BasePanel_o *)0x0)) {
        UI_BasePanel__RebuildCategoryPanel(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameGeneralPanel.<>c__DisplayClass4_0$$.ctor
// il2cpp: void UI_CreateGameGeneralPanel___c__DisplayClass4_0___ctor (UI_CreateGameGeneralPanel___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x4065fd0

void UI_CreateGameGeneralPanel_<>c__DisplayClass4_0___ctor
               (UI_CreateGameGeneralPanel___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameGeneralPanel.<>c__DisplayClass4_0$$<RemoveAddon>b__0
// il2cpp: bool UI_CreateGameGeneralPanel___c__DisplayClass4_0___RemoveAddon_b__0 (UI_CreateGameGeneralPanel___c__DisplayClass4_0_o* __this, Settings_StringSetting_o* x, const MethodInfo* method);
// 0x4066220

bool_conflict
UI_CreateGameGeneralPanel_<>c__DisplayClass4_0__<RemoveAddon>b__0
          (UI_CreateGameGeneralPanel___c__DisplayClass4_0_o *__this,Settings_StringSetting_o *x,
          MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_0570448d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_0570448d = '\x01';
  }
  if (x != (Settings_StringSetting_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((x->fields)._value,(__this->fields).addonName,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameGeneralPanel$$get_ScrollBar
// il2cpp: bool UI_CreateGameGeneralPanel__get_ScrollBar (UI_CreateGameGeneralPanel_o* __this, const MethodInfo* method);
// 0x4064390

bool_conflict
UI_CreateGameGeneralPanel__get_ScrollBar(UI_CreateGameGeneralPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CreateGameGeneralPanel$$Setup
// il2cpp: void UI_CreateGameGeneralPanel__Setup (UI_CreateGameGeneralPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40643a0

void UI_CreateGameGeneralPanel__Setup
               (UI_CreateGameGeneralPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  Settings_TypedSetting_T__o *pSVar4;
  System_String_o *pSVar5;
  Il2CppClass *pIVar6;
  System_String_o *gameMode;
  UI_CreateGamePopup_o *__this_00;
  UI_BasePanel_o *pUVar7;
  System_Collections_Generic_List_Enumerator_T__c *__this_01;
  Settings_StringSetting_o *setting;
  UI_CreateGameSelectAddonPopup_o *__this_02;
  Settings_ListSetting_StringSetting__o *addons;
  Settings_BaseSetting_o *pSVar8;
  Map_MapScriptOptions_o *pMVar9;
  Settings_SetSettingsContainer_T__o *__this_03;
  void *pvVar10;
  System_Collections_Generic_List_object__o *__this_04;
  undefined8 uVar11;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  UnityEngine_UI_ColorBlock_o value;
  System_String_o *subCategory;
  InvokerMethod pIVar12;
  bool_conflict bVar13;
  uint uVar14;
  Il2CppObject *__this_07;
  System_String_o *pSVar15;
  UI_ElementStyle_o *__this_08;
  System_String_array *pSVar16;
  Map_MapScript_o *__this_09;
  System_Collections_Generic_Dictionary_object__object__o *__this_10;
  UnityEngine_Events_UnityAction_o *pUVar17;
  System_String_o *pSVar18;
  Il2CppObject *pIVar19;
  UnityEngine_GameObject_o *pUVar20;
  UnityEngine_Transform_o *pUVar21;
  UnityEngine_GameObject_o *pUVar22;
  UnityEngine_UI_Text_o *__this_11;
  UnityEngine_Object_o *pUVar23;
  UnityEngine_UI_Selectable_o *__this_12;
  System_String_o **ppSVar24;
  MethodInfo *method_00;
  long *plVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  Il2CppObject *pIVar28;
  MethodInfo_3185E20 MStack_d8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (DAT_05704487 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_ColorBlock);
    il2cpp_init_method_metadata(&TypeInfo_CreateGameGeneralPanel);
    il2cpp_init_method_metadata(&TypeInfo_CreateGamePopup);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__BaseSetting);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains_String);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_StringSetting_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_RectMask2D_AddComponent_RectMask2D);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_StringSetting__Get);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_MainMenu);
    il2cpp_init_method_metadata(&TypeInfo_MapScript);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_String___GetSetNames);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_StringSetting__get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass3_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__2);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass3_1);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Weather");
    il2cpp_init_method_metadata(&"RoomName");
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&": ");
    il2cpp_init_method_metadata(&"DifficultyOptions");
    il2cpp_init_method_metadata(&"Difficulty");
    il2cpp_init_method_metadata(&"MaxPlayers");
    il2cpp_init_method_metadata(&"GameMode");
    il2cpp_init_method_metadata(&"Password");
    il2cpp_init_method_metadata(&"Addons");
    il2cpp_init_method_metadata(&"CreateGamePopup");
    il2cpp_init_method_metadata(&"Icons/Navigation/TrashIcon");
    il2cpp_init_method_metadata(&"MapName");
    il2cpp_init_method_metadata(&"No addons selected.");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"MapCategory");
    DAT_05704487 = '\x01';
  }
  MStack_d8.methodPointer = (Il2CppMethodPointer)0x0;
  MStack_d8.virtualMethodPointer = (Il2CppMethodPointer)0x0;
  MStack_d8.invoker_method = (InvokerMethod)0x0;
  __this_07 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass3_0);
  System_Object___ctor(__this_07,(MethodInfo *)0x0);
  if (__this_07 == (Il2CppObject *)0x0) goto LAB_04065b98;
  MStack_d8.parameters = (Il2CppType **)(__this_07 + 1);
  __this_07[1].klass = (Il2CppClass *)parent;
  il2cpp_runtime_glue(MStack_d8.parameters,parent);
  __this_07[1].monitor = __this;
  il2cpp_runtime_glue(&__this_07[1].monitor,__this);
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,(UI_BasePanel_o *)__this_07[1].klass,
                      (MethodInfo *)0x0);
  pIVar19 = __this_07 + 2;
  __this_07[2].klass = *(Il2CppClass **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  il2cpp_runtime_glue(pIVar19);
  subCategory = "General";
  pSVar18 = "CreateGamePopup";
  pSVar15 = (System_String_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_08 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_08,0x18,200.0,20.0,pSVar15,(MethodInfo *)0x0);
  if (((__this_07[2].klass == (Il2CppClass *)0x0) ||
      (lVar3 = *(long *)&((__this_07[2].klass)->_1).this_arg.bits, lVar3 == 0)) ||
     (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)) goto LAB_04065b98;
  pSVar15 = *(System_String_o **)(lVar3 + 0x18);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar16 = Map_BuiltinLevels__GetMapNames(pSVar15,(MethodInfo *)0x0);
  if (((pIVar19->klass == (Il2CppClass *)0x0) ||
      (lVar3 = *(long *)&(pIVar19->klass->_1).this_arg.bits, lVar3 == 0)) ||
     (lVar3 = *(long *)(lVar3 + 0x28), lVar3 == 0)) goto LAB_04065b98;
  bVar13 = System_Linq_Enumerable__Contains<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar16,
                      *(Il2CppObject **)(lVar3 + 0x18),MethodInfo_Boolean_Contains_String);
  if ((char)bVar13 == '\0') {
    if (((pSVar16 == (System_String_array *)0x0) || (pIVar19->klass == (Il2CppClass *)0x0)) ||
       (lVar3 = *(long *)&(pIVar19->klass->_1).this_arg.bits, lVar3 == 0)) goto LAB_04065b98;
    pSVar4 = *(Settings_TypedSetting_T__o **)(lVar3 + 0x28);
    if (pSVar16->max_length == 0) {
      if (pSVar4 == (Settings_TypedSetting_T__o *)0x0) goto LAB_04065b98;
      ppSVar24 = &"";
    }
    else {
      if ((int)pSVar16->max_length == 0) goto LAB_04065a6d;
      if (pSVar4 == (Settings_TypedSetting_T__o *)0x0) goto LAB_04065b98;
      ppSVar24 = pSVar16->m_Items;
    }
    Settings_TypedSetting<object>__set_Value(pSVar4,(Il2CppObject *)*ppSVar24,MethodInfo_Void_set_Value);
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if ((((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x38), lVar3 == 0)) ||
      (*(long *)(lVar3 + 0x20) == 0)) || (*(long *)(lVar3 + 0x28) == 0)) goto LAB_04065b98;
  pSVar15 = *(System_String_o **)(*(long *)(lVar3 + 0x20) + 0x18);
  pSVar5 = *(System_String_o **)(*(long *)(lVar3 + 0x28) + 0x18);
  __this_09 = (Map_MapScript_o *)il2cpp_runtime_glue(TypeInfo_MapScript);
  Map_MapScript___ctor(__this_09,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar15 = Map_BuiltinLevels__LoadMap(pSVar15,pSVar5,(MethodInfo *)0x0);
  if (__this_09 == (Map_MapScript_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(__this_09->klass->vtable)._5_Deserialize.methodPtr)
            (__this_09,pSVar15,(__this_09->klass->vtable)._5_Deserialize.method);
  pSVar15 = (__this_09->fields).Logic;
  if (pSVar15 == (System_String_o *)0x0) goto LAB_04065b98;
  pSVar15 = System_String__Trim(pSVar15,(MethodInfo *)0x0);
  uVar14 = System_String__op_Inequality
                     (pSVar15,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                      (MethodInfo *)0x0);
  if (((pIVar19->klass == (Il2CppClass *)0x0) ||
      (lVar3 = *(long *)&(pIVar19->klass->_1).this_arg.bits, lVar3 == 0)) ||
     ((*(long *)(lVar3 + 0x20) == 0 || (*(long *)(lVar3 + 0x28) == 0)))) goto LAB_04065b98;
  pSVar15 = *(System_String_o **)(*(long *)(lVar3 + 0x20) + 0x18);
  pSVar5 = *(System_String_o **)(*(long *)(lVar3 + 0x28) + 0x18);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar16 = Map_BuiltinLevels__GetGameModes(pSVar15,pSVar5,uVar14 & 0xff,(MethodInfo *)0x0);
  if (((pIVar19->klass == (Il2CppClass *)0x0) ||
      (lVar3 = *(long *)&(pIVar19->klass->_1).this_arg.bits, lVar3 == 0)) ||
     (lVar3 = *(long *)(lVar3 + 0x30), lVar3 == 0)) goto LAB_04065b98;
  bVar13 = System_Linq_Enumerable__Contains<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar16,
                      *(Il2CppObject **)(lVar3 + 0x18),MethodInfo_Boolean_Contains_String);
  if ((char)bVar13 == '\0') {
    if (((pIVar19->klass == (Il2CppClass *)0x0) ||
        (lVar3 = *(long *)&(pIVar19->klass->_1).this_arg.bits, lVar3 == 0)) ||
       (pSVar16 == (System_String_array *)0x0)) goto LAB_04065b98;
    if ((int)pSVar16->max_length == 0) {
LAB_04065a6d:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar4 = *(Settings_TypedSetting_T__o **)(lVar3 + 0x30);
    if (pSVar4 == (Settings_TypedSetting_T__o *)0x0) goto LAB_04065b98;
    Settings_TypedSetting<object>__set_Value
              (pSVar4,(Il2CppObject *)pSVar16->m_Items[0],MethodInfo_Void_set_Value);
  }
  if (((pIVar19->klass == (Il2CppClass *)0x0) ||
      (lVar3 = *(long *)&(pIVar19->klass->_1).this_arg.bits, lVar3 == 0)) ||
     ((*(long *)(lVar3 + 0x30) == 0 || (*(long *)(lVar3 + 0x38) == 0)))) goto LAB_04065b98;
  bVar13 = System_String__op_Inequality
                     (*(System_String_o **)(*(long *)(lVar3 + 0x30) + 0x18),
                      *(System_String_o **)(*(long *)(lVar3 + 0x38) + 0x18),(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    if (((pIVar19->klass == (Il2CppClass *)0x0) ||
        (lVar3 = *(long *)&(pIVar19->klass->_1).this_arg.bits, lVar3 == 0)) ||
       (lVar3 = *(long *)(lVar3 + 0x30), lVar3 == 0)) goto LAB_04065b98;
    pSVar15 = *(System_String_o **)(lVar3 + 0x18);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar13 = System_String__op_Equality
                       (pSVar15,*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x28),
                        (MethodInfo *)0x0);
    if ((char)bVar13 != '\0') goto LAB_04064aca;
  }
  else {
LAB_04064aca:
    method_00 = TypeInfo_CreateGameGeneralPanel;
    if (*(int *)((long)&TypeInfo_CreateGameGeneralPanel[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    UI_CreateGameGeneralPanel__SetDefaultMisc(method_00);
    pIVar6 = pIVar19->klass;
    if ((((pIVar6 == (Il2CppClass *)0x0) ||
         (lVar3 = *(long *)&(pIVar6->_1).this_arg.bits, lVar3 == 0)) ||
        (*(long *)(lVar3 + 0x20) == 0)) ||
       ((*(long *)(lVar3 + 0x28) == 0 || (*(long *)(lVar3 + 0x30) == 0)))) goto LAB_04065b98;
    pSVar15 = *(System_String_o **)(*(long *)(lVar3 + 0x20) + 0x18);
    pSVar5 = *(System_String_o **)(*(long *)(lVar3 + 0x28) + 0x18);
    gameMode = *(System_String_o **)(*(long *)(lVar3 + 0x30) + 0x18);
    pIVar6 = (pIVar6->_1).parent;
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Map_BuiltinLevels__LoadMiscSettings
              (pSVar15,pSVar5,gameMode,(Settings_InGameMiscSettings_o *)pIVar6,(MethodInfo *)0x0);
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
    if (lVar3 == 0) goto LAB_04065b98;
    lVar3 = *(long *)(lVar3 + 0x40);
    __this_10 = (System_Collections_Generic_Dictionary_object__object__o *)
                il2cpp_runtime_glue(TypeInfo_Dictionary_string__BaseSetting);
    System_Collections_Generic_Dictionary<object__object>___ctor(__this_10,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    if (lVar3 == 0) goto LAB_04065b98;
    *(System_Collections_Generic_Dictionary_object__object__o **)(lVar3 + 0x20) = __this_10;
    il2cpp_runtime_glue(lVar3 + 0x20,__this_10);
  }
  if (((pIVar19->klass == (Il2CppClass *)0x0) ||
      (lVar3 = *(long *)&(pIVar19->klass->_1).this_arg.bits, lVar3 == 0)) ||
     ((*(long *)(lVar3 + 0x30) == 0 ||
      (*(Settings_TypedSetting_T__o **)(lVar3 + 0x38) == (Settings_TypedSetting_T__o *)0x0))))
  goto LAB_04065b98;
  Settings_TypedSetting<object>__set_Value
            (*(Settings_TypedSetting_T__o **)(lVar3 + 0x38),
             *(Il2CppObject **)(*(long *)(lVar3 + 0x30) + 0x18),MethodInfo_Void_set_Value);
  __this_00 = (UI_CreateGamePopup_o *)(__this->fields).Parent;
  if (__this_00 == (UI_CreateGamePopup_o *)0x0) goto LAB_04065b98;
  bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
  if (((__this_00->klass->_2).naturalAligment < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CreateGamePopup)) goto LAB_04065a5b;
  UI_CreateGamePopup__SyncModeSettings(__this_00,__this_09,(MethodInfo *)0x0);
  iVar2 = *(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
    plVar25 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (iVar2 != 2) goto LAB_04064d03;
LAB_04064c9a:
    if (plVar25 == (long *)0x0) goto LAB_04065b98;
    if ((*(byte *)(*plVar25 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
       (*(long *)(*(long *)(*plVar25 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
        TypeInfo_InGameMenu)) goto LAB_04065a5b;
    plVar25 = plVar25 + 0x27;
    pUVar7 = (__this->fields).Parent;
  }
  else {
    plVar25 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (iVar2 == 2) goto LAB_04064c9a;
LAB_04064d03:
    if (plVar25 == (long *)0x0) goto LAB_04065b98;
    if ((*(byte *)(*plVar25 + 0x130) < *(byte *)(TypeInfo_MainMenu + 0x130)) ||
       (*(long *)(*(long *)(*plVar25 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MainMenu + 0x130) * 8) !=
        TypeInfo_MainMenu)) goto LAB_04065a5b;
    plVar25 = plVar25 + 0x14;
    pUVar7 = (__this->fields).Parent;
  }
  if (pUVar7 != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
    if (((pUVar7->klass->_2).naturalAligment < bVar1) ||
       ((pUVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CreateGamePopup)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pUVar7);
    }
    if ((pIVar19->klass != (Il2CppClass *)0x0) &&
       (lVar3 = *(long *)&(pIVar19->klass->_1).this_arg.bits, lVar3 != 0)) {
      MStack_d8.name = (char *)*plVar25;
      __this_01 = (System_Collections_Generic_List_Enumerator_T__c *)pUVar7[2].fields.m_CachedPtr;
      setting = *(Settings_StringSetting_o **)(lVar3 + 0x30);
      pUVar17 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_01 != (System_Collections_Generic_List_Enumerator_T__c *)0x0) {
        MStack_d8.klass = __this_01;
        UI_CreateGameSelectModePopup__SetupSelector
                  ((UI_CreateGameSelectModePopup_o *)__this_01,setting,pUVar17,(MethodInfo *)0x0);
        pUVar7 = (__this->fields).Parent;
        if (pUVar7 != (UI_BasePanel_o *)0x0) {
          bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
          if (((pUVar7->klass->_2).naturalAligment < bVar1) ||
             ((pUVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CreateGamePopup)) {
LAB_04065a5b:
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume();
          }
          if ((pIVar19->klass != (Il2CppClass *)0x0) &&
             (lVar3 = *(long *)&(pIVar19->klass->_1).this_arg.bits, lVar3 != 0)) {
            __this_02 = (UI_CreateGameSelectAddonPopup_o *)
                        pUVar7[2].fields.m_CancellationTokenSource;
            addons = *(Settings_ListSetting_StringSetting__o **)(lVar3 + 0x48);
            pUVar17 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            if (__this_02 != (UI_CreateGameSelectAddonPopup_o *)0x0) {
              UI_CreateGameSelectAddonPopup__SetupSelector
                        (__this_02,addons,pUVar17,(MethodInfo *)0x0);
              if ((pIVar19->klass != (Il2CppClass *)0x0) &&
                 (lVar3 = *(long *)&(pIVar19->klass->_1).this_arg.bits,
                 MStack_d8.return_type = (Il2CppType *)__this_02, lVar3 != 0)) {
                pUVar21 = (__this->fields).DoublePanelLeft;
                pSVar8 = *(Settings_BaseSetting_o **)(lVar3 + 0x28);
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar15 = UI_UIManager__GetLocale
                                    (pSVar18,subCategory,"MapName","","",
                                     (MethodInfo *)0x0);
                UI_ElementFactory__CreateButtonPopupSetting
                          (pUVar21,__this_08,pSVar8,pSVar15,(UI_BasePopup_o *)MStack_d8.name,
                           "",180.0,0.0,(MethodInfo *)0x0);
                pUVar21 = (__this->fields).DoublePanelLeft;
                pSVar15 = UI_UIManager__GetLocale
                                    (pSVar18,subCategory,"MapCategory","","",
                                     (MethodInfo *)0x0);
                if (((pIVar19->klass != (Il2CppClass *)0x0) &&
                    (lVar3 = *(long *)&(pIVar19->klass->_1).this_arg.bits, lVar3 != 0)) &&
                   (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
                  pSVar15 = System_String__Concat
                                      (pSVar15,": ",*(System_String_o **)(lVar3 + 0x18),
                                       (MethodInfo *)0x0);
                  UI_ElementFactory__CreateDefaultLabel
                            (pUVar21,__this_08,pSVar15,0,3,(MethodInfo *)0x0);
                  pMVar9 = (__this_09->fields).Options;
                  if (pMVar9 != (Map_MapScriptOptions_o *)0x0) {
                    UI_ElementFactory__CreateDefaultLabel
                              ((__this->fields).DoublePanelLeft,__this_08,
                               (pMVar9->fields).Description,0,3,(MethodInfo *)0x0);
                    if ((pIVar19->klass != (Il2CppClass *)0x0) &&
                       (lVar3 = *(long *)&(pIVar19->klass->_1).this_arg.bits, lVar3 != 0)) {
                      pUVar21 = (__this->fields).DoublePanelRight;
                      pSVar8 = *(Settings_BaseSetting_o **)(lVar3 + 0x30);
                      pSVar15 = UI_UIManager__GetLocale
                                          (pSVar18,subCategory,"GameMode","",
                                           "",(MethodInfo *)0x0);
                      UI_ElementFactory__CreateButtonPopupSetting
                                (pUVar21,__this_08,pSVar8,pSVar15,(UI_BasePopup_o *)MStack_d8.klass,
                                 "",180.0,0.0,(MethodInfo *)0x0);
                      if (pIVar19->klass != (Il2CppClass *)0x0) {
                        pUVar21 = (__this->fields).DoublePanelRight;
                        pSVar8 = (pIVar19->klass->_1).generic_class;
                        pSVar15 = UI_UIManager__GetLocale
                                            (pSVar18,subCategory,"Weather","",
                                             "",(MethodInfo *)0x0);
                        lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
                        if ((lVar3 != 0) &&
                           (__this_03 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),
                           __this_03 != (Settings_SetSettingsContainer_T__o *)0x0)) {
                          pSVar16 = Settings_SetSettingsContainer<object>__GetSetNames
                                              (__this_03,MethodInfo_String___GetSetNames);
                          uVar27 = 0;
                          pIVar28 = (Il2CppObject *)0x0;
                          UI_ElementFactory__CreateDropdownSetting
                                    (pUVar21,__this_08,pSVar8,pSVar15,pSVar16,"",180.0,
                                     40.0,300.0,(System_Nullable_float__o)0x0,
                                     (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                          if ((pIVar19->klass != (Il2CppClass *)0x0) &&
                             (lVar3 = *(long *)&(pIVar19->klass->_1).this_arg.bits, lVar3 != 0)) {
                            pUVar21 = (__this->fields).DoublePanelRight;
                            pSVar8 = *(Settings_BaseSetting_o **)(lVar3 + 0x40);
                            pSVar15 = UI_UIManager__GetLocale
                                                (pSVar18,subCategory,"Difficulty","",
                                                 "",(MethodInfo *)0x0);
                            pSVar16 = UI_UIManager__GetLocaleArray
                                                (pSVar18,subCategory,"DifficultyOptions","",
                                                 (MethodInfo *)0x0);
                            UI_ElementFactory__CreateToggleGroupSetting
                                      (pUVar21,__this_08,pSVar8,pSVar15,pSVar16,"",30.0,
                                       30.0,(MethodInfo *)0x0);
                            pIVar6 = *(Il2CppClass **)MStack_d8.parameters;
                            if (pIVar6 != (Il2CppClass *)0x0) {
                              pvVar10 = (pIVar6->_1).image;
                              bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
                              if ((*(byte *)((long)pvVar10 + 0x130) < bVar1) ||
                                 (*(Il2CppClass **)
                                   (*(long *)((long)pvVar10 + 200) + -8 + (ulong)bVar1 * 8) !=
                                  TypeInfo_CreateGamePopup)) goto LAB_04065a5b;
                              if ((*(char *)&(pIVar6->_1).interfaceOffsets != '\0') &&
                                 (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 1)) {
                                if ((pIVar19->klass == (Il2CppClass *)0x0) ||
                                   (lVar3 = *(long *)&(pIVar19->klass->_1).this_arg.bits, lVar3 == 0
                                   )) goto LAB_04065b98;
                                pUVar21 = (__this->fields).DoublePanelRight;
                                pSVar8 = *(Settings_BaseSetting_o **)(lVar3 + 0x50);
                                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                  il2cpp_init_class();
                                }
                                pSVar15 = UI_UIManager__GetLocale
                                                    (pSVar18,subCategory,"RoomName","",
                                                     "",(MethodInfo *)0x0);
                                UI_ElementFactory__CreateInputSetting
                                          (pUVar21,__this_08,pSVar8,pSVar15,"",200.0,40.0,
                                           0,(UnityEngine_Events_UnityAction_o *)0x0,
                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                           (System_Func_string__bool__o *)0x0,
                                           (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                if ((pIVar19->klass == (Il2CppClass *)0x0) ||
                                   (lVar3 = *(long *)&(pIVar19->klass->_1).this_arg.bits, lVar3 == 0
                                   )) goto LAB_04065b98;
                                pUVar21 = (__this->fields).DoublePanelRight;
                                pSVar8 = *(Settings_BaseSetting_o **)(lVar3 + 0x60);
                                pSVar18 = UI_UIManager__GetLocale
                                                    (pSVar18,subCategory,"MaxPlayers","",
                                                     "",(MethodInfo *)0x0);
                                UI_ElementFactory__CreateInputSetting
                                          (pUVar21,__this_08,pSVar8,pSVar18,"",200.0,40.0,
                                           0,(UnityEngine_Events_UnityAction_o *)0x0,
                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                           (System_Func_string__bool__o *)0x0,
                                           (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                if ((pIVar19->klass == (Il2CppClass *)0x0) ||
                                   (lVar3 = *(long *)&(pIVar19->klass->_1).this_arg.bits, lVar3 == 0
                                   )) goto LAB_04065b98;
                                pUVar21 = (__this->fields).DoublePanelRight;
                                pSVar8 = *(Settings_BaseSetting_o **)(lVar3 + 0x58);
                                pSVar18 = UI_UIManager__GetLocaleCommon
                                                    ("Password",(MethodInfo *)0x0);
                                pIVar28 = (Il2CppObject *)0x0;
                                uVar27 = 0;
                                UI_ElementFactory__CreateInputSetting
                                          (pUVar21,__this_08,pSVar8,pSVar18,"",200.0,40.0,
                                           0,(UnityEngine_Events_UnityAction_o *)0x0,
                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                           (System_Func_string__bool__o *)0x0,
                                           (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                              }
                              UI_BasePanel__CreateHorizontalDivider
                                        ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelLeft,
                                         1.0,(MethodInfo *)0x0);
                              pUVar21 = (__this->fields).DoublePanelLeft;
                              if (*(int *)((long)&TypeInfo_CreateGameGeneralPanel[2].parameters + 4) == 0) {
                                il2cpp_init_class();
                              }
                              uVar26 = 0;
                              UI_ElementFactory__CreateButtonPopupSetting
                                        (pUVar21,__this_08,
                                         *(Settings_BaseSetting_o **)
                                          TypeInfo_CreateGameGeneralPanel[2].virtualMethodPointer,"Addons",
                                         (UI_BasePopup_o *)MStack_d8.return_type,"",180.0,
                                         0.0,(MethodInfo *)0x0);
                              if ((((pIVar19->klass != (Il2CppClass *)0x0) &&
                                   (lVar3 = *(long *)&(pIVar19->klass->_1).this_arg.bits, lVar3 != 0
                                   )) && (lVar3 = *(long *)(lVar3 + 0x48), lVar3 != 0)) &&
                                 (__this_04 = *(System_Collections_Generic_List_object__o **)
                                               (lVar3 + 0x18),
                                 __this_04 != (System_Collections_Generic_List_object__o *)0x0)) {
                                if ((__this_04->fields)._size == 0) {
                                  UI_ElementFactory__CreateDefaultLabel
                                            ((__this->fields).DoublePanelLeft,__this_08,"No addons selected."
                                             ,0,3,(MethodInfo *)0x0);
                                }
                                else {
                                  System_Collections_Generic_List<object>__GetEnumerator
                                            ((System_Collections_Generic_List_Enumerator_T__o *)
                                             auStack_48,__this_04,MethodInfo_List_1_T__Enumerator_Settings_StringSetting__Get);
                                  MStack_d8.invoker_method = (InvokerMethod)pIStack_38;
                                  MStack_d8.methodPointer = (Il2CppMethodPointer)auStack_48._0_8_;
                                  MStack_d8.virtualMethodPointer =
                                       (Il2CppMethodPointer)auStack_48._8_8_;
                                  while (__this_05.fields._index = (int)uVar27,
                                        __this_05.fields._version = (int)((ulong)uVar27 >> 0x20),
                                        __this_05.fields._list =
                                             (System_Collections_Generic_List_T__o *)uVar26,
                                        __this_05.fields._current = pIVar28,
                                        bVar13 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                                           (__this_05,&MStack_d8),
                                        pIVar12 = MStack_d8.invoker_method, (char)bVar13 != '\0') {
                                    pIVar19 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass3_1);
                                    System_Object___ctor(pIVar19,(MethodInfo *)0x0);
                                    if (pIVar19 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      il2cpp_raise_exception();
                                    }
                                    pIVar19[1].monitor = __this_07;
                                    il2cpp_runtime_glue(&pIVar19[1].monitor);
                                    if ((Il2CppObject *)pIVar12 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      il2cpp_raise_exception();
                                    }
                                    pIVar19[1].klass =
                                         ((Il2CppObject *)((long)pIVar12 + 0x10))->monitor;
                                    il2cpp_runtime_glue(pIVar19 + 1);
                                    pUVar20 = UI_ElementFactory__CreateHorizontalGroup
                                                        ((__this->fields).DoublePanelLeft,10.0,3,
                                                         (MethodInfo *)0x0);
                                    if (pUVar20 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      il2cpp_raise_exception();
                                    }
                                    pIVar28 = UnityEngine_GameObject__GetComponent<object>
                                                        (pUVar20,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                                    if (pIVar28 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      il2cpp_raise_exception();
                                    }
                                    (*pIVar28->klass->vtable[0x24].methodPtr)
                                              (0x435c0000,pIVar28,
                                               pIVar28->klass->vtable[0x24].method);
                                    (*pIVar28->klass->vtable[0x20].methodPtr)(0x435c0000,pIVar28);
                                    pUVar21 = UnityEngine_GameObject__get_transform
                                                        (pUVar20,(MethodInfo *)0x0);
                                    pUVar22 = UI_ElementFactory__CreateHorizontalGroup
                                                        (pUVar21,0.0,3,(MethodInfo *)0x0);
                                    if (pUVar22 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      il2cpp_raise_exception();
                                    }
                                    pIVar28 = UnityEngine_GameObject__GetComponent<object>
                                                        (pUVar22,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                                    if (pIVar28 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      il2cpp_raise_exception();
                                    }
                                    (*pIVar28->klass->vtable[0x24].methodPtr)
                                              (0x43160000,pIVar28,
                                               pIVar28->klass->vtable[0x24].method);
                                    (*pIVar28->klass->vtable[0x20].methodPtr)
                                              (0x43160000,pIVar28,
                                               pIVar28->klass->vtable[0x20].method);
                                    (*pIVar28->klass->vtable[0x28].methodPtr)
                                              (0,pIVar28,pIVar28->klass->vtable[0x28].method);
                                    UnityEngine_GameObject__AddComponent<object>
                                              (pUVar22,MethodInfo_RectMask2D_AddComponent_RectMask2D);
                                    pUVar21 = UnityEngine_GameObject__get_transform
                                                        (pUVar22,(MethodInfo *)0x0);
                                    pUVar22 = UI_ElementFactory__CreateDefaultLabel
                                                        (pUVar21,__this_08,
                                                         (System_String_o *)pIVar19[1].klass,0,3,
                                                         (MethodInfo *)0x0);
                                    if (pUVar22 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      il2cpp_raise_exception();
                                    }
                                    __this_11 = (UnityEngine_UI_Text_o *)
                                                UnityEngine_GameObject__GetComponent<object>
                                                          (pUVar22,MethodInfo_Text_GetComponent_Text);
                                    if (__this_11 == (UnityEngine_UI_Text_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      il2cpp_raise_exception();
                                    }
                                    UnityEngine_UI_Text__set_horizontalOverflow
                                              (__this_11,1,(MethodInfo *)0x0);
                                    UnityEngine_UI_Text__set_verticalOverflow
                                              (__this_11,0,(MethodInfo *)0x0);
                                    pUVar23 = (UnityEngine_Object_o *)
                                              UnityEngine_GameObject__GetComponent<object>
                                                        (pUVar22,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                      il2cpp_init_class();
                                    }
                                    bVar13 = UnityEngine_Object__op_Inequality
                                                       (pUVar23,(UnityEngine_Object_o *)0x0,
                                                        (MethodInfo *)0x0);
                                    if ((char)bVar13 != '\0') {
                                      if (pUVar23 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        il2cpp_raise_exception();
                                      }
                                      (*(code *)pUVar23->klass[2]._2.typeHierarchy)(0,pUVar23);
                                    }
                                    pUVar21 = UnityEngine_GameObject__get_transform
                                                        (pUVar20,(MethodInfo *)0x0);
                                    pUVar17 = (UnityEngine_Events_UnityAction_o *)
                                              il2cpp_runtime_glue(TypeInfo_UnityAction);
                                    UnityEngine_Events_UnityAction___ctor();
                                    pUVar20 = UI_ElementFactory__CreateIconButton
                                                        (pUVar21,__this_08,"Icons/Navigation/TrashIcon",28.0,28.0,
                                                         pUVar17,(MethodInfo *)0x0);
                                    if (pUVar20 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      il2cpp_raise_exception();
                                    }
                                    __this_12 = (UnityEngine_UI_Selectable_o *)
                                                UnityEngine_GameObject__GetComponent<object>
                                                          (pUVar20,MethodInfo_Button_GetComponent_Button);
                                    if (__this_12 == (UnityEngine_UI_Selectable_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      il2cpp_raise_exception();
                                    }
                                    uVar11._0_4_ = (__this_12->fields).m_Colors.fields.
                                                   m_ColorMultiplier;
                                    uVar11._4_4_ = (__this_12->fields).m_Colors.fields.
                                                   m_FadeDuration;
                                    if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
                                      il2cpp_init_class();
                                    }
                                    MStack_d8.rgctx_data = (Il2CppRGCTXData *)0x3e4ccccd3f800000;
                                    MStack_d8.field8_0x40.genericMethod = (void *)0x3f8000003e4ccccd
                                    ;
                                    MStack_d8.token = 0x3f800000;
                                    MStack_d8.flags = 0x999a;
                                    MStack_d8.iflags = 0x3e99;
                                    MStack_d8.slot = 0x999a;
                                    MStack_d8.parameters_count = 0x99;
                                    MStack_d8.bitflags = '>';
                                    MStack_d8._84_4_ = 0x3f800000;
                                    uStack_80 = 0x3dcccccd3f59999a;
                                    uStack_78 = 0x3f8000003dcccccd;
                                    uStack_70 = 0x3e99999a3f800000;
                                    uStack_68 = 0x3f8000003e99999a;
                                    uStack_60 = 0x3dcccccd3f000000;
                                    uStack_58 = 0x3f4ccccd3dcccccd;
                                    pIVar28 = (Il2CppObject *)0x3e99999a3f800000;
                                    uVar26 = 0x3e4ccccd3f800000;
                                    uVar27 = 0x3f8000003e4ccccd;
                                    value.fields.m_NormalColor.fields.b = 0.2;
                                    value.fields.m_NormalColor.fields.a = 1.0;
                                    value.fields.m_NormalColor.fields.r = 1.0;
                                    value.fields.m_NormalColor.fields.g = 0.2;
                                    value.fields.m_HighlightedColor.fields.r = 1.0;
                                    value.fields.m_HighlightedColor.fields.g = 0.3;
                                    value.fields.m_HighlightedColor.fields.b = 0.3;
                                    value.fields.m_HighlightedColor.fields.a = 1.0;
                                    value.fields.m_PressedColor.fields.r = 0.85;
                                    value.fields.m_PressedColor.fields.g = 0.1;
                                    value.fields.m_PressedColor.fields.b = 0.1;
                                    value.fields.m_PressedColor.fields.a = 1.0;
                                    value.fields.m_SelectedColor.fields.r = 1.0;
                                    value.fields.m_SelectedColor.fields.g = 0.3;
                                    value.fields.m_SelectedColor.fields.b = 0.3;
                                    value.fields.m_SelectedColor.fields.a = 1.0;
                                    value.fields.m_DisabledColor.fields.r = 0.5;
                                    value.fields.m_DisabledColor.fields.g = 0.1;
                                    value.fields.m_DisabledColor.fields.b = 0.1;
                                    value.fields.m_DisabledColor.fields.a = 0.8;
                                    value.fields.m_ColorMultiplier = (float)(undefined4)uVar11;
                                    value.fields.m_FadeDuration = (float)uVar11._4_4_;
                                    uStack_50 = uVar11;
                                    UnityEngine_UI_Selectable__set_colors
                                              (__this_12,value,(MethodInfo *)0x0);
                                    pUVar23 = (UnityEngine_Object_o *)
                                              UnityEngine_GameObject__GetComponent<object>
                                                        (pUVar20,MethodInfo_RawImage_GetComponent_RawImage);
                                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                      il2cpp_init_class();
                                    }
                                    bVar13 = UnityEngine_Object__op_Inequality
                                                       (pUVar23,(UnityEngine_Object_o *)0x0,
                                                        (MethodInfo *)0x0);
                                    if ((char)bVar13 != '\0') {
                                      if (pUVar23 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        il2cpp_raise_exception();
                                      }
                                      (**(code **)&pUVar23->klass[1]._2.naturalAligment)
                                                (0x3f800000,0x3f800000,pUVar23,
                                                 pUVar23->klass[1].vtable._0_Equals.methodPtr);
                                    }
                                  }
                                  __this_06.fields._index = (int)uVar27;
                                  __this_06.fields._version = (int)((ulong)uVar27 >> 0x20);
                                  __this_06.fields._list =
                                       (System_Collections_Generic_List_T__o *)uVar26;
                                  __this_06.fields._current = pIVar28;
                                  System_Collections_Generic_List_Enumerator<object>__Dispose
                                            (__this_06,(MethodInfo_3185E10 *)&MStack_d8);
                                }
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
LAB_04065b98:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameGeneralPanel$$RemoveAddon
// il2cpp: void UI_CreateGameGeneralPanel__RemoveAddon (Settings_ListSetting_StringSetting__o* addons, System_String_o* addonName, const MethodInfo* method);
// 0x4065ee0

void UI_CreateGameGeneralPanel__RemoveAddon
               (Settings_ListSetting_StringSetting__o *addons,System_String_o *addonName,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  
  if (DAT_05704488 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_RemoveAll);
    il2cpp_init_method_metadata(&TypeInfo_Predicate_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_StringSetting__get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__RemoveAddon_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass4_0);
    DAT_05704488 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass4_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)addonName;
    il2cpp_runtime_glue(__this_00 + 1,addonName);
    if (addons != (Settings_ListSetting_StringSetting__o *)0x0) {
      __this = (System_Collections_Generic_List_object__o *)(addons->fields)._value;
      match = (System_Predicate_T__o *)il2cpp_runtime_glue(TypeInfo_Predicate_StringSetting);
      System_Predicate<object>___ctor();
      if (__this != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__RemoveAll(__this,match,MethodInfo_Int32_RemoveAll);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameGeneralPanel$$SetDefaultMisc
// il2cpp: void UI_CreateGameGeneralPanel__SetDefaultMisc (const MethodInfo* method);
// 0x4065cb0

void UI_CreateGameGeneralPanel__SetDefaultMisc(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704489 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704489 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x58), lVar1 != 0)) &&
     (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x28) != (Settings_TypedSetting_bool__o *)0x0)) {
    Settings_TypedSetting<bool>__set_Value
              (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x28),0,MethodInfo_Void_set_Value);
    if (*(Settings_TypedSetting_float__o **)(lVar1 + 0x30) != (Settings_TypedSetting_float__o *)0x0)
    {
      Settings_TypedSetting<float>__set_Value
                (*(Settings_TypedSetting_float__o **)(lVar1 + 0x30),5.0,MethodInfo_Void_set_Value);
      if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x48) != (Settings_TypedSetting_bool__o *)0x0)
      {
        Settings_TypedSetting<bool>__set_Value
                  (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x48),0,MethodInfo_Void_set_Value);
        if (*(Settings_TypedSetting_int__o **)(lVar1 + 0x20) != (Settings_TypedSetting_int__o *)0x0)
        {
          Settings_TypedSetting<int>__set_Value
                    (*(Settings_TypedSetting_int__o **)(lVar1 + 0x20),0,MethodInfo_Void_set_Value);
          if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x58) !=
              (Settings_TypedSetting_bool__o *)0x0) {
            Settings_TypedSetting<bool>__set_Value
                      (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x58),1,MethodInfo_Void_set_Value);
            if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x60) !=
                (Settings_TypedSetting_bool__o *)0x0) {
              Settings_TypedSetting<bool>__set_Value
                        (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x60),1,MethodInfo_Void_set_Value);
              if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x68) !=
                  (Settings_TypedSetting_bool__o *)0x0) {
                Settings_TypedSetting<bool>__set_Value
                          (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x68),1,MethodInfo_Void_set_Value);
                if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x70) !=
                    (Settings_TypedSetting_bool__o *)0x0) {
                  Settings_TypedSetting<bool>__set_Value
                            (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x70),1,MethodInfo_Void_set_Value);
                  if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x78) !=
                      (Settings_TypedSetting_bool__o *)0x0) {
                    Settings_TypedSetting<bool>__set_Value
                              (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x78),1,MethodInfo_Void_set_Value);
                    if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x80) !=
                        (Settings_TypedSetting_bool__o *)0x0) {
                      Settings_TypedSetting<bool>__set_Value
                                (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x80),1,MethodInfo_Void_set_Value);
                      if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x88) !=
                          (Settings_TypedSetting_bool__o *)0x0) {
                        Settings_TypedSetting<bool>__set_Value
                                  (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x88),0,MethodInfo_Void_set_Value)
                        ;
                        if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x90) !=
                            (Settings_TypedSetting_bool__o *)0x0) {
                          Settings_TypedSetting<bool>__set_Value
                                    (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x90),0,
                                     MethodInfo_Void_set_Value);
                          if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x98) !=
                              (Settings_TypedSetting_bool__o *)0x0) {
                            Settings_TypedSetting<bool>__set_Value
                                      (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x98),0,
                                       MethodInfo_Void_set_Value);
                            if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x50) !=
                                (Settings_TypedSetting_bool__o *)0x0) {
                              Settings_TypedSetting<bool>__set_Value
                                        (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x50),0,
                                         MethodInfo_Void_set_Value);
                              if (*(Settings_TypedSetting_bool__o **)(lVar1 + 200) !=
                                  (Settings_TypedSetting_bool__o *)0x0) {
                                Settings_TypedSetting<bool>__set_Value
                                          (*(Settings_TypedSetting_bool__o **)(lVar1 + 200),0,
                                           MethodInfo_Void_set_Value);
                                if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0xc0) !=
                                    (Settings_TypedSetting_bool__o *)0x0) {
                                  Settings_TypedSetting<bool>__set_Value
                                            (*(Settings_TypedSetting_bool__o **)(lVar1 + 0xc0),0,
                                             MethodInfo_Void_set_Value);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameGeneralPanel$$.ctor
// il2cpp: void UI_CreateGameGeneralPanel___ctor (UI_CreateGameGeneralPanel_o* __this, const MethodInfo* method);
// 0x4065fe0

void UI_CreateGameGeneralPanel___ctor(UI_CreateGameGeneralPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameGeneralPanel$$.cctor
// il2cpp: void UI_CreateGameGeneralPanel___cctor (const MethodInfo* method);
// 0x4065ff0

void UI_CreateGameGeneralPanel___cctor(MethodInfo *method)

{
  Settings_StringSetting_o *__this;
  
  if (DAT_0570448a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CreateGameGeneralPanel);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&"Add Addon");
    DAT_0570448a = '\x01';
  }
  __this = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(__this,"Add Addon",0x7fffffff,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_CreateGameGeneralPanel + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CreateGameGeneralPanel + 0xb8),__this);
  return;
}


