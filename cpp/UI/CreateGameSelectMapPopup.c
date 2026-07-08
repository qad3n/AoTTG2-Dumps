// Type: UI.CreateGameSelectMapPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CreateGameSelectMapPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/CreateGamePopup/CreateGameSelectMapPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.CreateGameSelectMapPopup.<>c__DisplayClass17_0$$.ctor
// il2cpp: void UI_CreateGameSelectMapPopup___c__DisplayClass17_0___ctor (UI_CreateGameSelectMapPopup___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x4071fd0

void UI_CreateGameSelectMapPopup_<>c__DisplayClass17_0___ctor
               (UI_CreateGameSelectMapPopup___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameSelectMapPopup.<>c__DisplayClass17_0$$<SetupTopButtons>b__0
// il2cpp: void UI_CreateGameSelectMapPopup___c__DisplayClass17_0___SetupTopButtons_b__0 (UI_CreateGameSelectMapPopup___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x4072300

void UI_CreateGameSelectMapPopup_<>c__DisplayClass17_0__<SetupTopButtons>b__0
               (UI_CreateGameSelectMapPopup___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  UI_CreateGameSelectMapPopup_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_CreateGameSelectMapPopup_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(__this->fields).buttonName,
               (pUVar1->klass->vtable)._28_SetCategoryPanel.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameSelectMapPopup$$get_Title
// il2cpp: System_String_o* UI_CreateGameSelectMapPopup__get_Title (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x4071840

System_String_o *
UI_CreateGameSelectMapPopup__get_Title(UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.CreateGameSelectMapPopup$$get_Width
// il2cpp: float UI_CreateGameSelectMapPopup__get_Width (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x4071860

float UI_CreateGameSelectMapPopup__get_Width
                (UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  return 1095.0;
}


// UI.CreateGameSelectMapPopup$$get_Height
// il2cpp: float UI_CreateGameSelectMapPopup__get_Height (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x4071870

float UI_CreateGameSelectMapPopup__get_Height
                (UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  return 1000.0;
}


// UI.CreateGameSelectMapPopup$$get_CategoryPanel
// il2cpp: bool UI_CreateGameSelectMapPopup__get_CategoryPanel (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x4071880

bool_conflict
UI_CreateGameSelectMapPopup__get_CategoryPanel
          (UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CreateGameSelectMapPopup$$get_CategoryButtons
// il2cpp: bool UI_CreateGameSelectMapPopup__get_CategoryButtons (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x4071890

bool_conflict
UI_CreateGameSelectMapPopup__get_CategoryButtons
          (UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CreateGameSelectMapPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_CreateGameSelectMapPopup__get_DefaultCategoryPanel (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x40718a0

System_String_o *
UI_CreateGameSelectMapPopup__get_DefaultCategoryPanel
          (UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  if (DAT_057044ab == '\0') {
    il2cpp_init_method_metadata(&"General");
    DAT_057044ab = '\x01';
  }
  return "General";
}


// UI.CreateGameSelectMapPopup$$Show
// il2cpp: void UI_CreateGameSelectMapPopup__Show (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x40718d0

void UI_CreateGameSelectMapPopup__Show(UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_057044ac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_057044ac = '\x01';
  }
  __this_00 = (__this->fields).SearchSetting;
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
      if (pUVar1 == (UI_InputSettingElement_o *)0x0) goto LAB_0407199c;
      (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)();
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
    return;
  }
LAB_0407199c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameSelectMapPopup$$Setup
// il2cpp: void UI_CreateGameSelectMapPopup__Setup (UI_CreateGameSelectMapPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40719b0

void UI_CreateGameSelectMapPopup__Setup
               (UI_CreateGameSelectMapPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Settings_StringSetting_o *setting;
  System_String_o *pSVar2;
  UI_ElementStyle_o *style;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_Events_UnityAction_o *onEndEdit;
  UnityEngine_GameObject_o *pUVar4;
  UI_InputSettingElement_o *pUVar5;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (DAT_057044ad == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__15_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__15_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__15_2);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_IgnoreScaler_AddComponent_IgnoreScaler);
    il2cpp_init_method_metadata(&MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Search");
    DAT_057044ad = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)(*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)(__this);
  style = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x18;
  (style->fields).TitleWidth = 70.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar2;
  il2cpp_runtime_glue(&(style->fields).ThemePanel,pSVar2);
  pUVar1 = (__this->fields).BottomBar;
  setting = (__this->fields).SearchSetting;
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  onEndEdit = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  method_00 = "";
  pUVar4 = UI_ElementFactory__CreateInputSetting
                     (pUVar1,style,(Settings_BaseSetting_o *)setting,"Search",
                      (System_String_o *)"",260.0,40.0,0,pUVar3,onEndEdit,
                      (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                      in_stack_ffffffffffffffc8);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = (UI_InputSettingElement_o *)
             UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
    (__this->fields)._searchInput = pUVar5;
    il2cpp_runtime_glue(&(__this->fields)._searchInput);
    pUVar1 = (__this->fields).BottomBar;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
    pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    UI_ElementFactory__CreateTextButton(pUVar1,style,pSVar2,0.0,pUVar3,method_00);
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__AddComponent<object>(pUVar4,MethodInfo_IgnoreScaler_AddComponent_IgnoreScaler);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameSelectMapPopup$$GetCategories
// il2cpp: System_String_array* UI_CreateGameSelectMapPopup__GetCategories (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x4071c40

System_String_array *
UI_CreateGameSelectMapPopup__GetCategories(UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (DAT_057044ae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"Custom");
    il2cpp_init_method_metadata(&"Racing Hard");
    il2cpp_init_method_metadata(&"Mission");
    il2cpp_init_method_metadata(&"Cage Fight");
    il2cpp_init_method_metadata(&"PVP");
    il2cpp_init_method_metadata(&"Racing Basic");
    DAT_057044ae = '\x01';
  }
  pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,7);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "General";
      il2cpp_runtime_glue(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = "Mission";
        il2cpp_runtime_glue(pSVar1->m_Items + 1);
        if (2 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[2] = "PVP";
          il2cpp_runtime_glue(pSVar1->m_Items + 2);
          if (3 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[3] = "Cage Fight";
            il2cpp_runtime_glue(pSVar1->m_Items + 3);
            if (4 < (uint)pSVar1->max_length) {
              pSVar1->m_Items[4] = "Racing Basic";
              il2cpp_runtime_glue(pSVar1->m_Items + 4);
              if (5 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[5] = "Racing Hard";
                il2cpp_runtime_glue(pSVar1->m_Items + 5);
                if (6 < (uint)pSVar1->max_length) {
                  pSVar1->m_Items[6] = "Custom";
                  il2cpp_runtime_glue(pSVar1->m_Items + 6);
                  return pSVar1;
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


// UI.CreateGameSelectMapPopup$$SetupTopButtons
// il2cpp: void UI_CreateGameSelectMapPopup__SetupTopButtons (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x4071dc0

void UI_CreateGameSelectMapPopup__SetupTopButtons
               (UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  Il2CppClass *pIVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *pSVar2;
  UI_ElementStyle_o *style;
  long lVar3;
  Il2CppObject *pIVar4;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *in_R8;
  ulong uVar5;
  
  if (DAT_057044af == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupTopButtons_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass17_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    DAT_057044af = '\x01';
  }
  pSVar2 = (System_String_o *)(*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)(__this);
  style = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x18;
  (style->fields).TitleWidth = 120.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar2;
  il2cpp_runtime_glue(&(style->fields).ThemePanel,pSVar2);
  lVar3 = (*(__this->klass->vtable)._59_GetCategories.methodPtr)(__this);
  if (lVar3 != 0) {
    if (0 < *(int *)(lVar3 + 0x18)) {
      uVar5 = 0;
      do {
        pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass17_0);
        System_Object___ctor(pIVar4,(MethodInfo *)0x0);
        if (pIVar4 == (Il2CppObject *)0x0) goto LAB_04071fc4;
        pIVar4[1].monitor = __this;
        il2cpp_runtime_glue(&pIVar4[1].monitor,__this);
        if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pIVar4[1].klass = *(Il2CppClass **)(lVar3 + 0x20 + uVar5 * 8);
        il2cpp_runtime_glue(pIVar4 + 1);
        parent = (__this->fields).TopBar;
        pIVar1 = pIVar4[1].klass;
        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        __this_01 = UI_ElementFactory__CreateCategoryButton
                              (parent,style,(System_String_o *)pIVar1,onClick,in_R8);
        if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_04071fc4;
        __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (__this->fields)._topButtons;
        pIVar1 = pIVar4[1].klass;
        pIVar4 = UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_Button_GetComponent_Button);
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_04071fc4;
        System_Collections_Generic_Dictionary<object__object>__Add
                  (__this_00,(Il2CppObject *)pIVar1,pIVar4,MethodInfo_Void_Add);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)*(int *)(lVar3 + 0x18));
    }
    UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
    return;
  }
LAB_04071fc4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameSelectMapPopup$$OnTopBarButtonClick
// il2cpp: void UI_CreateGameSelectMapPopup__OnTopBarButtonClick (UI_CreateGameSelectMapPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4071fe0

void UI_CreateGameSelectMapPopup__OnTopBarButtonClick
               (UI_CreateGameSelectMapPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  vtable_dispatch = (__this->klass->vtable)._28_SetCategoryPanel.methodPtr;
  (*vtable_dispatch)
            (__this,name,(__this->klass->vtable)._28_SetCategoryPanel.method,vtable_dispatch);
  return;
}


// UI.CreateGameSelectMapPopup$$RegisterCategoryPanels
// il2cpp: void UI_CreateGameSelectMapPopup__RegisterCategoryPanels (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x4072000

void UI_CreateGameSelectMapPopup__RegisterCategoryPanels
               (UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

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
  
  if (DAT_057044b0 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_CreateGameSelectMapPanel);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    DAT_057044b0 = '\x01';
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
        handle.fields.value = TypeRef_CreateGameSelectMapPanel.fields.value;
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


// UI.CreateGameSelectMapPopup$$OnBottomBarButtonClick
// il2cpp: void UI_CreateGameSelectMapPopup__OnBottomBarButtonClick (UI_CreateGameSelectMapPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40721f0

void UI_CreateGameSelectMapPopup__OnBottomBarButtonClick
               (UI_CreateGameSelectMapPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._22_Hide.method,method,vtable_dispatch);
  return;
}


// UI.CreateGameSelectMapPopup$$.ctor
// il2cpp: void UI_CreateGameSelectMapPopup___ctor (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x4072210

void UI_CreateGameSelectMapPopup___ctor(UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  
  if (DAT_057044b1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_057044b1 = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).SearchSetting = __this_00;
  il2cpp_runtime_glue(&(__this->fields).SearchSetting);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameSelectMapPopup$$<Setup>b__15_0
// il2cpp: void UI_CreateGameSelectMapPopup___Setup_b__15_0 (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x40722a0

void UI_CreateGameSelectMapPopup__<Setup>b__15_0
               (UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameSelectMapPopup$$<Setup>b__15_1
// il2cpp: void UI_CreateGameSelectMapPopup___Setup_b__15_1 (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x40722b0

void UI_CreateGameSelectMapPopup__<Setup>b__15_1
               (UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameSelectMapPopup$$<Setup>b__15_2
// il2cpp: void UI_CreateGameSelectMapPopup___Setup_b__15_2 (UI_CreateGameSelectMapPopup_o* __this, const MethodInfo* method);
// 0x40722c0

void UI_CreateGameSelectMapPopup__<Setup>b__15_2
               (UI_CreateGameSelectMapPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (DAT_057044b2 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_057044b2 = '\x01';
    in_RDX = extraout_RDX;
  }
  vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtable_dispatch);
  return;
}


