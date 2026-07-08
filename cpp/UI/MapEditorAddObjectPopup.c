// Type: UI.MapEditorAddObjectPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MapEditorAddObjectPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MapEditorMenu/MapEditorAddObjectPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.MapEditorAddObjectPopup.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_MapEditorAddObjectPopup___c__DisplayClass21_0___ctor (UI_MapEditorAddObjectPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x4105e30

void UI_MapEditorAddObjectPopup_<>c__DisplayClass21_0___ctor
               (UI_MapEditorAddObjectPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddObjectPopup.<>c__DisplayClass21_0$$<SetupTopButtons>b__0
// il2cpp: void UI_MapEditorAddObjectPopup___c__DisplayClass21_0___SetupTopButtons_b__0 (UI_MapEditorAddObjectPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x4106230

void UI_MapEditorAddObjectPopup_<>c__DisplayClass21_0__<SetupTopButtons>b__0
               (UI_MapEditorAddObjectPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  UI_MapEditorAddObjectPopup_o *pUVar2;
  System_String_o *pSVar3;
  bool_conflict bVar4;
  
  pUVar2 = (__this->fields).__4__this;
  if (pUVar2 == (UI_MapEditorAddObjectPopup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar3 = (__this->fields).buttonName;
  if (DAT_05704893 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704893 = '\x01';
  }
  __this_00 = (pUVar2->fields).Search;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)__this_00,
               (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8),MethodInfo_Void_set_Value);
    pUVar1 = (pUVar2->fields)._searchInput;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      pUVar1 = (pUVar2->fields)._searchInput;
      if (pUVar1 == (UI_InputSettingElement_o *)0x0) goto LAB_04105f33;
      (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
    }
    vtable_dispatch = (pUVar2->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtable_dispatch)
              (pUVar2,pSVar3,(pUVar2->klass->vtable)._28_SetCategoryPanel.method,
               vtable_dispatch);
    return;
  }
LAB_04105f33:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddObjectPopup.<>c__DisplayClass21_1$$.ctor
// il2cpp: void UI_MapEditorAddObjectPopup___c__DisplayClass21_1___ctor (UI_MapEditorAddObjectPopup___c__DisplayClass21_1_o* __this, const MethodInfo* method);
// 0x4105e40

void UI_MapEditorAddObjectPopup_<>c__DisplayClass21_1___ctor
               (UI_MapEditorAddObjectPopup___c__DisplayClass21_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddObjectPopup.<>c__DisplayClass21_1$$<SetupTopButtons>b__1
// il2cpp: void UI_MapEditorAddObjectPopup___c__DisplayClass21_1___SetupTopButtons_b__1 (UI_MapEditorAddObjectPopup___c__DisplayClass21_1_o* __this, const MethodInfo* method);
// 0x4106250

void UI_MapEditorAddObjectPopup_<>c__DisplayClass21_1__<SetupTopButtons>b__1
               (UI_MapEditorAddObjectPopup___c__DisplayClass21_1_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  UI_MapEditorAddObjectPopup_o *pUVar2;
  System_String_o *pSVar3;
  bool_conflict bVar4;
  
  pUVar2 = (__this->fields).__4__this;
  if (pUVar2 == (UI_MapEditorAddObjectPopup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar3 = (__this->fields).buttonName;
  if (DAT_05704893 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704893 = '\x01';
  }
  __this_00 = (pUVar2->fields).Search;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)__this_00,
               (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8),MethodInfo_Void_set_Value);
    pUVar1 = (pUVar2->fields)._searchInput;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      pUVar1 = (pUVar2->fields)._searchInput;
      if (pUVar1 == (UI_InputSettingElement_o *)0x0) goto LAB_04105f33;
      (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
    }
    vtable_dispatch = (pUVar2->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtable_dispatch)
              (pUVar2,pSVar3,(pUVar2->klass->vtable)._28_SetCategoryPanel.method,
               vtable_dispatch);
    return;
  }
LAB_04105f33:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddObjectPopup.<>c__DisplayClass21_2$$.ctor
// il2cpp: void UI_MapEditorAddObjectPopup___c__DisplayClass21_2___ctor (UI_MapEditorAddObjectPopup___c__DisplayClass21_2_o* __this, const MethodInfo* method);
// 0x4105e50

void UI_MapEditorAddObjectPopup_<>c__DisplayClass21_2___ctor
               (UI_MapEditorAddObjectPopup___c__DisplayClass21_2_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddObjectPopup.<>c__DisplayClass21_2$$<SetupTopButtons>b__2
// il2cpp: void UI_MapEditorAddObjectPopup___c__DisplayClass21_2___SetupTopButtons_b__2 (UI_MapEditorAddObjectPopup___c__DisplayClass21_2_o* __this, const MethodInfo* method);
// 0x4106270

void UI_MapEditorAddObjectPopup_<>c__DisplayClass21_2__<SetupTopButtons>b__2
               (UI_MapEditorAddObjectPopup___c__DisplayClass21_2_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  UI_MapEditorAddObjectPopup_o *pUVar2;
  System_String_o *pSVar3;
  bool_conflict bVar4;
  
  pUVar2 = (__this->fields).__4__this;
  if (pUVar2 == (UI_MapEditorAddObjectPopup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar3 = (__this->fields).buttonName;
  if (DAT_05704893 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704893 = '\x01';
  }
  __this_00 = (pUVar2->fields).Search;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)__this_00,
               (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8),MethodInfo_Void_set_Value);
    pUVar1 = (pUVar2->fields)._searchInput;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      pUVar1 = (pUVar2->fields)._searchInput;
      if (pUVar1 == (UI_InputSettingElement_o *)0x0) goto LAB_04105f33;
      (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
    }
    vtable_dispatch = (pUVar2->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtable_dispatch)
              (pUVar2,pSVar3,(pUVar2->klass->vtable)._28_SetCategoryPanel.method,
               vtable_dispatch);
    return;
  }
LAB_04105f33:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddObjectPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorAddObjectPopup__get_Title (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x4104c40

System_String_o *
UI_MapEditorAddObjectPopup__get_Title(UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.MapEditorAddObjectPopup$$get_Width
// il2cpp: float UI_MapEditorAddObjectPopup__get_Width (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x4104c60

float UI_MapEditorAddObjectPopup__get_Width(UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  return 1155.0;
}


// UI.MapEditorAddObjectPopup$$get_Height
// il2cpp: float UI_MapEditorAddObjectPopup__get_Height (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x4104c70

float UI_MapEditorAddObjectPopup__get_Height
                (UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  return 865.0;
}


// UI.MapEditorAddObjectPopup$$get_CategoryPanel
// il2cpp: bool UI_MapEditorAddObjectPopup__get_CategoryPanel (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x4104c80

bool_conflict
UI_MapEditorAddObjectPopup__get_CategoryPanel
          (UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorAddObjectPopup$$get_CategoryButtons
// il2cpp: bool UI_MapEditorAddObjectPopup__get_CategoryButtons (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x4104c90

bool_conflict
UI_MapEditorAddObjectPopup__get_CategoryButtons
          (UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorAddObjectPopup$$get_TopBarHeight
// il2cpp: float UI_MapEditorAddObjectPopup__get_TopBarHeight (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x4104ca0

float UI_MapEditorAddObjectPopup__get_TopBarHeight
                (UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  return 65.0;
}


// UI.MapEditorAddObjectPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_MapEditorAddObjectPopup__get_DefaultCategoryPanel (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x4104cb0

System_String_o *
UI_MapEditorAddObjectPopup__get_DefaultCategoryPanel
          (UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  if (DAT_0570488e == '\0') {
    il2cpp_init_method_metadata(&"General");
    DAT_0570488e = '\x01';
  }
  return "General";
}


// UI.MapEditorAddObjectPopup$$get_TwoRows
// il2cpp: bool UI_MapEditorAddObjectPopup__get_TwoRows (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x4104ce0

bool_conflict
UI_MapEditorAddObjectPopup__get_TwoRows(UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.MapEditorAddObjectPopup$$Setup
// il2cpp: void UI_MapEditorAddObjectPopup__Setup (UI_MapEditorAddObjectPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4104cf0

void UI_MapEditorAddObjectPopup__Setup
               (UI_MapEditorAddObjectPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Settings_StringSetting_o *setting;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_GameObject_o *__this_01;
  UI_InputSettingElement_o *pUVar4;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar5;
  float fVar6;
  
  if (DAT_0570488f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__18_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__18_1);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Search");
    DAT_0570488f = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,70.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  setting = (__this->fields).Search;
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  __this_01 = UI_ElementFactory__CreateInputSetting
                        (pUVar1,__this_00,(Settings_BaseSetting_o *)setting,"Search",
                         "",200.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,pUVar3,
                         (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                         (MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = (UI_InputSettingElement_o *)
             UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
    (__this->fields)._searchInput = pUVar4;
    il2cpp_runtime_glue(&(__this->fields)._searchInput,pUVar4);
    pUVar4 = (__this->fields)._searchInput;
    if (pUVar4 != (UI_InputSettingElement_o *)0x0) {
      pUVar5 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar4,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
      if (pUVar5 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar5,5.0,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).BottomBar;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
        pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).BottomBar;
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar5 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pUVar1,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
          fVar6 = (float)(*(__this->klass->vtable)._5_get_Width.methodPtr)(__this);
          if (pUVar5 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
            UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                      (pUVar5,fVar6 + -365.0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddObjectPopup$$GetCategories
// il2cpp: System_String_array* UI_MapEditorAddObjectPopup__GetCategories (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x4104fa0

System_String_array *
UI_MapEditorAddObjectPopup__GetCategories(UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (DAT_05704890 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"Buildings");
    il2cpp_init_method_metadata(&"Custom");
    il2cpp_init_method_metadata(&"Geometry");
    il2cpp_init_method_metadata(&"FX");
    il2cpp_init_method_metadata(&"Nature");
    il2cpp_init_method_metadata(&"Arenas");
    il2cpp_init_method_metadata(&"Interact");
    il2cpp_init_method_metadata(&"Decor");
    il2cpp_init_method_metadata(&"All");
    il2cpp_init_method_metadata(&"Terrain");
    DAT_05704890 = '\x01';
  }
  pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,0xb);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "All";
      il2cpp_runtime_glue(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = "General";
        il2cpp_runtime_glue(pSVar1->m_Items + 1);
        if (2 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[2] = "Interact";
          il2cpp_runtime_glue(pSVar1->m_Items + 2);
          if (3 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[3] = "Geometry";
            il2cpp_runtime_glue(pSVar1->m_Items + 3);
            if (4 < (uint)pSVar1->max_length) {
              pSVar1->m_Items[4] = "Buildings";
              il2cpp_runtime_glue(pSVar1->m_Items + 4);
              if (5 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[5] = "Nature";
                il2cpp_runtime_glue(pSVar1->m_Items + 5);
                if (6 < (uint)pSVar1->max_length) {
                  pSVar1->m_Items[6] = "Decor";
                  il2cpp_runtime_glue(pSVar1->m_Items + 6);
                  if (7 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[7] = "Arenas";
                    il2cpp_runtime_glue(pSVar1->m_Items + 7);
                    if (8 < (uint)pSVar1->max_length) {
                      pSVar1->m_Items[8] = "Terrain";
                      il2cpp_runtime_glue(pSVar1->m_Items + 8);
                      if (9 < (uint)pSVar1->max_length) {
                        pSVar1->m_Items[9] = "FX";
                        il2cpp_runtime_glue(pSVar1->m_Items + 9);
                        if (10 < (uint)pSVar1->max_length) {
                          pSVar1->m_Items[10] = "Custom";
                          il2cpp_runtime_glue(pSVar1->m_Items + 10);
                          return pSVar1;
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddObjectPopup$$GetPanelVerticalOffset
// il2cpp: float UI_MapEditorAddObjectPopup__GetPanelVerticalOffset (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x41051e0

float UI_MapEditorAddObjectPopup__GetPanelVerticalOffset
                (UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  char cVar1;
  
  cVar1 = (*(__this->klass->vtable)._59_get_TwoRows.methodPtr)
                    (__this,(__this->klass->vtable)._59_get_TwoRows.method);
  if (cVar1 == '\0') {
    return 0.0;
  }
  return -32.5;
}


// UI.MapEditorAddObjectPopup$$SetupTopButtons
// il2cpp: void UI_MapEditorAddObjectPopup__SetupTopButtons (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x4105210

void UI_MapEditorAddObjectPopup__SetupTopButtons
               (UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  char cVar3;
  bool_conflict bVar4;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_06;
  UnityEngine_Object_o *obj;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar6;
  UnityEngine_GameObject_o *__this_07;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *items;
  System_Collections_Generic_List_List_T___o *__this_08;
  System_Collections_Generic_List_object__o *pSVar7;
  Il2CppObject *pIVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Events_UnityAction_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  long lVar12;
  MethodInfo *method_00;
  Il2CppObject *pIVar13;
  ulong uVar14;
  _union_247328 _Var15;
  Il2CppMethodPointer pIVar16;
  Il2CppClass *pIVar17;
  _union_247328 _Stack_48;
  Il2CppMethodPointer pIStack_40;
  Il2CppClass *pIStack_38;
  
  if (DAT_05704891 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__ToList_String);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_VerticalLayoutGroup_AddComponent_VerticalLayoutG);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupTopButtons_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass21_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupTopButtons_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass21_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupTopButtons_b__2);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass21_2);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&MethodInfo_List_1_List_1_System_String___GroupBuckets_Strin);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704891 = '\x01';
  }
  themePanel = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_06 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_06,0x14,120.0,20.0,themePanel,(MethodInfo *)0x0);
  cVar3 = (*(__this->klass->vtable)._59_get_TwoRows.methodPtr)
                    (__this,(__this->klass->vtable)._59_get_TwoRows.method);
  if (cVar3 == '\0') {
    lVar12 = (*(__this->klass->vtable)._60_GetCategories.methodPtr)(__this);
    if (lVar12 != 0) {
      if (0 < *(int *)(lVar12 + 0x18)) {
        uVar14 = 0;
        do {
          pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass21_2);
          System_Object___ctor(pIVar8,(MethodInfo *)0x0);
          if (pIVar8 == (Il2CppObject *)0x0) goto LAB_041059dd;
          pIVar8[1].monitor = __this;
          il2cpp_runtime_glue(&pIVar8[1].monitor,__this);
          if (*(uint *)(lVar12 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pIVar8[1].klass = *(Il2CppClass **)(lVar12 + 0x20 + uVar14 * 8);
          il2cpp_runtime_glue(pIVar8 + 1);
          pUVar9 = (__this->fields).TopBar;
          pIVar17 = pIVar8[1].klass;
          pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          pUVar5 = UI_ElementFactory__CreateCategoryButton
                             (pUVar9,__this_06,(System_String_o *)pIVar17,pUVar10,(MethodInfo *)0x0)
          ;
          if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto LAB_041059dd;
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._topButtons;
          pIVar17 = pIVar8[1].klass;
          pIVar8 = UnityEngine_GameObject__GetComponent<object>(pUVar5,MethodInfo_Button_GetComponent_Button);
          if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_041059dd;
          System_Collections_Generic_Dictionary<object__object>__Add
                    (pSVar2,(Il2CppObject *)pIVar17,pIVar8,MethodInfo_Void_Add);
          uVar14 = uVar14 + 1;
        } while ((long)uVar14 < (long)*(int *)(lVar12 + 0x18));
      }
      UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pUVar9 = (__this->fields).TopBar;
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      obj = (UnityEngine_Object_o *)
            UnityEngine_Component__GetComponent<object>
                      ((UnityEngine_Component_o *)pUVar9,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__DestroyImmediate(obj,(MethodInfo *)0x0);
      pUVar9 = (__this->fields).TopBar;
      if (((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
          (pUVar5 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
          pUVar5 != (UnityEngine_GameObject_o *)0x0)) &&
         (pUVar6 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                   UnityEngine_GameObject__AddComponent<object>(pUVar5,MethodInfo_VerticalLayoutGroup_AddComponent_VerticalLayoutG),
         pUVar6 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)) {
        UnityEngine_UI_LayoutGroup__set_childAlignment
                  ((UnityEngine_UI_LayoutGroup_o *)pUVar6,4,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                  (pUVar6,1,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                  (pUVar6,1,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                  (pUVar6,1,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                  (pUVar6,1,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)0x0;
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar6,-30.0,(MethodInfo *)0x0);
        pUVar5 = UI_MapEditorAddObjectPopup__CreateRow(__this,method_00);
        __this_07 = UI_MapEditorAddObjectPopup__CreateRow(__this,method_00);
        source = (System_Collections_Generic_IEnumerable_TSource__o *)
                 (*(__this->klass->vtable)._60_GetCategories.methodPtr)
                           (__this,(__this->klass->vtable)._60_GetCategories.method);
        items = System_Linq_Enumerable__ToList<object>(source,MethodInfo_List_1_System_String__ToList_String);
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_init_class();
        }
        __this_08 = Utility_Util__GroupBuckets<object>
                              ((System_Collections_Generic_List_T__o *)items,2,MethodInfo_List_1_List_1_System_String___GroupBuckets_Strin);
        if ((__this_08 != (System_Collections_Generic_List_List_T___o *)0x0) &&
           (pSVar7 = (System_Collections_Generic_List_object__o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this_08,0,
                                MethodInfo_List_1_System_String__get_Item),
           pSVar7 != (System_Collections_Generic_List_object__o *)0x0)) {
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_48,pSVar7,
                     MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
          _Var15 = _Stack_48;
          pIVar16 = pIStack_40;
          pIVar17 = pIStack_38;
          if (pUVar5 == (UnityEngine_GameObject_o *)0x0) {
            __this_01.fields._8_8_ = pIStack_40;
            __this_01.fields._list = _Stack_48.genericMethod;
            __this_01.fields._current = (Il2CppObject *)pIStack_38;
            bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff78);
            if ((char)bVar4 != '\0') {
              pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass21_0);
              System_Object___ctor(pIVar8,(MethodInfo *)0x0);
              if (pIVar8 != (Il2CppObject *)0x0) {
                pIVar8[1].monitor = __this;
                il2cpp_runtime_glue(&pIVar8[1].monitor);
                pIVar8[1].klass = pIVar17;
                il2cpp_runtime_glue(pIVar8 + 1);
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
LAB_04105a21:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
          else {
            while (__this_00.fields._8_8_ = pIVar16, __this_00.fields._list = _Var15.genericMethod,
                  __this_00.fields._current = (Il2CppObject *)pIVar17,
                  bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                    (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff78),
                  (char)bVar4 != '\0') {
              pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass21_0);
              System_Object___ctor(pIVar8,(MethodInfo *)0x0);
              if (pIVar8 == (Il2CppObject *)0x0) goto LAB_04105a21;
              pIVar8[1].monitor = __this;
              il2cpp_runtime_glue(&pIVar8[1].monitor,__this);
              pIVar13 = pIVar8 + 1;
              pIVar8[1].klass = pIVar17;
              il2cpp_runtime_glue(pIVar13);
              pUVar9 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
              pIVar1 = pIVar13->klass;
              pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              pUVar11 = UI_ElementFactory__CreateCategoryButton
                                  (pUVar9,__this_06,(System_String_o *)pIVar1,pUVar10,
                                   (MethodInfo *)0x0);
              if (pUVar11 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._topButtons;
              pIVar1 = pIVar13->klass;
              pIVar8 = UnityEngine_GameObject__GetComponent<object>(pUVar11,MethodInfo_Button_GetComponent_Button);
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              System_Collections_Generic_Dictionary<object__object>__Add
                        (pSVar2,(Il2CppObject *)pIVar1,pIVar8,MethodInfo_Void_Add);
            }
          }
          __this_02.fields._8_8_ = pIVar16;
          __this_02.fields._list = _Var15.genericMethod;
          __this_02.fields._current = (Il2CppObject *)pIVar17;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff78);
          pSVar7 = (System_Collections_Generic_List_object__o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_08,1,MethodInfo_List_1_System_String__get_Item)
          ;
          if (pSVar7 != (System_Collections_Generic_List_object__o *)0x0) {
            System_Collections_Generic_List<object>__GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_48,pSVar7,
                       MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
            _Var15 = _Stack_48;
            pIVar16 = pIStack_40;
            pIVar17 = pIStack_38;
            if (__this_07 == (UnityEngine_GameObject_o *)0x0) {
              __this_04.fields._8_8_ = pIStack_40;
              __this_04.fields._list = _Stack_48.genericMethod;
              __this_04.fields._current = (Il2CppObject *)pIStack_38;
              bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_04,(MethodInfo_3185E20 *)&stack0xffffffffffffff78);
              if ((char)bVar4 != '\0') {
                pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass21_1);
                System_Object___ctor(pIVar8,(MethodInfo *)0x0);
                if (pIVar8 != (Il2CppObject *)0x0) {
                  pIVar8[1].monitor = __this;
                  il2cpp_runtime_glue(&pIVar8[1].monitor);
                  pIVar8[1].klass = pIStack_38;
                  il2cpp_runtime_glue(pIVar8 + 1);
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
LAB_04105a4c:
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
            }
            else {
              while (__this_03.fields._8_8_ = pIVar16, __this_03.fields._list = _Var15.genericMethod
                    , __this_03.fields._current = (Il2CppObject *)pIVar17,
                    bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                      (__this_03,(MethodInfo_3185E20 *)&stack0xffffffffffffff78),
                    _Stack_48 = _Var15, pIStack_40 = pIVar16, pIStack_38 = pIVar17,
                    (char)bVar4 != '\0') {
                pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass21_1);
                System_Object___ctor(pIVar8,(MethodInfo *)0x0);
                if (pIVar8 == (Il2CppObject *)0x0) goto LAB_04105a4c;
                pIVar8[1].monitor = __this;
                il2cpp_runtime_glue(&pIVar8[1].monitor,__this);
                pIVar13 = pIVar8 + 1;
                pIVar8[1].klass = pIVar17;
                il2cpp_runtime_glue(pIVar13);
                pUVar9 = UnityEngine_GameObject__get_transform(__this_07,(MethodInfo *)0x0);
                pIVar1 = pIVar13->klass;
                pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                pUVar11 = UI_ElementFactory__CreateCategoryButton
                                    (pUVar9,__this_06,(System_String_o *)pIVar1,pUVar10,
                                     (MethodInfo *)0x0);
                if (pUVar11 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (__this->fields)._topButtons;
                pIVar1 = pIVar13->klass;
                pIVar8 = UnityEngine_GameObject__GetComponent<object>(pUVar11,MethodInfo_Button_GetComponent_Button);
                if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                System_Collections_Generic_Dictionary<object__object>__Add
                          (pSVar2,(Il2CppObject *)pIVar1,pIVar8,MethodInfo_Void_Add);
              }
            }
            __this_05.fields._8_8_ = pIStack_40;
            __this_05.fields._list = _Stack_48.genericMethod;
            __this_05.fields._current = (Il2CppObject *)pIStack_38;
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (__this_05,(MethodInfo_3185E10 *)&stack0xffffffffffffff78);
            UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
            if (((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
                (pUVar6 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                          UnityEngine_GameObject__GetComponent<object>(pUVar5,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay),
                pUVar6 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)) &&
               ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                           (pUVar6,80.0,(MethodInfo *)0x0),
                __this_07 != (UnityEngine_GameObject_o *)0x0 &&
                (pUVar6 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                          UnityEngine_GameObject__GetComponent<object>(__this_07,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay),
                pUVar6 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)))) {
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                        (pUVar6,80.0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_041059dd:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddObjectPopup$$CreateRow
// il2cpp: UnityEngine_GameObject_o* UI_MapEditorAddObjectPopup__CreateRow (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x4105d50

UnityEngine_GameObject_o *
UI_MapEditorAddObjectPopup__CreateRow(UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_02;
  
  if (DAT_05704892 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLay);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    DAT_05704892 = '\x01';
  }
  __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_01,(__this->fields).TopBar,(MethodInfo *)0x0);
      __this_02 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                  UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLay);
      if (__this_02 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_LayoutGroup__set_childAlignment
                  ((UnityEngine_UI_LayoutGroup_o *)__this_02,4,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                  (__this_02,1,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                  (__this_02,1,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                  (__this_02,0,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                  (__this_02,0,(MethodInfo *)0x0);
        return __this_00;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddObjectPopup$$OnTopBarButtonClick
// il2cpp: void UI_MapEditorAddObjectPopup__OnTopBarButtonClick (UI_MapEditorAddObjectPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4105e60

void UI_MapEditorAddObjectPopup__OnTopBarButtonClick
               (UI_MapEditorAddObjectPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  
  if (DAT_05704893 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704893 = '\x01';
  }
  __this_00 = (__this->fields).Search;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)__this_00,
               (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8),MethodInfo_Void_set_Value);
    pUVar1 = (__this->fields)._searchInput;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pUVar1 = (__this->fields)._searchInput;
      if (pUVar1 == (UI_InputSettingElement_o *)0x0) goto LAB_04105f33;
      (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
    }
    vtable_dispatch = (__this->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtable_dispatch)
              (__this,name,(__this->klass->vtable)._28_SetCategoryPanel.method,vtable_dispatch
              );
    return;
  }
LAB_04105f33:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddObjectPopup$$RegisterCategoryPanels
// il2cpp: void UI_MapEditorAddObjectPopup__RegisterCategoryPanels (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x4105f40

void UI_MapEditorAddObjectPopup__RegisterCategoryPanels
               (UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_02;
  System_Type_o *value;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar3;
  Il2CppMethodPointer pIVar4;
  Il2CppObject *key;
  Il2CppObject *pIVar5;
  
  if (DAT_05704894 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&TypeRef_MapEditorAddObjectPanel);
    DAT_05704894 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  key = (Il2CppObject *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_02 = System_Collections_Generic_Dictionary<object__object>__get_Keys(pSVar1,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S)
    ;
    if (__this_02 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 &stack0xffffffffffffffb8,__this_02,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
      while( true ) {
        __this_00.fields._8_8_ = pIVar4;
        __this_00.fields._dictionary = pSVar3;
        __this_00.fields._currentKey = key;
        bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                          (__this_00,(MethodInfo_31D0850 *)&stack0xffffffffffffffb8);
        handle.fields.value = TypeRef_MapEditorAddObjectPanel.fields.value;
        if ((char)bVar2 == '\0') {
          __this_01.fields._8_8_ = pIVar4;
          __this_01.fields._dictionary = pSVar3;
          __this_01.fields._currentKey = key;
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                    (__this_01,(MethodInfo_31D0840 *)&stack0xffffffffffffffb8);
          return;
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._categoryPanelTypes;
        pIVar5 = key;
        if (*(int *)(DAT_05711100 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        value = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary<object__object>__Add
                  (pSVar1,key,(Il2CppObject *)value,MethodInfo_Void_Add);
        key = pIVar5;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddObjectPopup$$OnBottomBarButtonClick
// il2cpp: void UI_MapEditorAddObjectPopup__OnBottomBarButtonClick (UI_MapEditorAddObjectPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4106130

void UI_MapEditorAddObjectPopup__OnBottomBarButtonClick
               (UI_MapEditorAddObjectPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._22_Hide.method,method,vtable_dispatch);
  return;
}


// UI.MapEditorAddObjectPopup$$.ctor
// il2cpp: void UI_MapEditorAddObjectPopup___ctor (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x4106150

void UI_MapEditorAddObjectPopup___ctor(UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  
  if (DAT_05704895 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_05704895 = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Search = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Search);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddObjectPopup$$<Setup>b__18_0
// il2cpp: void UI_MapEditorAddObjectPopup___Setup_b__18_0 (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x41061e0

void UI_MapEditorAddObjectPopup__<Setup>b__18_0
               (UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddObjectPopup$$<Setup>b__18_1
// il2cpp: void UI_MapEditorAddObjectPopup___Setup_b__18_1 (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x41061f0

void UI_MapEditorAddObjectPopup__<Setup>b__18_1
               (UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (DAT_05704896 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_05704896 = '\x01';
    in_RDX = extraout_RDX;
  }
  vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtable_dispatch);
  return;
}


