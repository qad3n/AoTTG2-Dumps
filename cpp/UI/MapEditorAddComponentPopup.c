// Type: UI.MapEditorAddComponentPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MapEditorAddComponentPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MapEditorMenu/MapEditorAddComponentPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.MapEditorAddComponentPopup.<>c__DisplayClass20_0$$.ctor
// il2cpp: void UI_MapEditorAddComponentPopup___c__DisplayClass20_0___ctor (UI_MapEditorAddComponentPopup___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x41029a0

void UI_MapEditorAddComponentPopup_<>c__DisplayClass20_0___ctor
               (UI_MapEditorAddComponentPopup___c__DisplayClass20_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPopup.<>c__DisplayClass20_0$$<SetupTopButtons>b__0
// il2cpp: void UI_MapEditorAddComponentPopup___c__DisplayClass20_0___SetupTopButtons_b__0 (UI_MapEditorAddComponentPopup___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x4102e10

void UI_MapEditorAddComponentPopup_<>c__DisplayClass20_0__<SetupTopButtons>b__0
               (UI_MapEditorAddComponentPopup___c__DisplayClass20_0_o *__this,MethodInfo *method)

{
  UI_MapEditorAddComponentPopup_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorAddComponentPopup_o *)0x0) {
    UI_MapEditorAddComponentPopup__OnTopBarButtonClick(__this_00,(__this->fields).buttonName,in_RDX)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddComponentPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorAddComponentPopup__get_Title (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x4102340

System_String_o *
UI_MapEditorAddComponentPopup__get_Title(UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.MapEditorAddComponentPopup$$get_Width
// il2cpp: float UI_MapEditorAddComponentPopup__get_Width (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x4102360

float UI_MapEditorAddComponentPopup__get_Width
                (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.MapEditorAddComponentPopup$$get_Height
// il2cpp: float UI_MapEditorAddComponentPopup__get_Height (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x4102370

float UI_MapEditorAddComponentPopup__get_Height
                (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  return 600.0;
}


// UI.MapEditorAddComponentPopup$$get_CategoryPanel
// il2cpp: bool UI_MapEditorAddComponentPopup__get_CategoryPanel (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x4102380

bool_conflict
UI_MapEditorAddComponentPopup__get_CategoryPanel
          (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorAddComponentPopup$$get_CategoryButtons
// il2cpp: bool UI_MapEditorAddComponentPopup__get_CategoryButtons (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x4102390

bool_conflict
UI_MapEditorAddComponentPopup__get_CategoryButtons
          (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorAddComponentPopup$$get_TopBarHeight
// il2cpp: float UI_MapEditorAddComponentPopup__get_TopBarHeight (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x41023a0

float UI_MapEditorAddComponentPopup__get_TopBarHeight
                (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  return 65.0;
}


// UI.MapEditorAddComponentPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_MapEditorAddComponentPopup__get_DefaultCategoryPanel (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x41023b0

System_String_o *
UI_MapEditorAddComponentPopup__get_DefaultCategoryPanel
          (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  if (DAT_0570487d == '\0') {
    il2cpp_init_method_metadata(&"General");
    DAT_0570487d = '\x01';
  }
  return "General";
}


// UI.MapEditorAddComponentPopup$$Setup
// il2cpp: void UI_MapEditorAddComponentPopup__Setup (UI_MapEditorAddComponentPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x41023e0

void UI_MapEditorAddComponentPopup__Setup
               (UI_MapEditorAddComponentPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

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
  
  if (DAT_0570487e == '\0') {
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
    DAT_0570487e = '\x01';
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


// UI.MapEditorAddComponentPopup$$GetCategories
// il2cpp: System_String_array* UI_MapEditorAddComponentPopup__GetCategories (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x4102690

System_String_array *
UI_MapEditorAddComponentPopup__GetCategories
          (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (DAT_0570487f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"Custom");
    il2cpp_init_method_metadata(&"Internal");
    il2cpp_init_method_metadata(&"All");
    DAT_0570487f = '\x01';
  }
  pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,4);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "All";
      il2cpp_runtime_glue(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = "General";
        il2cpp_runtime_glue(pSVar1->m_Items + 1);
        if (2 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[2] = "Internal";
          il2cpp_runtime_glue(pSVar1->m_Items + 2);
          if (3 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[3] = "Custom";
            il2cpp_runtime_glue(pSVar1->m_Items + 3);
            return pSVar1;
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


// UI.MapEditorAddComponentPopup$$SetupTopButtons
// il2cpp: void UI_MapEditorAddComponentPopup__SetupTopButtons (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x4102790

void UI_MapEditorAddComponentPopup__SetupTopButtons
               (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  Il2CppClass *pIVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_01;
  long lVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *__this_02;
  ulong uVar4;
  
  if (DAT_05704880 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupTopButtons_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass20_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    DAT_05704880 = '\x01';
  }
  themePanel = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x14,120.0,20.0,themePanel,(MethodInfo *)0x0);
  lVar2 = (*(__this->klass->vtable)._59_GetCategories.methodPtr)(__this);
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar4 = 0;
      do {
        pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass20_0);
        System_Object___ctor(pIVar3,(MethodInfo *)0x0);
        if (pIVar3 == (Il2CppObject *)0x0) goto LAB_04102987;
        pIVar3[1].monitor = __this;
        il2cpp_runtime_glue(&pIVar3[1].monitor,__this);
        if (*(uint *)(lVar2 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pIVar3[1].klass = *(Il2CppClass **)(lVar2 + 0x20 + uVar4 * 8);
        il2cpp_runtime_glue(pIVar3 + 1);
        parent = (__this->fields).TopBar;
        pIVar1 = pIVar3[1].klass;
        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        __this_02 = UI_ElementFactory__CreateCategoryButton
                              (parent,__this_01,(System_String_o *)pIVar1,onClick,(MethodInfo *)0x0)
        ;
        if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto LAB_04102987;
        __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (__this->fields)._topButtons;
        pIVar1 = pIVar3[1].klass;
        pIVar3 = UnityEngine_GameObject__GetComponent<object>(__this_02,MethodInfo_Button_GetComponent_Button);
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_04102987;
        System_Collections_Generic_Dictionary<object__object>__Add
                  (__this_00,(Il2CppObject *)pIVar1,pIVar3,MethodInfo_Void_Add);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)*(int *)(lVar2 + 0x18));
    }
    UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
    return;
  }
LAB_04102987:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddComponentPopup$$OnTopBarButtonClick
// il2cpp: void UI_MapEditorAddComponentPopup__OnTopBarButtonClick (UI_MapEditorAddComponentPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x41029b0

void UI_MapEditorAddComponentPopup__OnTopBarButtonClick
               (UI_MapEditorAddComponentPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  
  if (DAT_05704881 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704881 = '\x01';
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
      if (pUVar1 == (UI_InputSettingElement_o *)0x0) goto LAB_04102a83;
      (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
    }
    vtable_dispatch = (__this->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtable_dispatch)
              (__this,name,(__this->klass->vtable)._28_SetCategoryPanel.method,vtable_dispatch
              );
    return;
  }
LAB_04102a83:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddComponentPopup$$RegisterCategoryPanels
// il2cpp: void UI_MapEditorAddComponentPopup__RegisterCategoryPanels (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x4102a90

void UI_MapEditorAddComponentPopup__RegisterCategoryPanels
               (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

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
  
  if (DAT_05704882 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&TypeRef_MapEditorAddComponentPanel);
    DAT_05704882 = '\x01';
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
        handle.fields.value = TypeRef_MapEditorAddComponentPanel.fields.value;
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


// UI.MapEditorAddComponentPopup$$Show
// il2cpp: void UI_MapEditorAddComponentPopup__Show (UI_MapEditorAddComponentPopup_o* __this, UnityEngine_Events_UnityAction_o* onLoad, const MethodInfo* method);
// 0x4102c80

void UI_MapEditorAddComponentPopup__Show
               (UI_MapEditorAddComponentPopup_o *__this,UnityEngine_Events_UnityAction_o *onLoad,
               MethodInfo *method)

{
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._onLoad = onLoad;
  il2cpp_runtime_glue(&(__this->fields)._onLoad);
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPopup$$OnSelectItem
// il2cpp: void UI_MapEditorAddComponentPopup__OnSelectItem (UI_MapEditorAddComponentPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4102220

void UI_MapEditorAddComponentPopup__OnSelectItem
               (UI_MapEditorAddComponentPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  
  if (DAT_05704883 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704883 = '\x01';
  }
  __this_00 = (__this->fields).FinishSetting;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)name,MethodInfo_Void_set_Value);
    pUVar1 = (__this->fields)._onLoad;
    if (pUVar1 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
      vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
      (*vtable_dispatch)
                (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddComponentPopup$$OnBottomBarButtonClick
// il2cpp: void UI_MapEditorAddComponentPopup__OnBottomBarButtonClick (UI_MapEditorAddComponentPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4102cc0

void UI_MapEditorAddComponentPopup__OnBottomBarButtonClick
               (UI_MapEditorAddComponentPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._22_Hide.method,method,vtable_dispatch);
  return;
}


// UI.MapEditorAddComponentPopup$$.ctor
// il2cpp: void UI_MapEditorAddComponentPopup___ctor (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x4102ce0

void UI_MapEditorAddComponentPopup___ctor
               (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (DAT_05704884 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_05704884 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Search = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Search,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).FinishSetting = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).FinishSetting);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPopup$$<Setup>b__18_0
// il2cpp: void UI_MapEditorAddComponentPopup___Setup_b__18_0 (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x4102dc0

void UI_MapEditorAddComponentPopup__<Setup>b__18_0
               (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPopup$$<Setup>b__18_1
// il2cpp: void UI_MapEditorAddComponentPopup___Setup_b__18_1 (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x4102dd0

void UI_MapEditorAddComponentPopup__<Setup>b__18_1
               (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (DAT_05704885 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_05704885 = '\x01';
    in_RDX = extraout_RDX;
  }
  vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtable_dispatch);
  return;
}


