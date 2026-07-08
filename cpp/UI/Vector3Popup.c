// Type: UI.Vector3Popup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/Vector3Popup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/BaseMenu/Vector3Popup.cs  [CHANGED since prior version]
// --------------------------------

// UI.Vector3Popup$$get_Title
// il2cpp: System_String_o* UI_Vector3Popup__get_Title (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x402ccd0

System_String_o * UI_Vector3Popup__get_Title(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  if (DAT_05704350 == '\0') {
    il2cpp_init_method_metadata(&"Vector3");
    DAT_05704350 = '\x01';
  }
  return "Vector3";
}


// UI.Vector3Popup$$get_Width
// il2cpp: float UI_Vector3Popup__get_Width (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x402cd00

float UI_Vector3Popup__get_Width(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  return 250.0;
}


// UI.Vector3Popup$$get_Height
// il2cpp: float UI_Vector3Popup__get_Height (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x402cd10

float UI_Vector3Popup__get_Height(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  return 330.0;
}


// UI.Vector3Popup$$get_VerticalSpacing
// il2cpp: float UI_Vector3Popup__get_VerticalSpacing (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x402cd20

float UI_Vector3Popup__get_VerticalSpacing(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.Vector3Popup$$get_PanelAlignment
// il2cpp: int32_t UI_Vector3Popup__get_PanelAlignment (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x402cd30

int32_t UI_Vector3Popup__get_PanelAlignment(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.Vector3Popup$$Setup
// il2cpp: void UI_Vector3Popup__Setup (UI_Vector3Popup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x402cd40

void UI_Vector3Popup__Setup(UI_Vector3Popup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704351 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__17_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__17_1);
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"Save");
    DAT_05704351 = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  return;
}


// UI.Vector3Popup$$Show
// il2cpp: void UI_Vector3Popup__Show (UI_Vector3Popup_o* __this, Settings_Vector3Setting_o* setting, UnityEngine_UI_Text_o* text, UnityEngine_Events_UnityAction_o* onChangeVector, const MethodInfo* method);
// 0x402cef0

void UI_Vector3Popup__Show
               (UI_Vector3Popup_o *__this,Settings_Vector3Setting_o *setting,
               UnityEngine_UI_Text_o *text,UnityEngine_Events_UnityAction_o *onChangeVector,
               MethodInfo *method)

{
  undefined4 value;
  Settings_FloatSetting_o *pSVar1;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  
  if (DAT_05704352 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704352 = '\x01';
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,method_00);
    (__this->fields)._setting = setting;
    il2cpp_runtime_glue(&(__this->fields)._setting,setting);
    (__this->fields)._text = text;
    il2cpp_runtime_glue(&(__this->fields)._text,text);
    if ((setting != (Settings_Vector3Setting_o *)0x0) &&
       (pSVar1 = (__this->fields)._x, pSVar1 != (Settings_FloatSetting_o *)0x0)) {
      Settings_TypedSetting<float>__set_Value
                ((Settings_TypedSetting_float__o *)pSVar1,(setting->fields)._value.fields.x,
                 MethodInfo_Void_set_Value);
      pSVar1 = (__this->fields)._y;
      if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
        value = (setting->fields)._value.fields.y;
        Settings_TypedSetting<float>__set_Value
                  ((Settings_TypedSetting_float__o *)pSVar1,(float)value,MethodInfo_Void_set_Value);
        pSVar1 = (__this->fields)._z;
        if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
          Settings_TypedSetting<float>__set_Value
                    ((Settings_TypedSetting_float__o *)pSVar1,(setting->fields)._value.fields.z,
                     MethodInfo_Void_set_Value);
          (__this->fields)._onChangeVector = onChangeVector;
          il2cpp_runtime_glue(&(__this->fields)._onChangeVector);
          UI_Vector3Popup__CreateInputs(__this,(MethodInfo *)onChangeVector);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.Vector3Popup$$CreateInputs
// il2cpp: void UI_Vector3Popup__CreateInputs (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x402d020

void UI_Vector3Popup__CreateInputs(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  UnityEngine_GameObject_array *pUVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  long lVar5;
  UnityEngine_Object_o *obj;
  bool_conflict bVar6;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_02;
  UnityEngine_GameObject_o *pUVar7;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 in_stack_ffffffffffffff80;
  Il2CppObject *in_stack_ffffffffffffff88;
  System_Collections_Generic_List_T__o *local_58;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_50;
  UnityEngine_Object_o *local_48;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  
  if (DAT_05704353 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Z");
    il2cpp_init_method_metadata(&"Y");
    il2cpp_init_method_metadata(&"X");
    il2cpp_init_method_metadata(&"");
    DAT_05704353 = '\x01';
  }
  local_58 = (System_Collections_Generic_List_T__o *)0x0;
  pSStack_50 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  local_48 = (UnityEngine_Object_o *)0x0;
  pSVar3 = (__this->fields)._inputs;
  if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    local_48 = local_30;
    local_58 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    pSStack_50 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
    while( true ) {
      __this_00.fields._index = (int)in_stack_ffffffffffffff80;
      __this_00.fields._version = (int)((ulong)in_stack_ffffffffffffff80 >> 0x20);
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
      __this_00.fields._current = in_stack_ffffffffffffff88;
      bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&local_58);
      obj = local_48;
      if ((char)bVar6 == '\0') break;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
    }
    __this_01.fields._index = (int)in_stack_ffffffffffffff80;
    __this_01.fields._version = (int)((ulong)in_stack_ffffffffffffff80 >> 0x20);
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
    __this_01.fields._current = in_stack_ffffffffffffff88;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)&local_58);
    themePanel = (System_String_o *)
                 (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_02 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_02,0x18,30.0,20.0,themePanel,(MethodInfo *)0x0);
    pSVar3 = (__this->fields)._inputs;
    pUVar7 = UI_ElementFactory__CreateInputSetting
                       ((__this->fields).SinglePanel,__this_02,
                        (Settings_BaseSetting_o *)(__this->fields)._x,"X","",
                        140.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                        (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                        (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    lVar5 = MethodInfo_Void_Add;
    if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (pSVar3->fields)._items;
      if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pUVar4->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          pUVar4->m_Items[(int)uVar2] = pUVar7;
          il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2,pUVar7);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        pSVar3 = (__this->fields)._inputs;
        pUVar7 = UI_ElementFactory__CreateInputSetting
                           ((__this->fields).SinglePanel,__this_02,
                            (Settings_BaseSetting_o *)(__this->fields)._y,"Y","",
                            140.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                            (UnityEngine_Events_UnityAction_o *)0x0,
                            (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                            (MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
          piVar1 = &(pSVar3->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar4 = (pSVar3->fields)._items;
          if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
            uVar2 = (pSVar3->fields)._size;
            if (uVar2 < (uint)pUVar4->max_length) {
              (pSVar3->fields)._size = uVar2 + 1;
              pUVar4->m_Items[(int)uVar2] = pUVar7;
              il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2,pUVar7);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pSVar3 = (__this->fields)._inputs;
            pUVar7 = UI_ElementFactory__CreateInputSetting
                               ((__this->fields).SinglePanel,__this_02,
                                (Settings_BaseSetting_o *)(__this->fields)._z,"Z",
                                "",140.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                                (UnityEngine_Events_UnityAction_o *)0x0,
                                (System_Func_string__bool__o *)0x0,
                                (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
            lVar5 = MethodInfo_Void_Add;
            if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
              piVar1 = &(pSVar3->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar4 = (pSVar3->fields)._items;
              if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
                uVar2 = (pSVar3->fields)._size;
                if (uVar2 < (uint)pUVar4->max_length) {
                  (pSVar3->fields)._size = uVar2 + 1;
                  pUVar4->m_Items[(int)uVar2] = pUVar7;
                  il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2,pUVar7);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar3,
                             (Il2CppObject *)pUVar7,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                }
                return;
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


// UI.Vector3Popup$$OnButtonClick
// il2cpp: void UI_Vector3Popup__OnButtonClick (UI_Vector3Popup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x402d470

void UI_Vector3Popup__OnButtonClick
               (UI_Vector3Popup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  Settings_Vector3Setting_o *pSVar4;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  UnityEngine_Vector3_Fields vector;
  bool_conflict bVar7;
  System_String_o *pSVar8;
  UnityEngine_Vector3_o value;
  
  if (DAT_05704354 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"Save");
    DAT_05704354 = '\x01';
  }
  bVar7 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
LAB_0402d5f6:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar7 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  pSVar1 = (__this->fields)._x;
  if ((((pSVar1 != (Settings_FloatSetting_o *)0x0) &&
       (pSVar2 = (__this->fields)._y, pSVar2 != (Settings_FloatSetting_o *)0x0)) &&
      (pSVar3 = (__this->fields)._z, pSVar3 != (Settings_FloatSetting_o *)0x0)) &&
     (pSVar4 = (__this->fields)._setting, pSVar4 != (Settings_Vector3Setting_o *)0x0)) {
    value.fields.y = (pSVar2->fields)._value;
    value.fields.x = (pSVar1->fields)._value;
    value.fields.z = (pSVar3->fields)._value;
    Settings_TypedSetting<Vector3>__set_Value
              ((Settings_TypedSetting_Vector3__o *)pSVar4,value,MethodInfo_Void_set_Value);
    pSVar4 = (__this->fields)._setting;
    if (pSVar4 != (Settings_Vector3Setting_o *)0x0) {
      pUVar5 = (__this->fields)._text;
      vector = (pSVar4->fields)._value.fields;
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar8 = MiscExtensions__ToDisplayString((UnityEngine_Vector3_o)vector,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                  (pUVar5,pSVar8,(pUVar5->klass->vtable)._75_set_text.method);
        pUVar6 = (__this->fields)._onChangeVector;
        if (pUVar6 != (UnityEngine_Events_UnityAction_o *)0x0) {
          (*(code *)(pUVar6->fields).invoke_impl)
                    ((pUVar6->fields).method_code,(pUVar6->fields).method);
        }
        goto LAB_0402d5f6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.Vector3Popup$$.ctor
// il2cpp: void UI_Vector3Popup___ctor (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x402d620

void UI_Vector3Popup___ctor(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  MethodInfo *method_00;
  
  if (DAT_05704355 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    DAT_05704355 = '\x01';
  }
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields)._x = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._x);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields)._y = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._y);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields)._z = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._z,pSVar1);
  method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)method_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._inputs = (System_Collections_Generic_List_GameObject__o *)method_00;
  il2cpp_runtime_glue(&(__this->fields)._inputs);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


// UI.Vector3Popup$$<Setup>b__17_0
// il2cpp: void UI_Vector3Popup___Setup_b__17_0 (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x402d770

void UI_Vector3Popup__<Setup>b__17_0(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704356 == '\0') {
    il2cpp_init_method_metadata(&"Save");
    DAT_05704356 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_Vector3Popup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.Vector3Popup$$<Setup>b__17_1
// il2cpp: void UI_Vector3Popup___Setup_b__17_1 (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x402d7b0

void UI_Vector3Popup__<Setup>b__17_1(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704357 == '\0') {
    il2cpp_init_method_metadata(&"Cancel");
    DAT_05704357 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_Vector3Popup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


