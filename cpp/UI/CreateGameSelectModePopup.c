// Type: UI.CreateGameSelectModePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CreateGameSelectModePopup.cs
// Prior real C# source: none
// --------------------------------

// UI.CreateGameSelectModePopup$$SetupSelector
// il2cpp: void UI_CreateGameSelectModePopup__SetupSelector (UI_CreateGameSelectModePopup_o* __this, Settings_StringSetting_o* setting, UnityEngine_Events_UnityAction_o* onModeSelected, const MethodInfo* method);
// 0x43780a0

void UI_CreateGameSelectModePopup__SetupSelector
               (UI_CreateGameSelectModePopup_o *__this,Settings_StringSetting_o *setting,
               UnityEngine_Events_UnityAction_o *onModeSelected,MethodInfo *method)

{
  (__this->fields)._setting = setting;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._setting);
  (__this->fields)._onModeSelected = onModeSelected;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._onModeSelected,onModeSelected);
  return;
}


// UI.CreateGameSelectModePopup$$Show
// il2cpp: void UI_CreateGameSelectModePopup__Show (UI_CreateGameSelectModePopup_o* __this, const MethodInfo* method);
// 0x437fd40

void UI_CreateGameSelectModePopup__Show(UI_CreateGameSelectModePopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  long lVar2;
  System_String_Fields __this_00;
  UI_SelectListPopup_ItemCategory_array *pUVar3;
  char cVar4;
  uint uVar5;
  bool_conflict bVar6;
  Map_MapScript_o *__this_01;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_String_array *category;
  System_Collections_Generic_List_string__o *items;
  ulong uVar9;
  System_String_array *pSVar10;
  System_Collections_Generic_List_SelectListPopup_ItemCategory__o *categories;
  UI_SelectListPopup_ItemCategory_o *pUVar11;
  UnityEngine_Events_UnityAction_o *onLoad;
  undefined8 *puVar12;
  int iVar13;
  MethodInfo_362C220 *method_00;
  System_Collections_Generic_List_string__o *__this_02;
  System_Collections_Generic_List_string__o *unaff_R13;
  ulong uVar14;
  undefined1 auVar15 [12];
  
  if (g_data_057ae22d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Show_b__3_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ItemCategory);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_SelectListPopup_ItemCategory);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ItemCategory);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScript);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"GameMode");
    il2cpp_runtime_helper_023445d0(&"CreateGamePopup");
    il2cpp_runtime_helper_023445d0(&"Builtin");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae22d = '\x01';
  }
  if ((__this->fields)._setting == (Settings_StringSetting_o *)0x0) {
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    return;
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if ((((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x38), lVar2 != 0)) && (*(long *)(lVar2 + 0x20) != 0)) &&
     (*(long *)(lVar2 + 0x28) != 0)) {
    category = *(System_String_array **)(*(long *)(lVar2 + 0x20) + 0x18);
    items = *(System_Collections_Generic_List_string__o **)(*(long *)(lVar2 + 0x28) + 0x18);
    __this_01 = (Map_MapScript_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScript);
    Map_MapScript___ctor(__this_01,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = Map_BuiltinLevels__LoadMap
                       ((System_String_o *)category,(System_String_o *)items,(MethodInfo *)0x0);
    pSVar8 = (System_String_o *)0x0;
    if (__this_01 == (Map_MapScript_o *)0x0) goto label_0438042b;
    (*(__this_01->klass->vtable)._5_Deserialize.methodPtr)
              (__this_01,pSVar7,(__this_01->klass->vtable)._5_Deserialize.method);
    __this_00 = (System_String_Fields)(__this_01->fields).Logic;
    while (__this_00 != (System_String_Fields)0x0) {
      pSVar8 = System_String__Trim((System_String_o *)__this_00,(MethodInfo *)0x0);
      uVar5 = System_String__op_Inequality
                        (pSVar8,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      category = Map_BuiltinLevels__GetGameModes
                           ((System_String_o *)category,(System_String_o *)items,uVar5 & 0xff,
                            (MethodInfo *)0x0);
      pSVar8 = (System_String_o *)&TypeInfo_List_string;
      unaff_R13 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)unaff_R13,MethodInfo_List_1_System_String);
      items = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)items,MethodInfo_List_1_System_String);
      if (category == (System_String_array *)0x0) break;
      iVar13 = (int)category->max_length;
      uVar9 = category->max_length & 0xffffffff;
      if (items == (System_Collections_Generic_List_string__o *)0x0) {
        if (iVar13 < 1) goto label_043801f5;
        uVar14 = 0;
        if (uVar9 != 0) {
          do {
            pSVar8 = category->m_Items[uVar14];
            if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar6 = Map_BuiltinLevels__IsLogicBuiltin(pSVar8,(MethodInfo *)0x0);
            lVar2 = MethodInfo_Void_Add;
            if (((char)bVar6 == '\0') || (unaff_R13 == (System_Collections_Generic_List_string__o *)0x0))
            goto label_043804a6;
            piVar1 = &(unaff_R13->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar10 = (unaff_R13->fields)._items;
            if (pSVar10 == (System_String_array *)0x0) goto label_043804a6;
            uVar5 = (unaff_R13->fields)._size;
            if (uVar5 < (uint)pSVar10->max_length) {
              (unaff_R13->fields)._size = uVar5 + 1;
              pSVar10->m_Items[(int)uVar5] = pSVar8;
              il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar5);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)unaff_R13,(Il2CppObject *)pSVar8,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
            uVar14 = uVar14 + 1;
            uVar5 = (uint)category->max_length;
            if ((long)(int)uVar5 <= (long)uVar14) goto label_043801f5;
          } while (uVar14 < uVar5);
        }
      }
      else {
        if (iVar13 < 1) {
label_043801f5:
          categories = (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)
                       il2cpp_runtime_helper_023052d0(TypeInfo_List_ItemCategory);
          System_Collections_Generic_List_object____ctor
                    ((System_Collections_Generic_List_object__o *)categories,MethodInfo_List_1_UI_SelectListPopup_ItemCategory);
          if (unaff_R13 == (System_Collections_Generic_List_string__o *)0x0) break;
          if (0 < (unaff_R13->fields)._size) {
            pUVar11 = (UI_SelectListPopup_ItemCategory_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ItemCategory);
            UI_SelectListPopup_ItemCategory___ctor(pUVar11,"Builtin",unaff_R13,(MethodInfo *)0x0);
            lVar2 = MethodInfo_Void_Add;
            if (categories == (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0) break;
            piVar1 = &(categories->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar3 = (categories->fields)._items;
            if (pUVar3 == (UI_SelectListPopup_ItemCategory_array *)0x0) break;
            uVar5 = (categories->fields)._size;
            if (uVar5 < (uint)pUVar3->max_length) {
              (categories->fields)._size = uVar5 + 1;
              pUVar3->m_Items[(int)uVar5] = pUVar11;
              il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar5,pUVar11);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)categories,(Il2CppObject *)pUVar11,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
          }
          if (items == (System_Collections_Generic_List_string__o *)0x0) break;
          if (0 < (items->fields)._size) {
            pUVar11 = (UI_SelectListPopup_ItemCategory_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ItemCategory);
            UI_SelectListPopup_ItemCategory___ctor(pUVar11,"Custom",items,(MethodInfo *)0x0);
            lVar2 = MethodInfo_Void_Add;
            if (categories == (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0) break;
            piVar1 = &(categories->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar3 = (categories->fields)._items;
            if (pUVar3 == (UI_SelectListPopup_ItemCategory_array *)0x0) break;
            uVar5 = (categories->fields)._size;
            if ((uint)pUVar3->max_length <= uVar5) {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)categories,(Il2CppObject *)pUVar11,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              iVar13 = *(int *)(TypeInfo_UIManager + 0xe4);
              goto joined_r0x04380364;
            }
            (categories->fields)._size = uVar5 + 1;
            pUVar3->m_Items[(int)uVar5] = pUVar11;
            il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar5,pUVar11);
          }
          iVar13 = *(int *)(TypeInfo_UIManager + 0xe4);
joined_r0x04380364:
          if (iVar13 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar8 = UI_UIManager__GetLocale
                             ("CreateGamePopup","General","GameMode","","",
                              (MethodInfo *)0x0);
          onLoad = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          UI_SelectListPopup__ShowLoadCategorized
                    ((UI_SelectListPopup_o *)__this,categories,pSVar8,onLoad,(MethodInfo *)0x0);
          return;
        }
        uVar14 = 0;
        if (uVar9 != 0) {
          do {
            pSVar8 = category->m_Items[uVar14];
            if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar6 = Map_BuiltinLevels__IsLogicBuiltin(pSVar8,(MethodInfo *)0x0);
            lVar2 = MethodInfo_Void_Add;
            if ((char)bVar6 == '\0') {
              piVar1 = &(items->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar10 = (items->fields)._items;
              if (pSVar10 == (System_String_array *)0x0) goto label_043804a6;
              uVar5 = (items->fields)._size;
              if ((uint)pSVar10->max_length <= uVar5) {
                method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
                __this_02 = items;
                goto label_043800f2;
              }
              (items->fields)._size = uVar5 + 1;
label_04380007:
              pSVar10->m_Items[(int)uVar5] = pSVar8;
              il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar5);
            }
            else {
              if (unaff_R13 == (System_Collections_Generic_List_string__o *)0x0) goto label_043804a6;
              piVar1 = &(unaff_R13->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar10 = (unaff_R13->fields)._items;
              if (pSVar10 == (System_String_array *)0x0) goto label_043804a6;
              uVar5 = (unaff_R13->fields)._size;
              if (uVar5 < (uint)pSVar10->max_length) {
                (unaff_R13->fields)._size = uVar5 + 1;
                goto label_04380007;
              }
              method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
              __this_02 = unaff_R13;
label_043800f2:
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)pSVar8,
                         method_00);
            }
            uVar14 = uVar14 + 1;
            uVar5 = (uint)category->max_length;
            if ((long)(int)uVar5 <= (long)uVar14) goto label_043801f5;
          } while (uVar14 < uVar5);
        }
      }
      il2cpp_runtime_helper_022b2ca0();
label_0438042b:
      auVar15 = il2cpp_runtime_helper_022b2c90();
      if (auVar15._8_4_ != 1) {
        _Unwind_Resume(auVar15._0_8_);
      }
      unaff_R13 = (System_Collections_Generic_List_string__o *)__cxa_begin_catch(auVar15._0_8_);
      cVar4 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,(unaff_R13->klass->_1).image);
      if (cVar4 == '\0') goto label_043804ab;
      __cxa_end_catch();
      if (pSVar8 == (System_String_o *)0x0) break;
      pSVar8[2].fields = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080(&pSVar8[2].fields);
      __this_00 = pSVar8[2].fields;
    }
  }
label_043804a6:
  il2cpp_runtime_helper_022b2c90();
label_043804ab:
  puVar12 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar12 = unaff_R13->klass;
  __cxa_throw(puVar12,&PTR_PTR_05215060,0);
}


// UI.CreateGameSelectModePopup$$OnModeLoaded
// il2cpp: void UI_CreateGameSelectModePopup__OnModeLoaded (UI_CreateGameSelectModePopup_o* __this, const MethodInfo* method);
// 0x43804f0

void UI_CreateGameSelectModePopup__OnModeLoaded(UI_CreateGameSelectModePopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *pSVar1;
  Settings_StringSetting_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  System_Collections_Generic_List_string__o *__this_01;
  MethodInfo *method_00;
  UI_CreateGameSelectModePopup_o *__this_02;
  
  __this_02 = __this;
  if (g_data_057ae22e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    __this_02 = (UI_CreateGameSelectModePopup_o *)&MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae22e = '\x01';
  }
  pSVar1 = (__this->fields).FinishSetting;
  if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
     (__this_00 = (__this->fields)._setting, __this_02 = (UI_CreateGameSelectModePopup_o *)0x0,
     __this_00 != (Settings_StringSetting_o *)0x0)) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)(pSVar1->fields)._value,MethodInfo_Void_set_Value);
    pUVar2 = (__this->fields)._onModeSelected;
    if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae153 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject,0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae153 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_UnityEngine_GameObject);
  (__this_02->fields)._itemButtons = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._itemButtons,pSVar3);
  pSVar3 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_UnityEngine_GameObject);
  (__this_02->fields)._categoryButtons = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._categoryButtons,pSVar3);
  pSVar3 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_UnityEngine_GameObject);
  (__this_02->fields)._saveElements = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._saveElements,pSVar3);
  __this_01 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_System_String);
  (__this_02->fields)._items = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._items,__this_01);
  (__this_02->fields)._activeCategoryName = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._activeCategoryName);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)method_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this_02->fields).FinishSetting = (Settings_StringSetting_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).FinishSetting);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this_02,method_00);
  return;
}


// UI.CreateGameSelectModePopup$$.ctor
// il2cpp: void UI_CreateGameSelectModePopup___ctor (UI_CreateGameSelectModePopup_o* __this, const MethodInfo* method);
// 0x4380570

void UI_CreateGameSelectModePopup___ctor(UI_CreateGameSelectModePopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  System_Collections_Generic_List_GameObject__o *pSVar1;
  System_Collections_Generic_List_string__o *__this_00;
  MethodInfo *method_00;
  
  if (g_data_057ae153 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject,0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae153 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._itemButtons = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._itemButtons,pSVar1);
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._categoryButtons = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._categoryButtons,pSVar1);
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._saveElements = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._saveElements,pSVar1);
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  (__this->fields)._items = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._items,__this_00);
  (__this->fields)._activeCategoryName = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields)._activeCategoryName);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)method_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).FinishSetting = (Settings_StringSetting_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).FinishSetting);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


// UI.CreateGameSelectModePopup$$<Show>b__3_0
// il2cpp: void UI_CreateGameSelectModePopup___Show_b__3_0 (UI_CreateGameSelectModePopup_o* __this, const MethodInfo* method);
// 0x4380580

void UI_CreateGameSelectModePopup___Show_b__3_0(UI_CreateGameSelectModePopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Settings_StringSetting_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar2;
  
  if (g_data_057ae22e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae22e = '\x01';
  }
  pSVar1 = (__this->fields).FinishSetting;
  if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
     (__this_00 = (__this->fields)._setting, __this_00 != (Settings_StringSetting_o *)0x0)) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)(pSVar1->fields)._value,MethodInfo_Void_set_Value);
    pUVar2 = (__this->fields)._onModeSelected;
    if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


