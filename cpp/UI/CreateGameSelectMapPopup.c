// Type: UI.CreateGameSelectMapPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CreateGameSelectMapPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CreateGamePopup/CreateGameSelectMapPopup.cs
// --------------------------------

// UI.CreateGameSelectMapPopup.<>c__DisplayClass17_0$$.ctor
// il2cpp: void UI_CreateGameSelectMapPopup___c__DisplayClass17_0___ctor (UI_CreateGameSelectMapPopup___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x437f9e0

void UI_CreateGameSelectMapPopup___c__DisplayClass17_0___ctor
               (UI_CreateGameSelectMapPopup___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameSelectMapPopup.<>c__DisplayClass17_0$$<SetupTopButtons>b__0
// il2cpp: void UI_CreateGameSelectMapPopup___c__DisplayClass17_0___SetupTopButtons_b__0 (UI_CreateGameSelectMapPopup___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x437fd10

void UI_CreateGameSelectMapPopup___c__DisplayClass17_0___SetupTopButtons_b__0
               (UI_CreateGameSelectMapPopup___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  Il2CppMethodPointer vtableDispatch;
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
  UI_SelectListPopup_o *__this_02;
  System_Collections_Generic_List_string__o *__this_03;
  System_Collections_Generic_List_string__o *unaff_R13;
  ulong uVar14;
  undefined1 auVar15 [12];
  
  __this_02 = (UI_SelectListPopup_o *)(__this->fields).__4__this;
  if (__this_02 != (UI_SelectListPopup_o *)0x0) {
    vtableDispatch = (__this_02->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtableDispatch)
              (__this_02,(__this->fields).buttonName,(__this_02->klass->vtable)._28_SetCategoryPanel.method,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
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
  if (__this_02[1].klass == (UI_SelectListPopup_c *)0x0) {
    UI_BasePopup__Show((UI_BasePopup_o *)__this_02,(MethodInfo *)0x0);
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
          UI_SelectListPopup__ShowLoadCategorized(__this_02,categories,pSVar8,onLoad,(MethodInfo *)0x0);
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
                __this_03 = items;
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
              __this_03 = unaff_R13;
label_043800f2:
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)pSVar8,
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


// UI.CreateGameSelectMapPopup$$get_Title
// il2cpp: System_String_o* UI_CreateGameSelectMapPopup__get_Title (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x437f250

System_String_o *
UI_CreateGameSelectMapPopup__get_Title(UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.CreateGameSelectMapPopup$$get_Width
// il2cpp: float UI_CreateGameSelectMapPopup__get_Width (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x437f270

float UI_CreateGameSelectMapPopup__get_Width(UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  return 1095.0;
}


// UI.CreateGameSelectMapPopup$$get_Height
// il2cpp: float UI_CreateGameSelectMapPopup__get_Height (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x437f280

float UI_CreateGameSelectMapPopup__get_Height(UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  return 1000.0;
}


// UI.CreateGameSelectMapPopup$$get_CategoryPanel
// il2cpp: bool UI_CreateGameSelectMapPopup__get_CategoryPanel (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x437f290

bool_conflict
UI_CreateGameSelectMapPopup__get_CategoryPanel(UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CreateGameSelectMapPopup$$get_CategoryButtons
// il2cpp: bool UI_CreateGameSelectMapPopup__get_CategoryButtons (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x437f2a0

bool_conflict
UI_CreateGameSelectMapPopup__get_CategoryButtons(UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CreateGameSelectMapPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_CreateGameSelectMapPopup__get_DefaultCategoryPanel (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x437f2b0

System_String_o *
UI_CreateGameSelectMapPopup__get_DefaultCategoryPanel
          (UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae225 == '\0') {
    il2cpp_runtime_helper_023445d0(&"General");
    g_data_057ae225 = '\x01';
  }
  return "General";
}


// UI.CreateGameSelectMapPopup$$Show
// il2cpp: void UI_CreateGameSelectMapPopup__Show (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x437f2e0

void UI_CreateGameSelectMapPopup__Show(UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  UnityEngine_Transform_o *setting;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Il2CppObject *key;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  UI_ElementStyle_o *pUVar4;
  UnityEngine_Events_UnityAction_o *pUVar5;
  UnityEngine_Events_UnityAction_o *onEndEdit;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  long lVar8;
  UI_HeadedPanel_o *__this_02;
  UI_HeadedPanel_o *__this_03;
  Il2CppObject *value;
  UI_HeadedPanel_o *pUVar9;
  UI_HeadedPanel_o *parent;
  MethodInfo *method_00;
  ulong uVar10;
  MethodInfo *in_stack_ffffffffffffffb0;
  
  if (g_data_057ae226 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae226 = '\x01';
  }
  __this_00 = (__this->fields).SearchSetting;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
               MethodInfo_Void_set_Value);
    pUVar1 = (__this->fields)._searchInput;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pUVar1 = (__this->fields)._searchInput;
      if (pUVar1 == (UI_InputSettingElement_o *)0x0) goto label_0437f3ac;
      (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)();
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
    return;
  }
label_0437f3ac:
  pUVar9 = (UI_HeadedPanel_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae227 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IgnoreScaler_AddComponent_IgnoreScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Search");
    g_data_057ae227 = '\x01';
  }
  UI_HeadedPanel__Setup(pUVar9,(UI_BasePanel_o *)method,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)(*(pUVar9->klass->vtable)._4_get_ThemePanel.methodPtr)(pUVar9);
  pUVar4 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  System_Object___ctor((Il2CppObject *)pUVar4,(MethodInfo *)0x0);
  (pUVar4->fields).FontSize = 0x18;
  (pUVar4->fields).TitleWidth = 70.0;
  (pUVar4->fields).Spacing = 20.0;
  (pUVar4->fields).ThemePanel = pSVar3;
  il2cpp_runtime_helper_022b4080(&(pUVar4->fields).ThemePanel,pSVar3);
  pUVar7 = (pUVar9->fields).BottomBar;
  setting = pUVar9[1].fields.DoublePanelLeft;
  pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  onEndEdit = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  method_00 = "";
  pUVar6 = UI_ElementFactory__CreateInputSetting
                     (pUVar7,pUVar4,(Settings_BaseSetting_o *)setting,"Search",
                      (System_String_o *)"",260.0,40.0,0,pUVar5,onEndEdit,
                      (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                      in_stack_ffffffffffffffb0);
  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
    pUVar7 = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(pUVar6,MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    pUVar9[1].fields.DoublePanelRight = pUVar7;
    il2cpp_runtime_helper_022b4080(&pUVar9[1].fields.DoublePanelRight);
    pUVar7 = (pUVar9->fields).BottomBar;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
    pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    UI_ElementFactory__CreateTextButton(pUVar7,pUVar4,pSVar3,0.0,pUVar5,method_00);
    pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__AddComponent_object_(pUVar6,MethodInfo_IgnoreScaler_AddComponent_IgnoreScaler);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae228 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"Racing Hard");
    il2cpp_runtime_helper_023445d0(&"Mission");
    il2cpp_runtime_helper_023445d0(&"Cage Fight");
    il2cpp_runtime_helper_023445d0(&"PVP");
    il2cpp_runtime_helper_023445d0(&"Racing Basic");
    g_data_057ae228 = '\x01';
  }
  pUVar9 = TypeInfo_string;
  lVar8 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,7);
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) != 0) {
      pUVar9 = (UI_HeadedPanel_o *)(lVar8 + 0x20);
      *(undefined8 *)(lVar8 + 0x20) = "General";
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar8 + 0x18)) {
        pUVar9 = (UI_HeadedPanel_o *)(lVar8 + 0x28);
        *(undefined8 *)(lVar8 + 0x28) = "Mission";
        il2cpp_runtime_helper_022b4080();
        if (2 < *(uint *)(lVar8 + 0x18)) {
          pUVar9 = (UI_HeadedPanel_o *)(lVar8 + 0x30);
          *(undefined8 *)(lVar8 + 0x30) = "PVP";
          il2cpp_runtime_helper_022b4080();
          if (3 < *(uint *)(lVar8 + 0x18)) {
            pUVar9 = (UI_HeadedPanel_o *)(lVar8 + 0x38);
            *(undefined8 *)(lVar8 + 0x38) = "Cage Fight";
            il2cpp_runtime_helper_022b4080();
            if (4 < *(uint *)(lVar8 + 0x18)) {
              pUVar9 = (UI_HeadedPanel_o *)(lVar8 + 0x40);
              *(undefined8 *)(lVar8 + 0x40) = "Racing Basic";
              il2cpp_runtime_helper_022b4080();
              if (5 < *(uint *)(lVar8 + 0x18)) {
                pUVar9 = (UI_HeadedPanel_o *)(lVar8 + 0x48);
                *(undefined8 *)(lVar8 + 0x48) = "Racing Hard";
                il2cpp_runtime_helper_022b4080();
                if (6 < *(uint *)(lVar8 + 0x18)) {
                  *(undefined8 *)(lVar8 + 0x50) = "Custom";
                  il2cpp_runtime_helper_022b4080(lVar8 + 0x50);
                  return;
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae229 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    g_data_057ae229 = '\x01';
  }
  pSVar3 = (System_String_o *)(*(pUVar9->klass->vtable)._4_get_ThemePanel.methodPtr)(pUVar9);
  pUVar4 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  System_Object___ctor((Il2CppObject *)pUVar4,(MethodInfo *)0x0);
  (pUVar4->fields).FontSize = 0x18;
  (pUVar4->fields).TitleWidth = 120.0;
  (pUVar4->fields).Spacing = 20.0;
  (pUVar4->fields).ThemePanel = pSVar3;
  il2cpp_runtime_helper_022b4080(&(pUVar4->fields).ThemePanel,pSVar3);
  parent = pUVar9;
  lVar8 = (**(code **)&pUVar9->klass[1]._2.cctor_finished)();
  if (lVar8 != 0) {
    if (0 < *(int *)(lVar8 + 0x18)) {
      uVar10 = 0;
      do {
        __this_02 = (UI_HeadedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
        parent = __this_02;
        System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
        if (__this_02 == (UI_HeadedPanel_o *)0x0) goto label_0437f9d4;
        parent = (UI_HeadedPanel_o *)&(__this_02->fields).m_CancellationTokenSource;
        (__this_02->fields).m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)pUVar9;
        il2cpp_runtime_helper_022b4080();
        if (*(uint *)(lVar8 + 0x18) <= uVar10) goto label_0437f9d9;
        (__this_02->fields).m_CachedPtr = *(intptr_t *)(lVar8 + 0x20 + uVar10 * 8);
        il2cpp_runtime_helper_022b4080(&__this_02->fields);
        parent = (UI_HeadedPanel_o *)(pUVar9->fields).TopBar;
        pSVar3 = (System_String_o *)(__this_02->fields).m_CachedPtr;
        pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        __this_03 = (UI_HeadedPanel_o *)
                    UI_ElementFactory__CreateCategoryButton
                              ((UnityEngine_Transform_o *)parent,pUVar4,pSVar3,pUVar5,method_00);
        if (__this_03 == (UI_HeadedPanel_o *)0x0) goto label_0437f9d4;
        __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar9->fields)._topButtons;
        key = (Il2CppObject *)(__this_02->fields).m_CachedPtr;
        value = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)__this_03,MethodInfo_Button_GetComponent_Button);
        parent = __this_03;
        if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0437f9d4;
        System_Collections_Generic_Dictionary_object__object___Add(__this_01,key,value,MethodInfo_Void_Add);
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)*(int *)(lVar8 + 0x18));
    }
    UI_HeadedPanel__SetupTopButtons(pUVar9,(MethodInfo *)0x0);
    return;
  }
label_0437f9d4:
  il2cpp_runtime_helper_022b2c90();
label_0437f9d9:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)parent,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameSelectMapPopup$$Setup
// il2cpp: void UI_CreateGameSelectMapPopup__Setup (UI_CreateGameSelectMapPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x437f3c0

void UI_CreateGameSelectMapPopup__Setup
               (UI_CreateGameSelectMapPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Settings_StringSetting_o *setting;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *key;
  System_String_o *pSVar2;
  UI_ElementStyle_o *pUVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  UnityEngine_Events_UnityAction_o *onEndEdit;
  UnityEngine_GameObject_o *pUVar5;
  UI_InputSettingElement_o *pUVar6;
  long lVar7;
  UI_HeadedPanel_o *__this_01;
  UI_HeadedPanel_o *__this_02;
  Il2CppObject *value;
  UI_HeadedPanel_o *__this_03;
  UI_HeadedPanel_o *parent_00;
  MethodInfo *method_00;
  ulong uVar8;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (g_data_057ae227 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IgnoreScaler_AddComponent_IgnoreScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Search");
    g_data_057ae227 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)(*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)(__this);
  pUVar3 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  System_Object___ctor((Il2CppObject *)pUVar3,(MethodInfo *)0x0);
  (pUVar3->fields).FontSize = 0x18;
  (pUVar3->fields).TitleWidth = 70.0;
  (pUVar3->fields).Spacing = 20.0;
  (pUVar3->fields).ThemePanel = pSVar2;
  il2cpp_runtime_helper_022b4080(&(pUVar3->fields).ThemePanel,pSVar2);
  pUVar1 = (__this->fields).BottomBar;
  setting = (__this->fields).SearchSetting;
  pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  onEndEdit = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  method_00 = "";
  pUVar5 = UI_ElementFactory__CreateInputSetting
                     (pUVar1,pUVar3,(Settings_BaseSetting_o *)setting,"Search",
                      (System_String_o *)"",260.0,40.0,0,pUVar4,onEndEdit,
                      (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                      in_stack_ffffffffffffffc8);
  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
    pUVar6 = (UI_InputSettingElement_o *)UnityEngine_GameObject__GetComponent_object_(pUVar5,MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    (__this->fields)._searchInput = pUVar6;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._searchInput);
    pUVar1 = (__this->fields).BottomBar;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    UI_ElementFactory__CreateTextButton(pUVar1,pUVar3,pSVar2,0.0,pUVar4,method_00);
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__AddComponent_object_(pUVar5,MethodInfo_IgnoreScaler_AddComponent_IgnoreScaler);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae228 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"Racing Hard");
    il2cpp_runtime_helper_023445d0(&"Mission");
    il2cpp_runtime_helper_023445d0(&"Cage Fight");
    il2cpp_runtime_helper_023445d0(&"PVP");
    il2cpp_runtime_helper_023445d0(&"Racing Basic");
    g_data_057ae228 = '\x01';
  }
  __this_03 = TypeInfo_string;
  lVar7 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,7);
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) != 0) {
      __this_03 = (UI_HeadedPanel_o *)(lVar7 + 0x20);
      *(undefined8 *)(lVar7 + 0x20) = "General";
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar7 + 0x18)) {
        __this_03 = (UI_HeadedPanel_o *)(lVar7 + 0x28);
        *(undefined8 *)(lVar7 + 0x28) = "Mission";
        il2cpp_runtime_helper_022b4080();
        if (2 < *(uint *)(lVar7 + 0x18)) {
          __this_03 = (UI_HeadedPanel_o *)(lVar7 + 0x30);
          *(undefined8 *)(lVar7 + 0x30) = "PVP";
          il2cpp_runtime_helper_022b4080();
          if (3 < *(uint *)(lVar7 + 0x18)) {
            __this_03 = (UI_HeadedPanel_o *)(lVar7 + 0x38);
            *(undefined8 *)(lVar7 + 0x38) = "Cage Fight";
            il2cpp_runtime_helper_022b4080();
            if (4 < *(uint *)(lVar7 + 0x18)) {
              __this_03 = (UI_HeadedPanel_o *)(lVar7 + 0x40);
              *(undefined8 *)(lVar7 + 0x40) = "Racing Basic";
              il2cpp_runtime_helper_022b4080();
              if (5 < *(uint *)(lVar7 + 0x18)) {
                __this_03 = (UI_HeadedPanel_o *)(lVar7 + 0x48);
                *(undefined8 *)(lVar7 + 0x48) = "Racing Hard";
                il2cpp_runtime_helper_022b4080();
                if (6 < *(uint *)(lVar7 + 0x18)) {
                  *(undefined8 *)(lVar7 + 0x50) = "Custom";
                  il2cpp_runtime_helper_022b4080(lVar7 + 0x50);
                  return;
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae229 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    g_data_057ae229 = '\x01';
  }
  pSVar2 = (System_String_o *)(*(__this_03->klass->vtable)._4_get_ThemePanel.methodPtr)(__this_03);
  pUVar3 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  System_Object___ctor((Il2CppObject *)pUVar3,(MethodInfo *)0x0);
  (pUVar3->fields).FontSize = 0x18;
  (pUVar3->fields).TitleWidth = 120.0;
  (pUVar3->fields).Spacing = 20.0;
  (pUVar3->fields).ThemePanel = pSVar2;
  il2cpp_runtime_helper_022b4080(&(pUVar3->fields).ThemePanel,pSVar2);
  parent_00 = __this_03;
  lVar7 = (**(code **)&__this_03->klass[1]._2.cctor_finished)();
  if (lVar7 != 0) {
    if (0 < *(int *)(lVar7 + 0x18)) {
      uVar8 = 0;
      do {
        __this_01 = (UI_HeadedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
        parent_00 = __this_01;
        System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
        if (__this_01 == (UI_HeadedPanel_o *)0x0) goto label_0437f9d4;
        parent_00 = (UI_HeadedPanel_o *)&(__this_01->fields).m_CancellationTokenSource;
        (__this_01->fields).m_CancellationTokenSource =
             (System_Threading_CancellationTokenSource_o *)__this_03;
        il2cpp_runtime_helper_022b4080();
        if (*(uint *)(lVar7 + 0x18) <= uVar8) goto label_0437f9d9;
        (__this_01->fields).m_CachedPtr = *(intptr_t *)(lVar7 + 0x20 + uVar8 * 8);
        il2cpp_runtime_helper_022b4080(&__this_01->fields);
        parent_00 = (UI_HeadedPanel_o *)(__this_03->fields).TopBar;
        pSVar2 = (System_String_o *)(__this_01->fields).m_CachedPtr;
        pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        __this_02 = (UI_HeadedPanel_o *)
                    UI_ElementFactory__CreateCategoryButton
                              ((UnityEngine_Transform_o *)parent_00,pUVar3,pSVar2,pUVar4,method_00);
        if (__this_02 == (UI_HeadedPanel_o *)0x0) goto label_0437f9d4;
        __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_03->fields)._topButtons
        ;
        key = (Il2CppObject *)(__this_01->fields).m_CachedPtr;
        value = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Button_GetComponent_Button);
        parent_00 = __this_02;
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0437f9d4;
        System_Collections_Generic_Dictionary_object__object___Add(__this_00,key,value,MethodInfo_Void_Add);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)*(int *)(lVar7 + 0x18));
    }
    UI_HeadedPanel__SetupTopButtons(__this_03,(MethodInfo *)0x0);
    return;
  }
label_0437f9d4:
  il2cpp_runtime_helper_022b2c90();
label_0437f9d9:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)parent_00,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameSelectMapPopup$$GetCategories
// il2cpp: System_String_array* UI_CreateGameSelectMapPopup__GetCategories (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x437f650

System_String_array *
UI_CreateGameSelectMapPopup__GetCategories(UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *key;
  System_String_array *pSVar1;
  System_String_o *pSVar2;
  UI_ElementStyle_o *style;
  long lVar3;
  UI_HeadedPanel_o *__this_01;
  UnityEngine_Events_UnityAction_o *onClick;
  UI_HeadedPanel_o *__this_02;
  Il2CppObject *value;
  System_String_array *extraout_RAX;
  System_String_array *extraout_RAX_00;
  UI_HeadedPanel_o *__this_03;
  UI_HeadedPanel_o *parent;
  MethodInfo *in_R8;
  ulong uVar4;
  
  if (g_data_057ae228 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"Racing Hard");
    il2cpp_runtime_helper_023445d0(&"Mission");
    il2cpp_runtime_helper_023445d0(&"Cage Fight");
    il2cpp_runtime_helper_023445d0(&"PVP");
    il2cpp_runtime_helper_023445d0(&"Racing Basic");
    g_data_057ae228 = '\x01';
  }
  __this_03 = TypeInfo_string;
  pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,7);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      __this_03 = (UI_HeadedPanel_o *)pSVar1->m_Items;
      pSVar1->m_Items[0] = "General";
      il2cpp_runtime_helper_022b4080();
      if (1 < (uint)pSVar1->max_length) {
        __this_03 = (UI_HeadedPanel_o *)(pSVar1->m_Items + 1);
        pSVar1->m_Items[1] = "Mission";
        il2cpp_runtime_helper_022b4080();
        if (2 < (uint)pSVar1->max_length) {
          __this_03 = (UI_HeadedPanel_o *)(pSVar1->m_Items + 2);
          pSVar1->m_Items[2] = "PVP";
          il2cpp_runtime_helper_022b4080();
          if (3 < (uint)pSVar1->max_length) {
            __this_03 = (UI_HeadedPanel_o *)(pSVar1->m_Items + 3);
            pSVar1->m_Items[3] = "Cage Fight";
            il2cpp_runtime_helper_022b4080();
            if (4 < (uint)pSVar1->max_length) {
              __this_03 = (UI_HeadedPanel_o *)(pSVar1->m_Items + 4);
              pSVar1->m_Items[4] = "Racing Basic";
              il2cpp_runtime_helper_022b4080();
              if (5 < (uint)pSVar1->max_length) {
                __this_03 = (UI_HeadedPanel_o *)(pSVar1->m_Items + 5);
                pSVar1->m_Items[5] = "Racing Hard";
                il2cpp_runtime_helper_022b4080();
                if (6 < (uint)pSVar1->max_length) {
                  pSVar1->m_Items[6] = "Custom";
                  il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 6);
                  return pSVar1;
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae229 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    g_data_057ae229 = '\x01';
  }
  pSVar2 = (System_String_o *)(*(__this_03->klass->vtable)._4_get_ThemePanel.methodPtr)(__this_03);
  style = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x18;
  (style->fields).TitleWidth = 120.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar2;
  il2cpp_runtime_helper_022b4080(&(style->fields).ThemePanel,pSVar2);
  parent = __this_03;
  lVar3 = (**(code **)&__this_03->klass[1]._2.cctor_finished)();
  if (lVar3 != 0) {
    if (0 < *(int *)(lVar3 + 0x18)) {
      uVar4 = 0;
      do {
        __this_01 = (UI_HeadedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
        parent = __this_01;
        System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
        if (__this_01 == (UI_HeadedPanel_o *)0x0) goto label_0437f9d4;
        parent = (UI_HeadedPanel_o *)&(__this_01->fields).m_CancellationTokenSource;
        (__this_01->fields).m_CancellationTokenSource =
             (System_Threading_CancellationTokenSource_o *)__this_03;
        il2cpp_runtime_helper_022b4080();
        if (*(uint *)(lVar3 + 0x18) <= uVar4) goto label_0437f9d9;
        (__this_01->fields).m_CachedPtr = *(intptr_t *)(lVar3 + 0x20 + uVar4 * 8);
        il2cpp_runtime_helper_022b4080(&__this_01->fields);
        parent = (UI_HeadedPanel_o *)(__this_03->fields).TopBar;
        pSVar2 = (System_String_o *)(__this_01->fields).m_CachedPtr;
        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        __this_02 = (UI_HeadedPanel_o *)
                    UI_ElementFactory__CreateCategoryButton
                              ((UnityEngine_Transform_o *)parent,style,pSVar2,onClick,in_R8);
        if (__this_02 == (UI_HeadedPanel_o *)0x0) goto label_0437f9d4;
        __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_03->fields)._topButtons
        ;
        key = (Il2CppObject *)(__this_01->fields).m_CachedPtr;
        value = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Button_GetComponent_Button);
        parent = __this_02;
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0437f9d4;
        System_Collections_Generic_Dictionary_object__object___Add(__this_00,key,value,MethodInfo_Void_Add);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)*(int *)(lVar3 + 0x18));
    }
    UI_HeadedPanel__SetupTopButtons(__this_03,(MethodInfo *)0x0);
    return extraout_RAX;
  }
label_0437f9d4:
  il2cpp_runtime_helper_022b2c90();
label_0437f9d9:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)parent,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// UI.CreateGameSelectMapPopup$$SetupTopButtons
// il2cpp: void UI_CreateGameSelectMapPopup__SetupTopButtons (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x437f7d0

void UI_CreateGameSelectMapPopup__SetupTopButtons(UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *key;
  System_String_o *pSVar1;
  UI_ElementStyle_o *style;
  long lVar2;
  UI_CreateGameSelectMapPopup_o *__this_01;
  UnityEngine_Events_UnityAction_o *onClick;
  UI_CreateGameSelectMapPopup_o *__this_02;
  Il2CppObject *value;
  UI_CreateGameSelectMapPopup_o *parent;
  MethodInfo *in_R8;
  ulong uVar3;
  
  if (g_data_057ae229 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    g_data_057ae229 = '\x01';
  }
  pSVar1 = (System_String_o *)(*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)(__this);
  style = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x18;
  (style->fields).TitleWidth = 120.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar1;
  il2cpp_runtime_helper_022b4080(&(style->fields).ThemePanel,pSVar1);
  parent = __this;
  lVar2 = (*(__this->klass->vtable)._59_GetCategories.methodPtr)();
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar3 = 0;
      do {
        __this_01 = (UI_CreateGameSelectMapPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
        parent = __this_01;
        System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
        if (__this_01 == (UI_CreateGameSelectMapPopup_o *)0x0) goto label_0437f9d4;
        parent = (UI_CreateGameSelectMapPopup_o *)&(__this_01->fields).m_CancellationTokenSource;
        (__this_01->fields).m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)__this;
        il2cpp_runtime_helper_022b4080();
        if (*(uint *)(lVar2 + 0x18) <= uVar3) goto label_0437f9d9;
        (__this_01->fields).m_CachedPtr = *(intptr_t *)(lVar2 + 0x20 + uVar3 * 8);
        il2cpp_runtime_helper_022b4080(&__this_01->fields);
        parent = (UI_CreateGameSelectMapPopup_o *)(__this->fields).TopBar;
        pSVar1 = (System_String_o *)(__this_01->fields).m_CachedPtr;
        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        __this_02 = (UI_CreateGameSelectMapPopup_o *)
                    UI_ElementFactory__CreateCategoryButton
                              ((UnityEngine_Transform_o *)parent,style,pSVar1,onClick,in_R8);
        if (__this_02 == (UI_CreateGameSelectMapPopup_o *)0x0) goto label_0437f9d4;
        __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
        key = (Il2CppObject *)(__this_01->fields).m_CachedPtr;
        value = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Button_GetComponent_Button);
        parent = __this_02;
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0437f9d4;
        System_Collections_Generic_Dictionary_object__object___Add(__this_00,key,value,MethodInfo_Void_Add);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)*(int *)(lVar2 + 0x18));
    }
    UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
    return;
  }
label_0437f9d4:
  il2cpp_runtime_helper_022b2c90();
label_0437f9d9:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)parent,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameSelectMapPopup$$OnTopBarButtonClick
// il2cpp: void UI_CreateGameSelectMapPopup__OnTopBarButtonClick (UI_CreateGameSelectMapPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x437f9f0

void UI_CreateGameSelectMapPopup__OnTopBarButtonClick
               (UI_CreateGameSelectMapPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  
  vtableDispatch = (__this->klass->vtable)._28_SetCategoryPanel.methodPtr;
  (*vtableDispatch)
            (__this,name,(__this->klass->vtable)._28_SetCategoryPanel.method,vtableDispatch);
  return;
}


// UI.CreateGameSelectMapPopup$$RegisterCategoryPanels
// il2cpp: void UI_CreateGameSelectMapPopup__RegisterCategoryPanels (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x437fa10

void UI_CreateGameSelectMapPopup__RegisterCategoryPanels
               (UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  System_Type_o *value;
  long *plVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *key;
  
  if (g_data_057ae22a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CreateGameSelectMapPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    g_data_057ae22a = '\x01';
  }
  pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  pIVar8 = (Il2CppObject *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
  if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_04 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar1,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni),
     __this_04 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffffb8,__this_04,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    key = pIVar8;
    while( true ) {
      __this_00.fields._8_8_ = pIVar7;
      __this_00.fields._dictionary = pSVar6;
      __this_00.fields._currentKey = key;
      bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                        (__this_00,(MethodInfo_3251B20 *)&stack0xffffffffffffffb8);
      handle.fields.value = TypeRef_CreateGameSelectMapPanel.fields.value;
      if ((char)bVar3 == '\0') {
        __this_01.fields._8_8_ = pIVar7;
        __this_01.fields._dictionary = pSVar6;
        __this_01.fields._currentKey = key;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  (__this_01,(MethodInfo_3251B10 *)&stack0xffffffffffffffb8);
        return;
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes
      ;
      pIVar8 = key;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      value = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,key,(Il2CppObject *)value,MethodInfo_Void_Add);
      key = pIVar8;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar7;
    __this_02.fields._dictionary = pSVar6;
    __this_02.fields._currentKey = pIVar8;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffffb8);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_03.fields._8_8_ = pIVar7;
  __this_03.fields._dictionary = pSVar6;
  __this_03.fields._currentKey = pIVar8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar5._0_8_);
}


// UI.CreateGameSelectMapPopup$$OnBottomBarButtonClick
// il2cpp: void UI_CreateGameSelectMapPopup__OnBottomBarButtonClick (UI_CreateGameSelectMapPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x437fc00

void UI_CreateGameSelectMapPopup__OnBottomBarButtonClick
               (UI_CreateGameSelectMapPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  
  vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._22_Hide.method,method,vtableDispatch);
  return;
}


// UI.CreateGameSelectMapPopup$$.ctor
// il2cpp: void UI_CreateGameSelectMapPopup___ctor (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x437fc20

void UI_CreateGameSelectMapPopup___ctor(UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  
  if (g_data_057ae22b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae22b = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).SearchSetting = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).SearchSetting);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameSelectMapPopup$$<Setup>b__15_0
// il2cpp: void UI_CreateGameSelectMapPopup___Setup_b__15_0 (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x437fcb0

void UI_CreateGameSelectMapPopup___Setup_b__15_0(UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameSelectMapPopup$$<Setup>b__15_1
// il2cpp: void UI_CreateGameSelectMapPopup___Setup_b__15_1 (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x437fcc0

void UI_CreateGameSelectMapPopup___Setup_b__15_1(UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameSelectMapPopup$$<Setup>b__15_2
// il2cpp: void UI_CreateGameSelectMapPopup___Setup_b__15_2 (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x437fcd0

void UI_CreateGameSelectMapPopup___Setup_b__15_2(UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (g_data_057ae22c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae22c = '\x01';
    in_RDX = extraout_RDX;
  }
  vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtableDispatch);
  return;
}


