// Type: UI.CreateGameSelectModePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CreateGameSelectModePopup.cs
// Prior source: NEW in this update
// --------------------------------

// UI.CreateGameSelectModePopup$$SetupSelector
// il2cpp: void UI_CreateGameSelectModePopup__SetupSelector (UI_CreateGameSelectModePopup_o* __this, Settings_StringSetting_o* setting, UnityEngine_Events_UnityAction_o* onModeSelected, const MethodInfo* method);
// 0x406a920

void UI_CreateGameSelectModePopup__SetupSelector
               (UI_CreateGameSelectModePopup_o *__this,Settings_StringSetting_o *setting,
               UnityEngine_Events_UnityAction_o *onModeSelected,MethodInfo *method)

{
  (__this->fields)._setting = setting;
  il2cpp_runtime_glue(&(__this->fields)._setting);
  (__this->fields)._onModeSelected = onModeSelected;
  il2cpp_runtime_glue(&(__this->fields)._onModeSelected,onModeSelected);
  return;
}


// UI.CreateGameSelectModePopup$$Show
// il2cpp: void UI_CreateGameSelectModePopup__Show (UI_CreateGameSelectModePopup_o* __this, const MethodInfo* method);
// 0x4072330

void UI_CreateGameSelectModePopup__Show(UI_CreateGameSelectModePopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  long lVar2;
  System_String_o *name;
  UI_SelectListPopup_ItemCategory_array *pUVar3;
  uint uVar4;
  bool_conflict bVar5;
  Map_MapScript_o *__this_00;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  System_Collections_Generic_List_string__o *items;
  System_Collections_Generic_List_string__o *items_00;
  ulong uVar8;
  System_String_array *pSVar9;
  System_Collections_Generic_List_SelectListPopup_ItemCategory__o *categories;
  UI_SelectListPopup_ItemCategory_o *pUVar10;
  System_String_o *pSVar11;
  UnityEngine_Events_UnityAction_o *onLoad;
  int iVar12;
  MethodInfo_35A7350 *method_00;
  System_Collections_Generic_List_string__o *__this_01;
  ulong uVar13;
  
  if (DAT_057044b3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&MethodInfo_Void__Show_b__3_0);
    il2cpp_init_method_metadata(&TypeInfo_ItemCategory);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UI_SelectListPopup_ItemCategory);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_List_ItemCategory);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_MapScript);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"Custom");
    il2cpp_init_method_metadata(&"GameMode");
    il2cpp_init_method_metadata(&"CreateGamePopup");
    il2cpp_init_method_metadata(&"Builtin");
    il2cpp_init_method_metadata(&"");
    DAT_057044b3 = '\x01';
  }
  if ((__this->fields)._setting == (Settings_StringSetting_o *)0x0) {
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    return;
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if ((((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x38), lVar2 == 0)) ||
      (*(long *)(lVar2 + 0x20) == 0)) || (*(long *)(lVar2 + 0x28) == 0)) {
LAB_04072a96:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar11 = *(System_String_o **)(*(long *)(lVar2 + 0x20) + 0x18);
  name = *(System_String_o **)(*(long *)(lVar2 + 0x28) + 0x18);
  __this_00 = (Map_MapScript_o *)il2cpp_runtime_glue(TypeInfo_MapScript);
  Map_MapScript___ctor(__this_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar6 = Map_BuiltinLevels__LoadMap(pSVar11,name,(MethodInfo *)0x0);
  if (__this_00 == (Map_MapScript_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(__this_00->klass->vtable)._5_Deserialize.methodPtr)
            (__this_00,pSVar6,(__this_00->klass->vtable)._5_Deserialize.method);
  pSVar6 = (__this_00->fields).Logic;
  if (pSVar6 == (System_String_o *)0x0) goto LAB_04072a96;
  pSVar6 = System_String__Trim(pSVar6,(MethodInfo *)0x0);
  uVar4 = System_String__op_Inequality
                    (pSVar6,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                     (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar7 = Map_BuiltinLevels__GetGameModes(pSVar11,name,uVar4 & 0xff,(MethodInfo *)0x0);
  items = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)items,MethodInfo_List_1_System_String);
  items_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)items_00,MethodInfo_List_1_System_String);
  if (pSVar7 == (System_String_array *)0x0) goto LAB_04072a96;
  iVar12 = (int)pSVar7->max_length;
  uVar8 = pSVar7->max_length & 0xffffffff;
  if (items_00 == (System_Collections_Generic_List_string__o *)0x0) {
    if (0 < iVar12) {
      uVar13 = 0;
      if (uVar8 != 0) {
        do {
          pSVar11 = pSVar7->m_Items[uVar13];
          if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar5 = Map_BuiltinLevels__IsLogicBuiltin(pSVar11,(MethodInfo *)0x0);
          lVar2 = MethodInfo_Void_Add;
          if (((char)bVar5 == '\0') || (items == (System_Collections_Generic_List_string__o *)0x0))
          goto LAB_04072a96;
          piVar1 = &(items->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar9 = (items->fields)._items;
          if (pSVar9 == (System_String_array *)0x0) goto LAB_04072a96;
          uVar4 = (items->fields)._size;
          if (uVar4 < (uint)pSVar9->max_length) {
            (items->fields)._size = uVar4 + 1;
            pSVar9->m_Items[(int)uVar4] = pSVar11;
            il2cpp_runtime_glue(pSVar9->m_Items + (int)uVar4);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)items,(Il2CppObject *)pSVar11,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          uVar13 = uVar13 + 1;
          uVar4 = (uint)pSVar7->max_length;
          if ((long)(int)uVar4 <= (long)uVar13) goto LAB_040727e5;
        } while (uVar13 < uVar4);
      }
      goto LAB_04072a16;
    }
  }
  else if (0 < iVar12) {
    uVar13 = 0;
    if (uVar8 != 0) {
      do {
        pSVar11 = pSVar7->m_Items[uVar13];
        if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar5 = Map_BuiltinLevels__IsLogicBuiltin(pSVar11,(MethodInfo *)0x0);
        lVar2 = MethodInfo_Void_Add;
        if ((char)bVar5 == '\0') {
          piVar1 = &(items_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar9 = (items_00->fields)._items;
          if (pSVar9 == (System_String_array *)0x0) goto LAB_04072a96;
          uVar4 = (items_00->fields)._size;
          if (uVar4 < (uint)pSVar9->max_length) {
            (items_00->fields)._size = uVar4 + 1;
            goto LAB_040725f7;
          }
          method_00 = *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
          __this_01 = items_00;
LAB_040726e2:
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar11,
                     method_00);
        }
        else {
          if (items == (System_Collections_Generic_List_string__o *)0x0) goto LAB_04072a96;
          piVar1 = &(items->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar9 = (items->fields)._items;
          if (pSVar9 == (System_String_array *)0x0) goto LAB_04072a96;
          uVar4 = (items->fields)._size;
          if ((uint)pSVar9->max_length <= uVar4) {
            method_00 = *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
            __this_01 = items;
            goto LAB_040726e2;
          }
          (items->fields)._size = uVar4 + 1;
LAB_040725f7:
          pSVar9->m_Items[(int)uVar4] = pSVar11;
          il2cpp_runtime_glue(pSVar9->m_Items + (int)uVar4);
        }
        uVar13 = uVar13 + 1;
        uVar4 = (uint)pSVar7->max_length;
        if ((long)(int)uVar4 <= (long)uVar13) goto LAB_040727e5;
      } while (uVar13 < uVar4);
    }
LAB_04072a16:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_040727e5:
  categories = (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)
               il2cpp_runtime_glue(TypeInfo_List_ItemCategory);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)categories,MethodInfo_List_1_UI_SelectListPopup_ItemCategory);
  if (items == (System_Collections_Generic_List_string__o *)0x0) goto LAB_04072a96;
  if (0 < (items->fields)._size) {
    pUVar10 = (UI_SelectListPopup_ItemCategory_o *)il2cpp_runtime_glue(TypeInfo_ItemCategory);
    UI_SelectListPopup_ItemCategory___ctor(pUVar10,"Builtin",items,(MethodInfo *)0x0);
    lVar2 = MethodInfo_Void_Add;
    if (categories == (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0)
    goto LAB_04072a96;
    piVar1 = &(categories->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (categories->fields)._items;
    if (pUVar3 == (UI_SelectListPopup_ItemCategory_array *)0x0) goto LAB_04072a96;
    uVar4 = (categories->fields)._size;
    if (uVar4 < (uint)pUVar3->max_length) {
      (categories->fields)._size = uVar4 + 1;
      pUVar3->m_Items[(int)uVar4] = pUVar10;
      il2cpp_runtime_glue(pUVar3->m_Items + (int)uVar4,pUVar10);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)categories,(Il2CppObject *)pUVar10,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  if (items_00 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_04072a96;
  if (0 < (items_00->fields)._size) {
    pUVar10 = (UI_SelectListPopup_ItemCategory_o *)il2cpp_runtime_glue(TypeInfo_ItemCategory);
    UI_SelectListPopup_ItemCategory___ctor(pUVar10,"Custom",items_00,(MethodInfo *)0x0);
    lVar2 = MethodInfo_Void_Add;
    if (categories == (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0)
    goto LAB_04072a96;
    piVar1 = &(categories->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (categories->fields)._items;
    if (pUVar3 == (UI_SelectListPopup_ItemCategory_array *)0x0) goto LAB_04072a96;
    uVar4 = (categories->fields)._size;
    if ((uint)pUVar3->max_length <= uVar4) {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)categories,(Il2CppObject *)pUVar10,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      iVar12 = *(int *)(TypeInfo_UIManager + 0xe4);
      goto joined_r0x04072954;
    }
    (categories->fields)._size = uVar4 + 1;
    pUVar3->m_Items[(int)uVar4] = pUVar10;
    il2cpp_runtime_glue(pUVar3->m_Items + (int)uVar4,pUVar10);
  }
  iVar12 = *(int *)(TypeInfo_UIManager + 0xe4);
joined_r0x04072954:
  if (iVar12 == 0) {
    il2cpp_init_class();
  }
  pSVar11 = UI_UIManager__GetLocale
                      ("CreateGamePopup","General","GameMode","","",
                       (MethodInfo *)0x0);
  onLoad = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_SelectListPopup__ShowLoadCategorized
            ((UI_SelectListPopup_o *)__this,categories,pSVar11,onLoad,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameSelectModePopup$$OnModeLoaded
// il2cpp: void UI_CreateGameSelectModePopup__OnModeLoaded (UI_CreateGameSelectModePopup_o* __this, const MethodInfo* method);
// 0x4072ae0

void UI_CreateGameSelectModePopup__OnModeLoaded
               (UI_CreateGameSelectModePopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Settings_StringSetting_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar2;
  
  if (DAT_057044b4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_057044b4 = '\x01';
  }
  pSVar1 = (__this->fields).FinishSetting;
  if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
     (__this_00 = (__this->fields)._setting, __this_00 != (Settings_StringSetting_o *)0x0)) {
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)(pSVar1->fields)._value,
               MethodInfo_Void_set_Value);
    pUVar2 = (__this->fields)._onModeSelected;
    if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameSelectModePopup$$.ctor
// il2cpp: void UI_CreateGameSelectModePopup___ctor (UI_CreateGameSelectModePopup_o* __this, const MethodInfo* method);
// 0x4072b60

void UI_CreateGameSelectModePopup___ctor(UI_CreateGameSelectModePopup_o *__this,MethodInfo *method)

{
  UI_SelectListPopup___ctor((UI_SelectListPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameSelectModePopup$$<Show>b__3_0
// il2cpp: void UI_CreateGameSelectModePopup___Show_b__3_0 (UI_CreateGameSelectModePopup_o* __this, const MethodInfo* method);
// 0x4072b70

void UI_CreateGameSelectModePopup__<Show>b__3_0
               (UI_CreateGameSelectModePopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Settings_StringSetting_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar2;
  
  if (DAT_057044b4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_057044b4 = '\x01';
  }
  pSVar1 = (__this->fields).FinishSetting;
  if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
     (__this_00 = (__this->fields)._setting, __this_00 != (Settings_StringSetting_o *)0x0)) {
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)(pSVar1->fields)._value,
               MethodInfo_Void_set_Value);
    pUVar2 = (__this->fields)._onModeSelected;
    if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


