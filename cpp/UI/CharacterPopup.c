// Type: UI.CharacterPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CharacterPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/CharacterPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.CharacterPopup.<>c__DisplayClass16_0$$.ctor
// il2cpp: void UI_CharacterPopup___c__DisplayClass16_0___ctor (UI_CharacterPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x4096660

void UI_CharacterPopup_<>c__DisplayClass16_0___ctor
               (UI_CharacterPopup___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterPopup.<>c__DisplayClass16_0$$<SetupTopButtons>b__0
// il2cpp: void UI_CharacterPopup___c__DisplayClass16_0___SetupTopButtons_b__0 (UI_CharacterPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x4096cf0

void UI_CharacterPopup_<>c__DisplayClass16_0__<SetupTopButtons>b__0
               (UI_CharacterPopup___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  UI_CharacterPopup_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_CharacterPopup_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(__this->fields).buttonName,
               (pUVar1->klass->vtable)._28_SetCategoryPanel.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterPopup$$get_Title
// il2cpp: System_String_o* UI_CharacterPopup__get_Title (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x4095df0

System_String_o * UI_CharacterPopup__get_Title(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.CharacterPopup$$get_Width
// il2cpp: float UI_CharacterPopup__get_Width (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x4095e10

float UI_CharacterPopup__get_Width(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  return 1000.0;
}


// UI.CharacterPopup$$get_Height
// il2cpp: float UI_CharacterPopup__get_Height (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x4095e20

float UI_CharacterPopup__get_Height(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  return 470.0;
}


// UI.CharacterPopup$$get_CategoryPanel
// il2cpp: bool UI_CharacterPopup__get_CategoryPanel (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x4095e30

bool_conflict UI_CharacterPopup__get_CategoryPanel(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CharacterPopup$$get_CategoryButtons
// il2cpp: bool UI_CharacterPopup__get_CategoryButtons (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x4095e40

bool_conflict UI_CharacterPopup__get_CategoryButtons(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CharacterPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_CharacterPopup__get_DefaultCategoryPanel (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x4095e50

System_String_o *
UI_CharacterPopup__get_DefaultCategoryPanel(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  if (DAT_057045a9 == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_057045a9 = '\x01';
  }
  return "";
}


// UI.CharacterPopup$$Setup
// il2cpp: void UI_CharacterPopup__Setup (UI_CharacterPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4095e80

void UI_CharacterPopup__Setup(UI_CharacterPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  bool_conflict bVar2;
  System_Type_o *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *extraout_RDX;
  
  if (DAT_057045aa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057045aa = '\x01';
    method = extraout_RDX;
  }
  (*(__this->klass->vtable)._59_SetAllowedCategories.methodPtr)
            (__this,(__this->klass->vtable)._59_SetAllowedCategories.method,method);
  pSVar1 = (__this->fields)._allowedCategories;
  pSVar3 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = UI_UIManager__GetLastcategory(pSVar3,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
    bVar2 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)pSVar4,
                       MethodInfo_Boolean_Contains);
    if ((char)bVar2 == '\0') {
      pSVar3 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._allowedCategories;
      if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_04095fa7;
      pSVar4 = (System_String_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,0,MethodInfo_String_get_Item);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UI_UIManager__SetLastCategory(pSVar3,pSVar4,(MethodInfo *)0x0);
    }
    UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._60_SetupBottomButtons.methodPtr)
              (__this,(__this->klass->vtable)._60_SetupBottomButtons.method);
    return;
  }
LAB_04095fa7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterPopup$$SetAllowedCategories
// il2cpp: void UI_CharacterPopup__SetAllowedCategories (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x4095fb0

void UI_CharacterPopup__SetAllowedCategories(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  System_String_array *pSVar5;
  long lVar6;
  long lVar7;
  System_String_o *pSVar8;
  
  if (DAT_057045ab == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&"Human");
    il2cpp_init_method_metadata(&"Titan");
    il2cpp_init_method_metadata(&"Shifter");
    DAT_057045ab = '\x01';
  }
  pSVar8 = "Human";
  lVar6 = MethodInfo_Void_Add;
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x58), lVar3 == 0)) ||
     (*(long *)(lVar3 + 0x60) == 0)) goto LAB_040962a3;
  if (*(char *)(*(long *)(lVar3 + 0x60) + 0x11) == '\0') {
    if (*(long *)(lVar3 + 0x58) == 0) goto LAB_040962a3;
    if (*(char *)(*(long *)(lVar3 + 0x58) + 0x11) != '\0') goto LAB_04096092;
    if (*(long *)(lVar3 + 0x70) == 0) goto LAB_040962a3;
    if (*(char *)(*(long *)(lVar3 + 0x70) + 0x11) != '\0') goto LAB_04096092;
    if (*(long *)(lVar3 + 0x68) == 0) goto LAB_040962a3;
    if (*(char *)(*(long *)(lVar3 + 0x68) + 0x11) != '\0') goto LAB_04096092;
LAB_0409610a:
    lVar6 = *(long *)(lVar3 + 0x78);
    lVar7 = MethodInfo_Void_Add;
    pSVar8 = "Titan";
  }
  else {
LAB_04096092:
    pSVar4 = (__this->fields)._allowedCategories;
    if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_040962a3;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (pSVar4->fields)._items;
    if (pSVar5 == (System_String_array *)0x0) goto LAB_040962a3;
    uVar2 = (pSVar4->fields)._size;
    if ((uint)pSVar5->max_length <= uVar2) {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pSVar8,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      goto LAB_0409610a;
    }
    (pSVar4->fields)._size = uVar2 + 1;
    pSVar5->m_Items[(int)uVar2] = pSVar8;
    il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2);
    lVar6 = *(long *)(lVar3 + 0x78);
    lVar7 = MethodInfo_Void_Add;
    pSVar8 = "Titan";
  }
  MethodInfo_Void_Add = lVar7;
  "Titan" = pSVar8;
  if (lVar6 == 0) goto LAB_040962a3;
  if (*(char *)(lVar6 + 0x11) == '\0') {
LAB_04096198:
    lVar3 = *(long *)(lVar3 + 0x88);
    lVar6 = MethodInfo_Void_Add;
    pSVar8 = "Shifter";
  }
  else {
    pSVar4 = (__this->fields)._allowedCategories;
    if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_040962a3;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (pSVar4->fields)._items;
    if (pSVar5 == (System_String_array *)0x0) goto LAB_040962a3;
    uVar2 = (pSVar4->fields)._size;
    if ((uint)pSVar5->max_length <= uVar2) {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pSVar8,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      goto LAB_04096198;
    }
    (pSVar4->fields)._size = uVar2 + 1;
    pSVar5->m_Items[(int)uVar2] = pSVar8;
    il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2);
    lVar3 = *(long *)(lVar3 + 0x88);
    lVar6 = MethodInfo_Void_Add;
    pSVar8 = "Shifter";
  }
  MethodInfo_Void_Add = lVar6;
  "Shifter" = pSVar8;
  if (lVar3 == 0) goto LAB_040962a3;
  if (*(char *)(lVar3 + 0x11) == '\0') {
LAB_04096229:
    pSVar4 = (__this->fields)._allowedCategories;
    lVar3 = MethodInfo_Void_Add;
    pSVar8 = "Human";
  }
  else {
    pSVar4 = (__this->fields)._allowedCategories;
    if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_040962a3;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (pSVar4->fields)._items;
    if (pSVar5 == (System_String_array *)0x0) goto LAB_040962a3;
    uVar2 = (pSVar4->fields)._size;
    if ((uint)pSVar5->max_length <= uVar2) {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pSVar8,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      goto LAB_04096229;
    }
    (pSVar4->fields)._size = uVar2 + 1;
    pSVar5->m_Items[(int)uVar2] = pSVar8;
    il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2);
    pSVar4 = (__this->fields)._allowedCategories;
    lVar3 = MethodInfo_Void_Add;
    pSVar8 = "Human";
  }
  MethodInfo_Void_Add = lVar3;
  "Human" = pSVar8;
  if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
    if ((pSVar4->fields)._size != 0) {
      return;
    }
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (pSVar4->fields)._items;
    if (pSVar5 != (System_String_array *)0x0) {
      if ((int)pSVar5->max_length != 0) {
        (pSVar4->fields)._size = 1;
        pSVar5->m_Items[0] = pSVar8;
        il2cpp_runtime_glue(pSVar5->m_Items);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pSVar8,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
LAB_040962a3:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterPopup$$SetupTopButtons
// il2cpp: void UI_CharacterPopup__SetupTopButtons (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x40962b0

void UI_CharacterPopup__SetupTopButtons(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  UnityEngine_Transform_o *parent;
  Il2CppClass *pIVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_04;
  Il2CppObject *pIVar4;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *__this_05;
  Il2CppObject *pIVar5;
  undefined8 in_stack_ffffffffffffff88;
  UI_CharacterPopup_o *__this_06;
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  
  if (DAT_057045ac == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupTopButtons_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass16_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    DAT_057045ac = '\x01';
  }
  __this_06 = __this;
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_04 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_04,0x1c,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._allowedCategories;
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&SStack_48,(System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
  pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_48.fields._list;
  while( true ) {
    __this_02.fields._8_8_ = __this_06;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
    __this_02.fields._current = (Il2CppObject *)pSVar6;
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
    if ((char)bVar2 == '\0') {
      __this_03.fields._8_8_ = __this_06;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
      __this_03.fields._current = (Il2CppObject *)pSVar6;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this_06,(MethodInfo *)0x0);
      return;
    }
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass16_0);
    System_Object___ctor(pIVar4,(MethodInfo *)0x0);
    if (pIVar4 == (Il2CppObject *)0x0) break;
    pIVar4[1].monitor = __this_06;
    il2cpp_runtime_glue(&pIVar4[1].monitor);
    pIVar5 = pIVar4 + 1;
    pIVar4[1].klass = (Il2CppClass *)SStack_48.fields._current;
    il2cpp_runtime_glue(pIVar5);
    parent = (__this_06->fields).TopBar;
    pIVar1 = pIVar5->klass;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = UI_UIManager__GetLocaleCommon((System_String_o *)pIVar1,(MethodInfo *)0x0);
    onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    __this_05 = UI_ElementFactory__CreateCategoryButton
                          (parent,__this_04,pSVar3,onClick,(MethodInfo *)0x0);
    if (__this_05 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this_06->fields)._topButtons;
    pIVar1 = pIVar5->klass;
    pIVar4 = UnityEngine_GameObject__GetComponent<object>(__this_05,MethodInfo_Button_GetComponent_Button);
    if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this_01,(Il2CppObject *)pIVar1,pIVar4,MethodInfo_Void_Add);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterPopup$$RegisterCategoryPanels
// il2cpp: void UI_CharacterPopup__RegisterCategoryPanels (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x4096670

void UI_CharacterPopup__RegisterCategoryPanels(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_RuntimeTypeHandle_o handle;
  System_Type_o *pSVar2;
  
  if (DAT_057045ad == '\0') {
    il2cpp_init_method_metadata(&TypeRef_CharacterHumanPanel);
    il2cpp_init_method_metadata(&TypeRef_CharacterShifterPanel);
    il2cpp_init_method_metadata(&TypeRef_CharacterTitanPanel);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&"Human");
    il2cpp_init_method_metadata(&"Titan");
    il2cpp_init_method_metadata(&"Shifter");
    DAT_057045ad = '\x01';
  }
  handle.fields.value = TypeRef_CharacterHumanPanel.fields.value;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           (__this->fields)._categoryPanelTypes;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Add
              (pSVar1,"Human",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._categoryPanelTypes;
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_CharacterTitanPanel,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Add
                (pSVar1,"Titan",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._categoryPanelTypes;
      pSVar2 = System_Type__GetTypeFromHandle(TypeRef_CharacterShifterPanel,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__Add
                  (pSVar1,"Shifter",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterPopup$$SetupBottomButtons
// il2cpp: void UI_CharacterPopup__SetupBottomButtons (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x40967b0

void UI_CharacterPopup__SetupBottomButtons(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  
  if (DAT_057045ae == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupBottomButtons_b__18_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupBottomButtons_b__18_1);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"SpectateButton");
    il2cpp_init_method_metadata(&"Join");
    il2cpp_init_method_metadata(&"Bottom");
    il2cpp_init_method_metadata(&"");
    DAT_057045ae = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = (__this->fields).LocaleCategory;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = UI_UIManager__GetLocale
                     (pSVar2,"Bottom","SpectateButton","","",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Join",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  return;
}


// UI.CharacterPopup$$OnBottomBarButtonClick
// il2cpp: void UI_CharacterPopup__OnBottomBarButtonClick (UI_CharacterPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4096990

void UI_CharacterPopup__OnBottomBarButtonClick
               (UI_CharacterPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  GameManagers_InGameManager_o *__this_00;
  long lVar5;
  Settings_TypedSetting_int__o *pSVar6;
  long lVar7;
  bool_conflict bVar8;
  MethodInfo *method_00;
  UI_CharacterPopup_o *__this_01;
  
  if (DAT_057045af == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"Spectate");
    il2cpp_init_method_metadata(&"Join");
    DAT_057045af = '\x01';
  }
  __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    bVar3 = (TypeInfo_InGameManager->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar3) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(__this_00);
    }
  }
  bVar8 = System_String__op_Equality(name,"Spectate",(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
    if ((lVar5 == 0) ||
       (pSVar6 = *(Settings_TypedSetting_int__o **)(lVar5 + 0x20),
       pSVar6 == (Settings_TypedSetting_int__o *)0x0)) goto LAB_04096c5d;
    Settings_TypedSetting<int>__set_Value(pSVar6,1,MethodInfo_Void_set_Value);
    if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
      il2cpp_init_class();
    }
    GameManagers_InGameManager__UpdatePlayerName((MethodInfo *)0x0);
    GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)0x0);
    goto LAB_04096c23;
  }
  bVar8 = System_String__op_Equality(name,"Join",(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
  if ((lVar5 == 0) ||
     (pSVar6 = *(Settings_TypedSetting_int__o **)(lVar5 + 0x20),
     pSVar6 == (Settings_TypedSetting_int__o *)0x0)) goto LAB_04096c5d;
  method_00 = (MethodInfo *)0x2;
  Settings_TypedSetting<int>__set_Value(pSVar6,2,MethodInfo_Void_set_Value);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
    bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if ((char)bVar8 == '\0') goto LAB_04096b66;
LAB_04096bf2:
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
LAB_04096c5d:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(char *)((long)&(__this_00->fields)._gameSettingsLoaded + 1) != '\0') goto LAB_04096bfe;
    method_00 = (MethodInfo *)0x0;
    GameManagers_InGameManager__SpawnPlayer(__this_00,0,(MethodInfo *)0x0);
    iVar4 = *(int *)&(TypeInfo_InGameManager->_2).field_0x1c;
  }
  else {
    bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if ((char)bVar8 != '\0') goto LAB_04096bf2;
LAB_04096b66:
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar5 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if ((((lVar5 == 0) || (lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50), lVar7 == 0)) ||
        (lVar7 = *(long *)(lVar7 + 0x58), lVar7 == 0)) ||
       (lVar7 = *(long *)(lVar7 + 0x38), lVar7 == 0)) goto LAB_04096c5d;
    fVar2 = *(float *)(lVar7 + 0x14);
    pfVar1 = (float *)(lVar5 + 0x20);
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) goto LAB_04096bf2;
LAB_04096bfe:
    iVar4 = *(int *)&(TypeInfo_InGameManager->_2).field_0x1c;
  }
  if (iVar4 == 0) {
    il2cpp_init_class();
  }
  GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)0x0);
  __this_01 = (UI_CharacterPopup_o *)0x0;
  GameManagers_InGameManager__OnCharacterChosen((MethodInfo *)0x0);
  UI_CharacterPopup__SaveLastCharacter(__this_01,method_00);
LAB_04096c23:
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.CharacterPopup$$SaveLastCharacter
// il2cpp: void UI_CharacterPopup__SaveLastCharacter (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x408e040

void UI_CharacterPopup__SaveLastCharacter(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  System_String_o *pSVar3;
  Settings_TypedSetting_T__o *pSVar4;
  long *plVar5;
  bool_conflict bVar6;
  
  if (DAT_057045b0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerCharacter);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_057045b0 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
  if (((lVar1 == 0) || (lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70), lVar2 == 0)) ||
     (*(long *)(lVar2 + 0x28) == 0)) goto LAB_0408e30c;
  lVar1 = *(long *)(lVar1 + 0x28);
  pSVar3 = *(System_String_o **)(*(long *)(lVar2 + 0x28) + 0x18);
  if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = System_String__op_Equality
                    (pSVar3,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (*(long *)(lVar2 + 0x28) == 0) goto LAB_0408e30c;
    pSVar3 = *(System_String_o **)(*(long *)(lVar2 + 0x28) + 0x18);
    if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = System_String__op_Equality
                      (pSVar3,*(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8),
                       (MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
    if (lVar1 == 0) goto LAB_0408e30c;
    pSVar4 = *(Settings_TypedSetting_T__o **)(lVar1 + 0x28);
    if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pSVar4 == (Settings_TypedSetting_T__o *)0x0) goto LAB_0408e30c;
    Settings_TypedSetting<object>__set_Value
              (pSVar4,*(Il2CppObject **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8),MethodInfo_Void_set_Value);
    if ((*(long *)(lVar2 + 0x40) == 0) ||
       (*(Settings_TypedSetting_int__o **)(lVar1 + 0x40) == (Settings_TypedSetting_int__o *)0x0))
    goto LAB_0408e30c;
    Settings_TypedSetting<int>__set_Value
              (*(Settings_TypedSetting_int__o **)(lVar1 + 0x40),
               *(int32_t *)(*(long *)(lVar2 + 0x40) + 0x14),MethodInfo_Void_set_Value);
    lVar2 = *(long *)(lVar2 + 0x30);
    if (lVar2 == 0) goto LAB_0408e30c;
    pSVar4 = *(Settings_TypedSetting_T__o **)(lVar1 + 0x30);
  }
  else {
    if (lVar1 == 0) goto LAB_0408e30c;
    pSVar4 = *(Settings_TypedSetting_T__o **)(lVar1 + 0x28);
    if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pSVar4 == (Settings_TypedSetting_T__o *)0x0) goto LAB_0408e30c;
    Settings_TypedSetting<object>__set_Value
              (pSVar4,(Il2CppObject *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8),MethodInfo_Void_set_Value);
    if ((*(long *)(lVar2 + 0x48) == 0) ||
       (*(Settings_TypedSetting_int__o **)(lVar1 + 0x48) == (Settings_TypedSetting_int__o *)0x0))
    goto LAB_0408e30c;
    Settings_TypedSetting<int>__set_Value
              (*(Settings_TypedSetting_int__o **)(lVar1 + 0x48),
               *(int32_t *)(*(long *)(lVar2 + 0x48) + 0x14),MethodInfo_Void_set_Value);
    if ((*(long *)(lVar2 + 0x40) == 0) ||
       (*(Settings_TypedSetting_int__o **)(lVar1 + 0x40) == (Settings_TypedSetting_int__o *)0x0))
    goto LAB_0408e30c;
    Settings_TypedSetting<int>__set_Value
              (*(Settings_TypedSetting_int__o **)(lVar1 + 0x40),
               *(int32_t *)(*(long *)(lVar2 + 0x40) + 0x14),MethodInfo_Void_set_Value);
    if ((*(long *)(lVar2 + 0x30) == 0) ||
       (*(Settings_TypedSetting_T__o **)(lVar1 + 0x30) == (Settings_TypedSetting_T__o *)0x0))
    goto LAB_0408e30c;
    Settings_TypedSetting<object>__set_Value
              (*(Settings_TypedSetting_T__o **)(lVar1 + 0x30),
               *(Il2CppObject **)(*(long *)(lVar2 + 0x30) + 0x18),MethodInfo_Void_set_Value);
    lVar2 = *(long *)(lVar2 + 0x38);
    if (lVar2 == 0) goto LAB_0408e30c;
    pSVar4 = *(Settings_TypedSetting_T__o **)(lVar1 + 0x38);
  }
  if (pSVar4 != (Settings_TypedSetting_T__o *)0x0) {
    Settings_TypedSetting<object>__set_Value(pSVar4,*(Il2CppObject **)(lVar2 + 0x18),MethodInfo_Void_set_Value);
    plVar5 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
      return;
    }
  }
LAB_0408e30c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterPopup$$.ctor
// il2cpp: void UI_CharacterPopup___ctor (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x408e330

void UI_CharacterPopup___ctor(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (DAT_057045b1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"CharacterPopup");
    DAT_057045b1 = '\x01';
  }
  (__this->fields).LocaleCategory = "CharacterPopup";
  il2cpp_runtime_glue(&(__this->fields).LocaleCategory);
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  (__this->fields)._allowedCategories = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._allowedCategories);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterPopup$$<SetupBottomButtons>b__18_0
// il2cpp: void UI_CharacterPopup___SetupBottomButtons_b__18_0 (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x4096c70

void UI_CharacterPopup__<SetupBottomButtons>b__18_0(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057045b2 == '\0') {
    il2cpp_init_method_metadata(&"Spectate");
    DAT_057045b2 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterPopup__OnBottomBarButtonClick(__this,"Spectate",in_RDX);
  return;
}


// UI.CharacterPopup$$<SetupBottomButtons>b__18_1
// il2cpp: void UI_CharacterPopup___SetupBottomButtons_b__18_1 (UI_CharacterPopup_o* __this, const MethodInfo* method);
// 0x4096cb0

void UI_CharacterPopup__<SetupBottomButtons>b__18_1(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057045b3 == '\0') {
    il2cpp_init_method_metadata(&"Join");
    DAT_057045b3 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterPopup__OnBottomBarButtonClick(__this,"Join",in_RDX);
  return;
}


